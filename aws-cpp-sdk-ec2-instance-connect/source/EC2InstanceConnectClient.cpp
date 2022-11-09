/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/ec2-instance-connect/EC2InstanceConnectClient.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectErrorMarshaller.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectEndpointProvider.h>
#include <aws/ec2-instance-connect/model/SendSSHPublicKeyRequest.h>
#include <aws/ec2-instance-connect/model/SendSerialConsoleSSHPublicKeyRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EC2InstanceConnect;
using namespace Aws::EC2InstanceConnect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* EC2InstanceConnectClient::SERVICE_NAME = "ec2-instance-connect";
const char* EC2InstanceConnectClient::ALLOCATION_TAG = "EC2InstanceConnectClient";

EC2InstanceConnectClient::EC2InstanceConnectClient(const EC2InstanceConnect::EC2InstanceConnectClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<EC2InstanceConnectEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

EC2InstanceConnectClient::EC2InstanceConnectClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<EC2InstanceConnectEndpointProviderBase> endpointProvider,
                                                   const EC2InstanceConnect::EC2InstanceConnectClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

EC2InstanceConnectClient::EC2InstanceConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<EC2InstanceConnectEndpointProviderBase> endpointProvider,
                                                   const EC2InstanceConnect::EC2InstanceConnectClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  EC2InstanceConnectClient::EC2InstanceConnectClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<EC2InstanceConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

EC2InstanceConnectClient::EC2InstanceConnectClient(const AWSCredentials& credentials,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<EC2InstanceConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

EC2InstanceConnectClient::EC2InstanceConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<EC2InstanceConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
EC2InstanceConnectClient::~EC2InstanceConnectClient()
{
}

std::shared_ptr<EC2InstanceConnectEndpointProviderBase>& EC2InstanceConnectClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void EC2InstanceConnectClient::init(const EC2InstanceConnect::EC2InstanceConnectClientConfiguration& config)
{
  AWSClient::SetServiceClientName("EC2 Instance Connect");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void EC2InstanceConnectClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

SendSSHPublicKeyOutcome EC2InstanceConnectClient::SendSSHPublicKey(const SendSSHPublicKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendSSHPublicKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendSSHPublicKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendSSHPublicKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendSSHPublicKeyOutcomeCallable EC2InstanceConnectClient::SendSSHPublicKeyCallable(const SendSSHPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendSSHPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendSSHPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2InstanceConnectClient::SendSSHPublicKeyAsync(const SendSSHPublicKeyRequest& request, const SendSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendSSHPublicKey(request), context);
    } );
}

SendSerialConsoleSSHPublicKeyOutcome EC2InstanceConnectClient::SendSerialConsoleSSHPublicKey(const SendSerialConsoleSSHPublicKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendSerialConsoleSSHPublicKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendSerialConsoleSSHPublicKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendSerialConsoleSSHPublicKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendSerialConsoleSSHPublicKeyOutcomeCallable EC2InstanceConnectClient::SendSerialConsoleSSHPublicKeyCallable(const SendSerialConsoleSSHPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendSerialConsoleSSHPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendSerialConsoleSSHPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2InstanceConnectClient::SendSerialConsoleSSHPublicKeyAsync(const SendSerialConsoleSSHPublicKeyRequest& request, const SendSerialConsoleSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendSerialConsoleSSHPublicKey(request), context);
    } );
}


/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
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

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EC2InstanceConnect;
using namespace Aws::EC2InstanceConnect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace EC2InstanceConnect
  {
    const char ALLOCATION_TAG[] = "EC2InstanceConnectClient";
    const char SERVICE_NAME[] = "ec2-instance-connect";
  }
}
const char* EC2InstanceConnectClient::GetServiceName() {return SERVICE_NAME;}
const char* EC2InstanceConnectClient::GetAllocationTag() {return ALLOCATION_TAG;}

EC2InstanceConnectClient::EC2InstanceConnectClient(const EC2InstanceConnect::EC2InstanceConnectClientConfiguration& clientConfiguration,
                           std::shared_ptr<EC2InstanceConnectEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EC2 Instance Connect",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<EC2InstanceConnectEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

EC2InstanceConnectClient::EC2InstanceConnectClient(const AWSCredentials& credentials,
                           std::shared_ptr<EC2InstanceConnectEndpointProviderBase> endpointProvider,
                           const EC2InstanceConnect::EC2InstanceConnectClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EC2 Instance Connect",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<EC2InstanceConnectEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

EC2InstanceConnectClient::EC2InstanceConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<EC2InstanceConnectEndpointProviderBase> endpointProvider,
                           const EC2InstanceConnect::EC2InstanceConnectClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EC2 Instance Connect",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<EC2InstanceConnectEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
EC2InstanceConnectClient::EC2InstanceConnectClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "EC2 Instance Connect",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<EC2InstanceConnectEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

EC2InstanceConnectClient::EC2InstanceConnectClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EC2 Instance Connect",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<EC2InstanceConnectEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

EC2InstanceConnectClient::EC2InstanceConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "EC2 Instance Connect",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<EC2InstanceConnectEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

EC2InstanceConnectClient::~EC2InstanceConnectClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<EC2InstanceConnectEndpointProviderBase>& EC2InstanceConnectClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void EC2InstanceConnectClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
SendSSHPublicKeyOutcome EC2InstanceConnectClient::SendSSHPublicKey(const SendSSHPublicKeyRequest& request) const
{
  AWS_OPERATION_GUARD(SendSSHPublicKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendSSHPublicKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SendSSHPublicKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SendSSHPublicKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SendSSHPublicKey",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SendSSHPublicKeyOutcome>(
    [&]()-> SendSSHPublicKeyOutcome {
      return SendSSHPublicKeyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SendSerialConsoleSSHPublicKeyOutcome EC2InstanceConnectClient::SendSerialConsoleSSHPublicKey(const SendSerialConsoleSSHPublicKeyRequest& request) const
{
  AWS_OPERATION_GUARD(SendSerialConsoleSSHPublicKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendSerialConsoleSSHPublicKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SendSerialConsoleSSHPublicKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SendSerialConsoleSSHPublicKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SendSerialConsoleSSHPublicKey",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SendSerialConsoleSSHPublicKeyOutcome>(
    [&]()-> SendSerialConsoleSSHPublicKeyOutcome {
      return SendSerialConsoleSSHPublicKeyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}



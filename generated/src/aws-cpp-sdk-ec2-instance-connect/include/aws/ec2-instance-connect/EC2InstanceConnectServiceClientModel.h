/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ec2-instance-connect/EC2InstanceConnectErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in EC2InstanceConnectClient header */
#include <aws/ec2-instance-connect/model/SendSSHPublicKeyResult.h>
#include <aws/ec2-instance-connect/model/SendSerialConsoleSSHPublicKeyResult.h>
/* End of service model headers required in EC2InstanceConnectClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace EC2InstanceConnect
  {
    using EC2InstanceConnectClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using EC2InstanceConnectEndpointProviderBase = Aws::EC2InstanceConnect::Endpoint::EC2InstanceConnectEndpointProviderBase;
    using EC2InstanceConnectEndpointProvider = Aws::EC2InstanceConnect::Endpoint::EC2InstanceConnectEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in EC2InstanceConnectClient header */
      class SendSSHPublicKeyRequest;
      class SendSerialConsoleSSHPublicKeyRequest;
      /* End of service model forward declarations required in EC2InstanceConnectClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<SendSSHPublicKeyResult, EC2InstanceConnectError> SendSSHPublicKeyOutcome;
      typedef Aws::Utils::Outcome<SendSerialConsoleSSHPublicKeyResult, EC2InstanceConnectError> SendSerialConsoleSSHPublicKeyOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<SendSSHPublicKeyOutcome> SendSSHPublicKeyOutcomeCallable;
      typedef std::future<SendSerialConsoleSSHPublicKeyOutcome> SendSerialConsoleSSHPublicKeyOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class EC2InstanceConnectClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const EC2InstanceConnectClient*, const Model::SendSSHPublicKeyRequest&, const Model::SendSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendSSHPublicKeyResponseReceivedHandler;
    typedef std::function<void(const EC2InstanceConnectClient*, const Model::SendSerialConsoleSSHPublicKeyRequest&, const Model::SendSerialConsoleSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendSerialConsoleSSHPublicKeyResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace EC2InstanceConnect
} // namespace Aws

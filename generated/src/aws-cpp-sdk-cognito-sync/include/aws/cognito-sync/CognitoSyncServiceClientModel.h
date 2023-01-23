/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cognito-sync/CognitoSyncErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cognito-sync/CognitoSyncEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CognitoSyncClient header */
#include <aws/cognito-sync/model/BulkPublishResult.h>
#include <aws/cognito-sync/model/DeleteDatasetResult.h>
#include <aws/cognito-sync/model/DescribeDatasetResult.h>
#include <aws/cognito-sync/model/DescribeIdentityPoolUsageResult.h>
#include <aws/cognito-sync/model/DescribeIdentityUsageResult.h>
#include <aws/cognito-sync/model/GetBulkPublishDetailsResult.h>
#include <aws/cognito-sync/model/GetCognitoEventsResult.h>
#include <aws/cognito-sync/model/GetIdentityPoolConfigurationResult.h>
#include <aws/cognito-sync/model/ListDatasetsResult.h>
#include <aws/cognito-sync/model/ListIdentityPoolUsageResult.h>
#include <aws/cognito-sync/model/ListRecordsResult.h>
#include <aws/cognito-sync/model/RegisterDeviceResult.h>
#include <aws/cognito-sync/model/SetIdentityPoolConfigurationResult.h>
#include <aws/cognito-sync/model/SubscribeToDatasetResult.h>
#include <aws/cognito-sync/model/UnsubscribeFromDatasetResult.h>
#include <aws/cognito-sync/model/UpdateRecordsResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in CognitoSyncClient header */

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

  namespace CognitoSync
  {
    using CognitoSyncClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CognitoSyncEndpointProviderBase = Aws::CognitoSync::Endpoint::CognitoSyncEndpointProviderBase;
    using CognitoSyncEndpointProvider = Aws::CognitoSync::Endpoint::CognitoSyncEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CognitoSyncClient header */
      class BulkPublishRequest;
      class DeleteDatasetRequest;
      class DescribeDatasetRequest;
      class DescribeIdentityPoolUsageRequest;
      class DescribeIdentityUsageRequest;
      class GetBulkPublishDetailsRequest;
      class GetCognitoEventsRequest;
      class GetIdentityPoolConfigurationRequest;
      class ListDatasetsRequest;
      class ListIdentityPoolUsageRequest;
      class ListRecordsRequest;
      class RegisterDeviceRequest;
      class SetCognitoEventsRequest;
      class SetIdentityPoolConfigurationRequest;
      class SubscribeToDatasetRequest;
      class UnsubscribeFromDatasetRequest;
      class UpdateRecordsRequest;
      /* End of service model forward declarations required in CognitoSyncClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BulkPublishResult, CognitoSyncError> BulkPublishOutcome;
      typedef Aws::Utils::Outcome<DeleteDatasetResult, CognitoSyncError> DeleteDatasetOutcome;
      typedef Aws::Utils::Outcome<DescribeDatasetResult, CognitoSyncError> DescribeDatasetOutcome;
      typedef Aws::Utils::Outcome<DescribeIdentityPoolUsageResult, CognitoSyncError> DescribeIdentityPoolUsageOutcome;
      typedef Aws::Utils::Outcome<DescribeIdentityUsageResult, CognitoSyncError> DescribeIdentityUsageOutcome;
      typedef Aws::Utils::Outcome<GetBulkPublishDetailsResult, CognitoSyncError> GetBulkPublishDetailsOutcome;
      typedef Aws::Utils::Outcome<GetCognitoEventsResult, CognitoSyncError> GetCognitoEventsOutcome;
      typedef Aws::Utils::Outcome<GetIdentityPoolConfigurationResult, CognitoSyncError> GetIdentityPoolConfigurationOutcome;
      typedef Aws::Utils::Outcome<ListDatasetsResult, CognitoSyncError> ListDatasetsOutcome;
      typedef Aws::Utils::Outcome<ListIdentityPoolUsageResult, CognitoSyncError> ListIdentityPoolUsageOutcome;
      typedef Aws::Utils::Outcome<ListRecordsResult, CognitoSyncError> ListRecordsOutcome;
      typedef Aws::Utils::Outcome<RegisterDeviceResult, CognitoSyncError> RegisterDeviceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CognitoSyncError> SetCognitoEventsOutcome;
      typedef Aws::Utils::Outcome<SetIdentityPoolConfigurationResult, CognitoSyncError> SetIdentityPoolConfigurationOutcome;
      typedef Aws::Utils::Outcome<SubscribeToDatasetResult, CognitoSyncError> SubscribeToDatasetOutcome;
      typedef Aws::Utils::Outcome<UnsubscribeFromDatasetResult, CognitoSyncError> UnsubscribeFromDatasetOutcome;
      typedef Aws::Utils::Outcome<UpdateRecordsResult, CognitoSyncError> UpdateRecordsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BulkPublishOutcome> BulkPublishOutcomeCallable;
      typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
      typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
      typedef std::future<DescribeIdentityPoolUsageOutcome> DescribeIdentityPoolUsageOutcomeCallable;
      typedef std::future<DescribeIdentityUsageOutcome> DescribeIdentityUsageOutcomeCallable;
      typedef std::future<GetBulkPublishDetailsOutcome> GetBulkPublishDetailsOutcomeCallable;
      typedef std::future<GetCognitoEventsOutcome> GetCognitoEventsOutcomeCallable;
      typedef std::future<GetIdentityPoolConfigurationOutcome> GetIdentityPoolConfigurationOutcomeCallable;
      typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
      typedef std::future<ListIdentityPoolUsageOutcome> ListIdentityPoolUsageOutcomeCallable;
      typedef std::future<ListRecordsOutcome> ListRecordsOutcomeCallable;
      typedef std::future<RegisterDeviceOutcome> RegisterDeviceOutcomeCallable;
      typedef std::future<SetCognitoEventsOutcome> SetCognitoEventsOutcomeCallable;
      typedef std::future<SetIdentityPoolConfigurationOutcome> SetIdentityPoolConfigurationOutcomeCallable;
      typedef std::future<SubscribeToDatasetOutcome> SubscribeToDatasetOutcomeCallable;
      typedef std::future<UnsubscribeFromDatasetOutcome> UnsubscribeFromDatasetOutcomeCallable;
      typedef std::future<UpdateRecordsOutcome> UpdateRecordsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CognitoSyncClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CognitoSyncClient*, const Model::BulkPublishRequest&, const Model::BulkPublishOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BulkPublishResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::DescribeIdentityPoolUsageRequest&, const Model::DescribeIdentityPoolUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIdentityPoolUsageResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::DescribeIdentityUsageRequest&, const Model::DescribeIdentityUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIdentityUsageResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::GetBulkPublishDetailsRequest&, const Model::GetBulkPublishDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBulkPublishDetailsResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::GetCognitoEventsRequest&, const Model::GetCognitoEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCognitoEventsResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::GetIdentityPoolConfigurationRequest&, const Model::GetIdentityPoolConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityPoolConfigurationResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetsResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::ListIdentityPoolUsageRequest&, const Model::ListIdentityPoolUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityPoolUsageResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::ListRecordsRequest&, const Model::ListRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecordsResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::RegisterDeviceRequest&, const Model::RegisterDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterDeviceResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::SetCognitoEventsRequest&, const Model::SetCognitoEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetCognitoEventsResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::SetIdentityPoolConfigurationRequest&, const Model::SetIdentityPoolConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIdentityPoolConfigurationResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::SubscribeToDatasetRequest&, const Model::SubscribeToDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubscribeToDatasetResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::UnsubscribeFromDatasetRequest&, const Model::UnsubscribeFromDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnsubscribeFromDatasetResponseReceivedHandler;
    typedef std::function<void(const CognitoSyncClient*, const Model::UpdateRecordsRequest&, const Model::UpdateRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRecordsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CognitoSync
} // namespace Aws

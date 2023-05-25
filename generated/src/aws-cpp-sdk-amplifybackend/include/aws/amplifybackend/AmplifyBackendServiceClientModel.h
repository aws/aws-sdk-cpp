/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/amplifybackend/AmplifyBackendErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/amplifybackend/AmplifyBackendEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AmplifyBackendClient header */
#include <aws/amplifybackend/model/CloneBackendResult.h>
#include <aws/amplifybackend/model/CreateBackendResult.h>
#include <aws/amplifybackend/model/CreateBackendAPIResult.h>
#include <aws/amplifybackend/model/CreateBackendAuthResult.h>
#include <aws/amplifybackend/model/CreateBackendConfigResult.h>
#include <aws/amplifybackend/model/CreateBackendStorageResult.h>
#include <aws/amplifybackend/model/CreateTokenResult.h>
#include <aws/amplifybackend/model/DeleteBackendResult.h>
#include <aws/amplifybackend/model/DeleteBackendAPIResult.h>
#include <aws/amplifybackend/model/DeleteBackendAuthResult.h>
#include <aws/amplifybackend/model/DeleteBackendStorageResult.h>
#include <aws/amplifybackend/model/DeleteTokenResult.h>
#include <aws/amplifybackend/model/GenerateBackendAPIModelsResult.h>
#include <aws/amplifybackend/model/GetBackendResult.h>
#include <aws/amplifybackend/model/GetBackendAPIResult.h>
#include <aws/amplifybackend/model/GetBackendAPIModelsResult.h>
#include <aws/amplifybackend/model/GetBackendAuthResult.h>
#include <aws/amplifybackend/model/GetBackendJobResult.h>
#include <aws/amplifybackend/model/GetBackendStorageResult.h>
#include <aws/amplifybackend/model/GetTokenResult.h>
#include <aws/amplifybackend/model/ImportBackendAuthResult.h>
#include <aws/amplifybackend/model/ImportBackendStorageResult.h>
#include <aws/amplifybackend/model/ListBackendJobsResult.h>
#include <aws/amplifybackend/model/ListS3BucketsResult.h>
#include <aws/amplifybackend/model/RemoveAllBackendsResult.h>
#include <aws/amplifybackend/model/RemoveBackendConfigResult.h>
#include <aws/amplifybackend/model/UpdateBackendAPIResult.h>
#include <aws/amplifybackend/model/UpdateBackendAuthResult.h>
#include <aws/amplifybackend/model/UpdateBackendConfigResult.h>
#include <aws/amplifybackend/model/UpdateBackendJobResult.h>
#include <aws/amplifybackend/model/UpdateBackendStorageResult.h>
/* End of service model headers required in AmplifyBackendClient header */

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

  namespace AmplifyBackend
  {
    using AmplifyBackendClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AmplifyBackendEndpointProviderBase = Aws::AmplifyBackend::Endpoint::AmplifyBackendEndpointProviderBase;
    using AmplifyBackendEndpointProvider = Aws::AmplifyBackend::Endpoint::AmplifyBackendEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AmplifyBackendClient header */
      class CloneBackendRequest;
      class CreateBackendRequest;
      class CreateBackendAPIRequest;
      class CreateBackendAuthRequest;
      class CreateBackendConfigRequest;
      class CreateBackendStorageRequest;
      class CreateTokenRequest;
      class DeleteBackendRequest;
      class DeleteBackendAPIRequest;
      class DeleteBackendAuthRequest;
      class DeleteBackendStorageRequest;
      class DeleteTokenRequest;
      class GenerateBackendAPIModelsRequest;
      class GetBackendRequest;
      class GetBackendAPIRequest;
      class GetBackendAPIModelsRequest;
      class GetBackendAuthRequest;
      class GetBackendJobRequest;
      class GetBackendStorageRequest;
      class GetTokenRequest;
      class ImportBackendAuthRequest;
      class ImportBackendStorageRequest;
      class ListBackendJobsRequest;
      class ListS3BucketsRequest;
      class RemoveAllBackendsRequest;
      class RemoveBackendConfigRequest;
      class UpdateBackendAPIRequest;
      class UpdateBackendAuthRequest;
      class UpdateBackendConfigRequest;
      class UpdateBackendJobRequest;
      class UpdateBackendStorageRequest;
      /* End of service model forward declarations required in AmplifyBackendClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CloneBackendResult, AmplifyBackendError> CloneBackendOutcome;
      typedef Aws::Utils::Outcome<CreateBackendResult, AmplifyBackendError> CreateBackendOutcome;
      typedef Aws::Utils::Outcome<CreateBackendAPIResult, AmplifyBackendError> CreateBackendAPIOutcome;
      typedef Aws::Utils::Outcome<CreateBackendAuthResult, AmplifyBackendError> CreateBackendAuthOutcome;
      typedef Aws::Utils::Outcome<CreateBackendConfigResult, AmplifyBackendError> CreateBackendConfigOutcome;
      typedef Aws::Utils::Outcome<CreateBackendStorageResult, AmplifyBackendError> CreateBackendStorageOutcome;
      typedef Aws::Utils::Outcome<CreateTokenResult, AmplifyBackendError> CreateTokenOutcome;
      typedef Aws::Utils::Outcome<DeleteBackendResult, AmplifyBackendError> DeleteBackendOutcome;
      typedef Aws::Utils::Outcome<DeleteBackendAPIResult, AmplifyBackendError> DeleteBackendAPIOutcome;
      typedef Aws::Utils::Outcome<DeleteBackendAuthResult, AmplifyBackendError> DeleteBackendAuthOutcome;
      typedef Aws::Utils::Outcome<DeleteBackendStorageResult, AmplifyBackendError> DeleteBackendStorageOutcome;
      typedef Aws::Utils::Outcome<DeleteTokenResult, AmplifyBackendError> DeleteTokenOutcome;
      typedef Aws::Utils::Outcome<GenerateBackendAPIModelsResult, AmplifyBackendError> GenerateBackendAPIModelsOutcome;
      typedef Aws::Utils::Outcome<GetBackendResult, AmplifyBackendError> GetBackendOutcome;
      typedef Aws::Utils::Outcome<GetBackendAPIResult, AmplifyBackendError> GetBackendAPIOutcome;
      typedef Aws::Utils::Outcome<GetBackendAPIModelsResult, AmplifyBackendError> GetBackendAPIModelsOutcome;
      typedef Aws::Utils::Outcome<GetBackendAuthResult, AmplifyBackendError> GetBackendAuthOutcome;
      typedef Aws::Utils::Outcome<GetBackendJobResult, AmplifyBackendError> GetBackendJobOutcome;
      typedef Aws::Utils::Outcome<GetBackendStorageResult, AmplifyBackendError> GetBackendStorageOutcome;
      typedef Aws::Utils::Outcome<GetTokenResult, AmplifyBackendError> GetTokenOutcome;
      typedef Aws::Utils::Outcome<ImportBackendAuthResult, AmplifyBackendError> ImportBackendAuthOutcome;
      typedef Aws::Utils::Outcome<ImportBackendStorageResult, AmplifyBackendError> ImportBackendStorageOutcome;
      typedef Aws::Utils::Outcome<ListBackendJobsResult, AmplifyBackendError> ListBackendJobsOutcome;
      typedef Aws::Utils::Outcome<ListS3BucketsResult, AmplifyBackendError> ListS3BucketsOutcome;
      typedef Aws::Utils::Outcome<RemoveAllBackendsResult, AmplifyBackendError> RemoveAllBackendsOutcome;
      typedef Aws::Utils::Outcome<RemoveBackendConfigResult, AmplifyBackendError> RemoveBackendConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateBackendAPIResult, AmplifyBackendError> UpdateBackendAPIOutcome;
      typedef Aws::Utils::Outcome<UpdateBackendAuthResult, AmplifyBackendError> UpdateBackendAuthOutcome;
      typedef Aws::Utils::Outcome<UpdateBackendConfigResult, AmplifyBackendError> UpdateBackendConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateBackendJobResult, AmplifyBackendError> UpdateBackendJobOutcome;
      typedef Aws::Utils::Outcome<UpdateBackendStorageResult, AmplifyBackendError> UpdateBackendStorageOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CloneBackendOutcome> CloneBackendOutcomeCallable;
      typedef std::future<CreateBackendOutcome> CreateBackendOutcomeCallable;
      typedef std::future<CreateBackendAPIOutcome> CreateBackendAPIOutcomeCallable;
      typedef std::future<CreateBackendAuthOutcome> CreateBackendAuthOutcomeCallable;
      typedef std::future<CreateBackendConfigOutcome> CreateBackendConfigOutcomeCallable;
      typedef std::future<CreateBackendStorageOutcome> CreateBackendStorageOutcomeCallable;
      typedef std::future<CreateTokenOutcome> CreateTokenOutcomeCallable;
      typedef std::future<DeleteBackendOutcome> DeleteBackendOutcomeCallable;
      typedef std::future<DeleteBackendAPIOutcome> DeleteBackendAPIOutcomeCallable;
      typedef std::future<DeleteBackendAuthOutcome> DeleteBackendAuthOutcomeCallable;
      typedef std::future<DeleteBackendStorageOutcome> DeleteBackendStorageOutcomeCallable;
      typedef std::future<DeleteTokenOutcome> DeleteTokenOutcomeCallable;
      typedef std::future<GenerateBackendAPIModelsOutcome> GenerateBackendAPIModelsOutcomeCallable;
      typedef std::future<GetBackendOutcome> GetBackendOutcomeCallable;
      typedef std::future<GetBackendAPIOutcome> GetBackendAPIOutcomeCallable;
      typedef std::future<GetBackendAPIModelsOutcome> GetBackendAPIModelsOutcomeCallable;
      typedef std::future<GetBackendAuthOutcome> GetBackendAuthOutcomeCallable;
      typedef std::future<GetBackendJobOutcome> GetBackendJobOutcomeCallable;
      typedef std::future<GetBackendStorageOutcome> GetBackendStorageOutcomeCallable;
      typedef std::future<GetTokenOutcome> GetTokenOutcomeCallable;
      typedef std::future<ImportBackendAuthOutcome> ImportBackendAuthOutcomeCallable;
      typedef std::future<ImportBackendStorageOutcome> ImportBackendStorageOutcomeCallable;
      typedef std::future<ListBackendJobsOutcome> ListBackendJobsOutcomeCallable;
      typedef std::future<ListS3BucketsOutcome> ListS3BucketsOutcomeCallable;
      typedef std::future<RemoveAllBackendsOutcome> RemoveAllBackendsOutcomeCallable;
      typedef std::future<RemoveBackendConfigOutcome> RemoveBackendConfigOutcomeCallable;
      typedef std::future<UpdateBackendAPIOutcome> UpdateBackendAPIOutcomeCallable;
      typedef std::future<UpdateBackendAuthOutcome> UpdateBackendAuthOutcomeCallable;
      typedef std::future<UpdateBackendConfigOutcome> UpdateBackendConfigOutcomeCallable;
      typedef std::future<UpdateBackendJobOutcome> UpdateBackendJobOutcomeCallable;
      typedef std::future<UpdateBackendStorageOutcome> UpdateBackendStorageOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AmplifyBackendClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AmplifyBackendClient*, const Model::CloneBackendRequest&, const Model::CloneBackendOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CloneBackendResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::CreateBackendRequest&, const Model::CreateBackendOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackendResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::CreateBackendAPIRequest&, const Model::CreateBackendAPIOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackendAPIResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::CreateBackendAuthRequest&, const Model::CreateBackendAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackendAuthResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::CreateBackendConfigRequest&, const Model::CreateBackendConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackendConfigResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::CreateBackendStorageRequest&, const Model::CreateBackendStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackendStorageResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::CreateTokenRequest&, const Model::CreateTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTokenResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::DeleteBackendRequest&, const Model::DeleteBackendOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackendResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::DeleteBackendAPIRequest&, const Model::DeleteBackendAPIOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackendAPIResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::DeleteBackendAuthRequest&, const Model::DeleteBackendAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackendAuthResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::DeleteBackendStorageRequest&, const Model::DeleteBackendStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackendStorageResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::DeleteTokenRequest&, const Model::DeleteTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTokenResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GenerateBackendAPIModelsRequest&, const Model::GenerateBackendAPIModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateBackendAPIModelsResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GetBackendRequest&, const Model::GetBackendOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackendResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GetBackendAPIRequest&, const Model::GetBackendAPIOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackendAPIResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GetBackendAPIModelsRequest&, const Model::GetBackendAPIModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackendAPIModelsResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GetBackendAuthRequest&, const Model::GetBackendAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackendAuthResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GetBackendJobRequest&, const Model::GetBackendJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackendJobResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GetBackendStorageRequest&, const Model::GetBackendStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackendStorageResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::GetTokenRequest&, const Model::GetTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTokenResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::ImportBackendAuthRequest&, const Model::ImportBackendAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportBackendAuthResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::ImportBackendStorageRequest&, const Model::ImportBackendStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportBackendStorageResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::ListBackendJobsRequest&, const Model::ListBackendJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBackendJobsResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::ListS3BucketsRequest&, const Model::ListS3BucketsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListS3BucketsResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::RemoveAllBackendsRequest&, const Model::RemoveAllBackendsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAllBackendsResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::RemoveBackendConfigRequest&, const Model::RemoveBackendConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveBackendConfigResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::UpdateBackendAPIRequest&, const Model::UpdateBackendAPIOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBackendAPIResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::UpdateBackendAuthRequest&, const Model::UpdateBackendAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBackendAuthResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::UpdateBackendConfigRequest&, const Model::UpdateBackendConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBackendConfigResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::UpdateBackendJobRequest&, const Model::UpdateBackendJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBackendJobResponseReceivedHandler;
    typedef std::function<void(const AmplifyBackendClient*, const Model::UpdateBackendStorageRequest&, const Model::UpdateBackendStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBackendStorageResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AmplifyBackend
} // namespace Aws

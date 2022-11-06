/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mobile/MobileErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mobile/MobileEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MobileClient header */
#include <aws/mobile/model/CreateProjectResult.h>
#include <aws/mobile/model/DeleteProjectResult.h>
#include <aws/mobile/model/DescribeBundleResult.h>
#include <aws/mobile/model/DescribeProjectResult.h>
#include <aws/mobile/model/ExportBundleResult.h>
#include <aws/mobile/model/ExportProjectResult.h>
#include <aws/mobile/model/ListBundlesResult.h>
#include <aws/mobile/model/ListProjectsResult.h>
#include <aws/mobile/model/UpdateProjectResult.h>
/* End of service model headers required in MobileClient header */

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

  namespace Mobile
  {
    using MobileClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MobileEndpointProviderBase = Aws::Mobile::Endpoint::MobileEndpointProviderBase;
    using MobileEndpointProvider = Aws::Mobile::Endpoint::MobileEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MobileClient header */
      class CreateProjectRequest;
      class DeleteProjectRequest;
      class DescribeBundleRequest;
      class DescribeProjectRequest;
      class ExportBundleRequest;
      class ExportProjectRequest;
      class ListBundlesRequest;
      class ListProjectsRequest;
      class UpdateProjectRequest;
      /* End of service model forward declarations required in MobileClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateProjectResult, MobileError> CreateProjectOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectResult, MobileError> DeleteProjectOutcome;
      typedef Aws::Utils::Outcome<DescribeBundleResult, MobileError> DescribeBundleOutcome;
      typedef Aws::Utils::Outcome<DescribeProjectResult, MobileError> DescribeProjectOutcome;
      typedef Aws::Utils::Outcome<ExportBundleResult, MobileError> ExportBundleOutcome;
      typedef Aws::Utils::Outcome<ExportProjectResult, MobileError> ExportProjectOutcome;
      typedef Aws::Utils::Outcome<ListBundlesResult, MobileError> ListBundlesOutcome;
      typedef Aws::Utils::Outcome<ListProjectsResult, MobileError> ListProjectsOutcome;
      typedef Aws::Utils::Outcome<UpdateProjectResult, MobileError> UpdateProjectOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
      typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
      typedef std::future<DescribeBundleOutcome> DescribeBundleOutcomeCallable;
      typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
      typedef std::future<ExportBundleOutcome> ExportBundleOutcomeCallable;
      typedef std::future<ExportProjectOutcome> ExportProjectOutcomeCallable;
      typedef std::future<ListBundlesOutcome> ListBundlesOutcomeCallable;
      typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
      typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MobileClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MobileClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::DescribeBundleRequest&, const Model::DescribeBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBundleResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::DescribeProjectRequest&, const Model::DescribeProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProjectResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::ExportBundleRequest&, const Model::ExportBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportBundleResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::ExportProjectRequest&, const Model::ExportProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportProjectResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::ListBundlesRequest&, const Model::ListBundlesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBundlesResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const MobileClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Mobile
} // namespace Aws

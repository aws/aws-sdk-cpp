/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cloudhsm/CloudHSMErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cloudhsm/CloudHSMEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudHSMClient header */
#include <aws/cloudhsm/model/AddTagsToResourceResult.h>
#include <aws/cloudhsm/model/CreateHapgResult.h>
#include <aws/cloudhsm/model/CreateHsmResult.h>
#include <aws/cloudhsm/model/CreateLunaClientResult.h>
#include <aws/cloudhsm/model/DeleteHapgResult.h>
#include <aws/cloudhsm/model/DeleteHsmResult.h>
#include <aws/cloudhsm/model/DeleteLunaClientResult.h>
#include <aws/cloudhsm/model/DescribeHapgResult.h>
#include <aws/cloudhsm/model/DescribeHsmResult.h>
#include <aws/cloudhsm/model/DescribeLunaClientResult.h>
#include <aws/cloudhsm/model/GetConfigResult.h>
#include <aws/cloudhsm/model/ListAvailableZonesResult.h>
#include <aws/cloudhsm/model/ListHapgsResult.h>
#include <aws/cloudhsm/model/ListHsmsResult.h>
#include <aws/cloudhsm/model/ListLunaClientsResult.h>
#include <aws/cloudhsm/model/ListTagsForResourceResult.h>
#include <aws/cloudhsm/model/ModifyHapgResult.h>
#include <aws/cloudhsm/model/ModifyHsmResult.h>
#include <aws/cloudhsm/model/ModifyLunaClientResult.h>
#include <aws/cloudhsm/model/RemoveTagsFromResourceResult.h>
/* End of service model headers required in CloudHSMClient header */

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

  namespace CloudHSM
  {
    using CloudHSMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudHSMEndpointProviderBase = Aws::CloudHSM::Endpoint::CloudHSMEndpointProviderBase;
    using CloudHSMEndpointProvider = Aws::CloudHSM::Endpoint::CloudHSMEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudHSMClient header */
      class AddTagsToResourceRequest;
      class CreateHapgRequest;
      class CreateHsmRequest;
      class CreateLunaClientRequest;
      class DeleteHapgRequest;
      class DeleteHsmRequest;
      class DeleteLunaClientRequest;
      class DescribeHapgRequest;
      class DescribeHsmRequest;
      class DescribeLunaClientRequest;
      class GetConfigRequest;
      class ListAvailableZonesRequest;
      class ListHapgsRequest;
      class ListHsmsRequest;
      class ListLunaClientsRequest;
      class ListTagsForResourceRequest;
      class ModifyHapgRequest;
      class ModifyHsmRequest;
      class ModifyLunaClientRequest;
      class RemoveTagsFromResourceRequest;
      /* End of service model forward declarations required in CloudHSMClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddTagsToResourceResult, CloudHSMError> AddTagsToResourceOutcome;
      typedef Aws::Utils::Outcome<CreateHapgResult, CloudHSMError> CreateHapgOutcome;
      typedef Aws::Utils::Outcome<CreateHsmResult, CloudHSMError> CreateHsmOutcome;
      typedef Aws::Utils::Outcome<CreateLunaClientResult, CloudHSMError> CreateLunaClientOutcome;
      typedef Aws::Utils::Outcome<DeleteHapgResult, CloudHSMError> DeleteHapgOutcome;
      typedef Aws::Utils::Outcome<DeleteHsmResult, CloudHSMError> DeleteHsmOutcome;
      typedef Aws::Utils::Outcome<DeleteLunaClientResult, CloudHSMError> DeleteLunaClientOutcome;
      typedef Aws::Utils::Outcome<DescribeHapgResult, CloudHSMError> DescribeHapgOutcome;
      typedef Aws::Utils::Outcome<DescribeHsmResult, CloudHSMError> DescribeHsmOutcome;
      typedef Aws::Utils::Outcome<DescribeLunaClientResult, CloudHSMError> DescribeLunaClientOutcome;
      typedef Aws::Utils::Outcome<GetConfigResult, CloudHSMError> GetConfigOutcome;
      typedef Aws::Utils::Outcome<ListAvailableZonesResult, CloudHSMError> ListAvailableZonesOutcome;
      typedef Aws::Utils::Outcome<ListHapgsResult, CloudHSMError> ListHapgsOutcome;
      typedef Aws::Utils::Outcome<ListHsmsResult, CloudHSMError> ListHsmsOutcome;
      typedef Aws::Utils::Outcome<ListLunaClientsResult, CloudHSMError> ListLunaClientsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CloudHSMError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ModifyHapgResult, CloudHSMError> ModifyHapgOutcome;
      typedef Aws::Utils::Outcome<ModifyHsmResult, CloudHSMError> ModifyHsmOutcome;
      typedef Aws::Utils::Outcome<ModifyLunaClientResult, CloudHSMError> ModifyLunaClientOutcome;
      typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, CloudHSMError> RemoveTagsFromResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
      typedef std::future<CreateHapgOutcome> CreateHapgOutcomeCallable;
      typedef std::future<CreateHsmOutcome> CreateHsmOutcomeCallable;
      typedef std::future<CreateLunaClientOutcome> CreateLunaClientOutcomeCallable;
      typedef std::future<DeleteHapgOutcome> DeleteHapgOutcomeCallable;
      typedef std::future<DeleteHsmOutcome> DeleteHsmOutcomeCallable;
      typedef std::future<DeleteLunaClientOutcome> DeleteLunaClientOutcomeCallable;
      typedef std::future<DescribeHapgOutcome> DescribeHapgOutcomeCallable;
      typedef std::future<DescribeHsmOutcome> DescribeHsmOutcomeCallable;
      typedef std::future<DescribeLunaClientOutcome> DescribeLunaClientOutcomeCallable;
      typedef std::future<GetConfigOutcome> GetConfigOutcomeCallable;
      typedef std::future<ListAvailableZonesOutcome> ListAvailableZonesOutcomeCallable;
      typedef std::future<ListHapgsOutcome> ListHapgsOutcomeCallable;
      typedef std::future<ListHsmsOutcome> ListHsmsOutcomeCallable;
      typedef std::future<ListLunaClientsOutcome> ListLunaClientsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ModifyHapgOutcome> ModifyHapgOutcomeCallable;
      typedef std::future<ModifyHsmOutcome> ModifyHsmOutcomeCallable;
      typedef std::future<ModifyLunaClientOutcome> ModifyLunaClientOutcomeCallable;
      typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudHSMClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudHSMClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::CreateHapgRequest&, const Model::CreateHapgOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHapgResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::CreateHsmRequest&, const Model::CreateHsmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHsmResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::CreateLunaClientRequest&, const Model::CreateLunaClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLunaClientResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::DeleteHapgRequest&, const Model::DeleteHapgOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHapgResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::DeleteHsmRequest&, const Model::DeleteHsmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHsmResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::DeleteLunaClientRequest&, const Model::DeleteLunaClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLunaClientResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::DescribeHapgRequest&, const Model::DescribeHapgOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHapgResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::DescribeHsmRequest&, const Model::DescribeHsmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHsmResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::DescribeLunaClientRequest&, const Model::DescribeLunaClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLunaClientResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::GetConfigRequest&, const Model::GetConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ListAvailableZonesRequest&, const Model::ListAvailableZonesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableZonesResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ListHapgsRequest&, const Model::ListHapgsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHapgsResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ListHsmsRequest&, const Model::ListHsmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHsmsResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ListLunaClientsRequest&, const Model::ListLunaClientsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLunaClientsResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ModifyHapgRequest&, const Model::ModifyHapgOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyHapgResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ModifyHsmRequest&, const Model::ModifyHsmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyHsmResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::ModifyLunaClientRequest&, const Model::ModifyLunaClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyLunaClientResponseReceivedHandler;
    typedef std::function<void(const CloudHSMClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudHSM
} // namespace Aws

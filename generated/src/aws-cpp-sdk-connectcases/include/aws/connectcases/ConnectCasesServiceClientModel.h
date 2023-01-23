/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/connectcases/ConnectCasesErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/connectcases/ConnectCasesEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ConnectCasesClient header */
#include <aws/connectcases/model/BatchGetFieldResult.h>
#include <aws/connectcases/model/BatchPutFieldOptionsResult.h>
#include <aws/connectcases/model/CreateCaseResult.h>
#include <aws/connectcases/model/CreateDomainResult.h>
#include <aws/connectcases/model/CreateFieldResult.h>
#include <aws/connectcases/model/CreateLayoutResult.h>
#include <aws/connectcases/model/CreateRelatedItemResult.h>
#include <aws/connectcases/model/CreateTemplateResult.h>
#include <aws/connectcases/model/GetCaseResult.h>
#include <aws/connectcases/model/GetCaseEventConfigurationResult.h>
#include <aws/connectcases/model/GetDomainResult.h>
#include <aws/connectcases/model/GetLayoutResult.h>
#include <aws/connectcases/model/GetTemplateResult.h>
#include <aws/connectcases/model/ListCasesForContactResult.h>
#include <aws/connectcases/model/ListDomainsResult.h>
#include <aws/connectcases/model/ListFieldOptionsResult.h>
#include <aws/connectcases/model/ListFieldsResult.h>
#include <aws/connectcases/model/ListLayoutsResult.h>
#include <aws/connectcases/model/ListTagsForResourceResult.h>
#include <aws/connectcases/model/ListTemplatesResult.h>
#include <aws/connectcases/model/PutCaseEventConfigurationResult.h>
#include <aws/connectcases/model/SearchCasesResult.h>
#include <aws/connectcases/model/SearchRelatedItemsResult.h>
#include <aws/connectcases/model/UpdateCaseResult.h>
#include <aws/connectcases/model/UpdateFieldResult.h>
#include <aws/connectcases/model/UpdateLayoutResult.h>
#include <aws/connectcases/model/UpdateTemplateResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ConnectCasesClient header */

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

  namespace ConnectCases
  {
    using ConnectCasesClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ConnectCasesEndpointProviderBase = Aws::ConnectCases::Endpoint::ConnectCasesEndpointProviderBase;
    using ConnectCasesEndpointProvider = Aws::ConnectCases::Endpoint::ConnectCasesEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ConnectCasesClient header */
      class BatchGetFieldRequest;
      class BatchPutFieldOptionsRequest;
      class CreateCaseRequest;
      class CreateDomainRequest;
      class CreateFieldRequest;
      class CreateLayoutRequest;
      class CreateRelatedItemRequest;
      class CreateTemplateRequest;
      class GetCaseRequest;
      class GetCaseEventConfigurationRequest;
      class GetDomainRequest;
      class GetLayoutRequest;
      class GetTemplateRequest;
      class ListCasesForContactRequest;
      class ListDomainsRequest;
      class ListFieldOptionsRequest;
      class ListFieldsRequest;
      class ListLayoutsRequest;
      class ListTagsForResourceRequest;
      class ListTemplatesRequest;
      class PutCaseEventConfigurationRequest;
      class SearchCasesRequest;
      class SearchRelatedItemsRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCaseRequest;
      class UpdateFieldRequest;
      class UpdateLayoutRequest;
      class UpdateTemplateRequest;
      /* End of service model forward declarations required in ConnectCasesClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetFieldResult, ConnectCasesError> BatchGetFieldOutcome;
      typedef Aws::Utils::Outcome<BatchPutFieldOptionsResult, ConnectCasesError> BatchPutFieldOptionsOutcome;
      typedef Aws::Utils::Outcome<CreateCaseResult, ConnectCasesError> CreateCaseOutcome;
      typedef Aws::Utils::Outcome<CreateDomainResult, ConnectCasesError> CreateDomainOutcome;
      typedef Aws::Utils::Outcome<CreateFieldResult, ConnectCasesError> CreateFieldOutcome;
      typedef Aws::Utils::Outcome<CreateLayoutResult, ConnectCasesError> CreateLayoutOutcome;
      typedef Aws::Utils::Outcome<CreateRelatedItemResult, ConnectCasesError> CreateRelatedItemOutcome;
      typedef Aws::Utils::Outcome<CreateTemplateResult, ConnectCasesError> CreateTemplateOutcome;
      typedef Aws::Utils::Outcome<GetCaseResult, ConnectCasesError> GetCaseOutcome;
      typedef Aws::Utils::Outcome<GetCaseEventConfigurationResult, ConnectCasesError> GetCaseEventConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetDomainResult, ConnectCasesError> GetDomainOutcome;
      typedef Aws::Utils::Outcome<GetLayoutResult, ConnectCasesError> GetLayoutOutcome;
      typedef Aws::Utils::Outcome<GetTemplateResult, ConnectCasesError> GetTemplateOutcome;
      typedef Aws::Utils::Outcome<ListCasesForContactResult, ConnectCasesError> ListCasesForContactOutcome;
      typedef Aws::Utils::Outcome<ListDomainsResult, ConnectCasesError> ListDomainsOutcome;
      typedef Aws::Utils::Outcome<ListFieldOptionsResult, ConnectCasesError> ListFieldOptionsOutcome;
      typedef Aws::Utils::Outcome<ListFieldsResult, ConnectCasesError> ListFieldsOutcome;
      typedef Aws::Utils::Outcome<ListLayoutsResult, ConnectCasesError> ListLayoutsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ConnectCasesError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTemplatesResult, ConnectCasesError> ListTemplatesOutcome;
      typedef Aws::Utils::Outcome<PutCaseEventConfigurationResult, ConnectCasesError> PutCaseEventConfigurationOutcome;
      typedef Aws::Utils::Outcome<SearchCasesResult, ConnectCasesError> SearchCasesOutcome;
      typedef Aws::Utils::Outcome<SearchRelatedItemsResult, ConnectCasesError> SearchRelatedItemsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCasesError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCasesError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateCaseResult, ConnectCasesError> UpdateCaseOutcome;
      typedef Aws::Utils::Outcome<UpdateFieldResult, ConnectCasesError> UpdateFieldOutcome;
      typedef Aws::Utils::Outcome<UpdateLayoutResult, ConnectCasesError> UpdateLayoutOutcome;
      typedef Aws::Utils::Outcome<UpdateTemplateResult, ConnectCasesError> UpdateTemplateOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetFieldOutcome> BatchGetFieldOutcomeCallable;
      typedef std::future<BatchPutFieldOptionsOutcome> BatchPutFieldOptionsOutcomeCallable;
      typedef std::future<CreateCaseOutcome> CreateCaseOutcomeCallable;
      typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
      typedef std::future<CreateFieldOutcome> CreateFieldOutcomeCallable;
      typedef std::future<CreateLayoutOutcome> CreateLayoutOutcomeCallable;
      typedef std::future<CreateRelatedItemOutcome> CreateRelatedItemOutcomeCallable;
      typedef std::future<CreateTemplateOutcome> CreateTemplateOutcomeCallable;
      typedef std::future<GetCaseOutcome> GetCaseOutcomeCallable;
      typedef std::future<GetCaseEventConfigurationOutcome> GetCaseEventConfigurationOutcomeCallable;
      typedef std::future<GetDomainOutcome> GetDomainOutcomeCallable;
      typedef std::future<GetLayoutOutcome> GetLayoutOutcomeCallable;
      typedef std::future<GetTemplateOutcome> GetTemplateOutcomeCallable;
      typedef std::future<ListCasesForContactOutcome> ListCasesForContactOutcomeCallable;
      typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
      typedef std::future<ListFieldOptionsOutcome> ListFieldOptionsOutcomeCallable;
      typedef std::future<ListFieldsOutcome> ListFieldsOutcomeCallable;
      typedef std::future<ListLayoutsOutcome> ListLayoutsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTemplatesOutcome> ListTemplatesOutcomeCallable;
      typedef std::future<PutCaseEventConfigurationOutcome> PutCaseEventConfigurationOutcomeCallable;
      typedef std::future<SearchCasesOutcome> SearchCasesOutcomeCallable;
      typedef std::future<SearchRelatedItemsOutcome> SearchRelatedItemsOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCaseOutcome> UpdateCaseOutcomeCallable;
      typedef std::future<UpdateFieldOutcome> UpdateFieldOutcomeCallable;
      typedef std::future<UpdateLayoutOutcome> UpdateLayoutOutcomeCallable;
      typedef std::future<UpdateTemplateOutcome> UpdateTemplateOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ConnectCasesClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ConnectCasesClient*, const Model::BatchGetFieldRequest&, const Model::BatchGetFieldOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetFieldResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::BatchPutFieldOptionsRequest&, const Model::BatchPutFieldOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutFieldOptionsResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::CreateCaseRequest&, const Model::CreateCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCaseResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::CreateFieldRequest&, const Model::CreateFieldOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFieldResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::CreateLayoutRequest&, const Model::CreateLayoutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLayoutResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::CreateRelatedItemRequest&, const Model::CreateRelatedItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRelatedItemResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::CreateTemplateRequest&, const Model::CreateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTemplateResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::GetCaseRequest&, const Model::GetCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCaseResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::GetCaseEventConfigurationRequest&, const Model::GetCaseEventConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCaseEventConfigurationResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::GetDomainRequest&, const Model::GetDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::GetLayoutRequest&, const Model::GetLayoutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLayoutResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::GetTemplateRequest&, const Model::GetTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::ListCasesForContactRequest&, const Model::ListCasesForContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCasesForContactResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::ListFieldOptionsRequest&, const Model::ListFieldOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFieldOptionsResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::ListFieldsRequest&, const Model::ListFieldsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFieldsResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::ListLayoutsRequest&, const Model::ListLayoutsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLayoutsResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::ListTemplatesRequest&, const Model::ListTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplatesResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::PutCaseEventConfigurationRequest&, const Model::PutCaseEventConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutCaseEventConfigurationResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::SearchCasesRequest&, const Model::SearchCasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchCasesResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::SearchRelatedItemsRequest&, const Model::SearchRelatedItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchRelatedItemsResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::UpdateCaseRequest&, const Model::UpdateCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCaseResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::UpdateFieldRequest&, const Model::UpdateFieldOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFieldResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::UpdateLayoutRequest&, const Model::UpdateLayoutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLayoutResponseReceivedHandler;
    typedef std::function<void(const ConnectCasesClient*, const Model::UpdateTemplateRequest&, const Model::UpdateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplateResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ConnectCases
} // namespace Aws

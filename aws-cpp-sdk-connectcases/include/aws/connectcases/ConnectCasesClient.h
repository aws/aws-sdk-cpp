/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connectcases/ConnectCasesServiceClientModel.h>

namespace Aws
{
namespace ConnectCases
{
  /**
   * <p>Welcome to the Amazon Connect Cases API Reference. This guide provides
   * information about the Amazon Connect Cases API, which you can use to create,
   * update, get, and list Cases domains, fields, field options, layouts, templates,
   * cases, related items, and tags.</p> <pre><code> &lt;p&gt;For more information
   * about Amazon Connect Cases, see &lt;a
   * href=&quot;https://docs.aws.amazon.com/connect/latest/adminguide/cases.html&quot;&gt;Amazon
   * Connect Cases&lt;/a&gt; in the &lt;i&gt;Amazon Connect Administrator
   * Guide&lt;/i&gt;. &lt;/p&gt; </code></pre>
   */
  class AWS_CONNECTCASES_API ConnectCasesClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ConnectCasesClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCasesClient(const Aws::ConnectCases::ConnectCasesClientConfiguration& clientConfiguration = Aws::ConnectCases::ConnectCasesClientConfiguration(),
                           std::shared_ptr<ConnectCasesEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectCasesEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCasesClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<ConnectCasesEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectCasesEndpointProvider>(ALLOCATION_TAG),
                           const Aws::ConnectCases::ConnectCasesClientConfiguration& clientConfiguration = Aws::ConnectCases::ConnectCasesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectCasesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ConnectCasesEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectCasesEndpointProvider>(ALLOCATION_TAG),
                           const Aws::ConnectCases::ConnectCasesClientConfiguration& clientConfiguration = Aws::ConnectCases::ConnectCasesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCasesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCasesClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectCasesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ConnectCasesClient();

        /**
         * <p>Returns the description for the list of fields in the request parameters.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BatchGetField">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetFieldOutcome BatchGetField(const Model::BatchGetFieldRequest& request) const;

        /**
         * A Callable wrapper for BatchGetField that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetFieldOutcomeCallable BatchGetFieldCallable(const Model::BatchGetFieldRequest& request) const;

        /**
         * An Async wrapper for BatchGetField that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetFieldAsync(const Model::BatchGetFieldRequest& request, const BatchGetFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and updates a set of field options for a single select field in a
         * Cases domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BatchPutFieldOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutFieldOptionsOutcome BatchPutFieldOptions(const Model::BatchPutFieldOptionsRequest& request) const;

        /**
         * A Callable wrapper for BatchPutFieldOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutFieldOptionsOutcomeCallable BatchPutFieldOptionsCallable(const Model::BatchPutFieldOptionsRequest& request) const;

        /**
         * An Async wrapper for BatchPutFieldOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutFieldOptionsAsync(const Model::BatchPutFieldOptionsRequest& request, const BatchPutFieldOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a case in the specified Cases domain. Case system and custom fields
         * are taken as an array id/value pairs with a declared data types.</p>  <p>
         * <code>customer_id</code> is a required field when creating a case.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CreateCase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCaseOutcome CreateCase(const Model::CreateCaseRequest& request) const;

        /**
         * A Callable wrapper for CreateCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCaseOutcomeCallable CreateCaseCallable(const Model::CreateCaseRequest& request) const;

        /**
         * An Async wrapper for CreateCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCaseAsync(const Model::CreateCaseRequest& request, const CreateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a domain, which is a container for all case data, such as cases,
         * fields, templates and layouts. Each Amazon Connect instance can be associated
         * with only one Cases domain.</p>  <p>This will not associate your
         * connect instance to Cases domain. Instead, use the Amazon Connect <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateIntegrationAssociation.html">CreateIntegrationAssociation</a>
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request) const;

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a field in the Cases domain. This field is used to define the case
         * object model (that is, defines what data can be captured on cases) in a Cases
         * domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CreateField">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFieldOutcome CreateField(const Model::CreateFieldRequest& request) const;

        /**
         * A Callable wrapper for CreateField that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFieldOutcomeCallable CreateFieldCallable(const Model::CreateFieldRequest& request) const;

        /**
         * An Async wrapper for CreateField that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFieldAsync(const Model::CreateFieldRequest& request, const CreateFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a layout in the Cases domain. Layouts define the following
         * configuration in the top section and More Info tab of the Cases user
         * interface:</p> <ul> <li> <p>Fields to display to the users</p> </li> <li>
         * <p>Field ordering</p> </li> </ul>  <p>Title and Status fields cannot be
         * part of layouts since they are not configurable.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CreateLayout">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLayoutOutcome CreateLayout(const Model::CreateLayoutRequest& request) const;

        /**
         * A Callable wrapper for CreateLayout that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLayoutOutcomeCallable CreateLayoutCallable(const Model::CreateLayoutRequest& request) const;

        /**
         * An Async wrapper for CreateLayout that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLayoutAsync(const Model::CreateLayoutRequest& request, const CreateLayoutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a related item (comments, tasks, and contacts) and associates it with
         * a case.</p>  <p>A Related Item is a resource that is associated with a
         * case. It may or may not have an external identifier linking it to an external
         * resource (for example, a <code>contactArn</code>). All Related Items have their
         * own internal identifier, the <code>relatedItemArn</code>. Examples of related
         * items include <code>comments</code> and <code>contacts</code>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CreateRelatedItem">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRelatedItemOutcome CreateRelatedItem(const Model::CreateRelatedItemRequest& request) const;

        /**
         * A Callable wrapper for CreateRelatedItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRelatedItemOutcomeCallable CreateRelatedItemCallable(const Model::CreateRelatedItemRequest& request) const;

        /**
         * An Async wrapper for CreateRelatedItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRelatedItemAsync(const Model::CreateRelatedItemRequest& request, const CreateRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a template in the Cases domain. This template is used to define the
         * case object model (that is, to define what data can be captured on cases) in a
         * Cases domain. A template must have a unique name within a domain, and it must
         * reference existing field IDs and layout IDs. Additionally, multiple fields with
         * same IDs are not allowed within the same Template. A template can be either
         * Active or Inactive, as indicated by its status. Inactive templates cannot be
         * used to create cases.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CreateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateOutcome CreateTemplate(const Model::CreateTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTemplateOutcomeCallable CreateTemplateCallable(const Model::CreateTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTemplateAsync(const Model::CreateTemplateRequest& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific case if it exists. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetCase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCaseOutcome GetCase(const Model::GetCaseRequest& request) const;

        /**
         * A Callable wrapper for GetCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCaseOutcomeCallable GetCaseCallable(const Model::GetCaseRequest& request) const;

        /**
         * An Async wrapper for GetCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCaseAsync(const Model::GetCaseRequest& request, const GetCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the case event publishing configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetCaseEventConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCaseEventConfigurationOutcome GetCaseEventConfiguration(const Model::GetCaseEventConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetCaseEventConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCaseEventConfigurationOutcomeCallable GetCaseEventConfigurationCallable(const Model::GetCaseEventConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetCaseEventConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCaseEventConfigurationAsync(const Model::GetCaseEventConfigurationRequest& request, const GetCaseEventConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific domain if it exists. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainOutcome GetDomain(const Model::GetDomainRequest& request) const;

        /**
         * A Callable wrapper for GetDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainOutcomeCallable GetDomainCallable(const Model::GetDomainRequest& request) const;

        /**
         * An Async wrapper for GetDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainAsync(const Model::GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details for the requested layout.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetLayout">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLayoutOutcome GetLayout(const Model::GetLayoutRequest& request) const;

        /**
         * A Callable wrapper for GetLayout that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLayoutOutcomeCallable GetLayoutCallable(const Model::GetLayoutRequest& request) const;

        /**
         * An Async wrapper for GetLayout that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLayoutAsync(const Model::GetLayoutRequest& request, const GetLayoutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details for the requested template. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateOutcome GetTemplate(const Model::GetTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemplateOutcomeCallable GetTemplateCallable(const Model::GetTemplateRequest& request) const;

        /**
         * An Async wrapper for GetTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemplateAsync(const Model::GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists cases for a given contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListCasesForContact">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCasesForContactOutcome ListCasesForContact(const Model::ListCasesForContactRequest& request) const;

        /**
         * A Callable wrapper for ListCasesForContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCasesForContactOutcomeCallable ListCasesForContactCallable(const Model::ListCasesForContactRequest& request) const;

        /**
         * An Async wrapper for ListCasesForContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCasesForContactAsync(const Model::ListCasesForContactRequest& request, const ListCasesForContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all cases domains in the Amazon Web Services account. Each list item is
         * a condensed summary object of the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainsOutcomeCallable ListDomainsCallable(const Model::ListDomainsRequest& request) const;

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainsAsync(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the field options for a field identifier in the domain.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListFieldOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFieldOptionsOutcome ListFieldOptions(const Model::ListFieldOptionsRequest& request) const;

        /**
         * A Callable wrapper for ListFieldOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFieldOptionsOutcomeCallable ListFieldOptionsCallable(const Model::ListFieldOptionsRequest& request) const;

        /**
         * An Async wrapper for ListFieldOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFieldOptionsAsync(const Model::ListFieldOptionsRequest& request, const ListFieldOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all fields in a Cases domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListFields">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFieldsOutcome ListFields(const Model::ListFieldsRequest& request) const;

        /**
         * A Callable wrapper for ListFields that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFieldsOutcomeCallable ListFieldsCallable(const Model::ListFieldsRequest& request) const;

        /**
         * An Async wrapper for ListFields that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFieldsAsync(const Model::ListFieldsRequest& request, const ListFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all layouts in the given cases domain. Each list item is a condensed
         * summary object of the layout.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListLayouts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLayoutsOutcome ListLayouts(const Model::ListLayoutsRequest& request) const;

        /**
         * A Callable wrapper for ListLayouts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLayoutsOutcomeCallable ListLayoutsCallable(const Model::ListLayoutsRequest& request) const;

        /**
         * An Async wrapper for ListLayouts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLayoutsAsync(const Model::ListLayoutsRequest& request, const ListLayoutsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the templates in a Cases domain. Each list item is a condensed
         * summary object of the template. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTemplatesOutcomeCallable ListTemplatesCallable(const Model::ListTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTemplatesAsync(const Model::ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>API for adding case event publishing configuration</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/PutCaseEventConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCaseEventConfigurationOutcome PutCaseEventConfiguration(const Model::PutCaseEventConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutCaseEventConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutCaseEventConfigurationOutcomeCallable PutCaseEventConfigurationCallable(const Model::PutCaseEventConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutCaseEventConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutCaseEventConfigurationAsync(const Model::PutCaseEventConfigurationRequest& request, const PutCaseEventConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for cases within their associated Cases domain. Search results are
         * returned as a paginated list of abridged case documents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SearchCases">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchCasesOutcome SearchCases(const Model::SearchCasesRequest& request) const;

        /**
         * A Callable wrapper for SearchCases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchCasesOutcomeCallable SearchCasesCallable(const Model::SearchCasesRequest& request) const;

        /**
         * An Async wrapper for SearchCases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchCasesAsync(const Model::SearchCasesRequest& request, const SearchCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for related items that are associated with a case.</p>  <p>If
         * no filters are provided, this returns all related items associated with a
         * case.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SearchRelatedItems">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchRelatedItemsOutcome SearchRelatedItems(const Model::SearchRelatedItemsRequest& request) const;

        /**
         * A Callable wrapper for SearchRelatedItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchRelatedItemsOutcomeCallable SearchRelatedItemsCallable(const Model::SearchRelatedItemsRequest& request) const;

        /**
         * An Async wrapper for SearchRelatedItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchRelatedItemsAsync(const Model::SearchRelatedItemsRequest& request, const SearchRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Untags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the values of fields on a case. Fields to be updated are received as
         * an array of id/value pairs identical to the <code>CreateCase</code> input .</p>
         * <p>If the action is successful, the service sends back an HTTP 200 response with
         * an empty HTTP body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/UpdateCase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCaseOutcome UpdateCase(const Model::UpdateCaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCaseOutcomeCallable UpdateCaseCallable(const Model::UpdateCaseRequest& request) const;

        /**
         * An Async wrapper for UpdateCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCaseAsync(const Model::UpdateCaseRequest& request, const UpdateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the properties of an existing field. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/UpdateField">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFieldOutcome UpdateField(const Model::UpdateFieldRequest& request) const;

        /**
         * A Callable wrapper for UpdateField that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFieldOutcomeCallable UpdateFieldCallable(const Model::UpdateFieldRequest& request) const;

        /**
         * An Async wrapper for UpdateField that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFieldAsync(const Model::UpdateFieldRequest& request, const UpdateFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the attributes of an existing layout.</p> <p>If the action is
         * successful, the service sends back an HTTP 200 response with an empty HTTP
         * body.</p> <p>A <code>ValidationException</code> is returned when you add
         * non-existent <code>fieldIds</code> to a layout.</p>  <p>Title and Status
         * fields cannot be part of layouts because they are not configurable.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/UpdateLayout">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLayoutOutcome UpdateLayout(const Model::UpdateLayoutRequest& request) const;

        /**
         * A Callable wrapper for UpdateLayout that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLayoutOutcomeCallable UpdateLayoutCallable(const Model::UpdateLayoutRequest& request) const;

        /**
         * An Async wrapper for UpdateLayout that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLayoutAsync(const Model::UpdateLayoutRequest& request, const UpdateLayoutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the attributes of an existing template. The template attributes that
         * can be modified include <code>name</code>, <code>description</code>,
         * <code>layoutConfiguration</code>, <code>requiredFields</code>, and
         * <code>status</code>. At least one of these attributes must not be null. If a
         * null value is provided for a given attribute, that attribute is ignored and its
         * current value is preserved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/UpdateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateOutcome UpdateTemplate(const Model::UpdateTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTemplateOutcomeCallable UpdateTemplateCallable(const Model::UpdateTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTemplateAsync(const Model::UpdateTemplateRequest& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConnectCasesEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ConnectCasesClient>;
      void init(const ConnectCasesClientConfiguration& clientConfiguration);

      ConnectCasesClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ConnectCasesEndpointProviderBase> m_endpointProvider;
  };

} // namespace ConnectCases
} // namespace Aws

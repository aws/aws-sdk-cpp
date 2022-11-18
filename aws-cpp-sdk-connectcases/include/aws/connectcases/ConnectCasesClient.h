/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connectcases/ConnectCasesServiceClientModel.h>
#include <aws/connectcases/ConnectCasesLegacyAsyncMacros.h>

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
  class AWS_CONNECTCASES_API ConnectCasesClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Returns the description for the list of fields in the request parameters.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BatchGetField">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetFieldOutcome BatchGetField(const Model::BatchGetFieldRequest& request) const;


        /**
         * <p>Creates and updates a set of field options for a single select field in a
         * Cases domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BatchPutFieldOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutFieldOptionsOutcome BatchPutFieldOptions(const Model::BatchPutFieldOptionsRequest& request) const;


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
         * <p>Creates a field in the Cases domain. This field is used to define the case
         * object model (that is, defines what data can be captured on cases) in a Cases
         * domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CreateField">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFieldOutcome CreateField(const Model::CreateFieldRequest& request) const;


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
         * <p>Returns information about a specific case if it exists. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetCase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCaseOutcome GetCase(const Model::GetCaseRequest& request) const;


        /**
         * <p>Returns the case event publishing configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetCaseEventConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCaseEventConfigurationOutcome GetCaseEventConfiguration(const Model::GetCaseEventConfigurationRequest& request) const;


        /**
         * <p>Returns information about a specific domain if it exists. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainOutcome GetDomain(const Model::GetDomainRequest& request) const;


        /**
         * <p>Returns the details for the requested layout.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetLayout">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLayoutOutcome GetLayout(const Model::GetLayoutRequest& request) const;


        /**
         * <p>Returns the details for the requested template. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateOutcome GetTemplate(const Model::GetTemplateRequest& request) const;


        /**
         * <p>Lists cases for a given contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListCasesForContact">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCasesForContactOutcome ListCasesForContact(const Model::ListCasesForContactRequest& request) const;


        /**
         * <p>Lists all cases domains in the Amazon Web Services account. Each list item is
         * a condensed summary object of the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;


        /**
         * <p>Lists all of the field options for a field identifier in the domain.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListFieldOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFieldOptionsOutcome ListFieldOptions(const Model::ListFieldOptionsRequest& request) const;


        /**
         * <p>Lists all fields in a Cases domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListFields">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFieldsOutcome ListFields(const Model::ListFieldsRequest& request) const;


        /**
         * <p>Lists all layouts in the given cases domain. Each list item is a condensed
         * summary object of the layout.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListLayouts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLayoutsOutcome ListLayouts(const Model::ListLayoutsRequest& request) const;


        /**
         * <p>Lists tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists all of the templates in a Cases domain. Each list item is a condensed
         * summary object of the template. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;


        /**
         * <p>API for adding case event publishing configuration</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/PutCaseEventConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCaseEventConfigurationOutcome PutCaseEventConfiguration(const Model::PutCaseEventConfigurationRequest& request) const;


        /**
         * <p>Searches for cases within their associated Cases domain. Search results are
         * returned as a paginated list of abridged case documents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SearchCases">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchCasesOutcome SearchCases(const Model::SearchCasesRequest& request) const;


        /**
         * <p>Searches for related items that are associated with a case.</p>  <p>If
         * no filters are provided, this returns all related items associated with a
         * case.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SearchRelatedItems">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchRelatedItemsOutcome SearchRelatedItems(const Model::SearchRelatedItemsRequest& request) const;


        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Untags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


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
         * <p>Updates the properties of an existing field. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/UpdateField">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFieldOutcome UpdateField(const Model::UpdateFieldRequest& request) const;


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConnectCasesEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ConnectCasesClientConfiguration& clientConfiguration);

      ConnectCasesClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ConnectCasesEndpointProviderBase> m_endpointProvider;
  };

} // namespace ConnectCases
} // namespace Aws

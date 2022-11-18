/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/CustomerProfilesServiceClientModel.h>
#include <aws/customer-profiles/CustomerProfilesLegacyAsyncMacros.h>

namespace Aws
{
namespace CustomerProfiles
{
  /**
   * <fullname>Amazon Connect Customer Profiles</fullname> <p>Amazon Connect Customer
   * Profiles is a unified customer profile for your contact center that has
   * pre-built connectors powered by AppFlow that make it easy to combine customer
   * information from third party applications, such as Salesforce (CRM), ServiceNow
   * (ITSM), and your enterprise resource planning (ERP), with contact history from
   * your Amazon Connect contact center. If you're new to Amazon Connect, you might
   * find it helpful to review the <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/">Amazon Connect
   * Administrator Guide</a>.</p>
   */
  class AWS_CUSTOMERPROFILES_API CustomerProfilesClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CustomerProfilesClient(const Aws::CustomerProfiles::CustomerProfilesClientConfiguration& clientConfiguration = Aws::CustomerProfiles::CustomerProfilesClientConfiguration(),
                               std::shared_ptr<CustomerProfilesEndpointProviderBase> endpointProvider = Aws::MakeShared<CustomerProfilesEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CustomerProfilesClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<CustomerProfilesEndpointProviderBase> endpointProvider = Aws::MakeShared<CustomerProfilesEndpointProvider>(ALLOCATION_TAG),
                               const Aws::CustomerProfiles::CustomerProfilesClientConfiguration& clientConfiguration = Aws::CustomerProfiles::CustomerProfilesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CustomerProfilesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<CustomerProfilesEndpointProviderBase> endpointProvider = Aws::MakeShared<CustomerProfilesEndpointProvider>(ALLOCATION_TAG),
                               const Aws::CustomerProfiles::CustomerProfilesClientConfiguration& clientConfiguration = Aws::CustomerProfiles::CustomerProfilesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CustomerProfilesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CustomerProfilesClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CustomerProfilesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CustomerProfilesClient();


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
         * <p>Associates a new key value with a specific profile, such as a Contact Record
         * ContactId.</p> <p>A profile object can have a single unique key and any number
         * of additional keys that can be used to identify the profile that it belongs
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/AddProfileKey">AWS
         * API Reference</a></p>
         */
        virtual Model::AddProfileKeyOutcome AddProfileKey(const Model::AddProfileKeyRequest& request) const;


        /**
         * <p>Creates a domain, which is a container for all customer data, such as
         * customer profile attributes, object types, profile keys, and encryption keys.
         * You can create multiple domains, and each domain can have multiple third-party
         * integrations.</p> <p>Each Amazon Connect instance can be associated with only
         * one domain. Multiple Amazon Connect instances can be associated with one
         * domain.</p> <p>Use this API or <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_UpdateDomain.html">UpdateDomain</a>
         * to enable <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">identity
         * resolution</a>: set <code>Matching</code> to true. </p> <p>To prevent
         * cross-service impersonation when you call this API, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/cross-service-confused-deputy-prevention.html">Cross-service
         * confused deputy prevention</a> for sample policies that you should apply.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;


        /**
         * <p> Creates an integration workflow. An integration workflow is an async process
         * which ingests historic data and sets up an integration for ongoing updates. The
         * supported Amazon AppFlow sources are Salesforce, ServiceNow, and Marketo.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/CreateIntegrationWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIntegrationWorkflowOutcome CreateIntegrationWorkflow(const Model::CreateIntegrationWorkflowRequest& request) const;


        /**
         * <p>Creates a standard profile.</p> <p>A standard profile represents the
         * following attributes for a customer profile in a domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/CreateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProfileOutcome CreateProfile(const Model::CreateProfileRequest& request) const;


        /**
         * <p>Deletes a specific domain and all of its customer data, such as customer
         * profile attributes and their related objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;


        /**
         * <p>Removes an integration from a specific domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationOutcome DeleteIntegration(const Model::DeleteIntegrationRequest& request) const;


        /**
         * <p>Deletes the standard customer profile and all data pertaining to the
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileOutcome DeleteProfile(const Model::DeleteProfileRequest& request) const;


        /**
         * <p>Removes a searchable key from a customer profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteProfileKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileKeyOutcome DeleteProfileKey(const Model::DeleteProfileKeyRequest& request) const;


        /**
         * <p>Removes an object associated with a profile of a given
         * ProfileObjectType.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteProfileObject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileObjectOutcome DeleteProfileObject(const Model::DeleteProfileObjectRequest& request) const;


        /**
         * <p>Removes a ProfileObjectType from a specific domain as well as removes all the
         * ProfileObjects of that type. It also disables integrations from this specific
         * ProfileObjectType. In addition, it scrubs all of the fields of the standard
         * profile that were populated from this ProfileObjectType.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteProfileObjectType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProfileObjectTypeOutcome DeleteProfileObjectType(const Model::DeleteProfileObjectTypeRequest& request) const;


        /**
         * <p>Deletes the specified workflow and all its corresponding resources. This is
         * an async process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DeleteWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;


        /**
         * <p>Tests the auto-merging settings of your Identity Resolution Job without
         * merging your data. It randomly selects a sample of matching groups from the
         * existing matching results, and applies the automerging settings that you
         * provided. You can then view the number of profiles in the sample, the number of
         * matches, and the number of profiles identified to be merged. This enables you to
         * evaluate the accuracy of the attributes in your matching list. </p> <p>You can't
         * view which profiles are matched and would be merged.</p>  <p>We
         * strongly recommend you use this API to do a dry run of the automerging process
         * before running the Identity Resolution Job. Include <b>at least</b> two matching
         * attributes. If your matching list includes too few attributes (such as only
         * <code>FirstName</code> or only <code>LastName</code>), there may be a large
         * number of matches. This increases the chances of erroneous merges.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetAutoMergingPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutoMergingPreviewOutcome GetAutoMergingPreview(const Model::GetAutoMergingPreviewRequest& request) const;


        /**
         * <p>Returns information about a specific domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainOutcome GetDomain(const Model::GetDomainRequest& request) const;


        /**
         * <p>Returns information about an Identity Resolution Job in a specific domain.
         * </p> <p>Identity Resolution Jobs are set up using the Amazon Connect admin
         * console. For more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/use-identity-resolution.html">Use
         * Identity Resolution to consolidate similar profiles</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetIdentityResolutionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityResolutionJobOutcome GetIdentityResolutionJob(const Model::GetIdentityResolutionJobRequest& request) const;


        /**
         * <p>Returns an integration for a domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationOutcome GetIntegration(const Model::GetIntegrationRequest& request) const;


        /**
         * <p>Before calling this API, use <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_CreateDomain.html">CreateDomain</a>
         * or <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_UpdateDomain.html">UpdateDomain</a>
         * to enable identity resolution: set <code>Matching</code> to true.</p>
         * <p>GetMatches returns potentially matching profiles, based on the results of the
         * latest run of a machine learning process. </p>  <p>The process of
         * matching duplicate profiles. If <code>Matching</code> = <code>true</code>,
         * Amazon Connect Customer Profiles starts a weekly batch process called Identity
         * Resolution Job. If you do not specify a date and time for Identity Resolution
         * Job to run, by default it runs every Saturday at 12AM UTC to detect duplicate
         * profiles in your domains. </p> <p>After the Identity Resolution Job completes,
         * use the <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">GetMatches</a>
         * API to return and review the results. Or, if you have configured
         * <code>ExportingConfig</code> in the <code>MatchingRequest</code>, you can
         * download the results from S3.</p>  <p>Amazon Connect uses the
         * following profile attributes to identify matches:</p> <ul> <li>
         * <p>PhoneNumber</p> </li> <li> <p>HomePhoneNumber</p> </li> <li>
         * <p>BusinessPhoneNumber</p> </li> <li> <p>MobilePhoneNumber</p> </li> <li>
         * <p>EmailAddress</p> </li> <li> <p>PersonalEmailAddress</p> </li> <li>
         * <p>BusinessEmailAddress</p> </li> <li> <p>FullName</p> </li> </ul> <p>For
         * example, two or more profiles—with spelling mistakes such as <b>John Doe</b> and
         * <b>Jhn Doe</b>, or different casing email addresses such as
         * <b>JOHN_DOE@ANYCOMPANY.COM</b> and <b>johndoe@anycompany.com</b>, or different
         * phone number formats such as <b>555-010-0000</b> and <b>+1-555-010-0000</b>—can
         * be detected as belonging to the same customer <b>John Doe</b> and merged into a
         * unified profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetMatches">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMatchesOutcome GetMatches(const Model::GetMatchesRequest& request) const;


        /**
         * <p>Returns the object types for a specific domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetProfileObjectType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileObjectTypeOutcome GetProfileObjectType(const Model::GetProfileObjectTypeRequest& request) const;


        /**
         * <p>Returns the template information for a specific object type.</p> <p>A
         * template is a predefined ProfileObjectType, such as “Salesforce-Account” or
         * “Salesforce-Contact.” When a user sends a ProfileObject, using the
         * PutProfileObject API, with an ObjectTypeName that matches one of the
         * TemplateIds, it uses the mappings from the template.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetProfileObjectTypeTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProfileObjectTypeTemplateOutcome GetProfileObjectTypeTemplate(const Model::GetProfileObjectTypeTemplateRequest& request) const;


        /**
         * <p>Get details of specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest& request) const;


        /**
         * <p>Get granular list of steps in workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/GetWorkflowSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowStepsOutcome GetWorkflowSteps(const Model::GetWorkflowStepsRequest& request) const;


        /**
         * <p>Lists all of the integrations associated to a specific URI in the AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListAccountIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountIntegrationsOutcome ListAccountIntegrations(const Model::ListAccountIntegrationsRequest& request) const;


        /**
         * <p>Returns a list of all the domains for an AWS account that have been
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;


        /**
         * <p>Lists all of the Identity Resolution Jobs in your domain. The response sorts
         * the list by <code>JobStartTime</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListIdentityResolutionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityResolutionJobsOutcome ListIdentityResolutionJobs(const Model::ListIdentityResolutionJobsRequest& request) const;


        /**
         * <p>Lists all of the integrations in your domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIntegrationsOutcome ListIntegrations(const Model::ListIntegrationsRequest& request) const;


        /**
         * <p>Lists all of the template information for object types.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListProfileObjectTypeTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfileObjectTypeTemplatesOutcome ListProfileObjectTypeTemplates(const Model::ListProfileObjectTypeTemplatesRequest& request) const;


        /**
         * <p>Lists all of the templates available within the service.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListProfileObjectTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfileObjectTypesOutcome ListProfileObjectTypes(const Model::ListProfileObjectTypesRequest& request) const;


        /**
         * <p>Returns a list of objects associated with a profile of a given
         * ProfileObjectType.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListProfileObjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProfileObjectsOutcome ListProfileObjects(const Model::ListProfileObjectsRequest& request) const;


        /**
         * <p>Displays the tags associated with an Amazon Connect Customer Profiles
         * resource. In Connect Customer Profiles, domains, profile object types, and
         * integrations can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Query to list all workflows.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;


        /**
         * <p>Runs an AWS Lambda job that does the following:</p> <ol> <li> <p>All the
         * profileKeys in the <code>ProfileToBeMerged</code> will be moved to the main
         * profile.</p> </li> <li> <p>All the objects in the <code>ProfileToBeMerged</code>
         * will be moved to the main profile.</p> </li> <li> <p>All the
         * <code>ProfileToBeMerged</code> will be deleted at the end.</p> </li> <li> <p>All
         * the profileKeys in the <code>ProfileIdsToBeMerged</code> will be moved to the
         * main profile.</p> </li> <li> <p>Standard fields are merged as follows:</p> <ol>
         * <li> <p>Fields are always "union"-ed if there are no conflicts in standard
         * fields or attributeKeys.</p> </li> <li> <p>When there are conflicting
         * fields:</p> <ol> <li> <p>If no <code>SourceProfileIds</code> entry is specified,
         * the main Profile value is always taken. </p> </li> <li> <p>If a
         * <code>SourceProfileIds</code> entry is specified, the specified profileId is
         * always taken, even if it is a NULL value.</p> </li> </ol> </li> </ol> </li>
         * </ol> <p>You can use MergeProfiles together with <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">GetMatches</a>,
         * which returns potentially matching profiles, or use it with the results of
         * another matching system. After profiles have been merged, they cannot be
         * separated (unmerged).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/MergeProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::MergeProfilesOutcome MergeProfiles(const Model::MergeProfilesRequest& request) const;


        /**
         * <p>Adds an integration between the service and a third-party service, which
         * includes Amazon AppFlow and Amazon Connect.</p> <p>An integration can belong to
         * only one domain.</p> <p>To add or remove tags on an existing Integration, see <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_TagResource.html">
         * TagResource </a>/<a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_UntagResource.html">
         * UntagResource</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/PutIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutIntegrationOutcome PutIntegration(const Model::PutIntegrationRequest& request) const;


        /**
         * <p>Adds additional objects to customer profiles of a given ObjectType.</p>
         * <p>When adding a specific profile object, like a Contact Record, an inferred
         * profile can get created if it is not mapped to an existing profile. The
         * resulting profile will only have a phone number populated in the standard
         * ProfileObject. Any additional Contact Records with the same phone number will be
         * mapped to the same inferred profile.</p> <p>When a ProfileObject is created and
         * if a ProfileObjectType already exists for the ProfileObject, it will provide
         * data to a standard profile depending on the ProfileObjectType definition.</p>
         * <p>PutProfileObject needs an ObjectType, which can be created using
         * PutProfileObjectType.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/PutProfileObject">AWS
         * API Reference</a></p>
         */
        virtual Model::PutProfileObjectOutcome PutProfileObject(const Model::PutProfileObjectRequest& request) const;


        /**
         * <p>Defines a ProfileObjectType.</p> <p>To add or remove tags on an existing
         * ObjectType, see <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_TagResource.html">
         * TagResource</a>/<a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_UntagResource.html">UntagResource</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/PutProfileObjectType">AWS
         * API Reference</a></p>
         */
        virtual Model::PutProfileObjectTypeOutcome PutProfileObjectType(const Model::PutProfileObjectTypeRequest& request) const;


        /**
         * <p>Searches for profiles within a specific domain using one or more predefined
         * search keys (e.g., _fullName, _phone, _email, _account, etc.) and/or
         * custom-defined search keys. A search key is a data type pair that consists of a
         * <code>KeyName</code> and <code>Values</code> list.</p> <p>This operation
         * supports searching for profiles with a minimum of 1 key-value(s) pair and up to
         * 5 key-value(s) pairs using either <code>AND</code> or <code>OR</code>
         * logic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/SearchProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProfilesOutcome SearchProfiles(const Model::SearchProfilesRequest& request) const;


        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified Amazon Connect
         * Customer Profiles resource. Tags can help you organize and categorize your
         * resources. You can also use them to scope user permissions by granting a user
         * permission to access or change only resources with certain tag values. In
         * Connect Customer Profiles, domains, profile object types, and integrations can
         * be tagged.</p> <p>Tags don't have any semantic meaning to AWS and are
         * interpreted strictly as strings of characters.</p> <p>You can use the
         * TagResource action with a resource that already has tags. If you specify a new
         * tag key, this tag is appended to the list of tags associated with the resource.
         * If you specify a tag key that is already associated with the resource, the new
         * tag value that you specify replaces the previous value for that tag.</p> <p>You
         * can associate as many as 50 tags with a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes one or more tags from the specified Amazon Connect Customer Profiles
         * resource. In Connect Customer Profiles, domains, profile object types, and
         * integrations can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the properties of a domain, including creating or selecting a dead
         * letter queue or an encryption key.</p> <p>After a domain is created, the name
         * can’t be changed.</p> <p>Use this API or <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_CreateDomain.html">CreateDomain</a>
         * to enable <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">identity
         * resolution</a>: set <code>Matching</code> to true. </p> <p>To prevent
         * cross-service impersonation when you call this API, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/cross-service-confused-deputy-prevention.html">Cross-service
         * confused deputy prevention</a> for sample policies that you should apply. </p>
         * <p>To add or remove tags on an existing Domain, see <a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_TagResource.html">TagResource</a>/<a
         * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_UntagResource.html">UntagResource</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/UpdateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainOutcome UpdateDomain(const Model::UpdateDomainRequest& request) const;


        /**
         * <p>Updates the properties of a profile. The ProfileId is required for updating a
         * customer profile.</p> <p>When calling the UpdateProfile API, specifying an empty
         * string value means that any existing value will be removed. Not specifying a
         * string value means that any value already there will be kept.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/UpdateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProfileOutcome UpdateProfile(const Model::UpdateProfileRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CustomerProfilesEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const CustomerProfilesClientConfiguration& clientConfiguration);

      CustomerProfilesClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CustomerProfilesEndpointProviderBase> m_endpointProvider;
  };

} // namespace CustomerProfiles
} // namespace Aws

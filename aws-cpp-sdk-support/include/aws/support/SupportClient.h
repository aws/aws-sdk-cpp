/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support/SupportServiceClientModel.h>
#include <aws/support/SupportLegacyAsyncMacros.h>

namespace Aws
{
namespace Support
{
  /**
   * <fullname>Amazon Web Services Support</fullname> <p>The <i>Amazon Web Services
   * Support API Reference</i> is intended for programmers who need detailed
   * information about the Amazon Web Services Support operations and data types. You
   * can use the API to manage your support cases programmatically. The Amazon Web
   * Services Support API uses HTTP methods that return results in JSON format.</p>
   *  <ul> <li> <p>You must have a Business, Enterprise On-Ramp, or Enterprise
   * Support plan to use the Amazon Web Services Support API. </p> </li> <li> <p>If
   * you call the Amazon Web Services Support API from an account that does not have
   * a Business, Enterprise On-Ramp, or Enterprise Support plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul>  <p>The Amazon Web Services Support service
   * also exposes a set of <a
   * href="http://aws.amazon.com/premiumsupport/trustedadvisor/">Trusted Advisor</a>
   * features. You can retrieve a list of checks and their descriptions, get check
   * results, specify checks to refresh, and get the refresh status of checks.</p>
   * <p>The following list describes the Amazon Web Services Support case management
   * operations:</p> <ul> <li> <p> Service names, issue categories, and available
   * severity levels - The <a>DescribeServices</a> and <a>DescribeSeverityLevels</a>
   * operations return Amazon Web Services service names, service codes, service
   * categories, and problem severity levels. You use these values when you call the
   * <a>CreateCase</a> operation.</p> </li> <li> <p> Case creation, case details, and
   * case resolution - The <a>CreateCase</a>, <a>DescribeCases</a>,
   * <a>DescribeAttachment</a>, and <a>ResolveCase</a> operations create Amazon Web
   * Services Support cases, retrieve information about cases, and resolve cases.</p>
   * </li> <li> <p> Case communication - The <a>DescribeCommunications</a>,
   * <a>AddCommunicationToCase</a>, and <a>AddAttachmentsToSet</a> operations
   * retrieve and add communications and attachments to Amazon Web Services Support
   * cases.</p> </li> </ul> <p>The following list describes the operations available
   * from the Amazon Web Services Support service for Trusted Advisor:</p> <ul> <li>
   * <p> <a>DescribeTrustedAdvisorChecks</a> returns the list of checks that run
   * against your Amazon Web Services resources.</p> </li> <li> <p>Using the
   * <code>checkId</code> for a specific check returned by
   * <a>DescribeTrustedAdvisorChecks</a>, you can call
   * <a>DescribeTrustedAdvisorCheckResult</a> to obtain the results for the check
   * that you specified.</p> </li> <li> <p>
   * <a>DescribeTrustedAdvisorCheckSummaries</a> returns summarized results for one
   * or more Trusted Advisor checks.</p> </li> <li> <p>
   * <a>RefreshTrustedAdvisorCheck</a> requests that Trusted Advisor rerun a
   * specified check.</p> </li> <li> <p>
   * <a>DescribeTrustedAdvisorCheckRefreshStatuses</a> reports the refresh status of
   * one or more checks.</p> </li> </ul> <p>For authentication of requests, Amazon
   * Web Services Support uses <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4 Signing Process</a>.</p> <p>See <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/Welcome.html">About the
   * Amazon Web Services Support API</a> in the <i>Amazon Web Services Support User
   * Guide</i> for information about how to use this service to create and manage
   * your support cases, and how to call Trusted Advisor for results of checks on
   * your resources.</p>
   */
  class AWS_SUPPORT_API SupportClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupportClient(const Aws::Support::SupportClientConfiguration& clientConfiguration = Aws::Support::SupportClientConfiguration(),
                      std::shared_ptr<SupportEndpointProviderBase> endpointProvider = Aws::MakeShared<SupportEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupportClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<SupportEndpointProviderBase> endpointProvider = Aws::MakeShared<SupportEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Support::SupportClientConfiguration& clientConfiguration = Aws::Support::SupportClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SupportClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<SupportEndpointProviderBase> endpointProvider = Aws::MakeShared<SupportEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Support::SupportClientConfiguration& clientConfiguration = Aws::Support::SupportClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupportClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupportClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SupportClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SupportClient();


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
         * <p>Adds one or more attachments to an attachment set. </p> <p>An attachment set
         * is a temporary container for attachments that you add to a case or case
         * communication. The set is available for 1 hour after it's created. The
         * <code>expiryTime</code> returned in the response is when the set expires. </p>
         *  <ul> <li> <p>You must have a Business, Enterprise On-Ramp, or Enterprise
         * Support plan to use the Amazon Web Services Support API. </p> </li> <li> <p>If
         * you call the Amazon Web Services Support API from an account that does not have
         * a Business, Enterprise On-Ramp, or Enterprise Support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
         * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddAttachmentsToSet">AWS
         * API Reference</a></p>
         */
        virtual Model::AddAttachmentsToSetOutcome AddAttachmentsToSet(const Model::AddAttachmentsToSetRequest& request) const;


        /**
         * <p>Adds additional customer communication to an Amazon Web Services Support
         * case. Use the <code>caseId</code> parameter to identify the case to which to add
         * communication. You can list a set of email addresses to copy on the
         * communication by using the <code>ccEmailAddresses</code> parameter. The
         * <code>communicationBody</code> value contains the text of the communication.</p>
         *  <ul> <li> <p>You must have a Business, Enterprise On-Ramp, or Enterprise
         * Support plan to use the Amazon Web Services Support API. </p> </li> <li> <p>If
         * you call the Amazon Web Services Support API from an account that does not have
         * a Business, Enterprise On-Ramp, or Enterprise Support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
         * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddCommunicationToCase">AWS
         * API Reference</a></p>
         */
        virtual Model::AddCommunicationToCaseOutcome AddCommunicationToCase(const Model::AddCommunicationToCaseRequest& request) const;


        /**
         * <p>Creates a case in the Amazon Web Services Support Center. This operation is
         * similar to how you create a case in the Amazon Web Services Support Center <a
         * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
         * page.</p> <p>The Amazon Web Services Support API doesn't support requesting
         * service limit increases. You can submit a service limit increase in the
         * following ways: </p> <ul> <li> <p>Submit a request from the Amazon Web Services
         * Support Center <a
         * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
         * page.</p> </li> <li> <p>Use the Service Quotas <a
         * href="https://docs.aws.amazon.com/servicequotas/2019-06-24/apireference/API_RequestServiceQuotaIncrease.html">RequestServiceQuotaIncrease</a>
         * operation.</p> </li> </ul> <p>A successful <code>CreateCase</code> request
         * returns an Amazon Web Services Support case number. You can use the
         * <a>DescribeCases</a> operation and specify the case number to get existing
         * Amazon Web Services Support cases. After you create a case, use the
         * <a>AddCommunicationToCase</a> operation to add additional communication or
         * attachments to an existing case.</p> <p>The <code>caseId</code> is separate from
         * the <code>displayId</code> that appears in the <a
         * href="https://console.aws.amazon.com/support">Amazon Web Services Support
         * Center</a>. Use the <a>DescribeCases</a> operation to get the
         * <code>displayId</code>.</p>  <ul> <li> <p>You must have a Business,
         * Enterprise On-Ramp, or Enterprise Support plan to use the Amazon Web Services
         * Support API. </p> </li> <li> <p>If you call the Amazon Web Services Support API
         * from an account that does not have a Business, Enterprise On-Ramp, or Enterprise
         * Support plan, the <code>SubscriptionRequiredException</code> error message
         * appears. For information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
         * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/CreateCase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCaseOutcome CreateCase(const Model::CreateCaseRequest& request) const;


        /**
         * <p>Returns the attachment that has the specified ID. Attachments can include
         * screenshots, error logs, or other files that describe your issue. Attachment IDs
         * are generated by the case management system when you add an attachment to a case
         * or case communication. Attachment IDs are returned in the
         * <a>AttachmentDetails</a> objects that are returned by the
         * <a>DescribeCommunications</a> operation.</p>  <ul> <li> <p>You must have a
         * Business, Enterprise On-Ramp, or Enterprise Support plan to use the Amazon Web
         * Services Support API. </p> </li> <li> <p>If you call the Amazon Web Services
         * Support API from an account that does not have a Business, Enterprise On-Ramp,
         * or Enterprise Support plan, the <code>SubscriptionRequiredException</code> error
         * message appears. For information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
         * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAttachmentOutcome DescribeAttachment(const Model::DescribeAttachmentRequest& request) const;


        /**
         * <p>Returns a list of cases that you specify by passing one or more case IDs. You
         * can use the <code>afterTime</code> and <code>beforeTime</code> parameters to
         * filter the cases by date. You can set values for the
         * <code>includeResolvedCases</code> and <code>includeCommunications</code>
         * parameters to specify how much information to return.</p> <p>The response
         * returns the following in JSON format:</p> <ul> <li> <p>One or more <a
         * href="https://docs.aws.amazon.com/awssupport/latest/APIReference/API_CaseDetails.html">CaseDetails</a>
         * data types.</p> </li> <li> <p>One or more <code>nextToken</code> values, which
         * specify where to paginate the returned records represented by the
         * <code>CaseDetails</code> objects.</p> </li> </ul> <p>Case data is available for
         * 12 months after creation. If a case was created more than 12 months ago, a
         * request might return an error.</p>  <ul> <li> <p>You must have a Business,
         * Enterprise On-Ramp, or Enterprise Support plan to use the Amazon Web Services
         * Support API. </p> </li> <li> <p>If you call the Amazon Web Services Support API
         * from an account that does not have a Business, Enterprise On-Ramp, or Enterprise
         * Support plan, the <code>SubscriptionRequiredException</code> error message
         * appears. For information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
         * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeCases">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCasesOutcome DescribeCases(const Model::DescribeCasesRequest& request) const;


        /**
         * <p>Returns communications and attachments for one or more support cases. Use the
         * <code>afterTime</code> and <code>beforeTime</code> parameters to filter by date.
         * You can use the <code>caseId</code> parameter to restrict the results to a
         * specific case.</p> <p>Case data is available for 12 months after creation. If a
         * case was created more than 12 months ago, a request for data might cause an
         * error.</p> <p>You can use the <code>maxResults</code> and <code>nextToken</code>
         * parameters to control the pagination of the results. Set <code>maxResults</code>
         * to the number of cases that you want to display on each page, and use
         * <code>nextToken</code> to specify the resumption of pagination.</p>  <ul>
         * <li> <p>You must have a Business, Enterprise On-Ramp, or Enterprise Support plan
         * to use the Amazon Web Services Support API. </p> </li> <li> <p>If you call the
         * Amazon Web Services Support API from an account that does not have a Business,
         * Enterprise On-Ramp, or Enterprise Support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
         * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeCommunications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCommunicationsOutcome DescribeCommunications(const Model::DescribeCommunicationsRequest& request) const;


        /**
         * <p>Returns the current list of Amazon Web Services services and a list of
         * service categories for each service. You then use service names and categories
         * in your <a>CreateCase</a> requests. Each Amazon Web Services service has its own
         * set of categories.</p> <p>The service codes and category codes correspond to the
         * values that appear in the <b>Service</b> and <b>Category</b> lists on the Amazon
         * Web Services Support Center <a
         * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
         * page. The values in those fields don't necessarily match the service codes and
         * categories returned by the <code>DescribeServices</code> operation. Always use
         * the service codes and categories that the <code>DescribeServices</code>
         * operation returns, so that you have the most recent set of service and category
         * codes.</p>  <ul> <li> <p>You must have a Business, Enterprise On-Ramp, or
         * Enterprise Support plan to use the Amazon Web Services Support API. </p> </li>
         * <li> <p>If you call the Amazon Web Services Support API from an account that
         * does not have a Business, Enterprise On-Ramp, or Enterprise Support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
         * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeServices">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServicesOutcome DescribeServices(const Model::DescribeServicesRequest& request) const;


        /**
         * <p>Returns the list of severity levels that you can assign to a support case.
         * The severity level for a case is also a field in the <a>CaseDetails</a> data
         * type that you include for a <a>CreateCase</a> request.</p>  <ul> <li>
         * <p>You must have a Business, Enterprise On-Ramp, or Enterprise Support plan to
         * use the Amazon Web Services Support API. </p> </li> <li> <p>If you call the
         * Amazon Web Services Support API from an account that does not have a Business,
         * Enterprise On-Ramp, or Enterprise Support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
         * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeSeverityLevels">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSeverityLevelsOutcome DescribeSeverityLevels(const Model::DescribeSeverityLevelsRequest& request) const;


        /**
         * <p>Returns the refresh status of the Trusted Advisor checks that have the
         * specified check IDs. You can get the check IDs by calling the
         * <a>DescribeTrustedAdvisorChecks</a> operation.</p> <p>Some checks are refreshed
         * automatically, and you can't return their refresh statuses by using the
         * <code>DescribeTrustedAdvisorCheckRefreshStatuses</code> operation. If you call
         * this operation for these checks, you might see an
         * <code>InvalidParameterValue</code> error.</p>  <ul> <li> <p>You must have
         * a Business, Enterprise On-Ramp, or Enterprise Support plan to use the Amazon Web
         * Services Support API. </p> </li> <li> <p>If you call the Amazon Web Services
         * Support API from an account that does not have a Business, Enterprise On-Ramp,
         * or Enterprise Support plan, the <code>SubscriptionRequiredException</code> error
         * message appears. For information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
         * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckRefreshStatuses">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustedAdvisorCheckRefreshStatusesOutcome DescribeTrustedAdvisorCheckRefreshStatuses(const Model::DescribeTrustedAdvisorCheckRefreshStatusesRequest& request) const;


        /**
         * <p>Returns the results of the Trusted Advisor check that has the specified check
         * ID. You can get the check IDs by calling the <a>DescribeTrustedAdvisorChecks</a>
         * operation.</p> <p>The response contains a <a>TrustedAdvisorCheckResult</a>
         * object, which contains these three objects:</p> <ul> <li> <p>
         * <a>TrustedAdvisorCategorySpecificSummary</a> </p> </li> <li> <p>
         * <a>TrustedAdvisorResourceDetail</a> </p> </li> <li> <p>
         * <a>TrustedAdvisorResourcesSummary</a> </p> </li> </ul> <p>In addition, the
         * response contains these fields:</p> <ul> <li> <p> <b>status</b> - The alert
         * status of the check can be <code>ok</code> (green), <code>warning</code>
         * (yellow), <code>error</code> (red), or <code>not_available</code>.</p> </li>
         * <li> <p> <b>timestamp</b> - The time of the last refresh of the check.</p> </li>
         * <li> <p> <b>checkId</b> - The unique identifier for the check.</p> </li> </ul>
         *  <ul> <li> <p>You must have a Business, Enterprise On-Ramp, or Enterprise
         * Support plan to use the Amazon Web Services Support API. </p> </li> <li> <p>If
         * you call the Amazon Web Services Support API from an account that does not have
         * a Business, Enterprise On-Ramp, or Enterprise Support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
         * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckResult">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustedAdvisorCheckResultOutcome DescribeTrustedAdvisorCheckResult(const Model::DescribeTrustedAdvisorCheckResultRequest& request) const;


        /**
         * <p>Returns the results for the Trusted Advisor check summaries for the check IDs
         * that you specified. You can get the check IDs by calling the
         * <a>DescribeTrustedAdvisorChecks</a> operation.</p> <p>The response contains an
         * array of <a>TrustedAdvisorCheckSummary</a> objects.</p>  <ul> <li> <p>You
         * must have a Business, Enterprise On-Ramp, or Enterprise Support plan to use the
         * Amazon Web Services Support API. </p> </li> <li> <p>If you call the Amazon Web
         * Services Support API from an account that does not have a Business, Enterprise
         * On-Ramp, or Enterprise Support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
         * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustedAdvisorCheckSummariesOutcome DescribeTrustedAdvisorCheckSummaries(const Model::DescribeTrustedAdvisorCheckSummariesRequest& request) const;


        /**
         * <p>Returns information about all available Trusted Advisor checks, including the
         * name, ID, category, description, and metadata. You must specify a language code.
         * The Amazon Web Services Support API currently supports English ("en") and
         * Japanese ("ja"). The response contains a <a>TrustedAdvisorCheckDescription</a>
         * object for each check. You must set the Amazon Web Services Region to
         * us-east-1.</p>  <ul> <li> <p>You must have a Business, Enterprise On-Ramp,
         * or Enterprise Support plan to use the Amazon Web Services Support API. </p>
         * </li> <li> <p>If you call the Amazon Web Services Support API from an account
         * that does not have a Business, Enterprise On-Ramp, or Enterprise Support plan,
         * the <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
         * Support</a>.</p> </li> <li> <p>The names and descriptions for Trusted Advisor
         * checks are subject to change. We recommend that you specify the check ID in your
         * code to uniquely identify a check.</p> </li> </ul> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorChecks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustedAdvisorChecksOutcome DescribeTrustedAdvisorChecks(const Model::DescribeTrustedAdvisorChecksRequest& request) const;


        /**
         * <p>Refreshes the Trusted Advisor check that you specify using the check ID. You
         * can get the check IDs by calling the <a>DescribeTrustedAdvisorChecks</a>
         * operation.</p>  <p>Some checks are refreshed automatically. If you call
         * the <code>RefreshTrustedAdvisorCheck</code> operation to refresh them, you might
         * see the <code>InvalidParameterValue</code> error.</p>  <p>The response
         * contains a <a>TrustedAdvisorCheckRefreshStatus</a> object.</p>  <ul> <li>
         * <p>You must have a Business, Enterprise On-Ramp, or Enterprise Support plan to
         * use the Amazon Web Services Support API. </p> </li> <li> <p>If you call the
         * Amazon Web Services Support API from an account that does not have a Business,
         * Enterprise On-Ramp, or Enterprise Support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
         * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/RefreshTrustedAdvisorCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::RefreshTrustedAdvisorCheckOutcome RefreshTrustedAdvisorCheck(const Model::RefreshTrustedAdvisorCheckRequest& request) const;


        /**
         * <p>Resolves a support case. This operation takes a <code>caseId</code> and
         * returns the initial and final state of the case.</p>  <ul> <li> <p>You
         * must have a Business, Enterprise On-Ramp, or Enterprise Support plan to use the
         * Amazon Web Services Support API. </p> </li> <li> <p>If you call the Amazon Web
         * Services Support API from an account that does not have a Business, Enterprise
         * On-Ramp, or Enterprise Support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
         * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/ResolveCase">AWS
         * API Reference</a></p>
         */
        virtual Model::ResolveCaseOutcome ResolveCase(const Model::ResolveCaseRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SupportEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const SupportClientConfiguration& clientConfiguration);

      SupportClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SupportEndpointProviderBase> m_endpointProvider;
  };

} // namespace Support
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support/model/AddAttachmentsToSetResult.h>
#include <aws/support/model/AddCommunicationToCaseResult.h>
#include <aws/support/model/CreateCaseResult.h>
#include <aws/support/model/DescribeAttachmentResult.h>
#include <aws/support/model/DescribeCasesResult.h>
#include <aws/support/model/DescribeCommunicationsResult.h>
#include <aws/support/model/DescribeServicesResult.h>
#include <aws/support/model/DescribeSeverityLevelsResult.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckRefreshStatusesResult.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckResultResult.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckSummariesResult.h>
#include <aws/support/model/DescribeTrustedAdvisorChecksResult.h>
#include <aws/support/model/RefreshTrustedAdvisorCheckResult.h>
#include <aws/support/model/ResolveCaseResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Support
{

namespace Model
{
        class AddAttachmentsToSetRequest;
        class AddCommunicationToCaseRequest;
        class CreateCaseRequest;
        class DescribeAttachmentRequest;
        class DescribeCasesRequest;
        class DescribeCommunicationsRequest;
        class DescribeServicesRequest;
        class DescribeSeverityLevelsRequest;
        class DescribeTrustedAdvisorCheckRefreshStatusesRequest;
        class DescribeTrustedAdvisorCheckResultRequest;
        class DescribeTrustedAdvisorCheckSummariesRequest;
        class DescribeTrustedAdvisorChecksRequest;
        class RefreshTrustedAdvisorCheckRequest;
        class ResolveCaseRequest;

        typedef Aws::Utils::Outcome<AddAttachmentsToSetResult, SupportError> AddAttachmentsToSetOutcome;
        typedef Aws::Utils::Outcome<AddCommunicationToCaseResult, SupportError> AddCommunicationToCaseOutcome;
        typedef Aws::Utils::Outcome<CreateCaseResult, SupportError> CreateCaseOutcome;
        typedef Aws::Utils::Outcome<DescribeAttachmentResult, SupportError> DescribeAttachmentOutcome;
        typedef Aws::Utils::Outcome<DescribeCasesResult, SupportError> DescribeCasesOutcome;
        typedef Aws::Utils::Outcome<DescribeCommunicationsResult, SupportError> DescribeCommunicationsOutcome;
        typedef Aws::Utils::Outcome<DescribeServicesResult, SupportError> DescribeServicesOutcome;
        typedef Aws::Utils::Outcome<DescribeSeverityLevelsResult, SupportError> DescribeSeverityLevelsOutcome;
        typedef Aws::Utils::Outcome<DescribeTrustedAdvisorCheckRefreshStatusesResult, SupportError> DescribeTrustedAdvisorCheckRefreshStatusesOutcome;
        typedef Aws::Utils::Outcome<DescribeTrustedAdvisorCheckResultResult, SupportError> DescribeTrustedAdvisorCheckResultOutcome;
        typedef Aws::Utils::Outcome<DescribeTrustedAdvisorCheckSummariesResult, SupportError> DescribeTrustedAdvisorCheckSummariesOutcome;
        typedef Aws::Utils::Outcome<DescribeTrustedAdvisorChecksResult, SupportError> DescribeTrustedAdvisorChecksOutcome;
        typedef Aws::Utils::Outcome<RefreshTrustedAdvisorCheckResult, SupportError> RefreshTrustedAdvisorCheckOutcome;
        typedef Aws::Utils::Outcome<ResolveCaseResult, SupportError> ResolveCaseOutcome;

        typedef std::future<AddAttachmentsToSetOutcome> AddAttachmentsToSetOutcomeCallable;
        typedef std::future<AddCommunicationToCaseOutcome> AddCommunicationToCaseOutcomeCallable;
        typedef std::future<CreateCaseOutcome> CreateCaseOutcomeCallable;
        typedef std::future<DescribeAttachmentOutcome> DescribeAttachmentOutcomeCallable;
        typedef std::future<DescribeCasesOutcome> DescribeCasesOutcomeCallable;
        typedef std::future<DescribeCommunicationsOutcome> DescribeCommunicationsOutcomeCallable;
        typedef std::future<DescribeServicesOutcome> DescribeServicesOutcomeCallable;
        typedef std::future<DescribeSeverityLevelsOutcome> DescribeSeverityLevelsOutcomeCallable;
        typedef std::future<DescribeTrustedAdvisorCheckRefreshStatusesOutcome> DescribeTrustedAdvisorCheckRefreshStatusesOutcomeCallable;
        typedef std::future<DescribeTrustedAdvisorCheckResultOutcome> DescribeTrustedAdvisorCheckResultOutcomeCallable;
        typedef std::future<DescribeTrustedAdvisorCheckSummariesOutcome> DescribeTrustedAdvisorCheckSummariesOutcomeCallable;
        typedef std::future<DescribeTrustedAdvisorChecksOutcome> DescribeTrustedAdvisorChecksOutcomeCallable;
        typedef std::future<RefreshTrustedAdvisorCheckOutcome> RefreshTrustedAdvisorCheckOutcomeCallable;
        typedef std::future<ResolveCaseOutcome> ResolveCaseOutcomeCallable;
} // namespace Model

  class SupportClient;

    typedef std::function<void(const SupportClient*, const Model::AddAttachmentsToSetRequest&, const Model::AddAttachmentsToSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddAttachmentsToSetResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::AddCommunicationToCaseRequest&, const Model::AddCommunicationToCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddCommunicationToCaseResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::CreateCaseRequest&, const Model::CreateCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCaseResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeAttachmentRequest&, const Model::DescribeAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAttachmentResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeCasesRequest&, const Model::DescribeCasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCasesResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeCommunicationsRequest&, const Model::DescribeCommunicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCommunicationsResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeServicesRequest&, const Model::DescribeServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServicesResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeSeverityLevelsRequest&, const Model::DescribeSeverityLevelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSeverityLevelsResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeTrustedAdvisorCheckRefreshStatusesRequest&, const Model::DescribeTrustedAdvisorCheckRefreshStatusesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrustedAdvisorCheckRefreshStatusesResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeTrustedAdvisorCheckResultRequest&, const Model::DescribeTrustedAdvisorCheckResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrustedAdvisorCheckResultResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeTrustedAdvisorCheckSummariesRequest&, const Model::DescribeTrustedAdvisorCheckSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrustedAdvisorCheckSummariesResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::DescribeTrustedAdvisorChecksRequest&, const Model::DescribeTrustedAdvisorChecksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrustedAdvisorChecksResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::RefreshTrustedAdvisorCheckRequest&, const Model::RefreshTrustedAdvisorCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RefreshTrustedAdvisorCheckResponseReceivedHandler;
    typedef std::function<void(const SupportClient*, const Model::ResolveCaseRequest&, const Model::ResolveCaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResolveCaseResponseReceivedHandler;

  /**
   * <fullname>AWS Support</fullname> <p>The AWS Support API reference is intended
   * for programmers who need detailed information about the AWS Support operations
   * and data types. This service enables you to manage your AWS Support cases
   * programmatically. It uses HTTP methods that return results in JSON format.</p>
   *  <ul> <li> <p>You must have a Business or Enterprise support plan to use
   * the AWS Support API. </p> </li> <li> <p>If you call the AWS Support API from an
   * account that does not have a Business or Enterprise support plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
   *  <p>The AWS Support service also exposes a set of <a
   * href="http://aws.amazon.com/premiumsupport/trustedadvisor/">AWS Trusted
   * Advisor</a> features. You can retrieve a list of checks and their descriptions,
   * get check results, specify checks to refresh, and get the refresh status of
   * checks.</p> <p>The following list describes the AWS Support case management
   * operations:</p> <ul> <li> <p> <b>Service names, issue categories, and available
   * severity levels. </b>The <a>DescribeServices</a> and
   * <a>DescribeSeverityLevels</a> operations return AWS service names, service
   * codes, service categories, and problem severity levels. You use these values
   * when you call the <a>CreateCase</a> operation.</p> </li> <li> <p> <b>Case
   * creation, case details, and case resolution.</b> The <a>CreateCase</a>,
   * <a>DescribeCases</a>, <a>DescribeAttachment</a>, and <a>ResolveCase</a>
   * operations create AWS Support cases, retrieve information about cases, and
   * resolve cases.</p> </li> <li> <p> <b>Case communication.</b> The
   * <a>DescribeCommunications</a>, <a>AddCommunicationToCase</a>, and
   * <a>AddAttachmentsToSet</a> operations retrieve and add communications and
   * attachments to AWS Support cases.</p> </li> </ul> <p>The following list
   * describes the operations available from the AWS Support service for Trusted
   * Advisor:</p> <ul> <li> <p> <a>DescribeTrustedAdvisorChecks</a> returns the list
   * of checks that run against your AWS resources.</p> </li> <li> <p>Using the
   * <code>checkId</code> for a specific check returned by
   * <a>DescribeTrustedAdvisorChecks</a>, you can call
   * <a>DescribeTrustedAdvisorCheckResult</a> to obtain the results for the check
   * that you specified.</p> </li> <li> <p>
   * <a>DescribeTrustedAdvisorCheckSummaries</a> returns summarized results for one
   * or more Trusted Advisor checks.</p> </li> <li> <p>
   * <a>RefreshTrustedAdvisorCheck</a> requests that Trusted Advisor rerun a
   * specified check.</p> </li> <li> <p>
   * <a>DescribeTrustedAdvisorCheckRefreshStatuses</a> reports the refresh status of
   * one or more checks.</p> </li> </ul> <p>For authentication of requests, AWS
   * Support uses <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4 Signing Process</a>.</p> <p>See <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/Welcome.html">About the
   * AWS Support API</a> in the <i>AWS Support User Guide</i> for information about
   * how to use this service to create and manage your support cases, and how to call
   * Trusted Advisor for results of checks on your resources.</p>
   */
  class AWS_SUPPORT_API SupportClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupportClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupportClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SupportClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SupportClient();


        /**
         * <p>Adds one or more attachments to an attachment set. </p> <p>An attachment set
         * is a temporary container for attachments that you add to a case or case
         * communication. The set is available for 1 hour after it's created. The
         * <code>expiryTime</code> returned in the response is when the set expires. </p>
         *  <ul> <li> <p>You must have a Business or Enterprise support plan to use
         * the AWS Support API. </p> </li> <li> <p>If you call the AWS Support API from an
         * account that does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddAttachmentsToSet">AWS
         * API Reference</a></p>
         */
        virtual Model::AddAttachmentsToSetOutcome AddAttachmentsToSet(const Model::AddAttachmentsToSetRequest& request) const;

        /**
         * <p>Adds one or more attachments to an attachment set. </p> <p>An attachment set
         * is a temporary container for attachments that you add to a case or case
         * communication. The set is available for 1 hour after it's created. The
         * <code>expiryTime</code> returned in the response is when the set expires. </p>
         *  <ul> <li> <p>You must have a Business or Enterprise support plan to use
         * the AWS Support API. </p> </li> <li> <p>If you call the AWS Support API from an
         * account that does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddAttachmentsToSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddAttachmentsToSetOutcomeCallable AddAttachmentsToSetCallable(const Model::AddAttachmentsToSetRequest& request) const;

        /**
         * <p>Adds one or more attachments to an attachment set. </p> <p>An attachment set
         * is a temporary container for attachments that you add to a case or case
         * communication. The set is available for 1 hour after it's created. The
         * <code>expiryTime</code> returned in the response is when the set expires. </p>
         *  <ul> <li> <p>You must have a Business or Enterprise support plan to use
         * the AWS Support API. </p> </li> <li> <p>If you call the AWS Support API from an
         * account that does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddAttachmentsToSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddAttachmentsToSetAsync(const Model::AddAttachmentsToSetRequest& request, const AddAttachmentsToSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds additional customer communication to an AWS Support case. Use the
         * <code>caseId</code> parameter to identify the case to which to add
         * communication. You can list a set of email addresses to copy on the
         * communication by using the <code>ccEmailAddresses</code> parameter. The
         * <code>communicationBody</code> value contains the text of the communication.</p>
         *  <ul> <li> <p>You must have a Business or Enterprise support plan to use
         * the AWS Support API. </p> </li> <li> <p>If you call the AWS Support API from an
         * account that does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddCommunicationToCase">AWS
         * API Reference</a></p>
         */
        virtual Model::AddCommunicationToCaseOutcome AddCommunicationToCase(const Model::AddCommunicationToCaseRequest& request) const;

        /**
         * <p>Adds additional customer communication to an AWS Support case. Use the
         * <code>caseId</code> parameter to identify the case to which to add
         * communication. You can list a set of email addresses to copy on the
         * communication by using the <code>ccEmailAddresses</code> parameter. The
         * <code>communicationBody</code> value contains the text of the communication.</p>
         *  <ul> <li> <p>You must have a Business or Enterprise support plan to use
         * the AWS Support API. </p> </li> <li> <p>If you call the AWS Support API from an
         * account that does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddCommunicationToCase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddCommunicationToCaseOutcomeCallable AddCommunicationToCaseCallable(const Model::AddCommunicationToCaseRequest& request) const;

        /**
         * <p>Adds additional customer communication to an AWS Support case. Use the
         * <code>caseId</code> parameter to identify the case to which to add
         * communication. You can list a set of email addresses to copy on the
         * communication by using the <code>ccEmailAddresses</code> parameter. The
         * <code>communicationBody</code> value contains the text of the communication.</p>
         *  <ul> <li> <p>You must have a Business or Enterprise support plan to use
         * the AWS Support API. </p> </li> <li> <p>If you call the AWS Support API from an
         * account that does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddCommunicationToCase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddCommunicationToCaseAsync(const Model::AddCommunicationToCaseRequest& request, const AddCommunicationToCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a case in the AWS Support Center. This operation is similar to how
         * you create a case in the AWS Support Center <a
         * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
         * page.</p> <p>The AWS Support API doesn't support requesting service limit
         * increases. You can submit a service limit increase in the following ways: </p>
         * <ul> <li> <p>Submit a request from the AWS Support Center <a
         * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
         * page.</p> </li> <li> <p>Use the Service Quotas <a
         * href="https://docs.aws.amazon.com/servicequotas/2019-06-24/apireference/API_RequestServiceQuotaIncrease.html">RequestServiceQuotaIncrease</a>
         * operation.</p> </li> </ul> <p>A successful <code>CreateCase</code> request
         * returns an AWS Support case number. You can use the <a>DescribeCases</a>
         * operation and specify the case number to get existing AWS Support cases. After
         * you create a case, use the <a>AddCommunicationToCase</a> operation to add
         * additional communication or attachments to an existing case.</p> <p>The
         * <code>caseId</code> is separate from the <code>displayId</code> that appears in
         * the <a href="https://console.aws.amazon.com/support">AWS Support Center</a>. Use
         * the <a>DescribeCases</a> operation to get the <code>displayId</code>.</p> 
         * <ul> <li> <p>You must have a Business or Enterprise support plan to use the AWS
         * Support API. </p> </li> <li> <p>If you call the AWS Support API from an account
         * that does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/CreateCase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCaseOutcome CreateCase(const Model::CreateCaseRequest& request) const;

        /**
         * <p>Creates a case in the AWS Support Center. This operation is similar to how
         * you create a case in the AWS Support Center <a
         * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
         * page.</p> <p>The AWS Support API doesn't support requesting service limit
         * increases. You can submit a service limit increase in the following ways: </p>
         * <ul> <li> <p>Submit a request from the AWS Support Center <a
         * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
         * page.</p> </li> <li> <p>Use the Service Quotas <a
         * href="https://docs.aws.amazon.com/servicequotas/2019-06-24/apireference/API_RequestServiceQuotaIncrease.html">RequestServiceQuotaIncrease</a>
         * operation.</p> </li> </ul> <p>A successful <code>CreateCase</code> request
         * returns an AWS Support case number. You can use the <a>DescribeCases</a>
         * operation and specify the case number to get existing AWS Support cases. After
         * you create a case, use the <a>AddCommunicationToCase</a> operation to add
         * additional communication or attachments to an existing case.</p> <p>The
         * <code>caseId</code> is separate from the <code>displayId</code> that appears in
         * the <a href="https://console.aws.amazon.com/support">AWS Support Center</a>. Use
         * the <a>DescribeCases</a> operation to get the <code>displayId</code>.</p> 
         * <ul> <li> <p>You must have a Business or Enterprise support plan to use the AWS
         * Support API. </p> </li> <li> <p>If you call the AWS Support API from an account
         * that does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/CreateCase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCaseOutcomeCallable CreateCaseCallable(const Model::CreateCaseRequest& request) const;

        /**
         * <p>Creates a case in the AWS Support Center. This operation is similar to how
         * you create a case in the AWS Support Center <a
         * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
         * page.</p> <p>The AWS Support API doesn't support requesting service limit
         * increases. You can submit a service limit increase in the following ways: </p>
         * <ul> <li> <p>Submit a request from the AWS Support Center <a
         * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
         * page.</p> </li> <li> <p>Use the Service Quotas <a
         * href="https://docs.aws.amazon.com/servicequotas/2019-06-24/apireference/API_RequestServiceQuotaIncrease.html">RequestServiceQuotaIncrease</a>
         * operation.</p> </li> </ul> <p>A successful <code>CreateCase</code> request
         * returns an AWS Support case number. You can use the <a>DescribeCases</a>
         * operation and specify the case number to get existing AWS Support cases. After
         * you create a case, use the <a>AddCommunicationToCase</a> operation to add
         * additional communication or attachments to an existing case.</p> <p>The
         * <code>caseId</code> is separate from the <code>displayId</code> that appears in
         * the <a href="https://console.aws.amazon.com/support">AWS Support Center</a>. Use
         * the <a>DescribeCases</a> operation to get the <code>displayId</code>.</p> 
         * <ul> <li> <p>You must have a Business or Enterprise support plan to use the AWS
         * Support API. </p> </li> <li> <p>If you call the AWS Support API from an account
         * that does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/CreateCase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCaseAsync(const Model::CreateCaseRequest& request, const CreateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the attachment that has the specified ID. Attachments can include
         * screenshots, error logs, or other files that describe your issue. Attachment IDs
         * are generated by the case management system when you add an attachment to a case
         * or case communication. Attachment IDs are returned in the
         * <a>AttachmentDetails</a> objects that are returned by the
         * <a>DescribeCommunications</a> operation.</p>  <ul> <li> <p>You must have a
         * Business or Enterprise support plan to use the AWS Support API. </p> </li> <li>
         * <p>If you call the AWS Support API from an account that does not have a Business
         * or Enterprise support plan, the <code>SubscriptionRequiredException</code> error
         * message appears. For information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAttachmentOutcome DescribeAttachment(const Model::DescribeAttachmentRequest& request) const;

        /**
         * <p>Returns the attachment that has the specified ID. Attachments can include
         * screenshots, error logs, or other files that describe your issue. Attachment IDs
         * are generated by the case management system when you add an attachment to a case
         * or case communication. Attachment IDs are returned in the
         * <a>AttachmentDetails</a> objects that are returned by the
         * <a>DescribeCommunications</a> operation.</p>  <ul> <li> <p>You must have a
         * Business or Enterprise support plan to use the AWS Support API. </p> </li> <li>
         * <p>If you call the AWS Support API from an account that does not have a Business
         * or Enterprise support plan, the <code>SubscriptionRequiredException</code> error
         * message appears. For information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeAttachment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAttachmentOutcomeCallable DescribeAttachmentCallable(const Model::DescribeAttachmentRequest& request) const;

        /**
         * <p>Returns the attachment that has the specified ID. Attachments can include
         * screenshots, error logs, or other files that describe your issue. Attachment IDs
         * are generated by the case management system when you add an attachment to a case
         * or case communication. Attachment IDs are returned in the
         * <a>AttachmentDetails</a> objects that are returned by the
         * <a>DescribeCommunications</a> operation.</p>  <ul> <li> <p>You must have a
         * Business or Enterprise support plan to use the AWS Support API. </p> </li> <li>
         * <p>If you call the AWS Support API from an account that does not have a Business
         * or Enterprise support plan, the <code>SubscriptionRequiredException</code> error
         * message appears. For information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeAttachment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAttachmentAsync(const Model::DescribeAttachmentRequest& request, const DescribeAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * request might return an error.</p>  <ul> <li> <p>You must have a Business
         * or Enterprise support plan to use the AWS Support API. </p> </li> <li> <p>If you
         * call the AWS Support API from an account that does not have a Business or
         * Enterprise support plan, the <code>SubscriptionRequiredException</code> error
         * message appears. For information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeCases">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCasesOutcome DescribeCases(const Model::DescribeCasesRequest& request) const;

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
         * request might return an error.</p>  <ul> <li> <p>You must have a Business
         * or Enterprise support plan to use the AWS Support API. </p> </li> <li> <p>If you
         * call the AWS Support API from an account that does not have a Business or
         * Enterprise support plan, the <code>SubscriptionRequiredException</code> error
         * message appears. For information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeCases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCasesOutcomeCallable DescribeCasesCallable(const Model::DescribeCasesRequest& request) const;

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
         * request might return an error.</p>  <ul> <li> <p>You must have a Business
         * or Enterprise support plan to use the AWS Support API. </p> </li> <li> <p>If you
         * call the AWS Support API from an account that does not have a Business or
         * Enterprise support plan, the <code>SubscriptionRequiredException</code> error
         * message appears. For information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeCases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCasesAsync(const Model::DescribeCasesRequest& request, const DescribeCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <li> <p>You must have a Business or Enterprise support plan to use the AWS
         * Support API. </p> </li> <li> <p>If you call the AWS Support API from an account
         * that does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeCommunications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCommunicationsOutcome DescribeCommunications(const Model::DescribeCommunicationsRequest& request) const;

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
         * <li> <p>You must have a Business or Enterprise support plan to use the AWS
         * Support API. </p> </li> <li> <p>If you call the AWS Support API from an account
         * that does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeCommunications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCommunicationsOutcomeCallable DescribeCommunicationsCallable(const Model::DescribeCommunicationsRequest& request) const;

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
         * <li> <p>You must have a Business or Enterprise support plan to use the AWS
         * Support API. </p> </li> <li> <p>If you call the AWS Support API from an account
         * that does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeCommunications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCommunicationsAsync(const Model::DescribeCommunicationsRequest& request, const DescribeCommunicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current list of AWS services and a list of service categories for
         * each service. You then use service names and categories in your
         * <a>CreateCase</a> requests. Each AWS service has its own set of categories.</p>
         * <p>The service codes and category codes correspond to the values that appear in
         * the <b>Service</b> and <b>Category</b> lists on the AWS Support Center <a
         * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
         * page. The values in those fields don't necessarily match the service codes and
         * categories returned by the <code>DescribeServices</code> operation. Always use
         * the service codes and categories that the <code>DescribeServices</code>
         * operation returns, so that you have the most recent set of service and category
         * codes.</p>  <ul> <li> <p>You must have a Business or Enterprise support
         * plan to use the AWS Support API. </p> </li> <li> <p>If you call the AWS Support
         * API from an account that does not have a Business or Enterprise support plan,
         * the <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeServices">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServicesOutcome DescribeServices(const Model::DescribeServicesRequest& request) const;

        /**
         * <p>Returns the current list of AWS services and a list of service categories for
         * each service. You then use service names and categories in your
         * <a>CreateCase</a> requests. Each AWS service has its own set of categories.</p>
         * <p>The service codes and category codes correspond to the values that appear in
         * the <b>Service</b> and <b>Category</b> lists on the AWS Support Center <a
         * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
         * page. The values in those fields don't necessarily match the service codes and
         * categories returned by the <code>DescribeServices</code> operation. Always use
         * the service codes and categories that the <code>DescribeServices</code>
         * operation returns, so that you have the most recent set of service and category
         * codes.</p>  <ul> <li> <p>You must have a Business or Enterprise support
         * plan to use the AWS Support API. </p> </li> <li> <p>If you call the AWS Support
         * API from an account that does not have a Business or Enterprise support plan,
         * the <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeServices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServicesOutcomeCallable DescribeServicesCallable(const Model::DescribeServicesRequest& request) const;

        /**
         * <p>Returns the current list of AWS services and a list of service categories for
         * each service. You then use service names and categories in your
         * <a>CreateCase</a> requests. Each AWS service has its own set of categories.</p>
         * <p>The service codes and category codes correspond to the values that appear in
         * the <b>Service</b> and <b>Category</b> lists on the AWS Support Center <a
         * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
         * page. The values in those fields don't necessarily match the service codes and
         * categories returned by the <code>DescribeServices</code> operation. Always use
         * the service codes and categories that the <code>DescribeServices</code>
         * operation returns, so that you have the most recent set of service and category
         * codes.</p>  <ul> <li> <p>You must have a Business or Enterprise support
         * plan to use the AWS Support API. </p> </li> <li> <p>If you call the AWS Support
         * API from an account that does not have a Business or Enterprise support plan,
         * the <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeServices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServicesAsync(const Model::DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of severity levels that you can assign to an AWS Support
         * case. The severity level for a case is also a field in the <a>CaseDetails</a>
         * data type that you include for a <a>CreateCase</a> request.</p>  <ul> <li>
         * <p>You must have a Business or Enterprise support plan to use the AWS Support
         * API. </p> </li> <li> <p>If you call the AWS Support API from an account that
         * does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeSeverityLevels">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSeverityLevelsOutcome DescribeSeverityLevels(const Model::DescribeSeverityLevelsRequest& request) const;

        /**
         * <p>Returns the list of severity levels that you can assign to an AWS Support
         * case. The severity level for a case is also a field in the <a>CaseDetails</a>
         * data type that you include for a <a>CreateCase</a> request.</p>  <ul> <li>
         * <p>You must have a Business or Enterprise support plan to use the AWS Support
         * API. </p> </li> <li> <p>If you call the AWS Support API from an account that
         * does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeSeverityLevels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSeverityLevelsOutcomeCallable DescribeSeverityLevelsCallable(const Model::DescribeSeverityLevelsRequest& request) const;

        /**
         * <p>Returns the list of severity levels that you can assign to an AWS Support
         * case. The severity level for a case is also a field in the <a>CaseDetails</a>
         * data type that you include for a <a>CreateCase</a> request.</p>  <ul> <li>
         * <p>You must have a Business or Enterprise support plan to use the AWS Support
         * API. </p> </li> <li> <p>If you call the AWS Support API from an account that
         * does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeSeverityLevels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSeverityLevelsAsync(const Model::DescribeSeverityLevelsRequest& request, const DescribeSeverityLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the refresh status of the AWS Trusted Advisor checks that have the
         * specified check IDs. You can get the check IDs by calling the
         * <a>DescribeTrustedAdvisorChecks</a> operation.</p> <p>Some checks are refreshed
         * automatically, and you can't return their refresh statuses by using the
         * <code>DescribeTrustedAdvisorCheckRefreshStatuses</code> operation. If you call
         * this operation for these checks, you might see an
         * <code>InvalidParameterValue</code> error.</p>  <ul> <li> <p>You must have
         * a Business or Enterprise support plan to use the AWS Support API. </p> </li>
         * <li> <p>If you call the AWS Support API from an account that does not have a
         * Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckRefreshStatuses">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustedAdvisorCheckRefreshStatusesOutcome DescribeTrustedAdvisorCheckRefreshStatuses(const Model::DescribeTrustedAdvisorCheckRefreshStatusesRequest& request) const;

        /**
         * <p>Returns the refresh status of the AWS Trusted Advisor checks that have the
         * specified check IDs. You can get the check IDs by calling the
         * <a>DescribeTrustedAdvisorChecks</a> operation.</p> <p>Some checks are refreshed
         * automatically, and you can't return their refresh statuses by using the
         * <code>DescribeTrustedAdvisorCheckRefreshStatuses</code> operation. If you call
         * this operation for these checks, you might see an
         * <code>InvalidParameterValue</code> error.</p>  <ul> <li> <p>You must have
         * a Business or Enterprise support plan to use the AWS Support API. </p> </li>
         * <li> <p>If you call the AWS Support API from an account that does not have a
         * Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckRefreshStatuses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrustedAdvisorCheckRefreshStatusesOutcomeCallable DescribeTrustedAdvisorCheckRefreshStatusesCallable(const Model::DescribeTrustedAdvisorCheckRefreshStatusesRequest& request) const;

        /**
         * <p>Returns the refresh status of the AWS Trusted Advisor checks that have the
         * specified check IDs. You can get the check IDs by calling the
         * <a>DescribeTrustedAdvisorChecks</a> operation.</p> <p>Some checks are refreshed
         * automatically, and you can't return their refresh statuses by using the
         * <code>DescribeTrustedAdvisorCheckRefreshStatuses</code> operation. If you call
         * this operation for these checks, you might see an
         * <code>InvalidParameterValue</code> error.</p>  <ul> <li> <p>You must have
         * a Business or Enterprise support plan to use the AWS Support API. </p> </li>
         * <li> <p>If you call the AWS Support API from an account that does not have a
         * Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckRefreshStatuses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrustedAdvisorCheckRefreshStatusesAsync(const Model::DescribeTrustedAdvisorCheckRefreshStatusesRequest& request, const DescribeTrustedAdvisorCheckRefreshStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the results of the AWS Trusted Advisor check that has the specified
         * check ID. You can get the check IDs by calling the
         * <a>DescribeTrustedAdvisorChecks</a> operation.</p> <p>The response contains a
         * <a>TrustedAdvisorCheckResult</a> object, which contains these three objects:</p>
         * <ul> <li> <p> <a>TrustedAdvisorCategorySpecificSummary</a> </p> </li> <li> <p>
         * <a>TrustedAdvisorResourceDetail</a> </p> </li> <li> <p>
         * <a>TrustedAdvisorResourcesSummary</a> </p> </li> </ul> <p>In addition, the
         * response contains these fields:</p> <ul> <li> <p> <b>status</b> - The alert
         * status of the check: "ok" (green), "warning" (yellow), "error" (red), or
         * "not_available".</p> </li> <li> <p> <b>timestamp</b> - The time of the last
         * refresh of the check.</p> </li> <li> <p> <b>checkId</b> - The unique identifier
         * for the check.</p> </li> </ul>  <ul> <li> <p>You must have a Business or
         * Enterprise support plan to use the AWS Support API. </p> </li> <li> <p>If you
         * call the AWS Support API from an account that does not have a Business or
         * Enterprise support plan, the <code>SubscriptionRequiredException</code> error
         * message appears. For information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckResult">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustedAdvisorCheckResultOutcome DescribeTrustedAdvisorCheckResult(const Model::DescribeTrustedAdvisorCheckResultRequest& request) const;

        /**
         * <p>Returns the results of the AWS Trusted Advisor check that has the specified
         * check ID. You can get the check IDs by calling the
         * <a>DescribeTrustedAdvisorChecks</a> operation.</p> <p>The response contains a
         * <a>TrustedAdvisorCheckResult</a> object, which contains these three objects:</p>
         * <ul> <li> <p> <a>TrustedAdvisorCategorySpecificSummary</a> </p> </li> <li> <p>
         * <a>TrustedAdvisorResourceDetail</a> </p> </li> <li> <p>
         * <a>TrustedAdvisorResourcesSummary</a> </p> </li> </ul> <p>In addition, the
         * response contains these fields:</p> <ul> <li> <p> <b>status</b> - The alert
         * status of the check: "ok" (green), "warning" (yellow), "error" (red), or
         * "not_available".</p> </li> <li> <p> <b>timestamp</b> - The time of the last
         * refresh of the check.</p> </li> <li> <p> <b>checkId</b> - The unique identifier
         * for the check.</p> </li> </ul>  <ul> <li> <p>You must have a Business or
         * Enterprise support plan to use the AWS Support API. </p> </li> <li> <p>If you
         * call the AWS Support API from an account that does not have a Business or
         * Enterprise support plan, the <code>SubscriptionRequiredException</code> error
         * message appears. For information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckResult">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrustedAdvisorCheckResultOutcomeCallable DescribeTrustedAdvisorCheckResultCallable(const Model::DescribeTrustedAdvisorCheckResultRequest& request) const;

        /**
         * <p>Returns the results of the AWS Trusted Advisor check that has the specified
         * check ID. You can get the check IDs by calling the
         * <a>DescribeTrustedAdvisorChecks</a> operation.</p> <p>The response contains a
         * <a>TrustedAdvisorCheckResult</a> object, which contains these three objects:</p>
         * <ul> <li> <p> <a>TrustedAdvisorCategorySpecificSummary</a> </p> </li> <li> <p>
         * <a>TrustedAdvisorResourceDetail</a> </p> </li> <li> <p>
         * <a>TrustedAdvisorResourcesSummary</a> </p> </li> </ul> <p>In addition, the
         * response contains these fields:</p> <ul> <li> <p> <b>status</b> - The alert
         * status of the check: "ok" (green), "warning" (yellow), "error" (red), or
         * "not_available".</p> </li> <li> <p> <b>timestamp</b> - The time of the last
         * refresh of the check.</p> </li> <li> <p> <b>checkId</b> - The unique identifier
         * for the check.</p> </li> </ul>  <ul> <li> <p>You must have a Business or
         * Enterprise support plan to use the AWS Support API. </p> </li> <li> <p>If you
         * call the AWS Support API from an account that does not have a Business or
         * Enterprise support plan, the <code>SubscriptionRequiredException</code> error
         * message appears. For information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckResult">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrustedAdvisorCheckResultAsync(const Model::DescribeTrustedAdvisorCheckResultRequest& request, const DescribeTrustedAdvisorCheckResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the results for the AWS Trusted Advisor check summaries for the check
         * IDs that you specified. You can get the check IDs by calling the
         * <a>DescribeTrustedAdvisorChecks</a> operation.</p> <p>The response contains an
         * array of <a>TrustedAdvisorCheckSummary</a> objects.</p>  <ul> <li> <p>You
         * must have a Business or Enterprise support plan to use the AWS Support API. </p>
         * </li> <li> <p>If you call the AWS Support API from an account that does not have
         * a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustedAdvisorCheckSummariesOutcome DescribeTrustedAdvisorCheckSummaries(const Model::DescribeTrustedAdvisorCheckSummariesRequest& request) const;

        /**
         * <p>Returns the results for the AWS Trusted Advisor check summaries for the check
         * IDs that you specified. You can get the check IDs by calling the
         * <a>DescribeTrustedAdvisorChecks</a> operation.</p> <p>The response contains an
         * array of <a>TrustedAdvisorCheckSummary</a> objects.</p>  <ul> <li> <p>You
         * must have a Business or Enterprise support plan to use the AWS Support API. </p>
         * </li> <li> <p>If you call the AWS Support API from an account that does not have
         * a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckSummaries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrustedAdvisorCheckSummariesOutcomeCallable DescribeTrustedAdvisorCheckSummariesCallable(const Model::DescribeTrustedAdvisorCheckSummariesRequest& request) const;

        /**
         * <p>Returns the results for the AWS Trusted Advisor check summaries for the check
         * IDs that you specified. You can get the check IDs by calling the
         * <a>DescribeTrustedAdvisorChecks</a> operation.</p> <p>The response contains an
         * array of <a>TrustedAdvisorCheckSummary</a> objects.</p>  <ul> <li> <p>You
         * must have a Business or Enterprise support plan to use the AWS Support API. </p>
         * </li> <li> <p>If you call the AWS Support API from an account that does not have
         * a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckSummaries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrustedAdvisorCheckSummariesAsync(const Model::DescribeTrustedAdvisorCheckSummariesRequest& request, const DescribeTrustedAdvisorCheckSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all available AWS Trusted Advisor checks, including
         * the name, ID, category, description, and metadata. You must specify a language
         * code. The AWS Support API currently supports English ("en") and Japanese ("ja").
         * The response contains a <a>TrustedAdvisorCheckDescription</a> object for each
         * check. You must set the AWS Region to us-east-1.</p>  <ul> <li> <p>You
         * must have a Business or Enterprise support plan to use the AWS Support API. </p>
         * </li> <li> <p>If you call the AWS Support API from an account that does not have
         * a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorChecks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustedAdvisorChecksOutcome DescribeTrustedAdvisorChecks(const Model::DescribeTrustedAdvisorChecksRequest& request) const;

        /**
         * <p>Returns information about all available AWS Trusted Advisor checks, including
         * the name, ID, category, description, and metadata. You must specify a language
         * code. The AWS Support API currently supports English ("en") and Japanese ("ja").
         * The response contains a <a>TrustedAdvisorCheckDescription</a> object for each
         * check. You must set the AWS Region to us-east-1.</p>  <ul> <li> <p>You
         * must have a Business or Enterprise support plan to use the AWS Support API. </p>
         * </li> <li> <p>If you call the AWS Support API from an account that does not have
         * a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorChecks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrustedAdvisorChecksOutcomeCallable DescribeTrustedAdvisorChecksCallable(const Model::DescribeTrustedAdvisorChecksRequest& request) const;

        /**
         * <p>Returns information about all available AWS Trusted Advisor checks, including
         * the name, ID, category, description, and metadata. You must specify a language
         * code. The AWS Support API currently supports English ("en") and Japanese ("ja").
         * The response contains a <a>TrustedAdvisorCheckDescription</a> object for each
         * check. You must set the AWS Region to us-east-1.</p>  <ul> <li> <p>You
         * must have a Business or Enterprise support plan to use the AWS Support API. </p>
         * </li> <li> <p>If you call the AWS Support API from an account that does not have
         * a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorChecks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrustedAdvisorChecksAsync(const Model::DescribeTrustedAdvisorChecksRequest& request, const DescribeTrustedAdvisorChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Refreshes the AWS Trusted Advisor check that you specify using the check ID.
         * You can get the check IDs by calling the <a>DescribeTrustedAdvisorChecks</a>
         * operation.</p>  <p>Some checks are refreshed automatically. If you call
         * the <code>RefreshTrustedAdvisorCheck</code> operation to refresh them, you might
         * see the <code>InvalidParameterValue</code> error.</p>  <p>The response
         * contains a <a>TrustedAdvisorCheckRefreshStatus</a> object.</p>  <ul> <li>
         * <p>You must have a Business or Enterprise support plan to use the AWS Support
         * API. </p> </li> <li> <p>If you call the AWS Support API from an account that
         * does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/RefreshTrustedAdvisorCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::RefreshTrustedAdvisorCheckOutcome RefreshTrustedAdvisorCheck(const Model::RefreshTrustedAdvisorCheckRequest& request) const;

        /**
         * <p>Refreshes the AWS Trusted Advisor check that you specify using the check ID.
         * You can get the check IDs by calling the <a>DescribeTrustedAdvisorChecks</a>
         * operation.</p>  <p>Some checks are refreshed automatically. If you call
         * the <code>RefreshTrustedAdvisorCheck</code> operation to refresh them, you might
         * see the <code>InvalidParameterValue</code> error.</p>  <p>The response
         * contains a <a>TrustedAdvisorCheckRefreshStatus</a> object.</p>  <ul> <li>
         * <p>You must have a Business or Enterprise support plan to use the AWS Support
         * API. </p> </li> <li> <p>If you call the AWS Support API from an account that
         * does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/RefreshTrustedAdvisorCheck">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RefreshTrustedAdvisorCheckOutcomeCallable RefreshTrustedAdvisorCheckCallable(const Model::RefreshTrustedAdvisorCheckRequest& request) const;

        /**
         * <p>Refreshes the AWS Trusted Advisor check that you specify using the check ID.
         * You can get the check IDs by calling the <a>DescribeTrustedAdvisorChecks</a>
         * operation.</p>  <p>Some checks are refreshed automatically. If you call
         * the <code>RefreshTrustedAdvisorCheck</code> operation to refresh them, you might
         * see the <code>InvalidParameterValue</code> error.</p>  <p>The response
         * contains a <a>TrustedAdvisorCheckRefreshStatus</a> object.</p>  <ul> <li>
         * <p>You must have a Business or Enterprise support plan to use the AWS Support
         * API. </p> </li> <li> <p>If you call the AWS Support API from an account that
         * does not have a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/RefreshTrustedAdvisorCheck">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RefreshTrustedAdvisorCheckAsync(const Model::RefreshTrustedAdvisorCheckRequest& request, const RefreshTrustedAdvisorCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resolves a support case. This operation takes a <code>caseId</code> and
         * returns the initial and final state of the case.</p>  <ul> <li> <p>You
         * must have a Business or Enterprise support plan to use the AWS Support API. </p>
         * </li> <li> <p>If you call the AWS Support API from an account that does not have
         * a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/ResolveCase">AWS
         * API Reference</a></p>
         */
        virtual Model::ResolveCaseOutcome ResolveCase(const Model::ResolveCaseRequest& request) const;

        /**
         * <p>Resolves a support case. This operation takes a <code>caseId</code> and
         * returns the initial and final state of the case.</p>  <ul> <li> <p>You
         * must have a Business or Enterprise support plan to use the AWS Support API. </p>
         * </li> <li> <p>If you call the AWS Support API from an account that does not have
         * a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/ResolveCase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResolveCaseOutcomeCallable ResolveCaseCallable(const Model::ResolveCaseRequest& request) const;

        /**
         * <p>Resolves a support case. This operation takes a <code>caseId</code> and
         * returns the initial and final state of the case.</p>  <ul> <li> <p>You
         * must have a Business or Enterprise support plan to use the AWS Support API. </p>
         * </li> <li> <p>If you call the AWS Support API from an account that does not have
         * a Business or Enterprise support plan, the
         * <code>SubscriptionRequiredException</code> error message appears. For
         * information about changing your support plan, see <a
         * href="http://aws.amazon.com/premiumsupport/">AWS Support</a>.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/ResolveCase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResolveCaseAsync(const Model::ResolveCaseRequest& request, const ResolveCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddAttachmentsToSetAsyncHelper(const Model::AddAttachmentsToSetRequest& request, const AddAttachmentsToSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddCommunicationToCaseAsyncHelper(const Model::AddCommunicationToCaseRequest& request, const AddCommunicationToCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCaseAsyncHelper(const Model::CreateCaseRequest& request, const CreateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAttachmentAsyncHelper(const Model::DescribeAttachmentRequest& request, const DescribeAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCasesAsyncHelper(const Model::DescribeCasesRequest& request, const DescribeCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCommunicationsAsyncHelper(const Model::DescribeCommunicationsRequest& request, const DescribeCommunicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeServicesAsyncHelper(const Model::DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSeverityLevelsAsyncHelper(const Model::DescribeSeverityLevelsRequest& request, const DescribeSeverityLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrustedAdvisorCheckRefreshStatusesAsyncHelper(const Model::DescribeTrustedAdvisorCheckRefreshStatusesRequest& request, const DescribeTrustedAdvisorCheckRefreshStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrustedAdvisorCheckResultAsyncHelper(const Model::DescribeTrustedAdvisorCheckResultRequest& request, const DescribeTrustedAdvisorCheckResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrustedAdvisorCheckSummariesAsyncHelper(const Model::DescribeTrustedAdvisorCheckSummariesRequest& request, const DescribeTrustedAdvisorCheckSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrustedAdvisorChecksAsyncHelper(const Model::DescribeTrustedAdvisorChecksRequest& request, const DescribeTrustedAdvisorChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RefreshTrustedAdvisorCheckAsyncHelper(const Model::RefreshTrustedAdvisorCheckRequest& request, const RefreshTrustedAdvisorCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResolveCaseAsyncHelper(const Model::ResolveCaseRequest& request, const ResolveCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Support
} // namespace Aws

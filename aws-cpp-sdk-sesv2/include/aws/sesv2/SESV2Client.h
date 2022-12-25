/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/SESV2ServiceClientModel.h>

namespace Aws
{
namespace SESV2
{
  /**
   * <fullname>Amazon SES API v2</fullname> <p> <a
   * href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services
   * service that you can use to send email messages to your customers.</p> <p>If
   * you're new to Amazon SES API v2, you might find it helpful to review the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple
   * Email Service Developer Guide</a>. The <i>Amazon SES Developer Guide</i>
   * provides information and code samples that demonstrate how to use Amazon SES API
   * v2 features programmatically.</p>
   */
  class AWS_SESV2_API SESV2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SESV2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESV2Client(const Aws::SESV2::SESV2ClientConfiguration& clientConfiguration = Aws::SESV2::SESV2ClientConfiguration(),
                    std::shared_ptr<SESV2EndpointProviderBase> endpointProvider = Aws::MakeShared<SESV2EndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESV2Client(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<SESV2EndpointProviderBase> endpointProvider = Aws::MakeShared<SESV2EndpointProvider>(ALLOCATION_TAG),
                    const Aws::SESV2::SESV2ClientConfiguration& clientConfiguration = Aws::SESV2::SESV2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SESV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<SESV2EndpointProviderBase> endpointProvider = Aws::MakeShared<SESV2EndpointProvider>(ALLOCATION_TAG),
                    const Aws::SESV2::SESV2ClientConfiguration& clientConfiguration = Aws::SESV2::SESV2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESV2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESV2Client(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SESV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SESV2Client();

        /**
         * <p>Retrieves batches of metric data collected based on your sending
         * activity.</p> <p>You can execute this operation no more than 16 times per
         * second, and with at most 160 queries from the batches per second
         * (cumulative).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/BatchGetMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetMetricDataOutcome BatchGetMetricData(const Model::BatchGetMetricDataRequest& request) const;

        /**
         * A Callable wrapper for BatchGetMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetMetricDataOutcomeCallable BatchGetMetricDataCallable(const Model::BatchGetMetricDataRequest& request) const;

        /**
         * An Async wrapper for BatchGetMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetMetricDataAsync(const Model::BatchGetMetricDataRequest& request, const BatchGetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a configuration set. <i>Configuration sets</i> are groups of rules
         * that you can apply to the emails that you send. You apply a configuration set to
         * an email by specifying the name of the configuration set when you call the
         * Amazon SES API v2. When you apply a configuration set to an email, all of the
         * rules in that configuration set are applied to the email. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetOutcome CreateConfigurationSet(const Model::CreateConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationSetOutcomeCallable CreateConfigurationSetCallable(const Model::CreateConfigurationSetRequest& request) const;

        /**
         * An Async wrapper for CreateConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationSetAsync(const Model::CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create an event destination. <i>Events</i> include message sends, deliveries,
         * opens, clicks, bounces, and complaints. <i>Event destinations</i> are places
         * that you can send information about these events to. For example, you can send
         * event data to Amazon SNS to receive notifications when you receive bounces or
         * complaints, or you can use Amazon Kinesis Data Firehose to stream data to Amazon
         * S3 for long-term storage.</p> <p>A single configuration set can include more
         * than one event destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetEventDestinationOutcome CreateConfigurationSetEventDestination(const Model::CreateConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationSetEventDestinationOutcomeCallable CreateConfigurationSetEventDestinationCallable(const Model::CreateConfigurationSetEventDestinationRequest& request) const;

        /**
         * An Async wrapper for CreateConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationSetEventDestinationAsync(const Model::CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a contact, which is an end-user who is receiving the email, and adds
         * them to a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactOutcome CreateContact(const Model::CreateContactRequest& request) const;

        /**
         * A Callable wrapper for CreateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContactOutcomeCallable CreateContactCallable(const Model::CreateContactRequest& request) const;

        /**
         * An Async wrapper for CreateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContactAsync(const Model::CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateContactList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactListOutcome CreateContactList(const Model::CreateContactListRequest& request) const;

        /**
         * A Callable wrapper for CreateContactList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContactListOutcomeCallable CreateContactListCallable(const Model::CreateContactListRequest& request) const;

        /**
         * An Async wrapper for CreateContactList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContactListAsync(const Model::CreateContactListRequest& request, const CreateContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new custom verification email template.</p> <p>For more information
         * about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * custom verification email templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomVerificationEmailTemplateOutcome CreateCustomVerificationEmailTemplate(const Model::CreateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomVerificationEmailTemplateOutcomeCallable CreateCustomVerificationEmailTemplateCallable(const Model::CreateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomVerificationEmailTemplateAsync(const Model::CreateCustomVerificationEmailTemplateRequest& request, const CreateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new pool of dedicated IP addresses. A pool can include one or more
         * dedicated IP addresses that are associated with your Amazon Web Services
         * account. You can associate a pool with a configuration set. When you send an
         * email that uses that configuration set, the message is sent from one of the
         * addresses in the associated pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateDedicatedIpPool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDedicatedIpPoolOutcome CreateDedicatedIpPool(const Model::CreateDedicatedIpPoolRequest& request) const;

        /**
         * A Callable wrapper for CreateDedicatedIpPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDedicatedIpPoolOutcomeCallable CreateDedicatedIpPoolCallable(const Model::CreateDedicatedIpPoolRequest& request) const;

        /**
         * An Async wrapper for CreateDedicatedIpPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDedicatedIpPoolAsync(const Model::CreateDedicatedIpPoolRequest& request, const CreateDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new predictive inbox placement test. Predictive inbox placement
         * tests can help you predict how your messages will be handled by various email
         * providers around the world. When you perform a predictive inbox placement test,
         * you provide a sample message that contains the content that you plan to send to
         * your customers. Amazon SES then sends that message to special email addresses
         * spread across several major email providers. After about 24 hours, the test is
         * complete, and you can use the <code>GetDeliverabilityTestReport</code> operation
         * to view the results of the test.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateDeliverabilityTestReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeliverabilityTestReportOutcome CreateDeliverabilityTestReport(const Model::CreateDeliverabilityTestReportRequest& request) const;

        /**
         * A Callable wrapper for CreateDeliverabilityTestReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeliverabilityTestReportOutcomeCallable CreateDeliverabilityTestReportCallable(const Model::CreateDeliverabilityTestReportRequest& request) const;

        /**
         * An Async wrapper for CreateDeliverabilityTestReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeliverabilityTestReportAsync(const Model::CreateDeliverabilityTestReportRequest& request, const CreateDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the process of verifying an email identity. An <i>identity</i> is an
         * email address or domain that you use when you send email. Before you can use an
         * identity to send email, you first have to verify it. By verifying an identity,
         * you demonstrate that you're the owner of the identity, and that you've given
         * Amazon SES API v2 permission to send email from the identity.</p> <p>When you
         * verify an email address, Amazon SES sends an email to the address. Your email
         * address is verified as soon as you follow the link in the verification email.
         * </p> <p>When you verify a domain without specifying the
         * <code>DkimSigningAttributes</code> object, this operation provides a set of DKIM
         * tokens. You can convert these tokens into CNAME records, which you then add to
         * the DNS configuration for your domain. Your domain is verified when Amazon SES
         * detects these records in the DNS configuration for your domain. This
         * verification method is known as <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
         * DKIM</a>.</p> <p>Alternatively, you can perform the verification process by
         * providing your own public-private key pair. This verification method is known as
         * Bring Your Own DKIM (BYODKIM). To use BYODKIM, your call to the
         * <code>CreateEmailIdentity</code> operation has to include the
         * <code>DkimSigningAttributes</code> object. When you specify this object, you
         * provide a selector (a component of the DNS record name that identifies the
         * public key to use for DKIM authentication) and a private key.</p> <p>When you
         * verify a domain, this operation provides a set of DKIM tokens, which you can
         * convert into CNAME tokens. You add these CNAME tokens to the DNS configuration
         * for your domain. Your domain is verified when Amazon SES detects these records
         * in the DNS configuration for your domain. For some DNS providers, it can take 72
         * hours or more to complete the domain verification process.</p> <p>Additionally,
         * you can associate an existing configuration set with the email identity that
         * you're verifying.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEmailIdentityOutcome CreateEmailIdentity(const Model::CreateEmailIdentityRequest& request) const;

        /**
         * A Callable wrapper for CreateEmailIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEmailIdentityOutcomeCallable CreateEmailIdentityCallable(const Model::CreateEmailIdentityRequest& request) const;

        /**
         * An Async wrapper for CreateEmailIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEmailIdentityAsync(const Model::CreateEmailIdentityRequest& request, const CreateEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the specified sending authorization policy for the given identity (an
         * email address or a domain).</p>  <p>This API is for the identity owner
         * only. If you have not verified the identity, this API will return an error.</p>
         *  <p>Sending authorization is a feature that enables an identity owner to
         * authorize other senders to use its identities. For information about using
         * sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEmailIdentityPolicyOutcome CreateEmailIdentityPolicy(const Model::CreateEmailIdentityPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateEmailIdentityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEmailIdentityPolicyOutcomeCallable CreateEmailIdentityPolicyCallable(const Model::CreateEmailIdentityPolicyRequest& request) const;

        /**
         * An Async wrapper for CreateEmailIdentityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEmailIdentityPolicyAsync(const Model::CreateEmailIdentityPolicyRequest& request, const CreateEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an email template. Email templates enable you to send personalized
         * email to one or more destinations in a single API operation. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEmailTemplateOutcome CreateEmailTemplate(const Model::CreateEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEmailTemplateOutcomeCallable CreateEmailTemplateCallable(const Model::CreateEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEmailTemplateAsync(const Model::CreateEmailTemplateRequest& request, const CreateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an import job for a data destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImportJobOutcome CreateImportJob(const Model::CreateImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImportJobOutcomeCallable CreateImportJobCallable(const Model::CreateImportJobRequest& request) const;

        /**
         * An Async wrapper for CreateImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImportJobAsync(const Model::CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an existing configuration set.</p> <p> <i>Configuration sets</i> are
         * groups of rules that you can apply to the emails you send. You apply a
         * configuration set to an email by including a reference to the configuration set
         * in the headers of the email. When you apply a configuration set to an email, all
         * of the rules in that configuration set are applied to the email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetOutcome DeleteConfigurationSet(const Model::DeleteConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationSetOutcomeCallable DeleteConfigurationSetCallable(const Model::DeleteConfigurationSetRequest& request) const;

        /**
         * An Async wrapper for DeleteConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationSetAsync(const Model::DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an event destination.</p> <p> <i>Events</i> include message sends,
         * deliveries, opens, clicks, bounces, and complaints. <i>Event destinations</i>
         * are places that you can send information about these events to. For example, you
         * can send event data to Amazon SNS to receive notifications when you receive
         * bounces or complaints, or you can use Amazon Kinesis Data Firehose to stream
         * data to Amazon S3 for long-term storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetEventDestinationOutcome DeleteConfigurationSetEventDestination(const Model::DeleteConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationSetEventDestinationOutcomeCallable DeleteConfigurationSetEventDestinationCallable(const Model::DeleteConfigurationSetEventDestinationRequest& request) const;

        /**
         * An Async wrapper for DeleteConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationSetEventDestinationAsync(const Model::DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a contact from a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactOutcome DeleteContact(const Model::DeleteContactRequest& request) const;

        /**
         * A Callable wrapper for DeleteContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContactOutcomeCallable DeleteContactCallable(const Model::DeleteContactRequest& request) const;

        /**
         * An Async wrapper for DeleteContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContactAsync(const Model::DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a contact list and all of the contacts on that list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteContactList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactListOutcome DeleteContactList(const Model::DeleteContactListRequest& request) const;

        /**
         * A Callable wrapper for DeleteContactList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContactListOutcomeCallable DeleteContactListCallable(const Model::DeleteContactListRequest& request) const;

        /**
         * An Async wrapper for DeleteContactList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContactListAsync(const Model::DeleteContactListRequest& request, const DeleteContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing custom verification email template.</p> <p>For more
         * information about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * custom verification email templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomVerificationEmailTemplateOutcome DeleteCustomVerificationEmailTemplate(const Model::DeleteCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomVerificationEmailTemplateOutcomeCallable DeleteCustomVerificationEmailTemplateCallable(const Model::DeleteCustomVerificationEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomVerificationEmailTemplateAsync(const Model::DeleteCustomVerificationEmailTemplateRequest& request, const DeleteCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a dedicated IP pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteDedicatedIpPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDedicatedIpPoolOutcome DeleteDedicatedIpPool(const Model::DeleteDedicatedIpPoolRequest& request) const;

        /**
         * A Callable wrapper for DeleteDedicatedIpPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDedicatedIpPoolOutcomeCallable DeleteDedicatedIpPoolCallable(const Model::DeleteDedicatedIpPoolRequest& request) const;

        /**
         * An Async wrapper for DeleteDedicatedIpPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDedicatedIpPoolAsync(const Model::DeleteDedicatedIpPoolRequest& request, const DeleteDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an email identity. An identity can be either an email address or a
         * domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailIdentityOutcome DeleteEmailIdentity(const Model::DeleteEmailIdentityRequest& request) const;

        /**
         * A Callable wrapper for DeleteEmailIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEmailIdentityOutcomeCallable DeleteEmailIdentityCallable(const Model::DeleteEmailIdentityRequest& request) const;

        /**
         * An Async wrapper for DeleteEmailIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEmailIdentityAsync(const Model::DeleteEmailIdentityRequest& request, const DeleteEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified sending authorization policy for the given identity (an
         * email address or a domain). This API returns successfully even if a policy with
         * the specified name does not exist.</p>  <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p>  <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailIdentityPolicyOutcome DeleteEmailIdentityPolicy(const Model::DeleteEmailIdentityPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteEmailIdentityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEmailIdentityPolicyOutcomeCallable DeleteEmailIdentityPolicyCallable(const Model::DeleteEmailIdentityPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteEmailIdentityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEmailIdentityPolicyAsync(const Model::DeleteEmailIdentityPolicyRequest& request, const DeleteEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an email template.</p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailTemplateOutcome DeleteEmailTemplate(const Model::DeleteEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEmailTemplateOutcomeCallable DeleteEmailTemplateCallable(const Model::DeleteEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEmailTemplateAsync(const Model::DeleteEmailTemplateRequest& request, const DeleteEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an email address from the suppression list for your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteSuppressedDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSuppressedDestinationOutcome DeleteSuppressedDestination(const Model::DeleteSuppressedDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSuppressedDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSuppressedDestinationOutcomeCallable DeleteSuppressedDestinationCallable(const Model::DeleteSuppressedDestinationRequest& request) const;

        /**
         * An Async wrapper for DeleteSuppressedDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSuppressedDestinationAsync(const Model::DeleteSuppressedDestinationRequest& request, const DeleteSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtain information about the email-sending status and capabilities of your
         * Amazon SES account in the current Amazon Web Services Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountOutcome GetAccount(const Model::GetAccountRequest& request) const;

        /**
         * A Callable wrapper for GetAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountOutcomeCallable GetAccountCallable(const Model::GetAccountRequest& request) const;

        /**
         * An Async wrapper for GetAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountAsync(const Model::GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a list of the blacklists that your dedicated IP addresses appear
         * on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetBlacklistReports">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlacklistReportsOutcome GetBlacklistReports(const Model::GetBlacklistReportsRequest& request) const;

        /**
         * A Callable wrapper for GetBlacklistReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBlacklistReportsOutcomeCallable GetBlacklistReportsCallable(const Model::GetBlacklistReportsRequest& request) const;

        /**
         * An Async wrapper for GetBlacklistReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBlacklistReportsAsync(const Model::GetBlacklistReportsRequest& request, const GetBlacklistReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about an existing configuration set, including the dedicated
         * IP pool that it's associated with, whether or not it's enabled for sending
         * email, and more.</p> <p> <i>Configuration sets</i> are groups of rules that you
         * can apply to the emails you send. You apply a configuration set to an email by
         * including a reference to the configuration set in the headers of the email. When
         * you apply a configuration set to an email, all of the rules in that
         * configuration set are applied to the email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationSetOutcome GetConfigurationSet(const Model::GetConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for GetConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConfigurationSetOutcomeCallable GetConfigurationSetCallable(const Model::GetConfigurationSetRequest& request) const;

        /**
         * An Async wrapper for GetConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConfigurationSetAsync(const Model::GetConfigurationSetRequest& request, const GetConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a list of event destinations that are associated with a
         * configuration set.</p> <p> <i>Events</i> include message sends, deliveries,
         * opens, clicks, bounces, and complaints. <i>Event destinations</i> are places
         * that you can send information about these events to. For example, you can send
         * event data to Amazon SNS to receive notifications when you receive bounces or
         * complaints, or you can use Amazon Kinesis Data Firehose to stream data to Amazon
         * S3 for long-term storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetConfigurationSetEventDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationSetEventDestinationsOutcome GetConfigurationSetEventDestinations(const Model::GetConfigurationSetEventDestinationsRequest& request) const;

        /**
         * A Callable wrapper for GetConfigurationSetEventDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConfigurationSetEventDestinationsOutcomeCallable GetConfigurationSetEventDestinationsCallable(const Model::GetConfigurationSetEventDestinationsRequest& request) const;

        /**
         * An Async wrapper for GetConfigurationSetEventDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConfigurationSetEventDestinationsAsync(const Model::GetConfigurationSetEventDestinationsRequest& request, const GetConfigurationSetEventDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a contact from a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetContact">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactOutcome GetContact(const Model::GetContactRequest& request) const;

        /**
         * A Callable wrapper for GetContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactOutcomeCallable GetContactCallable(const Model::GetContactRequest& request) const;

        /**
         * An Async wrapper for GetContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactAsync(const Model::GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns contact list metadata. It does not return any information about the
         * contacts present in the list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetContactList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactListOutcome GetContactList(const Model::GetContactListRequest& request) const;

        /**
         * A Callable wrapper for GetContactList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactListOutcomeCallable GetContactListCallable(const Model::GetContactListRequest& request) const;

        /**
         * An Async wrapper for GetContactList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactListAsync(const Model::GetContactListRequest& request, const GetContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the custom email verification template for the template name you
         * specify.</p> <p>For more information about custom verification email templates,
         * see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * custom verification email templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomVerificationEmailTemplateOutcome GetCustomVerificationEmailTemplate(const Model::GetCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCustomVerificationEmailTemplateOutcomeCallable GetCustomVerificationEmailTemplateCallable(const Model::GetCustomVerificationEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for GetCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCustomVerificationEmailTemplateAsync(const Model::GetCustomVerificationEmailTemplateRequest& request, const GetCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about a dedicated IP address, including the name of the
         * dedicated IP pool that it's associated with, as well information about the
         * automatic warm-up process for the address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIp">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDedicatedIpOutcome GetDedicatedIp(const Model::GetDedicatedIpRequest& request) const;

        /**
         * A Callable wrapper for GetDedicatedIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDedicatedIpOutcomeCallable GetDedicatedIpCallable(const Model::GetDedicatedIpRequest& request) const;

        /**
         * An Async wrapper for GetDedicatedIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDedicatedIpAsync(const Model::GetDedicatedIpRequest& request, const GetDedicatedIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve information about the dedicated pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIpPool">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDedicatedIpPoolOutcome GetDedicatedIpPool(const Model::GetDedicatedIpPoolRequest& request) const;

        /**
         * A Callable wrapper for GetDedicatedIpPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDedicatedIpPoolOutcomeCallable GetDedicatedIpPoolCallable(const Model::GetDedicatedIpPoolRequest& request) const;

        /**
         * An Async wrapper for GetDedicatedIpPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDedicatedIpPoolAsync(const Model::GetDedicatedIpPoolRequest& request, const GetDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the dedicated IP addresses that are associated with your Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIps">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDedicatedIpsOutcome GetDedicatedIps(const Model::GetDedicatedIpsRequest& request) const;

        /**
         * A Callable wrapper for GetDedicatedIps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDedicatedIpsOutcomeCallable GetDedicatedIpsCallable(const Model::GetDedicatedIpsRequest& request) const;

        /**
         * An Async wrapper for GetDedicatedIps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDedicatedIpsAsync(const Model::GetDedicatedIpsRequest& request, const GetDedicatedIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve information about the status of the Deliverability dashboard for
         * your account. When the Deliverability dashboard is enabled, you gain access to
         * reputation, deliverability, and other metrics for the domains that you use to
         * send email. You also gain the ability to perform predictive inbox placement
         * tests.</p> <p>When you use the Deliverability dashboard, you pay a monthly
         * subscription charge, in addition to any other fees that you accrue by using
         * Amazon SES and other Amazon Web Services services. For more information about
         * the features and cost of a Deliverability dashboard subscription, see <a
         * href="http://aws.amazon.com/ses/pricing/">Amazon SES Pricing</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDeliverabilityDashboardOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeliverabilityDashboardOptionsOutcome GetDeliverabilityDashboardOptions(const Model::GetDeliverabilityDashboardOptionsRequest& request) const;

        /**
         * A Callable wrapper for GetDeliverabilityDashboardOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeliverabilityDashboardOptionsOutcomeCallable GetDeliverabilityDashboardOptionsCallable(const Model::GetDeliverabilityDashboardOptionsRequest& request) const;

        /**
         * An Async wrapper for GetDeliverabilityDashboardOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeliverabilityDashboardOptionsAsync(const Model::GetDeliverabilityDashboardOptionsRequest& request, const GetDeliverabilityDashboardOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve the results of a predictive inbox placement test.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDeliverabilityTestReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeliverabilityTestReportOutcome GetDeliverabilityTestReport(const Model::GetDeliverabilityTestReportRequest& request) const;

        /**
         * A Callable wrapper for GetDeliverabilityTestReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeliverabilityTestReportOutcomeCallable GetDeliverabilityTestReportCallable(const Model::GetDeliverabilityTestReportRequest& request) const;

        /**
         * An Async wrapper for GetDeliverabilityTestReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeliverabilityTestReportAsync(const Model::GetDeliverabilityTestReportRequest& request, const GetDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve all the deliverability data for a specific campaign. This data is
         * available for a campaign only if the campaign sent email by using a domain that
         * the Deliverability dashboard is enabled for.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDomainDeliverabilityCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainDeliverabilityCampaignOutcome GetDomainDeliverabilityCampaign(const Model::GetDomainDeliverabilityCampaignRequest& request) const;

        /**
         * A Callable wrapper for GetDomainDeliverabilityCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainDeliverabilityCampaignOutcomeCallable GetDomainDeliverabilityCampaignCallable(const Model::GetDomainDeliverabilityCampaignRequest& request) const;

        /**
         * An Async wrapper for GetDomainDeliverabilityCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainDeliverabilityCampaignAsync(const Model::GetDomainDeliverabilityCampaignRequest& request, const GetDomainDeliverabilityCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve inbox placement and engagement rates for the domains that you use to
         * send email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDomainStatisticsReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainStatisticsReportOutcome GetDomainStatisticsReport(const Model::GetDomainStatisticsReportRequest& request) const;

        /**
         * A Callable wrapper for GetDomainStatisticsReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainStatisticsReportOutcomeCallable GetDomainStatisticsReportCallable(const Model::GetDomainStatisticsReportRequest& request) const;

        /**
         * An Async wrapper for GetDomainStatisticsReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainStatisticsReportAsync(const Model::GetDomainStatisticsReportRequest& request, const GetDomainStatisticsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about a specific identity, including the identity's
         * verification status, sending authorization policies, its DKIM authentication
         * status, and its custom Mail-From settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailIdentityOutcome GetEmailIdentity(const Model::GetEmailIdentityRequest& request) const;

        /**
         * A Callable wrapper for GetEmailIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEmailIdentityOutcomeCallable GetEmailIdentityCallable(const Model::GetEmailIdentityRequest& request) const;

        /**
         * An Async wrapper for GetEmailIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEmailIdentityAsync(const Model::GetEmailIdentityRequest& request, const GetEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the requested sending authorization policies for the given identity
         * (an email address or a domain). The policies are returned as a map of policy
         * names to policy contents. You can retrieve a maximum of 20 policies at a
         * time.</p>  <p>This API is for the identity owner only. If you have not
         * verified the identity, this API will return an error.</p>  <p>Sending
         * authorization is a feature that enables an identity owner to authorize other
         * senders to use its identities. For information about using sending
         * authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailIdentityPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailIdentityPoliciesOutcome GetEmailIdentityPolicies(const Model::GetEmailIdentityPoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetEmailIdentityPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEmailIdentityPoliciesOutcomeCallable GetEmailIdentityPoliciesCallable(const Model::GetEmailIdentityPoliciesRequest& request) const;

        /**
         * An Async wrapper for GetEmailIdentityPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEmailIdentityPoliciesAsync(const Model::GetEmailIdentityPoliciesRequest& request, const GetEmailIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the template object (which includes the subject line, HTML part and
         * text part) for the template you specify.</p> <p>You can execute this operation
         * no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailTemplateOutcome GetEmailTemplate(const Model::GetEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEmailTemplateOutcomeCallable GetEmailTemplateCallable(const Model::GetEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for GetEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEmailTemplateAsync(const Model::GetEmailTemplateRequest& request, const GetEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about an import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportJobOutcome GetImportJob(const Model::GetImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImportJobOutcomeCallable GetImportJobCallable(const Model::GetImportJobRequest& request) const;

        /**
         * An Async wrapper for GetImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImportJobAsync(const Model::GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a specific email address that's on the
         * suppression list for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetSuppressedDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSuppressedDestinationOutcome GetSuppressedDestination(const Model::GetSuppressedDestinationRequest& request) const;

        /**
         * A Callable wrapper for GetSuppressedDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSuppressedDestinationOutcomeCallable GetSuppressedDestinationCallable(const Model::GetSuppressedDestinationRequest& request) const;

        /**
         * An Async wrapper for GetSuppressedDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSuppressedDestinationAsync(const Model::GetSuppressedDestinationRequest& request, const GetSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all of the configuration sets associated with your account in the
         * current region.</p> <p> <i>Configuration sets</i> are groups of rules that you
         * can apply to the emails you send. You apply a configuration set to an email by
         * including a reference to the configuration set in the headers of the email. When
         * you apply a configuration set to an email, all of the rules in that
         * configuration set are applied to the email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListConfigurationSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationSetsOutcome ListConfigurationSets(const Model::ListConfigurationSetsRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurationSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationSetsOutcomeCallable ListConfigurationSetsCallable(const Model::ListConfigurationSetsRequest& request) const;

        /**
         * An Async wrapper for ListConfigurationSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationSetsAsync(const Model::ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the contact lists available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListContactLists">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactListsOutcome ListContactLists(const Model::ListContactListsRequest& request) const;

        /**
         * A Callable wrapper for ListContactLists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContactListsOutcomeCallable ListContactListsCallable(const Model::ListContactListsRequest& request) const;

        /**
         * An Async wrapper for ListContactLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContactListsAsync(const Model::ListContactListsRequest& request, const ListContactListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the contacts present in a specific contact list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactsOutcome ListContacts(const Model::ListContactsRequest& request) const;

        /**
         * A Callable wrapper for ListContacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContactsOutcomeCallable ListContactsCallable(const Model::ListContactsRequest& request) const;

        /**
         * An Async wrapper for ListContacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContactsAsync(const Model::ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the existing custom verification email templates for your account in
         * the current Amazon Web Services Region.</p> <p>For more information about custom
         * verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * custom verification email templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListCustomVerificationEmailTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomVerificationEmailTemplatesOutcome ListCustomVerificationEmailTemplates(const Model::ListCustomVerificationEmailTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListCustomVerificationEmailTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomVerificationEmailTemplatesOutcomeCallable ListCustomVerificationEmailTemplatesCallable(const Model::ListCustomVerificationEmailTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListCustomVerificationEmailTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomVerificationEmailTemplatesAsync(const Model::ListCustomVerificationEmailTemplatesRequest& request, const ListCustomVerificationEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all of the dedicated IP pools that exist in your Amazon Web Services
         * account in the current Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDedicatedIpPools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDedicatedIpPoolsOutcome ListDedicatedIpPools(const Model::ListDedicatedIpPoolsRequest& request) const;

        /**
         * A Callable wrapper for ListDedicatedIpPools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDedicatedIpPoolsOutcomeCallable ListDedicatedIpPoolsCallable(const Model::ListDedicatedIpPoolsRequest& request) const;

        /**
         * An Async wrapper for ListDedicatedIpPools that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDedicatedIpPoolsAsync(const Model::ListDedicatedIpPoolsRequest& request, const ListDedicatedIpPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Show a list of the predictive inbox placement tests that you've performed,
         * regardless of their statuses. For predictive inbox placement tests that are
         * complete, you can use the <code>GetDeliverabilityTestReport</code> operation to
         * view the results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDeliverabilityTestReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeliverabilityTestReportsOutcome ListDeliverabilityTestReports(const Model::ListDeliverabilityTestReportsRequest& request) const;

        /**
         * A Callable wrapper for ListDeliverabilityTestReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeliverabilityTestReportsOutcomeCallable ListDeliverabilityTestReportsCallable(const Model::ListDeliverabilityTestReportsRequest& request) const;

        /**
         * An Async wrapper for ListDeliverabilityTestReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeliverabilityTestReportsAsync(const Model::ListDeliverabilityTestReportsRequest& request, const ListDeliverabilityTestReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve deliverability data for all the campaigns that used a specific
         * domain to send email during a specified time range. This data is available for a
         * domain only if you enabled the Deliverability dashboard for the
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDomainDeliverabilityCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainDeliverabilityCampaignsOutcome ListDomainDeliverabilityCampaigns(const Model::ListDomainDeliverabilityCampaignsRequest& request) const;

        /**
         * A Callable wrapper for ListDomainDeliverabilityCampaigns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainDeliverabilityCampaignsOutcomeCallable ListDomainDeliverabilityCampaignsCallable(const Model::ListDomainDeliverabilityCampaignsRequest& request) const;

        /**
         * An Async wrapper for ListDomainDeliverabilityCampaigns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainDeliverabilityCampaignsAsync(const Model::ListDomainDeliverabilityCampaignsRequest& request, const ListDomainDeliverabilityCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all of the email identities that are associated with your
         * Amazon Web Services account. An identity can be either an email address or a
         * domain. This operation returns identities that are verified as well as those
         * that aren't. This operation returns identities that are associated with Amazon
         * SES and Amazon Pinpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEmailIdentitiesOutcome ListEmailIdentities(const Model::ListEmailIdentitiesRequest& request) const;

        /**
         * A Callable wrapper for ListEmailIdentities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEmailIdentitiesOutcomeCallable ListEmailIdentitiesCallable(const Model::ListEmailIdentitiesRequest& request) const;

        /**
         * An Async wrapper for ListEmailIdentities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEmailIdentitiesAsync(const Model::ListEmailIdentitiesRequest& request, const ListEmailIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the email templates present in your Amazon SES account in the current
         * Amazon Web Services Region.</p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEmailTemplatesOutcome ListEmailTemplates(const Model::ListEmailTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListEmailTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEmailTemplatesOutcomeCallable ListEmailTemplatesCallable(const Model::ListEmailTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListEmailTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEmailTemplatesAsync(const Model::ListEmailTemplatesRequest& request, const ListEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportJobsOutcome ListImportJobs(const Model::ListImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImportJobsOutcomeCallable ListImportJobsCallable(const Model::ListImportJobsRequest& request) const;

        /**
         * An Async wrapper for ListImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImportJobsAsync(const Model::ListImportJobsRequest& request, const ListImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the recommendations present in your Amazon SES account in the current
         * Amazon Web Services Region.</p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationsOutcome ListRecommendations(const Model::ListRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecommendationsOutcomeCallable ListRecommendationsCallable(const Model::ListRecommendationsRequest& request) const;

        /**
         * An Async wrapper for ListRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecommendationsAsync(const Model::ListRecommendationsRequest& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of email addresses that are on the suppression list for your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListSuppressedDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSuppressedDestinationsOutcome ListSuppressedDestinations(const Model::ListSuppressedDestinationsRequest& request) const;

        /**
         * A Callable wrapper for ListSuppressedDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSuppressedDestinationsOutcomeCallable ListSuppressedDestinationsCallable(const Model::ListSuppressedDestinationsRequest& request) const;

        /**
         * An Async wrapper for ListSuppressedDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSuppressedDestinationsAsync(const Model::ListSuppressedDestinationsRequest& request, const ListSuppressedDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a list of the tags (keys and values) that are associated with a
         * specified resource. A <i>tag</i> is a label that you optionally define and
         * associate with a resource. Each tag consists of a required <i>tag key</i> and an
         * optional associated <i>tag value</i>. A tag key is a general label that acts as
         * a category for more specific tag values. A tag value acts as a descriptor within
         * a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListTagsForResource">AWS
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
         * <p>Enable or disable the automatic warm-up feature for dedicated IP
         * addresses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountDedicatedIpWarmupAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountDedicatedIpWarmupAttributesOutcome PutAccountDedicatedIpWarmupAttributes(const Model::PutAccountDedicatedIpWarmupAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutAccountDedicatedIpWarmupAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccountDedicatedIpWarmupAttributesOutcomeCallable PutAccountDedicatedIpWarmupAttributesCallable(const Model::PutAccountDedicatedIpWarmupAttributesRequest& request) const;

        /**
         * An Async wrapper for PutAccountDedicatedIpWarmupAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccountDedicatedIpWarmupAttributesAsync(const Model::PutAccountDedicatedIpWarmupAttributesRequest& request, const PutAccountDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update your Amazon SES account details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountDetailsOutcome PutAccountDetails(const Model::PutAccountDetailsRequest& request) const;

        /**
         * A Callable wrapper for PutAccountDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccountDetailsOutcomeCallable PutAccountDetailsCallable(const Model::PutAccountDetailsRequest& request) const;

        /**
         * An Async wrapper for PutAccountDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccountDetailsAsync(const Model::PutAccountDetailsRequest& request, const PutAccountDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enable or disable the ability of your account to send email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountSendingAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountSendingAttributesOutcome PutAccountSendingAttributes(const Model::PutAccountSendingAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutAccountSendingAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccountSendingAttributesOutcomeCallable PutAccountSendingAttributesCallable(const Model::PutAccountSendingAttributesRequest& request) const;

        /**
         * An Async wrapper for PutAccountSendingAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccountSendingAttributesAsync(const Model::PutAccountSendingAttributesRequest& request, const PutAccountSendingAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Change the settings for the account-level suppression list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountSuppressionAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountSuppressionAttributesOutcome PutAccountSuppressionAttributes(const Model::PutAccountSuppressionAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutAccountSuppressionAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccountSuppressionAttributesOutcomeCallable PutAccountSuppressionAttributesCallable(const Model::PutAccountSuppressionAttributesRequest& request) const;

        /**
         * An Async wrapper for PutAccountSuppressionAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccountSuppressionAttributesAsync(const Model::PutAccountSuppressionAttributesRequest& request, const PutAccountSuppressionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update your Amazon SES account VDM attributes.</p> <p>You can execute this
         * operation no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountVdmAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountVdmAttributesOutcome PutAccountVdmAttributes(const Model::PutAccountVdmAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutAccountVdmAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccountVdmAttributesOutcomeCallable PutAccountVdmAttributesCallable(const Model::PutAccountVdmAttributesRequest& request) const;

        /**
         * An Async wrapper for PutAccountVdmAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccountVdmAttributesAsync(const Model::PutAccountVdmAttributesRequest& request, const PutAccountVdmAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associate a configuration set with a dedicated IP pool. You can use dedicated
         * IP pools to create groups of dedicated IP addresses for sending specific types
         * of email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetDeliveryOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetDeliveryOptionsOutcome PutConfigurationSetDeliveryOptions(const Model::PutConfigurationSetDeliveryOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetDeliveryOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationSetDeliveryOptionsOutcomeCallable PutConfigurationSetDeliveryOptionsCallable(const Model::PutConfigurationSetDeliveryOptionsRequest& request) const;

        /**
         * An Async wrapper for PutConfigurationSetDeliveryOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationSetDeliveryOptionsAsync(const Model::PutConfigurationSetDeliveryOptionsRequest& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enable or disable collection of reputation metrics for emails that you send
         * using a particular configuration set in a specific Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetReputationOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetReputationOptionsOutcome PutConfigurationSetReputationOptions(const Model::PutConfigurationSetReputationOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetReputationOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationSetReputationOptionsOutcomeCallable PutConfigurationSetReputationOptionsCallable(const Model::PutConfigurationSetReputationOptionsRequest& request) const;

        /**
         * An Async wrapper for PutConfigurationSetReputationOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationSetReputationOptionsAsync(const Model::PutConfigurationSetReputationOptionsRequest& request, const PutConfigurationSetReputationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enable or disable email sending for messages that use a particular
         * configuration set in a specific Amazon Web Services Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetSendingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetSendingOptionsOutcome PutConfigurationSetSendingOptions(const Model::PutConfigurationSetSendingOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetSendingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationSetSendingOptionsOutcomeCallable PutConfigurationSetSendingOptionsCallable(const Model::PutConfigurationSetSendingOptionsRequest& request) const;

        /**
         * An Async wrapper for PutConfigurationSetSendingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationSetSendingOptionsAsync(const Model::PutConfigurationSetSendingOptionsRequest& request, const PutConfigurationSetSendingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specify the account suppression list preferences for a configuration
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetSuppressionOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetSuppressionOptionsOutcome PutConfigurationSetSuppressionOptions(const Model::PutConfigurationSetSuppressionOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetSuppressionOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationSetSuppressionOptionsOutcomeCallable PutConfigurationSetSuppressionOptionsCallable(const Model::PutConfigurationSetSuppressionOptionsRequest& request) const;

        /**
         * An Async wrapper for PutConfigurationSetSuppressionOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationSetSuppressionOptionsAsync(const Model::PutConfigurationSetSuppressionOptionsRequest& request, const PutConfigurationSetSuppressionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specify a custom domain to use for open and click tracking elements in email
         * that you send.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetTrackingOptionsOutcome PutConfigurationSetTrackingOptions(const Model::PutConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetTrackingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationSetTrackingOptionsOutcomeCallable PutConfigurationSetTrackingOptionsCallable(const Model::PutConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * An Async wrapper for PutConfigurationSetTrackingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationSetTrackingOptionsAsync(const Model::PutConfigurationSetTrackingOptionsRequest& request, const PutConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specify VDM preferences for email that you send using the configuration
         * set.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetVdmOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetVdmOptionsOutcome PutConfigurationSetVdmOptions(const Model::PutConfigurationSetVdmOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetVdmOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationSetVdmOptionsOutcomeCallable PutConfigurationSetVdmOptionsCallable(const Model::PutConfigurationSetVdmOptionsRequest& request) const;

        /**
         * An Async wrapper for PutConfigurationSetVdmOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationSetVdmOptionsAsync(const Model::PutConfigurationSetVdmOptionsRequest& request, const PutConfigurationSetVdmOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Move a dedicated IP address to an existing dedicated IP pool.</p> 
         * <p>The dedicated IP address that you specify must already exist, and must be
         * associated with your Amazon Web Services account. </p> <p>The dedicated IP pool
         * you specify must already exist. You can create a new pool by using the
         * <code>CreateDedicatedIpPool</code> operation.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDedicatedIpInPool">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDedicatedIpInPoolOutcome PutDedicatedIpInPool(const Model::PutDedicatedIpInPoolRequest& request) const;

        /**
         * A Callable wrapper for PutDedicatedIpInPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDedicatedIpInPoolOutcomeCallable PutDedicatedIpInPoolCallable(const Model::PutDedicatedIpInPoolRequest& request) const;

        /**
         * An Async wrapper for PutDedicatedIpInPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDedicatedIpInPoolAsync(const Model::PutDedicatedIpInPoolRequest& request, const PutDedicatedIpInPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDedicatedIpWarmupAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDedicatedIpWarmupAttributesOutcome PutDedicatedIpWarmupAttributes(const Model::PutDedicatedIpWarmupAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutDedicatedIpWarmupAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDedicatedIpWarmupAttributesOutcomeCallable PutDedicatedIpWarmupAttributesCallable(const Model::PutDedicatedIpWarmupAttributesRequest& request) const;

        /**
         * An Async wrapper for PutDedicatedIpWarmupAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDedicatedIpWarmupAttributesAsync(const Model::PutDedicatedIpWarmupAttributesRequest& request, const PutDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enable or disable the Deliverability dashboard. When you enable the
         * Deliverability dashboard, you gain access to reputation, deliverability, and
         * other metrics for the domains that you use to send email. You also gain the
         * ability to perform predictive inbox placement tests.</p> <p>When you use the
         * Deliverability dashboard, you pay a monthly subscription charge, in addition to
         * any other fees that you accrue by using Amazon SES and other Amazon Web Services
         * services. For more information about the features and cost of a Deliverability
         * dashboard subscription, see <a href="http://aws.amazon.com/ses/pricing/">Amazon
         * SES Pricing</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDeliverabilityDashboardOption">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDeliverabilityDashboardOptionOutcome PutDeliverabilityDashboardOption(const Model::PutDeliverabilityDashboardOptionRequest& request) const;

        /**
         * A Callable wrapper for PutDeliverabilityDashboardOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDeliverabilityDashboardOptionOutcomeCallable PutDeliverabilityDashboardOptionCallable(const Model::PutDeliverabilityDashboardOptionRequest& request) const;

        /**
         * An Async wrapper for PutDeliverabilityDashboardOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDeliverabilityDashboardOptionAsync(const Model::PutDeliverabilityDashboardOptionRequest& request, const PutDeliverabilityDashboardOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to associate a configuration set with an email identity.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityConfigurationSetAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailIdentityConfigurationSetAttributesOutcome PutEmailIdentityConfigurationSetAttributes(const Model::PutEmailIdentityConfigurationSetAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutEmailIdentityConfigurationSetAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEmailIdentityConfigurationSetAttributesOutcomeCallable PutEmailIdentityConfigurationSetAttributesCallable(const Model::PutEmailIdentityConfigurationSetAttributesRequest& request) const;

        /**
         * An Async wrapper for PutEmailIdentityConfigurationSetAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEmailIdentityConfigurationSetAttributesAsync(const Model::PutEmailIdentityConfigurationSetAttributesRequest& request, const PutEmailIdentityConfigurationSetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to enable or disable DKIM authentication for an email
         * identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityDkimAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailIdentityDkimAttributesOutcome PutEmailIdentityDkimAttributes(const Model::PutEmailIdentityDkimAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutEmailIdentityDkimAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEmailIdentityDkimAttributesOutcomeCallable PutEmailIdentityDkimAttributesCallable(const Model::PutEmailIdentityDkimAttributesRequest& request) const;

        /**
         * An Async wrapper for PutEmailIdentityDkimAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEmailIdentityDkimAttributesAsync(const Model::PutEmailIdentityDkimAttributesRequest& request, const PutEmailIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to configure or change the DKIM authentication settings for an email
         * domain identity. You can use this operation to do any of the following:</p> <ul>
         * <li> <p>Update the signing attributes for an identity that uses Bring Your Own
         * DKIM (BYODKIM).</p> </li> <li> <p>Update the key length that should be used for
         * Easy DKIM.</p> </li> <li> <p>Change from using no DKIM authentication to using
         * Easy DKIM.</p> </li> <li> <p>Change from using no DKIM authentication to using
         * BYODKIM.</p> </li> <li> <p>Change from using Easy DKIM to using BYODKIM.</p>
         * </li> <li> <p>Change from using BYODKIM to using Easy DKIM.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityDkimSigningAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailIdentityDkimSigningAttributesOutcome PutEmailIdentityDkimSigningAttributes(const Model::PutEmailIdentityDkimSigningAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutEmailIdentityDkimSigningAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEmailIdentityDkimSigningAttributesOutcomeCallable PutEmailIdentityDkimSigningAttributesCallable(const Model::PutEmailIdentityDkimSigningAttributesRequest& request) const;

        /**
         * An Async wrapper for PutEmailIdentityDkimSigningAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEmailIdentityDkimSigningAttributesAsync(const Model::PutEmailIdentityDkimSigningAttributesRequest& request, const PutEmailIdentityDkimSigningAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to enable or disable feedback forwarding for an identity. This setting
         * determines what happens when an identity is used to send an email that results
         * in a bounce or complaint event.</p> <p>If the value is <code>true</code>, you
         * receive email notifications when bounce or complaint events occur. These
         * notifications are sent to the address that you specified in the
         * <code>Return-Path</code> header of the original email.</p> <p>You're required to
         * have a method of tracking bounces and complaints. If you haven't set up another
         * mechanism for receiving bounce or complaint notifications (for example, by
         * setting up an event destination), you receive an email notification when these
         * events occur (even if this setting is disabled).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityFeedbackAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailIdentityFeedbackAttributesOutcome PutEmailIdentityFeedbackAttributes(const Model::PutEmailIdentityFeedbackAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutEmailIdentityFeedbackAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEmailIdentityFeedbackAttributesOutcomeCallable PutEmailIdentityFeedbackAttributesCallable(const Model::PutEmailIdentityFeedbackAttributesRequest& request) const;

        /**
         * An Async wrapper for PutEmailIdentityFeedbackAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEmailIdentityFeedbackAttributesAsync(const Model::PutEmailIdentityFeedbackAttributesRequest& request, const PutEmailIdentityFeedbackAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to enable or disable the custom Mail-From domain configuration for an
         * email identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityMailFromAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailIdentityMailFromAttributesOutcome PutEmailIdentityMailFromAttributes(const Model::PutEmailIdentityMailFromAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutEmailIdentityMailFromAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEmailIdentityMailFromAttributesOutcomeCallable PutEmailIdentityMailFromAttributesCallable(const Model::PutEmailIdentityMailFromAttributesRequest& request) const;

        /**
         * An Async wrapper for PutEmailIdentityMailFromAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEmailIdentityMailFromAttributesAsync(const Model::PutEmailIdentityMailFromAttributesRequest& request, const PutEmailIdentityMailFromAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an email address to the suppression list for your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutSuppressedDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSuppressedDestinationOutcome PutSuppressedDestination(const Model::PutSuppressedDestinationRequest& request) const;

        /**
         * A Callable wrapper for PutSuppressedDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSuppressedDestinationOutcomeCallable PutSuppressedDestinationCallable(const Model::PutSuppressedDestinationRequest& request) const;

        /**
         * An Async wrapper for PutSuppressedDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSuppressedDestinationAsync(const Model::PutSuppressedDestinationRequest& request, const PutSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Composes an email message to multiple destinations.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendBulkEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendBulkEmailOutcome SendBulkEmail(const Model::SendBulkEmailRequest& request) const;

        /**
         * A Callable wrapper for SendBulkEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendBulkEmailOutcomeCallable SendBulkEmailCallable(const Model::SendBulkEmailRequest& request) const;

        /**
         * An Async wrapper for SendBulkEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendBulkEmailAsync(const Model::SendBulkEmailRequest& request, const SendBulkEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an email address to the list of identities for your Amazon SES account
         * in the current Amazon Web Services Region and attempts to verify it. As a result
         * of executing this operation, a customized verification email is sent to the
         * specified address.</p> <p>To use this operation, you must first create a custom
         * verification email template. For more information about creating and using
         * custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * custom verification email templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendCustomVerificationEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendCustomVerificationEmailOutcome SendCustomVerificationEmail(const Model::SendCustomVerificationEmailRequest& request) const;

        /**
         * A Callable wrapper for SendCustomVerificationEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendCustomVerificationEmailOutcomeCallable SendCustomVerificationEmailCallable(const Model::SendCustomVerificationEmailRequest& request) const;

        /**
         * An Async wrapper for SendCustomVerificationEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendCustomVerificationEmailAsync(const Model::SendCustomVerificationEmailRequest& request, const SendCustomVerificationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends an email message. You can use the Amazon SES API v2 to send the
         * following types of messages:</p> <ul> <li> <p> <b>Simple</b> – A standard email
         * message. When you create this type of message, you specify the sender, the
         * recipient, and the message body, and Amazon SES assembles the message for
         * you.</p> </li> <li> <p> <b>Raw</b> – A raw, MIME-formatted email message. When
         * you send this type of email, you have to specify all of the message headers, as
         * well as the message body. You can use this message type to send messages that
         * contain attachments. The message that you specify has to be a valid MIME
         * message.</p> </li> <li> <p> <b>Templated</b> – A message that contains
         * personalization tags. When you send this type of email, Amazon SES API v2
         * automatically replaces the tags with values that you specify.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendEmail">AWS API
         * Reference</a></p>
         */
        virtual Model::SendEmailOutcome SendEmail(const Model::SendEmailRequest& request) const;

        /**
         * A Callable wrapper for SendEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendEmailOutcomeCallable SendEmailCallable(const Model::SendEmailRequest& request) const;

        /**
         * An Async wrapper for SendEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendEmailAsync(const Model::SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add one or more tags (keys and values) to a specified resource. A
         * <i>tag</i> is a label that you optionally define and associate with a resource.
         * Tags can help you categorize and manage resources in different ways, such as by
         * purpose, owner, environment, or other criteria. A resource can have as many as
         * 50 tags.</p> <p>Each tag consists of a required <i>tag key</i> and an
         * associated <i>tag value</i>, both of which you define. A tag key is a general
         * label that acts as a category for more specific tag values. A tag value acts as
         * a descriptor within a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TagResource">AWS
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
         * <p>Creates a preview of the MIME content of an email when provided with a
         * template and a set of replacement data.</p> <p>You can execute this operation no
         * more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TestRenderEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::TestRenderEmailTemplateOutcome TestRenderEmailTemplate(const Model::TestRenderEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for TestRenderEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestRenderEmailTemplateOutcomeCallable TestRenderEmailTemplateCallable(const Model::TestRenderEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for TestRenderEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestRenderEmailTemplateAsync(const Model::TestRenderEmailTemplateRequest& request, const TestRenderEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove one or more tags (keys and values) from a specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UntagResource">AWS
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
         * <p>Update the configuration of an event destination for a configuration set.</p>
         * <p> <i>Events</i> include message sends, deliveries, opens, clicks, bounces, and
         * complaints. <i>Event destinations</i> are places that you can send information
         * about these events to. For example, you can send event data to Amazon SNS to
         * receive notifications when you receive bounces or complaints, or you can use
         * Amazon Kinesis Data Firehose to stream data to Amazon S3 for long-term
         * storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationSetEventDestinationOutcome UpdateConfigurationSetEventDestination(const Model::UpdateConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigurationSetEventDestinationOutcomeCallable UpdateConfigurationSetEventDestinationCallable(const Model::UpdateConfigurationSetEventDestinationRequest& request) const;

        /**
         * An Async wrapper for UpdateConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationSetEventDestinationAsync(const Model::UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a contact's preferences for a list. It is not necessary to specify
         * all existing topic preferences in the TopicPreferences object, just the ones
         * that need updating.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactOutcome UpdateContact(const Model::UpdateContactRequest& request) const;

        /**
         * A Callable wrapper for UpdateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactOutcomeCallable UpdateContactCallable(const Model::UpdateContactRequest& request) const;

        /**
         * An Async wrapper for UpdateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactAsync(const Model::UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates contact list metadata. This operation does a complete
         * replacement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateContactList">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactListOutcome UpdateContactList(const Model::UpdateContactListRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactListOutcomeCallable UpdateContactListCallable(const Model::UpdateContactListRequest& request) const;

        /**
         * An Async wrapper for UpdateContactList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactListAsync(const Model::UpdateContactListRequest& request, const UpdateContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing custom verification email template.</p> <p>For more
         * information about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * custom verification email templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomVerificationEmailTemplateOutcome UpdateCustomVerificationEmailTemplate(const Model::UpdateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCustomVerificationEmailTemplateOutcomeCallable UpdateCustomVerificationEmailTemplateCallable(const Model::UpdateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCustomVerificationEmailTemplateAsync(const Model::UpdateCustomVerificationEmailTemplateRequest& request, const UpdateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified sending authorization policy for the given identity (an
         * email address or a domain). This API returns successfully even if a policy with
         * the specified name does not exist.</p>  <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p>  <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateEmailIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmailIdentityPolicyOutcome UpdateEmailIdentityPolicy(const Model::UpdateEmailIdentityPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateEmailIdentityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEmailIdentityPolicyOutcomeCallable UpdateEmailIdentityPolicyCallable(const Model::UpdateEmailIdentityPolicyRequest& request) const;

        /**
         * An Async wrapper for UpdateEmailIdentityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEmailIdentityPolicyAsync(const Model::UpdateEmailIdentityPolicyRequest& request, const UpdateEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an email template. Email templates enable you to send personalized
         * email to one or more destinations in a single API operation. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmailTemplateOutcome UpdateEmailTemplate(const Model::UpdateEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEmailTemplateOutcomeCallable UpdateEmailTemplateCallable(const Model::UpdateEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEmailTemplateAsync(const Model::UpdateEmailTemplateRequest& request, const UpdateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SESV2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SESV2Client>;
      void init(const SESV2ClientConfiguration& clientConfiguration);

      SESV2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SESV2EndpointProviderBase> m_endpointProvider;
  };

} // namespace SESV2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-email/PinpointEmailServiceClientModel.h>

namespace Aws
{
namespace PinpointEmail
{
  /**
   * <fullname>Amazon Pinpoint Email Service</fullname> <p>Welcome to the <i>Amazon
   * Pinpoint Email API Reference</i>. This guide provides information about the
   * Amazon Pinpoint Email API (version 1.0), including supported operations, data
   * types, parameters, and schemas.</p> <p> <a
   * href="https://aws.amazon.com/pinpoint">Amazon Pinpoint</a> is an AWS service
   * that you can use to engage with your customers across multiple messaging
   * channels. You can use Amazon Pinpoint to send email, SMS text messages, voice
   * messages, and push notifications. The Amazon Pinpoint Email API provides
   * programmatic access to options that are unique to the email channel and
   * supplement the options provided by the Amazon Pinpoint API.</p> <p>If you're new
   * to Amazon Pinpoint, you might find it helpful to also review the <a
   * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon
   * Pinpoint Developer Guide</a>. The <i>Amazon Pinpoint Developer Guide</i>
   * provides tutorials, code samples, and procedures that demonstrate how to use
   * Amazon Pinpoint features programmatically and how to integrate Amazon Pinpoint
   * functionality into mobile apps and other types of applications. The guide also
   * provides information about key topics such as Amazon Pinpoint integration with
   * other AWS services and the limits that apply to using the service.</p> <p>The
   * Amazon Pinpoint Email API is available in several AWS Regions and it provides an
   * endpoint for each of these Regions. For a list of all the Regions and endpoints
   * where the API is currently available, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#pinpoint_region">AWS
   * Service Endpoints</a> in the <i>Amazon Web Services General Reference</i>. To
   * learn more about AWS Regions, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html">Managing
   * AWS Regions</a> in the <i>Amazon Web Services General Reference</i>.</p> <p>In
   * each Region, AWS maintains multiple Availability Zones. These Availability Zones
   * are physically isolated from each other, but are united by private, low-latency,
   * high-throughput, and highly redundant network connections. These Availability
   * Zones enable us to provide very high levels of availability and redundancy,
   * while also minimizing latency. To learn more about the number of Availability
   * Zones that are available in each Region, see <a
   * href="http://aws.amazon.com/about-aws/global-infrastructure/">AWS Global
   * Infrastructure</a>.</p>
   */
  class AWS_PINPOINTEMAIL_API PinpointEmailClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PinpointEmailClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointEmailClient(const Aws::PinpointEmail::PinpointEmailClientConfiguration& clientConfiguration = Aws::PinpointEmail::PinpointEmailClientConfiguration(),
                            std::shared_ptr<PinpointEmailEndpointProviderBase> endpointProvider = Aws::MakeShared<PinpointEmailEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointEmailClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<PinpointEmailEndpointProviderBase> endpointProvider = Aws::MakeShared<PinpointEmailEndpointProvider>(ALLOCATION_TAG),
                            const Aws::PinpointEmail::PinpointEmailClientConfiguration& clientConfiguration = Aws::PinpointEmail::PinpointEmailClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PinpointEmailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<PinpointEmailEndpointProviderBase> endpointProvider = Aws::MakeShared<PinpointEmailEndpointProvider>(ALLOCATION_TAG),
                            const Aws::PinpointEmail::PinpointEmailClientConfiguration& clientConfiguration = Aws::PinpointEmail::PinpointEmailClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointEmailClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointEmailClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PinpointEmailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PinpointEmailClient();

        /**
         * <p>Create a configuration set. <i>Configuration sets</i> are groups of rules
         * that you can apply to the emails you send using Amazon Pinpoint. You apply a
         * configuration set to an email by including a reference to the configuration set
         * in the headers of the email. When you apply a configuration set to an email, all
         * of the rules in that configuration set are applied to the email. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/CreateConfigurationSet">AWS
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
         * <p>Create an event destination. In Amazon Pinpoint, <i>events</i> include
         * message sends, deliveries, opens, clicks, bounces, and complaints. <i>Event
         * destinations</i> are places that you can send information about these events to.
         * For example, you can send event data to Amazon SNS to receive notifications when
         * you receive bounces or complaints, or you can use Amazon Kinesis Data Firehose
         * to stream data to Amazon S3 for long-term storage.</p> <p>A single configuration
         * set can include more than one event destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/CreateConfigurationSetEventDestination">AWS
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
         * <p>Create a new pool of dedicated IP addresses. A pool can include one or more
         * dedicated IP addresses that are associated with your Amazon Pinpoint account.
         * You can associate a pool with a configuration set. When you send an email that
         * uses that configuration set, Amazon Pinpoint sends it using only the IP
         * addresses in the associated pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/CreateDedicatedIpPool">AWS
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
         * your customers. Amazon Pinpoint then sends that message to special email
         * addresses spread across several major email providers. After about 24 hours, the
         * test is complete, and you can use the <code>GetDeliverabilityTestReport</code>
         * operation to view the results of the test.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/CreateDeliverabilityTestReport">AWS
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
         * <p>Verifies an email identity for use with Amazon Pinpoint. In Amazon Pinpoint,
         * an identity is an email address or domain that you use when you send email.
         * Before you can use an identity to send email with Amazon Pinpoint, you first
         * have to verify it. By verifying an address, you demonstrate that you're the
         * owner of the address, and that you've given Amazon Pinpoint permission to send
         * email from the address.</p> <p>When you verify an email address, Amazon Pinpoint
         * sends an email to the address. Your email address is verified as soon as you
         * follow the link in the verification email. </p> <p>When you verify a domain,
         * this operation provides a set of DKIM tokens, which you can convert into CNAME
         * tokens. You add these CNAME tokens to the DNS configuration for your domain.
         * Your domain is verified when Amazon Pinpoint detects these records in the DNS
         * configuration for your domain. It usually takes around 72 hours to complete the
         * domain verification process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/CreateEmailIdentity">AWS
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
         * <p>Delete an existing configuration set.</p> <p>In Amazon Pinpoint,
         * <i>configuration sets</i> are groups of rules that you can apply to the emails
         * you send. You apply a configuration set to an email by including a reference to
         * the configuration set in the headers of the email. When you apply a
         * configuration set to an email, all of the rules in that configuration set are
         * applied to the email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DeleteConfigurationSet">AWS
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
         * <p>Delete an event destination.</p> <p>In Amazon Pinpoint, <i>events</i> include
         * message sends, deliveries, opens, clicks, bounces, and complaints. <i>Event
         * destinations</i> are places that you can send information about these events to.
         * For example, you can send event data to Amazon SNS to receive notifications when
         * you receive bounces or complaints, or you can use Amazon Kinesis Data Firehose
         * to stream data to Amazon S3 for long-term storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DeleteConfigurationSetEventDestination">AWS
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
         * <p>Delete a dedicated IP pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DeleteDedicatedIpPool">AWS
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
         * <p>Deletes an email identity that you previously verified for use with Amazon
         * Pinpoint. An identity can be either an email address or a domain
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DeleteEmailIdentity">AWS
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
         * <p>Obtain information about the email-sending status and capabilities of your
         * Amazon Pinpoint account in the current AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetAccount">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetBlacklistReports">AWS
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
         * email, and more.</p> <p>In Amazon Pinpoint, <i>configuration sets</i> are groups
         * of rules that you can apply to the emails you send. You apply a configuration
         * set to an email by including a reference to the configuration set in the headers
         * of the email. When you apply a configuration set to an email, all of the rules
         * in that configuration set are applied to the email.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetConfigurationSet">AWS
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
         * configuration set.</p> <p>In Amazon Pinpoint, <i>events</i> include message
         * sends, deliveries, opens, clicks, bounces, and complaints. <i>Event
         * destinations</i> are places that you can send information about these events to.
         * For example, you can send event data to Amazon SNS to receive notifications when
         * you receive bounces or complaints, or you can use Amazon Kinesis Data Firehose
         * to stream data to Amazon S3 for long-term storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetConfigurationSetEventDestinations">AWS
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
         * <p>Get information about a dedicated IP address, including the name of the
         * dedicated IP pool that it's associated with, as well information about the
         * automatic warm-up process for the address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDedicatedIp">AWS
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
         * <p>List the dedicated IP addresses that are associated with your Amazon Pinpoint
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDedicatedIps">AWS
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
         * your Amazon Pinpoint account. When the Deliverability dashboard is enabled, you
         * gain access to reputation, deliverability, and other metrics for the domains
         * that you use to send email using Amazon Pinpoint. You also gain the ability to
         * perform predictive inbox placement tests.</p> <p>When you use the Deliverability
         * dashboard, you pay a monthly subscription charge, in addition to any other fees
         * that you accrue by using Amazon Pinpoint. For more information about the
         * features and cost of a Deliverability dashboard subscription, see <a
         * href="http://aws.amazon.com/pinpoint/pricing/">Amazon Pinpoint
         * Pricing</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDeliverabilityDashboardOptions">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDeliverabilityTestReport">AWS
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
         * the Deliverability dashboard is enabled for
         * (<code>PutDeliverabilityDashboardOption</code> operation).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDomainDeliverabilityCampaign">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDomainStatisticsReport">AWS
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
         * <p>Provides information about a specific identity associated with your Amazon
         * Pinpoint account, including the identity's verification status, its DKIM
         * authentication status, and its custom Mail-From settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetEmailIdentity">AWS
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
         * <p>List all of the configuration sets associated with your Amazon Pinpoint
         * account in the current region.</p> <p>In Amazon Pinpoint, <i>configuration
         * sets</i> are groups of rules that you can apply to the emails you send. You
         * apply a configuration set to an email by including a reference to the
         * configuration set in the headers of the email. When you apply a configuration
         * set to an email, all of the rules in that configuration set are applied to the
         * email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListConfigurationSets">AWS
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
         * <p>List all of the dedicated IP pools that exist in your Amazon Pinpoint account
         * in the current AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListDedicatedIpPools">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListDeliverabilityTestReports">AWS
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
         * domain only if you enabled the Deliverability dashboard
         * (<code>PutDeliverabilityDashboardOption</code> operation) for the
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListDomainDeliverabilityCampaigns">AWS
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
         * Amazon Pinpoint account. An identity can be either an email address or a domain.
         * This operation returns identities that are verified as well as those that
         * aren't.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListEmailIdentities">AWS
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
         * <p>Retrieve a list of the tags (keys and values) that are associated with a
         * specified resource. A <i>tag</i> is a label that you optionally define and
         * associate with a resource in Amazon Pinpoint. Each tag consists of a
         * required <i>tag key</i> and an optional associated <i>tag value</i>. A tag key
         * is a general label that acts as a category for more specific tag values. A tag
         * value acts as a descriptor within a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListTagsForResource">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutAccountDedicatedIpWarmupAttributes">AWS
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
         * <p>Enable or disable the ability of your account to send email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutAccountSendingAttributes">AWS
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
         * <p>Associate a configuration set with a dedicated IP pool. You can use dedicated
         * IP pools to create groups of dedicated IP addresses for sending specific types
         * of email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutConfigurationSetDeliveryOptions">AWS
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
         * using a particular configuration set in a specific AWS Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutConfigurationSetReputationOptions">AWS
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
         * configuration set in a specific AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutConfigurationSetSendingOptions">AWS
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
         * <p>Specify a custom domain to use for open and click tracking elements in email
         * that you send using Amazon Pinpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutConfigurationSetTrackingOptions">AWS
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
         * <p>Move a dedicated IP address to an existing dedicated IP pool.</p> 
         * <p>The dedicated IP address that you specify must already exist, and must be
         * associated with your Amazon Pinpoint account. </p> <p>The dedicated IP pool you
         * specify must already exist. You can create a new pool by using the
         * <code>CreateDedicatedIpPool</code> operation.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutDedicatedIpInPool">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutDedicatedIpWarmupAttributes">AWS
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
         * <p>Enable or disable the Deliverability dashboard for your Amazon Pinpoint
         * account. When you enable the Deliverability dashboard, you gain access to
         * reputation, deliverability, and other metrics for the domains that you use to
         * send email using Amazon Pinpoint. You also gain the ability to perform
         * predictive inbox placement tests.</p> <p>When you use the Deliverability
         * dashboard, you pay a monthly subscription charge, in addition to any other fees
         * that you accrue by using Amazon Pinpoint. For more information about the
         * features and cost of a Deliverability dashboard subscription, see <a
         * href="http://aws.amazon.com/pinpoint/pricing/">Amazon Pinpoint
         * Pricing</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutDeliverabilityDashboardOption">AWS
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
         * <p>Used to enable or disable DKIM authentication for an email
         * identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutEmailIdentityDkimAttributes">AWS
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
         * <p>Used to enable or disable feedback forwarding for an identity. This setting
         * determines what happens when an identity is used to send an email that results
         * in a bounce or complaint event.</p> <p>When you enable feedback forwarding,
         * Amazon Pinpoint sends you email notifications when bounce or complaint events
         * occur. Amazon Pinpoint sends this notification to the address that you specified
         * in the Return-Path header of the original email.</p> <p>When you disable
         * feedback forwarding, Amazon Pinpoint sends notifications through other
         * mechanisms, such as by notifying an Amazon SNS topic. You're required to have a
         * method of tracking bounces and complaints. If you haven't set up another
         * mechanism for receiving bounce or complaint notifications, Amazon Pinpoint sends
         * an email notification when these events occur (even if this setting is
         * disabled).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutEmailIdentityFeedbackAttributes">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutEmailIdentityMailFromAttributes">AWS
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
         * <p>Sends an email message. You can use the Amazon Pinpoint Email API to send two
         * types of messages:</p> <ul> <li> <p> <b>Simple</b> – A standard email message.
         * When you create this type of message, you specify the sender, the recipient, and
         * the message body, and Amazon Pinpoint assembles the message for you.</p> </li>
         * <li> <p> <b>Raw</b> – A raw, MIME-formatted email message. When you send this
         * type of email, you have to specify all of the message headers, as well as the
         * message body. You can use this message type to send messages that contain
         * attachments. The message that you specify has to be a valid MIME message.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/SendEmail">AWS
         * API Reference</a></p>
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
         * <i>tag</i> is a label that you optionally define and associate with a resource
         * in Amazon Pinpoint. Tags can help you categorize and manage resources in
         * different ways, such as by purpose, owner, environment, or other criteria. A
         * resource can have as many as 50 tags.</p> <p>Each tag consists of a
         * required <i>tag key</i> and an associated <i>tag value</i>, both of which you
         * define. A tag key is a general label that acts as a category for more specific
         * tag values. A tag value acts as a descriptor within a tag key.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/TagResource">AWS
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
         * <p>Remove one or more tags (keys and values) from a specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/UntagResource">AWS
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
         * <p>In Amazon Pinpoint, <i>events</i> include message sends, deliveries, opens,
         * clicks, bounces, and complaints. <i>Event destinations</i> are places that you
         * can send information about these events to. For example, you can send event data
         * to Amazon SNS to receive notifications when you receive bounces or complaints,
         * or you can use Amazon Kinesis Data Firehose to stream data to Amazon S3 for
         * long-term storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/UpdateConfigurationSetEventDestination">AWS
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


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PinpointEmailEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PinpointEmailClient>;
      void init(const PinpointEmailClientConfiguration& clientConfiguration);

      PinpointEmailClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PinpointEmailEndpointProviderBase> m_endpointProvider;
  };

} // namespace PinpointEmail
} // namespace Aws

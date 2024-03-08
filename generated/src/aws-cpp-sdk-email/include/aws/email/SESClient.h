/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/email/SESServiceClientModel.h>

namespace Aws
{
namespace SES
{
  /**
   * <fullname>Amazon Simple Email Service</fullname> <p> This document contains
   * reference information for the <a href="https://aws.amazon.com/ses/">Amazon
   * Simple Email Service</a> (Amazon SES) API, version 2010-12-01. This document is
   * best used in conjunction with the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
   * SES Developer Guide</a>. </p>  <p> For a list of Amazon SES endpoints to
   * use in service requests, see <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions
   * and Amazon SES</a> in the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
   * SES Developer Guide</a>.</p>  <p>This documentation contains reference
   * information related to the following:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_Operations.html">Amazon
   * SES API Actions</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_Types.html">Amazon
   * SES API Data Types</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/ses/latest/APIReference/CommonParameters.html">Common
   * Parameters</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/ses/latest/APIReference/CommonErrors.html">Common
   * Errors</a> </p> </li> </ul>
   */
  class AWS_SES_API SESClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<SESClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SESClientConfiguration ClientConfigurationType;
      typedef SESEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESClient(const Aws::SES::SESClientConfiguration& clientConfiguration = Aws::SES::SESClientConfiguration(),
                  std::shared_ptr<SESEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<SESEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::SES::SESClientConfiguration& clientConfiguration = Aws::SES::SESClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SESClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<SESEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::SES::SESClientConfiguration& clientConfiguration = Aws::SES::SESClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SESClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SESClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Creates a receipt rule set by cloning an existing one. All receipt rules and
         * configurations are copied to the new receipt rule set and are completely
         * independent of the source rule set.</p> <p>For information about setting up rule
         * sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-concepts.html#receiving-email-concepts-rules">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CloneReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CloneReceiptRuleSetOutcome CloneReceiptRuleSet(const Model::CloneReceiptRuleSetRequest& request) const;

        /**
         * A Callable wrapper for CloneReceiptRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CloneReceiptRuleSetRequestT = Model::CloneReceiptRuleSetRequest>
        Model::CloneReceiptRuleSetOutcomeCallable CloneReceiptRuleSetCallable(const CloneReceiptRuleSetRequestT& request) const
        {
            return SubmitCallable(&SESClient::CloneReceiptRuleSet, request);
        }

        /**
         * An Async wrapper for CloneReceiptRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CloneReceiptRuleSetRequestT = Model::CloneReceiptRuleSetRequest>
        void CloneReceiptRuleSetAsync(const CloneReceiptRuleSetRequestT& request, const CloneReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::CloneReceiptRuleSet, request, handler, context);
        }

        /**
         * <p>Creates a configuration set.</p> <p>Configuration sets enable you to publish
         * email sending events. For information about using configuration sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetOutcome CreateConfigurationSet(const Model::CreateConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfigurationSetRequestT = Model::CreateConfigurationSetRequest>
        Model::CreateConfigurationSetOutcomeCallable CreateConfigurationSetCallable(const CreateConfigurationSetRequestT& request) const
        {
            return SubmitCallable(&SESClient::CreateConfigurationSet, request);
        }

        /**
         * An Async wrapper for CreateConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigurationSetRequestT = Model::CreateConfigurationSetRequest>
        void CreateConfigurationSetAsync(const CreateConfigurationSetRequestT& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::CreateConfigurationSet, request, handler, context);
        }

        /**
         * <p>Creates a configuration set event destination.</p>  <p>When you create
         * or update an event destination, you must provide one, and only one, destination.
         * The destination can be CloudWatch, Amazon Kinesis Firehose, or Amazon Simple
         * Notification Service (Amazon SNS).</p>  <p>An event destination is the
         * Amazon Web Services service to which Amazon SES publishes the email sending
         * events associated with a configuration set. For information about using
         * configuration sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetEventDestinationOutcome CreateConfigurationSetEventDestination(const Model::CreateConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfigurationSetEventDestinationRequestT = Model::CreateConfigurationSetEventDestinationRequest>
        Model::CreateConfigurationSetEventDestinationOutcomeCallable CreateConfigurationSetEventDestinationCallable(const CreateConfigurationSetEventDestinationRequestT& request) const
        {
            return SubmitCallable(&SESClient::CreateConfigurationSetEventDestination, request);
        }

        /**
         * An Async wrapper for CreateConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigurationSetEventDestinationRequestT = Model::CreateConfigurationSetEventDestinationRequest>
        void CreateConfigurationSetEventDestinationAsync(const CreateConfigurationSetEventDestinationRequestT& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::CreateConfigurationSetEventDestination, request, handler, context);
        }

        /**
         * <p>Creates an association between a configuration set and a custom domain for
         * open and click event tracking. </p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events. For information
         * about using custom domains, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/configure-custom-open-click-domains.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetTrackingOptionsOutcome CreateConfigurationSetTrackingOptions(const Model::CreateConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationSetTrackingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfigurationSetTrackingOptionsRequestT = Model::CreateConfigurationSetTrackingOptionsRequest>
        Model::CreateConfigurationSetTrackingOptionsOutcomeCallable CreateConfigurationSetTrackingOptionsCallable(const CreateConfigurationSetTrackingOptionsRequestT& request) const
        {
            return SubmitCallable(&SESClient::CreateConfigurationSetTrackingOptions, request);
        }

        /**
         * An Async wrapper for CreateConfigurationSetTrackingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigurationSetTrackingOptionsRequestT = Model::CreateConfigurationSetTrackingOptionsRequest>
        void CreateConfigurationSetTrackingOptionsAsync(const CreateConfigurationSetTrackingOptionsRequestT& request, const CreateConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::CreateConfigurationSetTrackingOptions, request, handler, context);
        }

        /**
         * <p>Creates a new custom verification email template.</p> <p>For more information
         * about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomVerificationEmailTemplateOutcome CreateCustomVerificationEmailTemplate(const Model::CreateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomVerificationEmailTemplateRequestT = Model::CreateCustomVerificationEmailTemplateRequest>
        Model::CreateCustomVerificationEmailTemplateOutcomeCallable CreateCustomVerificationEmailTemplateCallable(const CreateCustomVerificationEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&SESClient::CreateCustomVerificationEmailTemplate, request);
        }

        /**
         * An Async wrapper for CreateCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomVerificationEmailTemplateRequestT = Model::CreateCustomVerificationEmailTemplateRequest>
        void CreateCustomVerificationEmailTemplateAsync(const CreateCustomVerificationEmailTemplateRequestT& request, const CreateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::CreateCustomVerificationEmailTemplate, request, handler, context);
        }

        /**
         * <p>Creates a new IP address filter.</p> <p>For information about setting up IP
         * address filters, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-ip-filtering-console-walkthrough.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReceiptFilterOutcome CreateReceiptFilter(const Model::CreateReceiptFilterRequest& request) const;

        /**
         * A Callable wrapper for CreateReceiptFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReceiptFilterRequestT = Model::CreateReceiptFilterRequest>
        Model::CreateReceiptFilterOutcomeCallable CreateReceiptFilterCallable(const CreateReceiptFilterRequestT& request) const
        {
            return SubmitCallable(&SESClient::CreateReceiptFilter, request);
        }

        /**
         * An Async wrapper for CreateReceiptFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReceiptFilterRequestT = Model::CreateReceiptFilterRequest>
        void CreateReceiptFilterAsync(const CreateReceiptFilterRequestT& request, const CreateReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::CreateReceiptFilter, request, handler, context);
        }

        /**
         * <p>Creates a receipt rule.</p> <p>For information about setting up receipt
         * rules, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-receipt-rules-console-walkthrough.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReceiptRuleOutcome CreateReceiptRule(const Model::CreateReceiptRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateReceiptRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReceiptRuleRequestT = Model::CreateReceiptRuleRequest>
        Model::CreateReceiptRuleOutcomeCallable CreateReceiptRuleCallable(const CreateReceiptRuleRequestT& request) const
        {
            return SubmitCallable(&SESClient::CreateReceiptRule, request);
        }

        /**
         * An Async wrapper for CreateReceiptRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReceiptRuleRequestT = Model::CreateReceiptRuleRequest>
        void CreateReceiptRuleAsync(const CreateReceiptRuleRequestT& request, const CreateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::CreateReceiptRule, request, handler, context);
        }

        /**
         * <p>Creates an empty receipt rule set.</p> <p>For information about setting up
         * receipt rule sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-concepts.html#receiving-email-concepts-rules">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReceiptRuleSetOutcome CreateReceiptRuleSet(const Model::CreateReceiptRuleSetRequest& request) const;

        /**
         * A Callable wrapper for CreateReceiptRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReceiptRuleSetRequestT = Model::CreateReceiptRuleSetRequest>
        Model::CreateReceiptRuleSetOutcomeCallable CreateReceiptRuleSetCallable(const CreateReceiptRuleSetRequestT& request) const
        {
            return SubmitCallable(&SESClient::CreateReceiptRuleSet, request);
        }

        /**
         * An Async wrapper for CreateReceiptRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReceiptRuleSetRequestT = Model::CreateReceiptRuleSetRequest>
        void CreateReceiptRuleSetAsync(const CreateReceiptRuleSetRequestT& request, const CreateReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::CreateReceiptRuleSet, request, handler, context);
        }

        /**
         * <p>Creates an email template. Email templates enable you to send personalized
         * email to one or more destinations in a single operation. For more information,
         * see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/send-personalized-email-api.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateOutcome CreateTemplate(const Model::CreateTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTemplateRequestT = Model::CreateTemplateRequest>
        Model::CreateTemplateOutcomeCallable CreateTemplateCallable(const CreateTemplateRequestT& request) const
        {
            return SubmitCallable(&SESClient::CreateTemplate, request);
        }

        /**
         * An Async wrapper for CreateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTemplateRequestT = Model::CreateTemplateRequest>
        void CreateTemplateAsync(const CreateTemplateRequestT& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::CreateTemplate, request, handler, context);
        }

        /**
         * <p>Deletes a configuration set. Configuration sets enable you to publish email
         * sending events. For information about using configuration sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetOutcome DeleteConfigurationSet(const Model::DeleteConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigurationSetRequestT = Model::DeleteConfigurationSetRequest>
        Model::DeleteConfigurationSetOutcomeCallable DeleteConfigurationSetCallable(const DeleteConfigurationSetRequestT& request) const
        {
            return SubmitCallable(&SESClient::DeleteConfigurationSet, request);
        }

        /**
         * An Async wrapper for DeleteConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationSetRequestT = Model::DeleteConfigurationSetRequest>
        void DeleteConfigurationSetAsync(const DeleteConfigurationSetRequestT& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DeleteConfigurationSet, request, handler, context);
        }

        /**
         * <p>Deletes a configuration set event destination. Configuration set event
         * destinations are associated with configuration sets, which enable you to publish
         * email sending events. For information about using configuration sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetEventDestinationOutcome DeleteConfigurationSetEventDestination(const Model::DeleteConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigurationSetEventDestinationRequestT = Model::DeleteConfigurationSetEventDestinationRequest>
        Model::DeleteConfigurationSetEventDestinationOutcomeCallable DeleteConfigurationSetEventDestinationCallable(const DeleteConfigurationSetEventDestinationRequestT& request) const
        {
            return SubmitCallable(&SESClient::DeleteConfigurationSetEventDestination, request);
        }

        /**
         * An Async wrapper for DeleteConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationSetEventDestinationRequestT = Model::DeleteConfigurationSetEventDestinationRequest>
        void DeleteConfigurationSetEventDestinationAsync(const DeleteConfigurationSetEventDestinationRequestT& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DeleteConfigurationSetEventDestination, request, handler, context);
        }

        /**
         * <p>Deletes an association between a configuration set and a custom domain for
         * open and click event tracking.</p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events. For information
         * about using custom domains, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/configure-custom-open-click-domains.html">Amazon
         * SES Developer Guide</a>.</p>  <p>Deleting this kind of association results
         * in emails sent using the specified configuration set to capture open and click
         * events using the standard, Amazon SES-operated domains.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetTrackingOptionsOutcome DeleteConfigurationSetTrackingOptions(const Model::DeleteConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationSetTrackingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigurationSetTrackingOptionsRequestT = Model::DeleteConfigurationSetTrackingOptionsRequest>
        Model::DeleteConfigurationSetTrackingOptionsOutcomeCallable DeleteConfigurationSetTrackingOptionsCallable(const DeleteConfigurationSetTrackingOptionsRequestT& request) const
        {
            return SubmitCallable(&SESClient::DeleteConfigurationSetTrackingOptions, request);
        }

        /**
         * An Async wrapper for DeleteConfigurationSetTrackingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationSetTrackingOptionsRequestT = Model::DeleteConfigurationSetTrackingOptionsRequest>
        void DeleteConfigurationSetTrackingOptionsAsync(const DeleteConfigurationSetTrackingOptionsRequestT& request, const DeleteConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DeleteConfigurationSetTrackingOptions, request, handler, context);
        }

        /**
         * <p>Deletes an existing custom verification email template. </p> <p>For more
         * information about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomVerificationEmailTemplateOutcome DeleteCustomVerificationEmailTemplate(const Model::DeleteCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomVerificationEmailTemplateRequestT = Model::DeleteCustomVerificationEmailTemplateRequest>
        Model::DeleteCustomVerificationEmailTemplateOutcomeCallable DeleteCustomVerificationEmailTemplateCallable(const DeleteCustomVerificationEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&SESClient::DeleteCustomVerificationEmailTemplate, request);
        }

        /**
         * An Async wrapper for DeleteCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomVerificationEmailTemplateRequestT = Model::DeleteCustomVerificationEmailTemplateRequest>
        void DeleteCustomVerificationEmailTemplateAsync(const DeleteCustomVerificationEmailTemplateRequestT& request, const DeleteCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DeleteCustomVerificationEmailTemplate, request, handler, context);
        }

        /**
         * <p>Deletes the specified identity (an email address or a domain) from the list
         * of verified identities.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityOutcome DeleteIdentity(const Model::DeleteIdentityRequest& request) const;

        /**
         * A Callable wrapper for DeleteIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIdentityRequestT = Model::DeleteIdentityRequest>
        Model::DeleteIdentityOutcomeCallable DeleteIdentityCallable(const DeleteIdentityRequestT& request) const
        {
            return SubmitCallable(&SESClient::DeleteIdentity, request);
        }

        /**
         * An Async wrapper for DeleteIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIdentityRequestT = Model::DeleteIdentityRequest>
        void DeleteIdentityAsync(const DeleteIdentityRequestT& request, const DeleteIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DeleteIdentity, request, handler, context);
        }

        /**
         * <p>Deletes the specified sending authorization policy for the given identity (an
         * email address or a domain). This operation returns successfully even if a policy
         * with the specified name does not exist.</p>  <p>This operation is for the
         * identity owner only. If you have not verified the identity, it returns an
         * error.</p>  <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityPolicyOutcome DeleteIdentityPolicy(const Model::DeleteIdentityPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteIdentityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIdentityPolicyRequestT = Model::DeleteIdentityPolicyRequest>
        Model::DeleteIdentityPolicyOutcomeCallable DeleteIdentityPolicyCallable(const DeleteIdentityPolicyRequestT& request) const
        {
            return SubmitCallable(&SESClient::DeleteIdentityPolicy, request);
        }

        /**
         * An Async wrapper for DeleteIdentityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIdentityPolicyRequestT = Model::DeleteIdentityPolicyRequest>
        void DeleteIdentityPolicyAsync(const DeleteIdentityPolicyRequestT& request, const DeleteIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DeleteIdentityPolicy, request, handler, context);
        }

        /**
         * <p>Deletes the specified IP address filter.</p> <p>For information about
         * managing IP address filters, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-ip-filtering-console-walkthrough.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReceiptFilterOutcome DeleteReceiptFilter(const Model::DeleteReceiptFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteReceiptFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReceiptFilterRequestT = Model::DeleteReceiptFilterRequest>
        Model::DeleteReceiptFilterOutcomeCallable DeleteReceiptFilterCallable(const DeleteReceiptFilterRequestT& request) const
        {
            return SubmitCallable(&SESClient::DeleteReceiptFilter, request);
        }

        /**
         * An Async wrapper for DeleteReceiptFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReceiptFilterRequestT = Model::DeleteReceiptFilterRequest>
        void DeleteReceiptFilterAsync(const DeleteReceiptFilterRequestT& request, const DeleteReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DeleteReceiptFilter, request, handler, context);
        }

        /**
         * <p>Deletes the specified receipt rule.</p> <p>For information about managing
         * receipt rules, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-receipt-rules-console-walkthrough.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReceiptRuleOutcome DeleteReceiptRule(const Model::DeleteReceiptRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteReceiptRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReceiptRuleRequestT = Model::DeleteReceiptRuleRequest>
        Model::DeleteReceiptRuleOutcomeCallable DeleteReceiptRuleCallable(const DeleteReceiptRuleRequestT& request) const
        {
            return SubmitCallable(&SESClient::DeleteReceiptRule, request);
        }

        /**
         * An Async wrapper for DeleteReceiptRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReceiptRuleRequestT = Model::DeleteReceiptRuleRequest>
        void DeleteReceiptRuleAsync(const DeleteReceiptRuleRequestT& request, const DeleteReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DeleteReceiptRule, request, handler, context);
        }

        /**
         * <p>Deletes the specified receipt rule set and all of the receipt rules it
         * contains.</p>  <p>The currently active rule set cannot be deleted.</p>
         *  <p>For information about managing receipt rule sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-receipt-rules-console-walkthrough.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReceiptRuleSetOutcome DeleteReceiptRuleSet(const Model::DeleteReceiptRuleSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteReceiptRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReceiptRuleSetRequestT = Model::DeleteReceiptRuleSetRequest>
        Model::DeleteReceiptRuleSetOutcomeCallable DeleteReceiptRuleSetCallable(const DeleteReceiptRuleSetRequestT& request) const
        {
            return SubmitCallable(&SESClient::DeleteReceiptRuleSet, request);
        }

        /**
         * An Async wrapper for DeleteReceiptRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReceiptRuleSetRequestT = Model::DeleteReceiptRuleSetRequest>
        void DeleteReceiptRuleSetAsync(const DeleteReceiptRuleSetRequestT& request, const DeleteReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DeleteReceiptRuleSet, request, handler, context);
        }

        /**
         * <p>Deletes an email template.</p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateOutcome DeleteTemplate(const Model::DeleteTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTemplateRequestT = Model::DeleteTemplateRequest>
        Model::DeleteTemplateOutcomeCallable DeleteTemplateCallable(const DeleteTemplateRequestT& request) const
        {
            return SubmitCallable(&SESClient::DeleteTemplate, request);
        }

        /**
         * An Async wrapper for DeleteTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTemplateRequestT = Model::DeleteTemplateRequest>
        void DeleteTemplateAsync(const DeleteTemplateRequestT& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DeleteTemplate, request, handler, context);
        }

        /**
         * <p>Deprecated. Use the <code>DeleteIdentity</code> operation to delete email
         * addresses and domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteVerifiedEmailAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVerifiedEmailAddressOutcome DeleteVerifiedEmailAddress(const Model::DeleteVerifiedEmailAddressRequest& request) const;

        /**
         * A Callable wrapper for DeleteVerifiedEmailAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVerifiedEmailAddressRequestT = Model::DeleteVerifiedEmailAddressRequest>
        Model::DeleteVerifiedEmailAddressOutcomeCallable DeleteVerifiedEmailAddressCallable(const DeleteVerifiedEmailAddressRequestT& request) const
        {
            return SubmitCallable(&SESClient::DeleteVerifiedEmailAddress, request);
        }

        /**
         * An Async wrapper for DeleteVerifiedEmailAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVerifiedEmailAddressRequestT = Model::DeleteVerifiedEmailAddressRequest>
        void DeleteVerifiedEmailAddressAsync(const DeleteVerifiedEmailAddressRequestT& request, const DeleteVerifiedEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DeleteVerifiedEmailAddress, request, handler, context);
        }

        /**
         * <p>Returns the metadata and receipt rules for the receipt rule set that is
         * currently active.</p> <p>For information about setting up receipt rule sets, see
         * the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-concepts.html#receiving-email-concepts-rules">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeActiveReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActiveReceiptRuleSetOutcome DescribeActiveReceiptRuleSet(const Model::DescribeActiveReceiptRuleSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeActiveReceiptRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeActiveReceiptRuleSetRequestT = Model::DescribeActiveReceiptRuleSetRequest>
        Model::DescribeActiveReceiptRuleSetOutcomeCallable DescribeActiveReceiptRuleSetCallable(const DescribeActiveReceiptRuleSetRequestT& request) const
        {
            return SubmitCallable(&SESClient::DescribeActiveReceiptRuleSet, request);
        }

        /**
         * An Async wrapper for DescribeActiveReceiptRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeActiveReceiptRuleSetRequestT = Model::DescribeActiveReceiptRuleSetRequest>
        void DescribeActiveReceiptRuleSetAsync(const DescribeActiveReceiptRuleSetRequestT& request, const DescribeActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DescribeActiveReceiptRuleSet, request, handler, context);
        }

        /**
         * <p>Returns the details of the specified configuration set. For information about
         * using configuration sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationSetOutcome DescribeConfigurationSet(const Model::DescribeConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConfigurationSetRequestT = Model::DescribeConfigurationSetRequest>
        Model::DescribeConfigurationSetOutcomeCallable DescribeConfigurationSetCallable(const DescribeConfigurationSetRequestT& request) const
        {
            return SubmitCallable(&SESClient::DescribeConfigurationSet, request);
        }

        /**
         * An Async wrapper for DescribeConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConfigurationSetRequestT = Model::DescribeConfigurationSetRequest>
        void DescribeConfigurationSetAsync(const DescribeConfigurationSetRequestT& request, const DescribeConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DescribeConfigurationSet, request, handler, context);
        }

        /**
         * <p>Returns the details of the specified receipt rule.</p> <p>For information
         * about setting up receipt rules, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-receipt-rules-console-walkthrough.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeReceiptRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReceiptRuleOutcome DescribeReceiptRule(const Model::DescribeReceiptRuleRequest& request) const;

        /**
         * A Callable wrapper for DescribeReceiptRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReceiptRuleRequestT = Model::DescribeReceiptRuleRequest>
        Model::DescribeReceiptRuleOutcomeCallable DescribeReceiptRuleCallable(const DescribeReceiptRuleRequestT& request) const
        {
            return SubmitCallable(&SESClient::DescribeReceiptRule, request);
        }

        /**
         * An Async wrapper for DescribeReceiptRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReceiptRuleRequestT = Model::DescribeReceiptRuleRequest>
        void DescribeReceiptRuleAsync(const DescribeReceiptRuleRequestT& request, const DescribeReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DescribeReceiptRule, request, handler, context);
        }

        /**
         * <p>Returns the details of the specified receipt rule set.</p> <p>For information
         * about managing receipt rule sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-receipt-rules-console-walkthrough.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReceiptRuleSetOutcome DescribeReceiptRuleSet(const Model::DescribeReceiptRuleSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeReceiptRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReceiptRuleSetRequestT = Model::DescribeReceiptRuleSetRequest>
        Model::DescribeReceiptRuleSetOutcomeCallable DescribeReceiptRuleSetCallable(const DescribeReceiptRuleSetRequestT& request) const
        {
            return SubmitCallable(&SESClient::DescribeReceiptRuleSet, request);
        }

        /**
         * An Async wrapper for DescribeReceiptRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReceiptRuleSetRequestT = Model::DescribeReceiptRuleSetRequest>
        void DescribeReceiptRuleSetAsync(const DescribeReceiptRuleSetRequestT& request, const DescribeReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::DescribeReceiptRuleSet, request, handler, context);
        }

        /**
         * <p>Returns the email sending status of the Amazon SES account for the current
         * Region.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetAccountSendingEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSendingEnabledOutcome GetAccountSendingEnabled(const Model::GetAccountSendingEnabledRequest& request) const;

        /**
         * A Callable wrapper for GetAccountSendingEnabled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountSendingEnabledRequestT = Model::GetAccountSendingEnabledRequest>
        Model::GetAccountSendingEnabledOutcomeCallable GetAccountSendingEnabledCallable(const GetAccountSendingEnabledRequestT& request) const
        {
            return SubmitCallable(&SESClient::GetAccountSendingEnabled, request);
        }

        /**
         * An Async wrapper for GetAccountSendingEnabled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountSendingEnabledRequestT = Model::GetAccountSendingEnabledRequest>
        void GetAccountSendingEnabledAsync(const GetAccountSendingEnabledRequestT& request, const GetAccountSendingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::GetAccountSendingEnabled, request, handler, context);
        }

        /**
         * <p>Returns the custom email verification template for the template name you
         * specify.</p> <p>For more information about custom verification email templates,
         * see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomVerificationEmailTemplateOutcome GetCustomVerificationEmailTemplate(const Model::GetCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCustomVerificationEmailTemplateRequestT = Model::GetCustomVerificationEmailTemplateRequest>
        Model::GetCustomVerificationEmailTemplateOutcomeCallable GetCustomVerificationEmailTemplateCallable(const GetCustomVerificationEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&SESClient::GetCustomVerificationEmailTemplate, request);
        }

        /**
         * An Async wrapper for GetCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCustomVerificationEmailTemplateRequestT = Model::GetCustomVerificationEmailTemplateRequest>
        void GetCustomVerificationEmailTemplateAsync(const GetCustomVerificationEmailTemplateRequestT& request, const GetCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::GetCustomVerificationEmailTemplate, request, handler, context);
        }

        /**
         * <p>Returns the current status of Easy DKIM signing for an entity. For domain
         * name identities, this operation also returns the DKIM tokens that are required
         * for Easy DKIM signing, and whether Amazon SES has successfully verified that
         * these tokens have been published.</p> <p>This operation takes a list of
         * identities as input and returns the following information for each:</p> <ul>
         * <li> <p>Whether Easy DKIM signing is enabled or disabled.</p> </li> <li> <p>A
         * set of DKIM tokens that represent the identity. If the identity is an email
         * address, the tokens represent the domain of that address.</p> </li> <li>
         * <p>Whether Amazon SES has successfully verified the DKIM tokens published in the
         * domain's DNS. This information is only returned for domain name identities, not
         * for email addresses.</p> </li> </ul> <p>This operation is throttled at one
         * request per second and can only get DKIM attributes for up to 100 identities at
         * a time.</p> <p>For more information about creating DNS records using DKIM
         * tokens, go to the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-authentication-dkim-easy-managing.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityDkimAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityDkimAttributesOutcome GetIdentityDkimAttributes(const Model::GetIdentityDkimAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityDkimAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIdentityDkimAttributesRequestT = Model::GetIdentityDkimAttributesRequest>
        Model::GetIdentityDkimAttributesOutcomeCallable GetIdentityDkimAttributesCallable(const GetIdentityDkimAttributesRequestT& request) const
        {
            return SubmitCallable(&SESClient::GetIdentityDkimAttributes, request);
        }

        /**
         * An Async wrapper for GetIdentityDkimAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIdentityDkimAttributesRequestT = Model::GetIdentityDkimAttributesRequest>
        void GetIdentityDkimAttributesAsync(const GetIdentityDkimAttributesRequestT& request, const GetIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::GetIdentityDkimAttributes, request, handler, context);
        }

        /**
         * <p>Returns the custom MAIL FROM attributes for a list of identities (email
         * addresses : domains).</p> <p>This operation is throttled at one request per
         * second and can only get custom MAIL FROM attributes for up to 100 identities at
         * a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityMailFromDomainAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityMailFromDomainAttributesOutcome GetIdentityMailFromDomainAttributes(const Model::GetIdentityMailFromDomainAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityMailFromDomainAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIdentityMailFromDomainAttributesRequestT = Model::GetIdentityMailFromDomainAttributesRequest>
        Model::GetIdentityMailFromDomainAttributesOutcomeCallable GetIdentityMailFromDomainAttributesCallable(const GetIdentityMailFromDomainAttributesRequestT& request) const
        {
            return SubmitCallable(&SESClient::GetIdentityMailFromDomainAttributes, request);
        }

        /**
         * An Async wrapper for GetIdentityMailFromDomainAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIdentityMailFromDomainAttributesRequestT = Model::GetIdentityMailFromDomainAttributesRequest>
        void GetIdentityMailFromDomainAttributesAsync(const GetIdentityMailFromDomainAttributesRequestT& request, const GetIdentityMailFromDomainAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::GetIdentityMailFromDomainAttributes, request, handler, context);
        }

        /**
         * <p>Given a list of verified identities (email addresses and/or domains), returns
         * a structure describing identity notification attributes.</p> <p>This operation
         * is throttled at one request per second and can only get notification attributes
         * for up to 100 identities at a time.</p> <p>For more information about using
         * notifications with Amazon SES, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity-using-notifications.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityNotificationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityNotificationAttributesOutcome GetIdentityNotificationAttributes(const Model::GetIdentityNotificationAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityNotificationAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIdentityNotificationAttributesRequestT = Model::GetIdentityNotificationAttributesRequest>
        Model::GetIdentityNotificationAttributesOutcomeCallable GetIdentityNotificationAttributesCallable(const GetIdentityNotificationAttributesRequestT& request) const
        {
            return SubmitCallable(&SESClient::GetIdentityNotificationAttributes, request);
        }

        /**
         * An Async wrapper for GetIdentityNotificationAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIdentityNotificationAttributesRequestT = Model::GetIdentityNotificationAttributesRequest>
        void GetIdentityNotificationAttributesAsync(const GetIdentityNotificationAttributesRequestT& request, const GetIdentityNotificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::GetIdentityNotificationAttributes, request, handler, context);
        }

        /**
         * <p>Returns the requested sending authorization policies for the given identity
         * (an email address or a domain). The policies are returned as a map of policy
         * names to policy contents. You can retrieve a maximum of 20 policies at a
         * time.</p>  <p>This operation is for the identity owner only. If you have
         * not verified the identity, it returns an error.</p>  <p>Sending
         * authorization is a feature that enables an identity owner to authorize other
         * senders to use its identities. For information about using sending
         * authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityPoliciesOutcome GetIdentityPolicies(const Model::GetIdentityPoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIdentityPoliciesRequestT = Model::GetIdentityPoliciesRequest>
        Model::GetIdentityPoliciesOutcomeCallable GetIdentityPoliciesCallable(const GetIdentityPoliciesRequestT& request) const
        {
            return SubmitCallable(&SESClient::GetIdentityPolicies, request);
        }

        /**
         * An Async wrapper for GetIdentityPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIdentityPoliciesRequestT = Model::GetIdentityPoliciesRequest>
        void GetIdentityPoliciesAsync(const GetIdentityPoliciesRequestT& request, const GetIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::GetIdentityPolicies, request, handler, context);
        }

        /**
         * <p>Given a list of identities (email addresses and/or domains), returns the
         * verification status and (for domain identities) the verification token for each
         * identity.</p> <p>The verification status of an email address is "Pending" until
         * the email address owner clicks the link within the verification email that
         * Amazon SES sent to that address. If the email address owner clicks the link
         * within 24 hours, the verification status of the email address changes to
         * "Success". If the link is not clicked within 24 hours, the verification status
         * changes to "Failed." In that case, to verify the email address, you must restart
         * the verification process from the beginning.</p> <p>For domain identities, the
         * domain's verification status is "Pending" as Amazon SES searches for the
         * required TXT record in the DNS settings of the domain. When Amazon SES detects
         * the record, the domain's verification status changes to "Success". If Amazon SES
         * is unable to detect the record within 72 hours, the domain's verification status
         * changes to "Failed." In that case, to verify the domain, you must restart the
         * verification process from the beginning.</p> <p>This operation is throttled at
         * one request per second and can only get verification attributes for up to 100
         * identities at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityVerificationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityVerificationAttributesOutcome GetIdentityVerificationAttributes(const Model::GetIdentityVerificationAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityVerificationAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIdentityVerificationAttributesRequestT = Model::GetIdentityVerificationAttributesRequest>
        Model::GetIdentityVerificationAttributesOutcomeCallable GetIdentityVerificationAttributesCallable(const GetIdentityVerificationAttributesRequestT& request) const
        {
            return SubmitCallable(&SESClient::GetIdentityVerificationAttributes, request);
        }

        /**
         * An Async wrapper for GetIdentityVerificationAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIdentityVerificationAttributesRequestT = Model::GetIdentityVerificationAttributesRequest>
        void GetIdentityVerificationAttributesAsync(const GetIdentityVerificationAttributesRequestT& request, const GetIdentityVerificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::GetIdentityVerificationAttributes, request, handler, context);
        }

        /**
         * <p>Provides the sending limits for the Amazon SES account. </p> <p>You can
         * execute this operation no more than once per second.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetSendQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSendQuotaOutcome GetSendQuota(const Model::GetSendQuotaRequest& request) const;

        /**
         * A Callable wrapper for GetSendQuota that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSendQuotaRequestT = Model::GetSendQuotaRequest>
        Model::GetSendQuotaOutcomeCallable GetSendQuotaCallable(const GetSendQuotaRequestT& request) const
        {
            return SubmitCallable(&SESClient::GetSendQuota, request);
        }

        /**
         * An Async wrapper for GetSendQuota that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSendQuotaRequestT = Model::GetSendQuotaRequest>
        void GetSendQuotaAsync(const GetSendQuotaRequestT& request, const GetSendQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::GetSendQuota, request, handler, context);
        }

        /**
         * <p>Provides sending statistics for the current Amazon Web Services Region. The
         * result is a list of data points, representing the last two weeks of sending
         * activity. Each data point in the list contains statistics for a 15-minute period
         * of time.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetSendStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSendStatisticsOutcome GetSendStatistics(const Model::GetSendStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetSendStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSendStatisticsRequestT = Model::GetSendStatisticsRequest>
        Model::GetSendStatisticsOutcomeCallable GetSendStatisticsCallable(const GetSendStatisticsRequestT& request) const
        {
            return SubmitCallable(&SESClient::GetSendStatistics, request);
        }

        /**
         * An Async wrapper for GetSendStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSendStatisticsRequestT = Model::GetSendStatisticsRequest>
        void GetSendStatisticsAsync(const GetSendStatisticsRequestT& request, const GetSendStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::GetSendStatistics, request, handler, context);
        }

        /**
         * <p>Displays the template object (which includes the Subject line, HTML part and
         * text part) for the template you specify.</p> <p>You can execute this operation
         * no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateOutcome GetTemplate(const Model::GetTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTemplateRequestT = Model::GetTemplateRequest>
        Model::GetTemplateOutcomeCallable GetTemplateCallable(const GetTemplateRequestT& request) const
        {
            return SubmitCallable(&SESClient::GetTemplate, request);
        }

        /**
         * An Async wrapper for GetTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTemplateRequestT = Model::GetTemplateRequest>
        void GetTemplateAsync(const GetTemplateRequestT& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::GetTemplate, request, handler, context);
        }

        /**
         * <p>Provides a list of the configuration sets associated with your Amazon SES
         * account in the current Amazon Web Services Region. For information about using
         * configuration sets, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Monitoring
         * Your Amazon SES Sending Activity</a> in the <i>Amazon SES Developer Guide.</i>
         * </p> <p>You can execute this operation no more than once per second. This
         * operation returns up to 1,000 configuration sets each time it is run. If your
         * Amazon SES account has more than 1,000 configuration sets, this operation also
         * returns <code>NextToken</code>. You can then execute the
         * <code>ListConfigurationSets</code> operation again, passing the
         * <code>NextToken</code> parameter and the value of the NextToken element to
         * retrieve additional results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListConfigurationSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationSetsOutcome ListConfigurationSets(const Model::ListConfigurationSetsRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurationSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfigurationSetsRequestT = Model::ListConfigurationSetsRequest>
        Model::ListConfigurationSetsOutcomeCallable ListConfigurationSetsCallable(const ListConfigurationSetsRequestT& request) const
        {
            return SubmitCallable(&SESClient::ListConfigurationSets, request);
        }

        /**
         * An Async wrapper for ListConfigurationSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfigurationSetsRequestT = Model::ListConfigurationSetsRequest>
        void ListConfigurationSetsAsync(const ListConfigurationSetsRequestT& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::ListConfigurationSets, request, handler, context);
        }

        /**
         * <p>Lists the existing custom verification email templates for your account in
         * the current Amazon Web Services Region.</p> <p>For more information about custom
         * verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListCustomVerificationEmailTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomVerificationEmailTemplatesOutcome ListCustomVerificationEmailTemplates(const Model::ListCustomVerificationEmailTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListCustomVerificationEmailTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomVerificationEmailTemplatesRequestT = Model::ListCustomVerificationEmailTemplatesRequest>
        Model::ListCustomVerificationEmailTemplatesOutcomeCallable ListCustomVerificationEmailTemplatesCallable(const ListCustomVerificationEmailTemplatesRequestT& request) const
        {
            return SubmitCallable(&SESClient::ListCustomVerificationEmailTemplates, request);
        }

        /**
         * An Async wrapper for ListCustomVerificationEmailTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomVerificationEmailTemplatesRequestT = Model::ListCustomVerificationEmailTemplatesRequest>
        void ListCustomVerificationEmailTemplatesAsync(const ListCustomVerificationEmailTemplatesRequestT& request, const ListCustomVerificationEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::ListCustomVerificationEmailTemplates, request, handler, context);
        }

        /**
         * <p>Returns a list containing all of the identities (email addresses and domains)
         * for your Amazon Web Services account in the current Amazon Web Services Region,
         * regardless of verification status.</p> <p>You can execute this operation no more
         * than once per second.</p>  <p>It's recommended that for successive
         * pagination calls of this API, you continue to the use the same parameter/value
         * pairs as used in the original call, e.g., if you used
         * <code>IdentityType=Domain</code> in the the original call and received a
         * <code>NextToken</code> in the response, you should continue providing the
         * <code>IdentityType=Domain</code> parameter for further <code>NextToken</code>
         * calls; however, if you didn't provide the <code>IdentityType</code> parameter in
         * the original call, then continue to not provide it for successive pagination
         * calls. Using this protocol will ensure consistent results.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentitiesOutcome ListIdentities(const Model::ListIdentitiesRequest& request) const;

        /**
         * A Callable wrapper for ListIdentities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIdentitiesRequestT = Model::ListIdentitiesRequest>
        Model::ListIdentitiesOutcomeCallable ListIdentitiesCallable(const ListIdentitiesRequestT& request) const
        {
            return SubmitCallable(&SESClient::ListIdentities, request);
        }

        /**
         * An Async wrapper for ListIdentities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIdentitiesRequestT = Model::ListIdentitiesRequest>
        void ListIdentitiesAsync(const ListIdentitiesRequestT& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::ListIdentities, request, handler, context);
        }

        /**
         * <p>Returns a list of sending authorization policies that are attached to the
         * given identity (an email address or a domain). This operation returns only a
         * list. To get the actual policy content, use
         * <code>GetIdentityPolicies</code>.</p>  <p>This operation is for the
         * identity owner only. If you have not verified the identity, it returns an
         * error.</p>  <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListIdentityPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityPoliciesOutcome ListIdentityPolicies(const Model::ListIdentityPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListIdentityPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIdentityPoliciesRequestT = Model::ListIdentityPoliciesRequest>
        Model::ListIdentityPoliciesOutcomeCallable ListIdentityPoliciesCallable(const ListIdentityPoliciesRequestT& request) const
        {
            return SubmitCallable(&SESClient::ListIdentityPolicies, request);
        }

        /**
         * An Async wrapper for ListIdentityPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIdentityPoliciesRequestT = Model::ListIdentityPoliciesRequest>
        void ListIdentityPoliciesAsync(const ListIdentityPoliciesRequestT& request, const ListIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::ListIdentityPolicies, request, handler, context);
        }

        /**
         * <p>Lists the IP address filters associated with your Amazon Web Services account
         * in the current Amazon Web Services Region.</p> <p>For information about managing
         * IP address filters, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-ip-filtering-console-walkthrough.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListReceiptFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceiptFiltersOutcome ListReceiptFilters(const Model::ListReceiptFiltersRequest& request) const;

        /**
         * A Callable wrapper for ListReceiptFilters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReceiptFiltersRequestT = Model::ListReceiptFiltersRequest>
        Model::ListReceiptFiltersOutcomeCallable ListReceiptFiltersCallable(const ListReceiptFiltersRequestT& request) const
        {
            return SubmitCallable(&SESClient::ListReceiptFilters, request);
        }

        /**
         * An Async wrapper for ListReceiptFilters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReceiptFiltersRequestT = Model::ListReceiptFiltersRequest>
        void ListReceiptFiltersAsync(const ListReceiptFiltersRequestT& request, const ListReceiptFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::ListReceiptFilters, request, handler, context);
        }

        /**
         * <p>Lists the receipt rule sets that exist under your Amazon Web Services account
         * in the current Amazon Web Services Region. If there are additional receipt rule
         * sets to be retrieved, you receive a <code>NextToken</code> that you can provide
         * to the next call to <code>ListReceiptRuleSets</code> to retrieve the additional
         * entries.</p> <p>For information about managing receipt rule sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-receipt-rules-console-walkthrough.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListReceiptRuleSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceiptRuleSetsOutcome ListReceiptRuleSets(const Model::ListReceiptRuleSetsRequest& request) const;

        /**
         * A Callable wrapper for ListReceiptRuleSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReceiptRuleSetsRequestT = Model::ListReceiptRuleSetsRequest>
        Model::ListReceiptRuleSetsOutcomeCallable ListReceiptRuleSetsCallable(const ListReceiptRuleSetsRequestT& request) const
        {
            return SubmitCallable(&SESClient::ListReceiptRuleSets, request);
        }

        /**
         * An Async wrapper for ListReceiptRuleSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReceiptRuleSetsRequestT = Model::ListReceiptRuleSetsRequest>
        void ListReceiptRuleSetsAsync(const ListReceiptRuleSetsRequestT& request, const ListReceiptRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::ListReceiptRuleSets, request, handler, context);
        }

        /**
         * <p>Lists the email templates present in your Amazon SES account in the current
         * Amazon Web Services Region.</p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTemplatesRequestT = Model::ListTemplatesRequest>
        Model::ListTemplatesOutcomeCallable ListTemplatesCallable(const ListTemplatesRequestT& request) const
        {
            return SubmitCallable(&SESClient::ListTemplates, request);
        }

        /**
         * An Async wrapper for ListTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTemplatesRequestT = Model::ListTemplatesRequest>
        void ListTemplatesAsync(const ListTemplatesRequestT& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::ListTemplates, request, handler, context);
        }

        /**
         * <p>Deprecated. Use the <code>ListIdentities</code> operation to list the email
         * addresses and domains associated with your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListVerifiedEmailAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVerifiedEmailAddressesOutcome ListVerifiedEmailAddresses(const Model::ListVerifiedEmailAddressesRequest& request) const;

        /**
         * A Callable wrapper for ListVerifiedEmailAddresses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVerifiedEmailAddressesRequestT = Model::ListVerifiedEmailAddressesRequest>
        Model::ListVerifiedEmailAddressesOutcomeCallable ListVerifiedEmailAddressesCallable(const ListVerifiedEmailAddressesRequestT& request) const
        {
            return SubmitCallable(&SESClient::ListVerifiedEmailAddresses, request);
        }

        /**
         * An Async wrapper for ListVerifiedEmailAddresses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVerifiedEmailAddressesRequestT = Model::ListVerifiedEmailAddressesRequest>
        void ListVerifiedEmailAddressesAsync(const ListVerifiedEmailAddressesRequestT& request, const ListVerifiedEmailAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::ListVerifiedEmailAddresses, request, handler, context);
        }

        /**
         * <p>Adds or updates the delivery options for a configuration set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/PutConfigurationSetDeliveryOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetDeliveryOptionsOutcome PutConfigurationSetDeliveryOptions(const Model::PutConfigurationSetDeliveryOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetDeliveryOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutConfigurationSetDeliveryOptionsRequestT = Model::PutConfigurationSetDeliveryOptionsRequest>
        Model::PutConfigurationSetDeliveryOptionsOutcomeCallable PutConfigurationSetDeliveryOptionsCallable(const PutConfigurationSetDeliveryOptionsRequestT& request) const
        {
            return SubmitCallable(&SESClient::PutConfigurationSetDeliveryOptions, request);
        }

        /**
         * An Async wrapper for PutConfigurationSetDeliveryOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConfigurationSetDeliveryOptionsRequestT = Model::PutConfigurationSetDeliveryOptionsRequest>
        void PutConfigurationSetDeliveryOptionsAsync(const PutConfigurationSetDeliveryOptionsRequestT& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::PutConfigurationSetDeliveryOptions, request, handler, context);
        }

        /**
         * <p>Adds or updates a sending authorization policy for the specified identity (an
         * email address or a domain).</p>  <p>This operation is for the identity
         * owner only. If you have not verified the identity, it returns an error.</p>
         *  <p>Sending authorization is a feature that enables an identity owner to
         * authorize other senders to use its identities. For information about using
         * sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/PutIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutIdentityPolicyOutcome PutIdentityPolicy(const Model::PutIdentityPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutIdentityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutIdentityPolicyRequestT = Model::PutIdentityPolicyRequest>
        Model::PutIdentityPolicyOutcomeCallable PutIdentityPolicyCallable(const PutIdentityPolicyRequestT& request) const
        {
            return SubmitCallable(&SESClient::PutIdentityPolicy, request);
        }

        /**
         * An Async wrapper for PutIdentityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutIdentityPolicyRequestT = Model::PutIdentityPolicyRequest>
        void PutIdentityPolicyAsync(const PutIdentityPolicyRequestT& request, const PutIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::PutIdentityPolicy, request, handler, context);
        }

        /**
         * <p>Reorders the receipt rules within a receipt rule set.</p>  <p>All of
         * the rules in the rule set must be represented in this request. That is, it is
         * error if the reorder request doesn't explicitly position all of the rules.</p>
         *  <p>For information about managing receipt rule sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-receipt-rules-console-walkthrough.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReorderReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ReorderReceiptRuleSetOutcome ReorderReceiptRuleSet(const Model::ReorderReceiptRuleSetRequest& request) const;

        /**
         * A Callable wrapper for ReorderReceiptRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReorderReceiptRuleSetRequestT = Model::ReorderReceiptRuleSetRequest>
        Model::ReorderReceiptRuleSetOutcomeCallable ReorderReceiptRuleSetCallable(const ReorderReceiptRuleSetRequestT& request) const
        {
            return SubmitCallable(&SESClient::ReorderReceiptRuleSet, request);
        }

        /**
         * An Async wrapper for ReorderReceiptRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReorderReceiptRuleSetRequestT = Model::ReorderReceiptRuleSetRequest>
        void ReorderReceiptRuleSetAsync(const ReorderReceiptRuleSetRequestT& request, const ReorderReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::ReorderReceiptRuleSet, request, handler, context);
        }

        /**
         * <p>Generates and sends a bounce message to the sender of an email you received
         * through Amazon SES. You can only use this operation on an email up to 24 hours
         * after you receive it.</p>  <p>You cannot use this operation to send
         * generic bounces for mail that was not received by Amazon SES.</p>  <p>For
         * information about receiving email through Amazon SES, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email.html">Amazon SES
         * Developer Guide</a>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendBounce">AWS
         * API Reference</a></p>
         */
        virtual Model::SendBounceOutcome SendBounce(const Model::SendBounceRequest& request) const;

        /**
         * A Callable wrapper for SendBounce that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendBounceRequestT = Model::SendBounceRequest>
        Model::SendBounceOutcomeCallable SendBounceCallable(const SendBounceRequestT& request) const
        {
            return SubmitCallable(&SESClient::SendBounce, request);
        }

        /**
         * An Async wrapper for SendBounce that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendBounceRequestT = Model::SendBounceRequest>
        void SendBounceAsync(const SendBounceRequestT& request, const SendBounceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::SendBounce, request, handler, context);
        }

        /**
         * <p>Composes an email message to multiple destinations. The message body is
         * created using an email template.</p> <p>To send email using this operation, your
         * call must meet the following requirements:</p> <ul> <li> <p>The call must refer
         * to an existing email template. You can create email templates using
         * <a>CreateTemplate</a>.</p> </li> <li> <p>The message must be sent from a
         * verified email address or domain.</p> </li> <li> <p>If your account is still in
         * the Amazon SES sandbox, you may send only to verified addresses or domains, or
         * to email addresses associated with the Amazon SES Mailbox Simulator. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide.</i> </p>
         * </li> <li> <p>The maximum message size is 10 MB.</p> </li> <li> <p>Each
         * <code>Destination</code> parameter must include at least one recipient email
         * address. The recipient address can be a To: address, a CC: address, or a BCC:
         * address. If a recipient email address is invalid (that is, it is not in the
         * format <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the entire message is
         * rejected, even if the message contains other recipients that are valid.</p>
         * </li> <li> <p>The message may not include more than 50 recipients, across the
         * To:, CC: and BCC: fields. If you need to send an email message to a larger
         * audience, you can divide your recipient list into groups of 50 or fewer, and
         * then call the <code>SendBulkTemplatedEmail</code> operation several times to
         * send the message to each group.</p> </li> <li> <p>The number of destinations you
         * can contact in a single call can be limited by your account's maximum sending
         * rate.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendBulkTemplatedEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendBulkTemplatedEmailOutcome SendBulkTemplatedEmail(const Model::SendBulkTemplatedEmailRequest& request) const;

        /**
         * A Callable wrapper for SendBulkTemplatedEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendBulkTemplatedEmailRequestT = Model::SendBulkTemplatedEmailRequest>
        Model::SendBulkTemplatedEmailOutcomeCallable SendBulkTemplatedEmailCallable(const SendBulkTemplatedEmailRequestT& request) const
        {
            return SubmitCallable(&SESClient::SendBulkTemplatedEmail, request);
        }

        /**
         * An Async wrapper for SendBulkTemplatedEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendBulkTemplatedEmailRequestT = Model::SendBulkTemplatedEmailRequest>
        void SendBulkTemplatedEmailAsync(const SendBulkTemplatedEmailRequestT& request, const SendBulkTemplatedEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::SendBulkTemplatedEmail, request, handler, context);
        }

        /**
         * <p>Adds an email address to the list of identities for your Amazon SES account
         * in the current Amazon Web Services Region and attempts to verify it. As a result
         * of executing this operation, a customized verification email is sent to the
         * specified address.</p> <p>To use this operation, you must first create a custom
         * verification email template. For more information about creating and using
         * custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendCustomVerificationEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendCustomVerificationEmailOutcome SendCustomVerificationEmail(const Model::SendCustomVerificationEmailRequest& request) const;

        /**
         * A Callable wrapper for SendCustomVerificationEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendCustomVerificationEmailRequestT = Model::SendCustomVerificationEmailRequest>
        Model::SendCustomVerificationEmailOutcomeCallable SendCustomVerificationEmailCallable(const SendCustomVerificationEmailRequestT& request) const
        {
            return SubmitCallable(&SESClient::SendCustomVerificationEmail, request);
        }

        /**
         * An Async wrapper for SendCustomVerificationEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendCustomVerificationEmailRequestT = Model::SendCustomVerificationEmailRequest>
        void SendCustomVerificationEmailAsync(const SendCustomVerificationEmailRequestT& request, const SendCustomVerificationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::SendCustomVerificationEmail, request, handler, context);
        }

        /**
         * <p>Composes an email message and immediately queues it for sending. To send
         * email using this operation, your message must meet the following
         * requirements:</p> <ul> <li> <p>The message must be sent from a verified email
         * address or domain. If you attempt to send email using a non-verified address or
         * domain, the operation results in an "Email address not verified" error. </p>
         * </li> <li> <p>If your account is still in the Amazon SES sandbox, you may only
         * send to verified addresses or domains, or to email addresses associated with the
         * Amazon SES Mailbox Simulator. For more information, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide.</i> </p>
         * </li> <li> <p>The maximum message size is 10 MB.</p> </li> <li> <p>The message
         * must include at least one recipient email address. The recipient address can be
         * a To: address, a CC: address, or a BCC: address. If a recipient email address is
         * invalid (that is, it is not in the format
         * <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the entire message is
         * rejected, even if the message contains other recipients that are valid.</p>
         * </li> <li> <p>The message may not include more than 50 recipients, across the
         * To:, CC: and BCC: fields. If you need to send an email message to a larger
         * audience, you can divide your recipient list into groups of 50 or fewer, and
         * then call the <code>SendEmail</code> operation several times to send the message
         * to each group.</p> </li> </ul>  <p>For every message that you send,
         * the total number of recipients (including each recipient in the To:, CC: and
         * BCC: fields) is counted against the maximum number of emails you can send in a
         * 24-hour period (your <i>sending quota</i>). For more information about sending
         * quotas in Amazon SES, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/manage-sending-quotas.html">Managing
         * Your Amazon SES Sending Limits</a> in the <i>Amazon SES Developer Guide.</i>
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendEmail">AWS API
         * Reference</a></p>
         */
        virtual Model::SendEmailOutcome SendEmail(const Model::SendEmailRequest& request) const;

        /**
         * A Callable wrapper for SendEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendEmailRequestT = Model::SendEmailRequest>
        Model::SendEmailOutcomeCallable SendEmailCallable(const SendEmailRequestT& request) const
        {
            return SubmitCallable(&SESClient::SendEmail, request);
        }

        /**
         * An Async wrapper for SendEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendEmailRequestT = Model::SendEmailRequest>
        void SendEmailAsync(const SendEmailRequestT& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::SendEmail, request, handler, context);
        }

        /**
         * <p>Composes an email message and immediately queues it for sending.</p> <p>This
         * operation is more flexible than the <code>SendEmail</code> operation. When you
         * use the <code>SendRawEmail</code> operation, you can specify the headers of the
         * message as well as its content. This flexibility is useful, for example, when
         * you need to send a multipart MIME email (such a message that contains both a
         * text and an HTML version). You can also use this operation to send messages that
         * include attachments.</p> <p>The <code>SendRawEmail</code> operation has the
         * following requirements:</p> <ul> <li> <p>You can only send email from <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/verify-addresses-and-domains.html">verified
         * email addresses or domains</a>. If you try to send email from an address that
         * isn't verified, the operation results in an "Email address not verified"
         * error.</p> </li> <li> <p>If your account is still in the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/request-production-access.html">Amazon
         * SES sandbox</a>, you can only send email to other verified addresses in your
         * account, or to addresses that are associated with the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/send-an-email-from-console.html">Amazon
         * SES mailbox simulator</a>.</p> </li> <li> <p>The maximum message size, including
         * attachments, is 10 MB.</p> </li> <li> <p>Each message has to include at least
         * one recipient address. A recipient address includes any address on the To:, CC:,
         * or BCC: lines.</p> </li> <li> <p>If you send a single message to more than one
         * recipient address, and one of the recipient addresses isn't in a valid format
         * (that is, it's not in the format
         * <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), Amazon SES rejects the
         * entire message, even if the other addresses are valid.</p> </li> <li> <p>Each
         * message can include up to 50 recipient addresses across the To:, CC:, or BCC:
         * lines. If you need to send a single message to more than 50 recipients, you have
         * to split the list of recipient addresses into groups of less than 50 recipients,
         * and send separate messages to each group.</p> </li> <li> <p>Amazon SES allows
         * you to specify 8-bit Content-Transfer-Encoding for MIME message parts. However,
         * if Amazon SES has to modify the contents of your message (for example, if you
         * use open and click tracking), 8-bit content isn't preserved. For this reason, we
         * highly recommend that you encode all content that isn't 7-bit ASCII. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-raw.html#send-email-mime-encoding">MIME
         * Encoding</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> </ul>
         * <p>Additionally, keep the following considerations in mind when using the
         * <code>SendRawEmail</code> operation:</p> <ul> <li> <p>Although you can customize
         * the message headers when using the <code>SendRawEmail</code> operation, Amazon
         * SES automatically applies its own <code>Message-ID</code> and <code>Date</code>
         * headers; if you passed these headers when creating the message, they are
         * overwritten by the values that Amazon SES provides.</p> </li> <li> <p>If you are
         * using sending authorization to send on behalf of another user,
         * <code>SendRawEmail</code> enables you to specify the cross-account identity for
         * the email's Source, From, and Return-Path parameters in one of two ways: you can
         * pass optional parameters <code>SourceArn</code>, <code>FromArn</code>, and/or
         * <code>ReturnPathArn</code>, or you can include the following X-headers in the
         * header of your raw email:</p> <ul> <li> <p> <code>X-SES-SOURCE-ARN</code> </p>
         * </li> <li> <p> <code>X-SES-FROM-ARN</code> </p> </li> <li> <p>
         * <code>X-SES-RETURN-PATH-ARN</code> </p> </li> </ul>  <p>Don't include
         * these X-headers in the DKIM signature. Amazon SES removes these before it sends
         * the email.</p>  <p>If you only specify the
         * <code>SourceIdentityArn</code> parameter, Amazon SES sets the From and
         * Return-Path addresses to the same identity that you specified.</p> <p>For more
         * information about sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization.html">Using
         * Sending Authorization with Amazon SES</a> in the <i>Amazon SES Developer
         * Guide.</i> </p> </li> <li> <p>For every message that you send, the total number
         * of recipients (including each recipient in the To:, CC: and BCC: fields) is
         * counted against the maximum number of emails you can send in a 24-hour period
         * (your <i>sending quota</i>). For more information about sending quotas in Amazon
         * SES, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/manage-sending-quotas.html">Managing
         * Your Amazon SES Sending Limits</a> in the <i>Amazon SES Developer Guide.</i>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendRawEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendRawEmailOutcome SendRawEmail(const Model::SendRawEmailRequest& request) const;

        /**
         * A Callable wrapper for SendRawEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendRawEmailRequestT = Model::SendRawEmailRequest>
        Model::SendRawEmailOutcomeCallable SendRawEmailCallable(const SendRawEmailRequestT& request) const
        {
            return SubmitCallable(&SESClient::SendRawEmail, request);
        }

        /**
         * An Async wrapper for SendRawEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendRawEmailRequestT = Model::SendRawEmailRequest>
        void SendRawEmailAsync(const SendRawEmailRequestT& request, const SendRawEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::SendRawEmail, request, handler, context);
        }

        /**
         * <p>Composes an email message using an email template and immediately queues it
         * for sending.</p> <p>To send email using this operation, your call must meet the
         * following requirements:</p> <ul> <li> <p>The call must refer to an existing
         * email template. You can create email templates using the <a>CreateTemplate</a>
         * operation.</p> </li> <li> <p>The message must be sent from a verified email
         * address or domain.</p> </li> <li> <p>If your account is still in the Amazon SES
         * sandbox, you may only send to verified addresses or domains, or to email
         * addresses associated with the Amazon SES Mailbox Simulator. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide.</i> </p>
         * </li> <li> <p>The maximum message size is 10 MB.</p> </li> <li> <p>Calls to the
         * <code>SendTemplatedEmail</code> operation may only include one
         * <code>Destination</code> parameter. A destination is a set of recipients that
         * receives the same version of the email. The <code>Destination</code> parameter
         * can include up to 50 recipients, across the To:, CC: and BCC: fields.</p> </li>
         * <li> <p>The <code>Destination</code> parameter must include at least one
         * recipient email address. The recipient address can be a To: address, a CC:
         * address, or a BCC: address. If a recipient email address is invalid (that is, it
         * is not in the format <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the
         * entire message is rejected, even if the message contains other recipients that
         * are valid.</p> </li> </ul>  <p>If your call to the
         * <code>SendTemplatedEmail</code> operation includes all of the required
         * parameters, Amazon SES accepts it and returns a Message ID. However, if Amazon
         * SES can't render the email because the template contains errors, it doesn't send
         * the email. Additionally, because it already accepted the message, Amazon SES
         * doesn't return a message stating that it was unable to send the email.</p>
         * <p>For these reasons, we highly recommend that you set up Amazon SES to send you
         * notifications when Rendering Failure events occur. For more information, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/send-personalized-email-api.html">Sending
         * Personalized Email Using the Amazon SES API</a> in the <i>Amazon Simple Email
         * Service Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendTemplatedEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTemplatedEmailOutcome SendTemplatedEmail(const Model::SendTemplatedEmailRequest& request) const;

        /**
         * A Callable wrapper for SendTemplatedEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendTemplatedEmailRequestT = Model::SendTemplatedEmailRequest>
        Model::SendTemplatedEmailOutcomeCallable SendTemplatedEmailCallable(const SendTemplatedEmailRequestT& request) const
        {
            return SubmitCallable(&SESClient::SendTemplatedEmail, request);
        }

        /**
         * An Async wrapper for SendTemplatedEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendTemplatedEmailRequestT = Model::SendTemplatedEmailRequest>
        void SendTemplatedEmailAsync(const SendTemplatedEmailRequestT& request, const SendTemplatedEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::SendTemplatedEmail, request, handler, context);
        }

        /**
         * <p>Sets the specified receipt rule set as the active receipt rule set.</p>
         *  <p>To disable your email-receiving through Amazon SES completely, you can
         * call this operation with <code>RuleSetName</code> set to null.</p> 
         * <p>For information about managing receipt rule sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-receipt-rules-console-walkthrough.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetActiveReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::SetActiveReceiptRuleSetOutcome SetActiveReceiptRuleSet(const Model::SetActiveReceiptRuleSetRequest& request) const;

        /**
         * A Callable wrapper for SetActiveReceiptRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetActiveReceiptRuleSetRequestT = Model::SetActiveReceiptRuleSetRequest>
        Model::SetActiveReceiptRuleSetOutcomeCallable SetActiveReceiptRuleSetCallable(const SetActiveReceiptRuleSetRequestT& request) const
        {
            return SubmitCallable(&SESClient::SetActiveReceiptRuleSet, request);
        }

        /**
         * An Async wrapper for SetActiveReceiptRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetActiveReceiptRuleSetRequestT = Model::SetActiveReceiptRuleSetRequest>
        void SetActiveReceiptRuleSetAsync(const SetActiveReceiptRuleSetRequestT& request, const SetActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::SetActiveReceiptRuleSet, request, handler, context);
        }

        /**
         * <p>Enables or disables Easy DKIM signing of email sent from an identity. If Easy
         * DKIM signing is enabled for a domain, then Amazon SES uses DKIM to sign all
         * email that it sends from addresses on that domain. If Easy DKIM signing is
         * enabled for an email address, then Amazon SES uses DKIM to sign all email it
         * sends from that address.</p>  <p>For email addresses (for example,
         * <code>user@example.com</code>), you can only enable DKIM signing if the
         * corresponding domain (in this case, <code>example.com</code>) has been set up to
         * use Easy DKIM.</p>  <p>You can enable DKIM signing for an identity at any
         * time after you start the verification process for the identity, even if the
         * verification process isn't complete. </p> <p>You can execute this operation no
         * more than once per second.</p> <p>For more information about Easy DKIM signing,
         * go to the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-authentication-dkim-easy.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityDkimEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityDkimEnabledOutcome SetIdentityDkimEnabled(const Model::SetIdentityDkimEnabledRequest& request) const;

        /**
         * A Callable wrapper for SetIdentityDkimEnabled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetIdentityDkimEnabledRequestT = Model::SetIdentityDkimEnabledRequest>
        Model::SetIdentityDkimEnabledOutcomeCallable SetIdentityDkimEnabledCallable(const SetIdentityDkimEnabledRequestT& request) const
        {
            return SubmitCallable(&SESClient::SetIdentityDkimEnabled, request);
        }

        /**
         * An Async wrapper for SetIdentityDkimEnabled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetIdentityDkimEnabledRequestT = Model::SetIdentityDkimEnabledRequest>
        void SetIdentityDkimEnabledAsync(const SetIdentityDkimEnabledRequestT& request, const SetIdentityDkimEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::SetIdentityDkimEnabled, request, handler, context);
        }

        /**
         * <p>Given an identity (an email address or a domain), enables or disables whether
         * Amazon SES forwards bounce and complaint notifications as email. Feedback
         * forwarding can only be disabled when Amazon Simple Notification Service (Amazon
         * SNS) topics are specified for both bounces and complaints.</p> 
         * <p>Feedback forwarding does not apply to delivery notifications. Delivery
         * notifications are only available through Amazon SNS.</p>  <p>You can
         * execute this operation no more than once per second.</p> <p>For more information
         * about using notifications with Amazon SES, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity-using-notifications.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityFeedbackForwardingEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityFeedbackForwardingEnabledOutcome SetIdentityFeedbackForwardingEnabled(const Model::SetIdentityFeedbackForwardingEnabledRequest& request) const;

        /**
         * A Callable wrapper for SetIdentityFeedbackForwardingEnabled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetIdentityFeedbackForwardingEnabledRequestT = Model::SetIdentityFeedbackForwardingEnabledRequest>
        Model::SetIdentityFeedbackForwardingEnabledOutcomeCallable SetIdentityFeedbackForwardingEnabledCallable(const SetIdentityFeedbackForwardingEnabledRequestT& request) const
        {
            return SubmitCallable(&SESClient::SetIdentityFeedbackForwardingEnabled, request);
        }

        /**
         * An Async wrapper for SetIdentityFeedbackForwardingEnabled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetIdentityFeedbackForwardingEnabledRequestT = Model::SetIdentityFeedbackForwardingEnabledRequest>
        void SetIdentityFeedbackForwardingEnabledAsync(const SetIdentityFeedbackForwardingEnabledRequestT& request, const SetIdentityFeedbackForwardingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::SetIdentityFeedbackForwardingEnabled, request, handler, context);
        }

        /**
         * <p>Given an identity (an email address or a domain), sets whether Amazon SES
         * includes the original email headers in the Amazon Simple Notification Service
         * (Amazon SNS) notifications of a specified type.</p> <p>You can execute this
         * operation no more than once per second.</p> <p>For more information about using
         * notifications with Amazon SES, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity-using-notifications.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityHeadersInNotificationsEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityHeadersInNotificationsEnabledOutcome SetIdentityHeadersInNotificationsEnabled(const Model::SetIdentityHeadersInNotificationsEnabledRequest& request) const;

        /**
         * A Callable wrapper for SetIdentityHeadersInNotificationsEnabled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetIdentityHeadersInNotificationsEnabledRequestT = Model::SetIdentityHeadersInNotificationsEnabledRequest>
        Model::SetIdentityHeadersInNotificationsEnabledOutcomeCallable SetIdentityHeadersInNotificationsEnabledCallable(const SetIdentityHeadersInNotificationsEnabledRequestT& request) const
        {
            return SubmitCallable(&SESClient::SetIdentityHeadersInNotificationsEnabled, request);
        }

        /**
         * An Async wrapper for SetIdentityHeadersInNotificationsEnabled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetIdentityHeadersInNotificationsEnabledRequestT = Model::SetIdentityHeadersInNotificationsEnabledRequest>
        void SetIdentityHeadersInNotificationsEnabledAsync(const SetIdentityHeadersInNotificationsEnabledRequestT& request, const SetIdentityHeadersInNotificationsEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::SetIdentityHeadersInNotificationsEnabled, request, handler, context);
        }

        /**
         * <p>Enables or disables the custom MAIL FROM domain setup for a verified identity
         * (an email address or a domain).</p>  <p>To send emails using the
         * specified MAIL FROM domain, you must add an MX record to your MAIL FROM domain's
         * DNS settings. To ensure that your emails pass Sender Policy Framework (SPF)
         * checks, you must also add or update an SPF record. For more information, see the
         * <a href="https://docs.aws.amazon.com/ses/latest/dg/mail-from.html">Amazon SES
         * Developer Guide</a>.</p>  <p>You can execute this operation no more
         * than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityMailFromDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityMailFromDomainOutcome SetIdentityMailFromDomain(const Model::SetIdentityMailFromDomainRequest& request) const;

        /**
         * A Callable wrapper for SetIdentityMailFromDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetIdentityMailFromDomainRequestT = Model::SetIdentityMailFromDomainRequest>
        Model::SetIdentityMailFromDomainOutcomeCallable SetIdentityMailFromDomainCallable(const SetIdentityMailFromDomainRequestT& request) const
        {
            return SubmitCallable(&SESClient::SetIdentityMailFromDomain, request);
        }

        /**
         * An Async wrapper for SetIdentityMailFromDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetIdentityMailFromDomainRequestT = Model::SetIdentityMailFromDomainRequest>
        void SetIdentityMailFromDomainAsync(const SetIdentityMailFromDomainRequestT& request, const SetIdentityMailFromDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::SetIdentityMailFromDomain, request, handler, context);
        }

        /**
         * <p>Sets an Amazon Simple Notification Service (Amazon SNS) topic to use when
         * delivering notifications. When you use this operation, you specify a verified
         * identity, such as an email address or domain. When you send an email that uses
         * the chosen identity in the Source field, Amazon SES sends notifications to the
         * topic you specified. You can send bounce, complaint, or delivery notifications
         * (or any combination of the three) to the Amazon SNS topic that you specify.</p>
         * <p>You can execute this operation no more than once per second.</p> <p>For more
         * information about feedback notification, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity-using-notifications.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityNotificationTopic">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityNotificationTopicOutcome SetIdentityNotificationTopic(const Model::SetIdentityNotificationTopicRequest& request) const;

        /**
         * A Callable wrapper for SetIdentityNotificationTopic that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetIdentityNotificationTopicRequestT = Model::SetIdentityNotificationTopicRequest>
        Model::SetIdentityNotificationTopicOutcomeCallable SetIdentityNotificationTopicCallable(const SetIdentityNotificationTopicRequestT& request) const
        {
            return SubmitCallable(&SESClient::SetIdentityNotificationTopic, request);
        }

        /**
         * An Async wrapper for SetIdentityNotificationTopic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetIdentityNotificationTopicRequestT = Model::SetIdentityNotificationTopicRequest>
        void SetIdentityNotificationTopicAsync(const SetIdentityNotificationTopicRequestT& request, const SetIdentityNotificationTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::SetIdentityNotificationTopic, request, handler, context);
        }

        /**
         * <p>Sets the position of the specified receipt rule in the receipt rule set.</p>
         * <p>For information about managing receipt rules, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-receipt-rules-console-walkthrough.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetReceiptRulePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::SetReceiptRulePositionOutcome SetReceiptRulePosition(const Model::SetReceiptRulePositionRequest& request) const;

        /**
         * A Callable wrapper for SetReceiptRulePosition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetReceiptRulePositionRequestT = Model::SetReceiptRulePositionRequest>
        Model::SetReceiptRulePositionOutcomeCallable SetReceiptRulePositionCallable(const SetReceiptRulePositionRequestT& request) const
        {
            return SubmitCallable(&SESClient::SetReceiptRulePosition, request);
        }

        /**
         * An Async wrapper for SetReceiptRulePosition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetReceiptRulePositionRequestT = Model::SetReceiptRulePositionRequest>
        void SetReceiptRulePositionAsync(const SetReceiptRulePositionRequestT& request, const SetReceiptRulePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::SetReceiptRulePosition, request, handler, context);
        }

        /**
         * <p>Creates a preview of the MIME content of an email when provided with a
         * template and a set of replacement data.</p> <p>You can execute this operation no
         * more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/TestRenderTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::TestRenderTemplateOutcome TestRenderTemplate(const Model::TestRenderTemplateRequest& request) const;

        /**
         * A Callable wrapper for TestRenderTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestRenderTemplateRequestT = Model::TestRenderTemplateRequest>
        Model::TestRenderTemplateOutcomeCallable TestRenderTemplateCallable(const TestRenderTemplateRequestT& request) const
        {
            return SubmitCallable(&SESClient::TestRenderTemplate, request);
        }

        /**
         * An Async wrapper for TestRenderTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestRenderTemplateRequestT = Model::TestRenderTemplateRequest>
        void TestRenderTemplateAsync(const TestRenderTemplateRequestT& request, const TestRenderTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::TestRenderTemplate, request, handler, context);
        }

        /**
         * <p>Enables or disables email sending across your entire Amazon SES account in
         * the current Amazon Web Services Region. You can use this operation in
         * conjunction with Amazon CloudWatch alarms to temporarily pause email sending
         * across your Amazon SES account in a given Amazon Web Services Region when
         * reputation metrics (such as your bounce or complaint rates) reach certain
         * thresholds.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateAccountSendingEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountSendingEnabledOutcome UpdateAccountSendingEnabled(const Model::UpdateAccountSendingEnabledRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountSendingEnabled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountSendingEnabledRequestT = Model::UpdateAccountSendingEnabledRequest>
        Model::UpdateAccountSendingEnabledOutcomeCallable UpdateAccountSendingEnabledCallable(const UpdateAccountSendingEnabledRequestT& request) const
        {
            return SubmitCallable(&SESClient::UpdateAccountSendingEnabled, request);
        }

        /**
         * An Async wrapper for UpdateAccountSendingEnabled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountSendingEnabledRequestT = Model::UpdateAccountSendingEnabledRequest>
        void UpdateAccountSendingEnabledAsync(const UpdateAccountSendingEnabledRequestT& request, const UpdateAccountSendingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::UpdateAccountSendingEnabled, request, handler, context);
        }

        /**
         * <p>Updates the event destination of a configuration set. Event destinations are
         * associated with configuration sets, which enable you to publish email sending
         * events to Amazon CloudWatch, Amazon Kinesis Firehose, or Amazon Simple
         * Notification Service (Amazon SNS). For information about using configuration
         * sets, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Monitoring
         * Your Amazon SES Sending Activity</a> in the <i>Amazon SES Developer Guide.</i>
         * </p>  <p>When you create or update an event destination, you must provide
         * one, and only one, destination. The destination can be Amazon CloudWatch, Amazon
         * Kinesis Firehose, or Amazon Simple Notification Service (Amazon SNS).</p>
         *  <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationSetEventDestinationOutcome UpdateConfigurationSetEventDestination(const Model::UpdateConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfigurationSetEventDestinationRequestT = Model::UpdateConfigurationSetEventDestinationRequest>
        Model::UpdateConfigurationSetEventDestinationOutcomeCallable UpdateConfigurationSetEventDestinationCallable(const UpdateConfigurationSetEventDestinationRequestT& request) const
        {
            return SubmitCallable(&SESClient::UpdateConfigurationSetEventDestination, request);
        }

        /**
         * An Async wrapper for UpdateConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigurationSetEventDestinationRequestT = Model::UpdateConfigurationSetEventDestinationRequest>
        void UpdateConfigurationSetEventDestinationAsync(const UpdateConfigurationSetEventDestinationRequestT& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::UpdateConfigurationSetEventDestination, request, handler, context);
        }

        /**
         * <p>Enables or disables the publishing of reputation metrics for emails sent
         * using a specific configuration set in a given Amazon Web Services Region.
         * Reputation metrics include bounce and complaint rates. These metrics are
         * published to Amazon CloudWatch. By using CloudWatch, you can create alarms when
         * bounce or complaint rates exceed certain thresholds.</p> <p>You can execute this
         * operation no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetReputationMetricsEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationSetReputationMetricsEnabledOutcome UpdateConfigurationSetReputationMetricsEnabled(const Model::UpdateConfigurationSetReputationMetricsEnabledRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationSetReputationMetricsEnabled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfigurationSetReputationMetricsEnabledRequestT = Model::UpdateConfigurationSetReputationMetricsEnabledRequest>
        Model::UpdateConfigurationSetReputationMetricsEnabledOutcomeCallable UpdateConfigurationSetReputationMetricsEnabledCallable(const UpdateConfigurationSetReputationMetricsEnabledRequestT& request) const
        {
            return SubmitCallable(&SESClient::UpdateConfigurationSetReputationMetricsEnabled, request);
        }

        /**
         * An Async wrapper for UpdateConfigurationSetReputationMetricsEnabled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigurationSetReputationMetricsEnabledRequestT = Model::UpdateConfigurationSetReputationMetricsEnabledRequest>
        void UpdateConfigurationSetReputationMetricsEnabledAsync(const UpdateConfigurationSetReputationMetricsEnabledRequestT& request, const UpdateConfigurationSetReputationMetricsEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::UpdateConfigurationSetReputationMetricsEnabled, request, handler, context);
        }

        /**
         * <p>Enables or disables email sending for messages sent using a specific
         * configuration set in a given Amazon Web Services Region. You can use this
         * operation in conjunction with Amazon CloudWatch alarms to temporarily pause
         * email sending for a configuration set when the reputation metrics for that
         * configuration set (such as your bounce on complaint rate) exceed certain
         * thresholds.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetSendingEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationSetSendingEnabledOutcome UpdateConfigurationSetSendingEnabled(const Model::UpdateConfigurationSetSendingEnabledRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationSetSendingEnabled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfigurationSetSendingEnabledRequestT = Model::UpdateConfigurationSetSendingEnabledRequest>
        Model::UpdateConfigurationSetSendingEnabledOutcomeCallable UpdateConfigurationSetSendingEnabledCallable(const UpdateConfigurationSetSendingEnabledRequestT& request) const
        {
            return SubmitCallable(&SESClient::UpdateConfigurationSetSendingEnabled, request);
        }

        /**
         * An Async wrapper for UpdateConfigurationSetSendingEnabled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigurationSetSendingEnabledRequestT = Model::UpdateConfigurationSetSendingEnabledRequest>
        void UpdateConfigurationSetSendingEnabledAsync(const UpdateConfigurationSetSendingEnabledRequestT& request, const UpdateConfigurationSetSendingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::UpdateConfigurationSetSendingEnabled, request, handler, context);
        }

        /**
         * <p>Modifies an association between a configuration set and a custom domain for
         * open and click event tracking. </p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events. For information
         * about using custom domains, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/configure-custom-open-click-domains.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationSetTrackingOptionsOutcome UpdateConfigurationSetTrackingOptions(const Model::UpdateConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationSetTrackingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfigurationSetTrackingOptionsRequestT = Model::UpdateConfigurationSetTrackingOptionsRequest>
        Model::UpdateConfigurationSetTrackingOptionsOutcomeCallable UpdateConfigurationSetTrackingOptionsCallable(const UpdateConfigurationSetTrackingOptionsRequestT& request) const
        {
            return SubmitCallable(&SESClient::UpdateConfigurationSetTrackingOptions, request);
        }

        /**
         * An Async wrapper for UpdateConfigurationSetTrackingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigurationSetTrackingOptionsRequestT = Model::UpdateConfigurationSetTrackingOptionsRequest>
        void UpdateConfigurationSetTrackingOptionsAsync(const UpdateConfigurationSetTrackingOptionsRequestT& request, const UpdateConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::UpdateConfigurationSetTrackingOptions, request, handler, context);
        }

        /**
         * <p>Updates an existing custom verification email template.</p> <p>For more
         * information about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomVerificationEmailTemplateOutcome UpdateCustomVerificationEmailTemplate(const Model::UpdateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCustomVerificationEmailTemplateRequestT = Model::UpdateCustomVerificationEmailTemplateRequest>
        Model::UpdateCustomVerificationEmailTemplateOutcomeCallable UpdateCustomVerificationEmailTemplateCallable(const UpdateCustomVerificationEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&SESClient::UpdateCustomVerificationEmailTemplate, request);
        }

        /**
         * An Async wrapper for UpdateCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCustomVerificationEmailTemplateRequestT = Model::UpdateCustomVerificationEmailTemplateRequest>
        void UpdateCustomVerificationEmailTemplateAsync(const UpdateCustomVerificationEmailTemplateRequestT& request, const UpdateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::UpdateCustomVerificationEmailTemplate, request, handler, context);
        }

        /**
         * <p>Updates a receipt rule.</p> <p>For information about managing receipt rules,
         * see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-receipt-rules-console-walkthrough.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateReceiptRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReceiptRuleOutcome UpdateReceiptRule(const Model::UpdateReceiptRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateReceiptRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateReceiptRuleRequestT = Model::UpdateReceiptRuleRequest>
        Model::UpdateReceiptRuleOutcomeCallable UpdateReceiptRuleCallable(const UpdateReceiptRuleRequestT& request) const
        {
            return SubmitCallable(&SESClient::UpdateReceiptRule, request);
        }

        /**
         * An Async wrapper for UpdateReceiptRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReceiptRuleRequestT = Model::UpdateReceiptRuleRequest>
        void UpdateReceiptRuleAsync(const UpdateReceiptRuleRequestT& request, const UpdateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::UpdateReceiptRule, request, handler, context);
        }

        /**
         * <p>Updates an email template. Email templates enable you to send personalized
         * email to one or more destinations in a single operation. For more information,
         * see the <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/send-personalized-email-api.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateOutcome UpdateTemplate(const Model::UpdateTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTemplateRequestT = Model::UpdateTemplateRequest>
        Model::UpdateTemplateOutcomeCallable UpdateTemplateCallable(const UpdateTemplateRequestT& request) const
        {
            return SubmitCallable(&SESClient::UpdateTemplate, request);
        }

        /**
         * An Async wrapper for UpdateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTemplateRequestT = Model::UpdateTemplateRequest>
        void UpdateTemplateAsync(const UpdateTemplateRequestT& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::UpdateTemplate, request, handler, context);
        }

        /**
         * <p>Returns a set of DKIM tokens for a domain identity.</p>  <p>When
         * you execute the <code>VerifyDomainDkim</code> operation, the domain that you
         * specify is added to the list of identities that are associated with your
         * account. This is true even if you haven't already associated the domain with
         * your account by using the <code>VerifyDomainIdentity</code> operation. However,
         * you can't send email from the domain until you either successfully <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#verify-domain-procedure">verify
         * it</a> or you successfully <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-authentication-dkim-easy.html">set
         * up DKIM for it</a>.</p>  <p>You use the tokens that are generated by
         * this operation to create CNAME records. When Amazon SES detects that you've
         * added these records to the DNS configuration for a domain, you can start sending
         * email from that domain. You can start sending email even if you haven't added
         * the TXT record provided by the VerifyDomainIdentity operation to the DNS
         * configuration for your domain. All email that you send from the domain is
         * authenticated using DKIM.</p> <p>To create the CNAME records for DKIM
         * authentication, use the following values:</p> <ul> <li> <p> <b>Name</b>:
         * <i>token</i>._domainkey.<i>example.com</i> </p> </li> <li> <p> <b>Type</b>:
         * CNAME</p> </li> <li> <p> <b>Value</b>: <i>token</i>.dkim.amazonses.com</p> </li>
         * </ul> <p>In the preceding example, replace <i>token</i> with one of the tokens
         * that are generated when you execute this operation. Replace <i>example.com</i>
         * with your domain. Repeat this process for each token that's generated by this
         * operation.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyDomainDkim">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyDomainDkimOutcome VerifyDomainDkim(const Model::VerifyDomainDkimRequest& request) const;

        /**
         * A Callable wrapper for VerifyDomainDkim that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifyDomainDkimRequestT = Model::VerifyDomainDkimRequest>
        Model::VerifyDomainDkimOutcomeCallable VerifyDomainDkimCallable(const VerifyDomainDkimRequestT& request) const
        {
            return SubmitCallable(&SESClient::VerifyDomainDkim, request);
        }

        /**
         * An Async wrapper for VerifyDomainDkim that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifyDomainDkimRequestT = Model::VerifyDomainDkimRequest>
        void VerifyDomainDkimAsync(const VerifyDomainDkimRequestT& request, const VerifyDomainDkimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::VerifyDomainDkim, request, handler, context);
        }

        /**
         * <p>Adds a domain to the list of identities for your Amazon SES account in the
         * current Amazon Web Services Region and attempts to verify it. For more
         * information about verifying domains, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide.</i> </p>
         * <p>You can execute this operation no more than once per second.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyDomainIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyDomainIdentityOutcome VerifyDomainIdentity(const Model::VerifyDomainIdentityRequest& request) const;

        /**
         * A Callable wrapper for VerifyDomainIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifyDomainIdentityRequestT = Model::VerifyDomainIdentityRequest>
        Model::VerifyDomainIdentityOutcomeCallable VerifyDomainIdentityCallable(const VerifyDomainIdentityRequestT& request) const
        {
            return SubmitCallable(&SESClient::VerifyDomainIdentity, request);
        }

        /**
         * An Async wrapper for VerifyDomainIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifyDomainIdentityRequestT = Model::VerifyDomainIdentityRequest>
        void VerifyDomainIdentityAsync(const VerifyDomainIdentityRequestT& request, const VerifyDomainIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::VerifyDomainIdentity, request, handler, context);
        }

        /**
         * <p>Deprecated. Use the <code>VerifyEmailIdentity</code> operation to verify a
         * new email address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyEmailAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyEmailAddressOutcome VerifyEmailAddress(const Model::VerifyEmailAddressRequest& request) const;

        /**
         * A Callable wrapper for VerifyEmailAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifyEmailAddressRequestT = Model::VerifyEmailAddressRequest>
        Model::VerifyEmailAddressOutcomeCallable VerifyEmailAddressCallable(const VerifyEmailAddressRequestT& request) const
        {
            return SubmitCallable(&SESClient::VerifyEmailAddress, request);
        }

        /**
         * An Async wrapper for VerifyEmailAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifyEmailAddressRequestT = Model::VerifyEmailAddressRequest>
        void VerifyEmailAddressAsync(const VerifyEmailAddressRequestT& request, const VerifyEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::VerifyEmailAddress, request, handler, context);
        }

        /**
         * <p>Adds an email address to the list of identities for your Amazon SES account
         * in the current Amazon Web Services Region and attempts to verify it. As a result
         * of executing this operation, a verification email is sent to the specified
         * address.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyEmailIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyEmailIdentityOutcome VerifyEmailIdentity(const Model::VerifyEmailIdentityRequest& request) const;

        /**
         * A Callable wrapper for VerifyEmailIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifyEmailIdentityRequestT = Model::VerifyEmailIdentityRequest>
        Model::VerifyEmailIdentityOutcomeCallable VerifyEmailIdentityCallable(const VerifyEmailIdentityRequestT& request) const
        {
            return SubmitCallable(&SESClient::VerifyEmailIdentity, request);
        }

        /**
         * An Async wrapper for VerifyEmailIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifyEmailIdentityRequestT = Model::VerifyEmailIdentityRequest>
        void VerifyEmailIdentityAsync(const VerifyEmailIdentityRequestT& request, const VerifyEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESClient::VerifyEmailIdentity, request, handler, context);
        }


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<SESEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<SESClient>;
        void init(const SESClientConfiguration& clientConfiguration);

        SESClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<SESEndpointProviderBase> m_endpointProvider;
  };

} // namespace SES
} // namespace Aws

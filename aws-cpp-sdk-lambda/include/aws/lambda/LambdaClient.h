/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/LambdaServiceClientModel.h>

namespace Aws
{
namespace Lambda
{
  /**
   * <fullname>Lambda</fullname> <p> <b>Overview</b> </p> <p>Lambda is a compute
   * service that lets you run code without provisioning or managing servers. Lambda
   * runs your code on a high-availability compute infrastructure and performs all of
   * the administration of the compute resources, including server and operating
   * system maintenance, capacity provisioning and automatic scaling, code monitoring
   * and logging. With Lambda, you can run code for virtually any type of application
   * or backend service. For more information about the Lambda service, see <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is
   * Lambda</a> in the <b>Lambda Developer Guide</b>.</p> <p>The <i>Lambda API
   * Reference</i> provides information about each of the API methods, including
   * details about the parameters in each API request and response. </p> <p/> <p>You
   * can use Software Development Kits (SDKs), Integrated Development Environment
   * (IDE) Toolkits, and command line tools to access the API. For installation
   * instructions, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
   * Services</a>. </p> <p>For a list of Region-specific endpoints that Lambda
   * supports, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/lambda-service.html/">Lambda
   * endpoints and quotas </a> in the <i>Amazon Web Services General Reference.</i>.
   * </p> <p>When making the API calls, you will need to authenticate your request by
   * providing a signature. Lambda supports signature version 4. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4 signing process</a> in the <i>Amazon Web Services General
   * Reference.</i>. </p> <p> <b>CA certificates</b> </p> <p>Because Amazon Web
   * Services SDKs use the CA certificates from your computer, changes to the
   * certificates on the Amazon Web Services servers can cause connection failures
   * when you attempt to use an SDK. You can prevent these failures by keeping your
   * computer's CA certificates and operating system up-to-date. If you encounter
   * this issue in a corporate environment and do not manage your own computer, you
   * might need to ask an administrator to assist with the update process. The
   * following list shows minimum operating system and Java versions:</p> <ul> <li>
   * <p>Microsoft Windows versions that have updates from January 2005 or later
   * installed contain at least one of the required CAs in their trust list. </p>
   * </li> <li> <p>Mac OS X 10.4 with Java for Mac OS X 10.4 Release 5 (February
   * 2007), Mac OS X 10.5 (October 2007), and later versions contain at least one of
   * the required CAs in their trust list. </p> </li> <li> <p>Red Hat Enterprise
   * Linux 5 (March 2007), 6, and 7 and CentOS 5, 6, and 7 all contain at least one
   * of the required CAs in their default trusted CA list. </p> </li> <li> <p>Java
   * 1.4.2_12 (May 2006), 5 Update 2 (March 2005), and all later versions, including
   * Java 6 (December 2006), 7, and 8, contain at least one of the required CAs in
   * their default trusted CA list. </p> </li> </ul> <p>When accessing the Lambda
   * management console or Lambda API endpoints, whether through browsers or
   * programmatically, you will need to ensure your client machines support any of
   * the following CAs: </p> <ul> <li> <p>Amazon Root CA 1</p> </li> <li>
   * <p>Starfield Services Root Certificate Authority - G2</p> </li> <li>
   * <p>Starfield Class 2 Certification Authority</p> </li> </ul> <p>Root
   * certificates from the first two authorities are available from <a
   * href="https://www.amazontrust.com/repository/">Amazon trust services</a>, but
   * keeping your computer up-to-date is the more straightforward solution. To learn
   * more about ACM-provided certificates, see <a
   * href="http://aws.amazon.com/certificate-manager/faqs/#certificates">Amazon Web
   * Services Certificate Manager FAQs.</a> </p>
   */
  class AWS_LAMBDA_API LambdaClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<LambdaClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LambdaClient(const Aws::Lambda::LambdaClientConfiguration& clientConfiguration = Aws::Lambda::LambdaClientConfiguration(),
                     std::shared_ptr<LambdaEndpointProviderBase> endpointProvider = Aws::MakeShared<LambdaEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LambdaClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<LambdaEndpointProviderBase> endpointProvider = Aws::MakeShared<LambdaEndpointProvider>(ALLOCATION_TAG),
                     const Aws::Lambda::LambdaClientConfiguration& clientConfiguration = Aws::Lambda::LambdaClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LambdaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<LambdaEndpointProviderBase> endpointProvider = Aws::MakeShared<LambdaEndpointProvider>(ALLOCATION_TAG),
                     const Aws::Lambda::LambdaClientConfiguration& clientConfiguration = Aws::Lambda::LambdaClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LambdaClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LambdaClient(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LambdaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~LambdaClient();

        /**
         * <p>Adds permissions to the resource-based policy of a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
         * layer</a>. Use this action to grant layer usage permission to other accounts.
         * You can grant permission to a single account, all accounts in an organization,
         * or all Amazon Web Services accounts. </p> <p>To revoke permission, call
         * <a>RemoveLayerVersionPermission</a> with the statement ID that you specified
         * when you added it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AddLayerVersionPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::AddLayerVersionPermissionOutcome AddLayerVersionPermission(const Model::AddLayerVersionPermissionRequest& request) const;

        /**
         * A Callable wrapper for AddLayerVersionPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddLayerVersionPermissionOutcomeCallable AddLayerVersionPermissionCallable(const Model::AddLayerVersionPermissionRequest& request) const;

        /**
         * An Async wrapper for AddLayerVersionPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddLayerVersionPermissionAsync(const Model::AddLayerVersionPermissionRequest& request, const AddLayerVersionPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants an Amazon Web Service, Amazon Web Services account, or Amazon Web
         * Services organization permission to use a function. You can apply the policy at
         * the function level, or specify a qualifier to restrict access to a single
         * version or alias. If you use a qualifier, the invoker must use the full Amazon
         * Resource Name (ARN) of that version or alias to invoke the function. Note:
         * Lambda does not support adding policies to version $LATEST.</p> <p>To grant
         * permission to another account, specify the account ID as the
         * <code>Principal</code>. To grant permission to an organization defined in
         * Organizations, specify the organization ID as the <code>PrincipalOrgID</code>.
         * For Amazon Web Services, the principal is a domain-style identifier that the
         * service defines, such as <code>s3.amazonaws.com</code> or
         * <code>sns.amazonaws.com</code>. For Amazon Web Services, you can also specify
         * the ARN of the associated resource as the <code>SourceArn</code>. If you grant
         * permission to a service principal without specifying the source, other accounts
         * could potentially configure resources in their account to invoke your Lambda
         * function.</p> <p>This operation adds a statement to a resource-based permissions
         * policy for the function. For more information about function policies, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/access-control-resource-based.html">Using
         * resource-based policies for Lambda</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AddPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::AddPermissionOutcome AddPermission(const Model::AddPermissionRequest& request) const;

        /**
         * A Callable wrapper for AddPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddPermissionOutcomeCallable AddPermissionCallable(const Model::AddPermissionRequest& request) const;

        /**
         * An Async wrapper for AddPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddPermissionAsync(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>
         * for a Lambda function version. Use aliases to provide clients with a function
         * identifier that you can update to invoke a different version.</p> <p>You can
         * also map an alias to split invocation requests between two versions. Use the
         * <code>RoutingConfig</code> parameter to specify a second version and the
         * percentage of invocation requests that it receives.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * An Async wrapper for CreateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a code signing configuration. A <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-codesigning.html">code
         * signing configuration</a> defines a list of allowed signing profiles and defines
         * the code-signing validation policy (action to be taken if deployment validation
         * checks fail). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCodeSigningConfigOutcome CreateCodeSigningConfig(const Model::CreateCodeSigningConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateCodeSigningConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCodeSigningConfigOutcomeCallable CreateCodeSigningConfigCallable(const Model::CreateCodeSigningConfigRequest& request) const;

        /**
         * An Async wrapper for CreateCodeSigningConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCodeSigningConfigAsync(const Model::CreateCodeSigningConfigRequest& request, const CreateCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a mapping between an event source and an Lambda function. Lambda
         * reads items from the event source and invokes the function.</p> <p>For details
         * about how to configure different event sources, see the following topics. </p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html#services-dynamodb-eventsourcemapping">
         * Amazon DynamoDB Streams</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html#services-kinesis-eventsourcemapping">
         * Amazon Kinesis</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html#events-sqs-eventsource">
         * Amazon SQS</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-mq.html#services-mq-eventsourcemapping">
         * Amazon MQ and RabbitMQ</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html"> Amazon
         * MSK</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/kafka-smaa.html"> Apache
         * Kafka</a> </p> </li> </ul> <p>The following error handling options are available
         * only for stream sources (DynamoDB and Kinesis):</p> <ul> <li> <p>
         * <code>BisectBatchOnFunctionError</code> - If the function returns an error,
         * split the batch in two and retry.</p> </li> <li> <p>
         * <code>DestinationConfig</code> - Send discarded records to an Amazon SQS queue
         * or Amazon SNS topic.</p> </li> <li> <p> <code>MaximumRecordAgeInSeconds</code> -
         * Discard records older than the specified age. The default value is infinite
         * (-1). When set to infinite (-1), failed records are retried until the record
         * expires</p> </li> <li> <p> <code>MaximumRetryAttempts</code> - Discard records
         * after the specified number of retries. The default value is infinite (-1). When
         * set to infinite (-1), failed records are retried until the record expires.</p>
         * </li> <li> <p> <code>ParallelizationFactor</code> - Process multiple batches
         * from each shard concurrently.</p> </li> </ul> <p>For information about which
         * configuration parameters apply to each event source, see the following
         * topics.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html#services-ddb-params">
         * Amazon DynamoDB Streams</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html#services-kinesis-params">
         * Amazon Kinesis</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html#services-sqs-params">
         * Amazon SQS</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-mq.html#services-mq-params">
         * Amazon MQ and RabbitMQ</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#services-msk-parms">
         * Amazon MSK</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kafka.html#services-kafka-parms">
         * Apache Kafka</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventSourceMappingOutcome CreateEventSourceMapping(const Model::CreateEventSourceMappingRequest& request) const;

        /**
         * A Callable wrapper for CreateEventSourceMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventSourceMappingOutcomeCallable CreateEventSourceMappingCallable(const Model::CreateEventSourceMappingRequest& request) const;

        /**
         * An Async wrapper for CreateEventSourceMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventSourceMappingAsync(const Model::CreateEventSourceMappingRequest& request, const CreateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Lambda function. To create a function, you need a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/gettingstarted-package.html">deployment
         * package</a> and an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-permission-model.html#lambda-intro-execution-role">execution
         * role</a>. The deployment package is a .zip file archive or container image that
         * contains your function code. The execution role grants the function permission
         * to use Amazon Web Services, such as Amazon CloudWatch Logs for log streaming and
         * X-Ray for request tracing.</p> <p>If the deployment package is a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-images.html">container
         * image</a>, then you set the package type to <code>Image</code>. For a container
         * image, the code property must include the URI of a container image in the Amazon
         * ECR registry. You do not need to specify the handler and runtime properties.</p>
         * <p>If the deployment package is a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/gettingstarted-package.html#gettingstarted-package-zip">.zip
         * file archive</a>, then you set the package type to <code>Zip</code>. For a .zip
         * file archive, the code property specifies the location of the .zip file. You
         * must also specify the handler and runtime properties. The code in the deployment
         * package must be compatible with the target instruction set architecture of the
         * function (<code>x86-64</code> or <code>arm64</code>). If you do not specify the
         * architecture, then the default value is <code>x86-64</code>.</p> <p>When you
         * create a function, Lambda provisions an instance of the function and its
         * supporting resources. If your function connects to a VPC, this process can take
         * a minute or so. During this time, you can't invoke or modify the function. The
         * <code>State</code>, <code>StateReason</code>, and <code>StateReasonCode</code>
         * fields in the response from <a>GetFunctionConfiguration</a> indicate when the
         * function is ready to invoke. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/functions-states.html">Lambda
         * function states</a>.</p> <p>A function has an unpublished version, and can have
         * published versions and aliases. The unpublished version changes when you update
         * your function's code and configuration. A published version is a snapshot of
         * your function code and configuration that can't be changed. An alias is a named
         * resource that maps to a version, and can be changed to map to a different
         * version. Use the <code>Publish</code> parameter to create version <code>1</code>
         * of your function from its initial configuration.</p> <p>The other parameters let
         * you configure version-specific and function-level settings. You can modify
         * version-specific settings later with <a>UpdateFunctionConfiguration</a>.
         * Function-level settings apply to both the unpublished and published versions of
         * the function, and include tags (<a>TagResource</a>) and per-function concurrency
         * limits (<a>PutFunctionConcurrency</a>).</p> <p>You can use code signing if your
         * deployment package is a .zip file archive. To enable code signing for this
         * function, specify the ARN of a code-signing configuration. When a user attempts
         * to deploy a code package with <a>UpdateFunctionCode</a>, Lambda checks that the
         * code package has a valid signature from a trusted publisher. The code-signing
         * configuration includes set of signing profiles, which define the trusted
         * publishers for this function.</p> <p>If another Amazon Web Services account or
         * an Amazon Web Service invokes your function, use <a>AddPermission</a> to grant
         * permission by creating a resource-based Identity and Access Management (IAM)
         * policy. You can grant permissions at the function level, on a version, or on an
         * alias.</p> <p>To invoke your function directly, use <a>Invoke</a>. To invoke
         * your function in response to events in other Amazon Web Services, create an
         * event source mapping (<a>CreateEventSourceMapping</a>), or configure a function
         * trigger in the other service. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-invocation.html">Invoking
         * Lambda functions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFunctionOutcome CreateFunction(const Model::CreateFunctionRequest& request) const;

        /**
         * A Callable wrapper for CreateFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFunctionOutcomeCallable CreateFunctionCallable(const Model::CreateFunctionRequest& request) const;

        /**
         * An Async wrapper for CreateFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFunctionAsync(const Model::CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Lambda function URL with the specified configuration parameters. A
         * function URL is a dedicated HTTP(S) endpoint that you can use to invoke your
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateFunctionUrlConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFunctionUrlConfigOutcome CreateFunctionUrlConfig(const Model::CreateFunctionUrlConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateFunctionUrlConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFunctionUrlConfigOutcomeCallable CreateFunctionUrlConfigCallable(const Model::CreateFunctionUrlConfigRequest& request) const;

        /**
         * An Async wrapper for CreateFunctionUrlConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFunctionUrlConfigAsync(const Model::CreateFunctionUrlConfigRequest& request, const CreateFunctionUrlConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Lambda function <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request) const;

        /**
         * An Async wrapper for DeleteAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the code signing configuration. You can delete the code signing
         * configuration only if no function is using it. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCodeSigningConfigOutcome DeleteCodeSigningConfig(const Model::DeleteCodeSigningConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteCodeSigningConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCodeSigningConfigOutcomeCallable DeleteCodeSigningConfigCallable(const Model::DeleteCodeSigningConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteCodeSigningConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCodeSigningConfigAsync(const Model::DeleteCodeSigningConfigRequest& request, const DeleteCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/intro-invocation-modes.html">event
         * source mapping</a>. You can get the identifier of a mapping from the output of
         * <a>ListEventSourceMappings</a>.</p> <p>When you delete an event source mapping,
         * it enters a <code>Deleting</code> state and might not be completely deleted for
         * several seconds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventSourceMappingOutcome DeleteEventSourceMapping(const Model::DeleteEventSourceMappingRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventSourceMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventSourceMappingOutcomeCallable DeleteEventSourceMappingCallable(const Model::DeleteEventSourceMappingRequest& request) const;

        /**
         * An Async wrapper for DeleteEventSourceMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventSourceMappingAsync(const Model::DeleteEventSourceMappingRequest& request, const DeleteEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Lambda function. To delete a specific function version, use the
         * <code>Qualifier</code> parameter. Otherwise, all versions and aliases are
         * deleted.</p> <p>To delete Lambda event source mappings that invoke a function,
         * use <a>DeleteEventSourceMapping</a>. For Amazon Web Services and resources that
         * invoke your function directly, delete the trigger in the service where you
         * originally configured it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionOutcome DeleteFunction(const Model::DeleteFunctionRequest& request) const;

        /**
         * A Callable wrapper for DeleteFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionOutcomeCallable DeleteFunctionCallable(const Model::DeleteFunctionRequest& request) const;

        /**
         * An Async wrapper for DeleteFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionAsync(const Model::DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the code signing configuration from the function.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionCodeSigningConfigOutcome DeleteFunctionCodeSigningConfig(const Model::DeleteFunctionCodeSigningConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteFunctionCodeSigningConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionCodeSigningConfigOutcomeCallable DeleteFunctionCodeSigningConfigCallable(const Model::DeleteFunctionCodeSigningConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteFunctionCodeSigningConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionCodeSigningConfigAsync(const Model::DeleteFunctionCodeSigningConfigRequest& request, const DeleteFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a concurrent execution limit from a function.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionConcurrency">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionConcurrencyOutcome DeleteFunctionConcurrency(const Model::DeleteFunctionConcurrencyRequest& request) const;

        /**
         * A Callable wrapper for DeleteFunctionConcurrency that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionConcurrencyOutcomeCallable DeleteFunctionConcurrencyCallable(const Model::DeleteFunctionConcurrencyRequest& request) const;

        /**
         * An Async wrapper for DeleteFunctionConcurrency that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionConcurrencyAsync(const Model::DeleteFunctionConcurrencyRequest& request, const DeleteFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the configuration for asynchronous invocation for a function,
         * version, or alias.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionEventInvokeConfigOutcome DeleteFunctionEventInvokeConfig(const Model::DeleteFunctionEventInvokeConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteFunctionEventInvokeConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionEventInvokeConfigOutcomeCallable DeleteFunctionEventInvokeConfigCallable(const Model::DeleteFunctionEventInvokeConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteFunctionEventInvokeConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionEventInvokeConfigAsync(const Model::DeleteFunctionEventInvokeConfigRequest& request, const DeleteFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Lambda function URL. When you delete a function URL, you can't
         * recover it. Creating a new function URL results in a different URL
         * address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionUrlConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionUrlConfigOutcome DeleteFunctionUrlConfig(const Model::DeleteFunctionUrlConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteFunctionUrlConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionUrlConfigOutcomeCallable DeleteFunctionUrlConfigCallable(const Model::DeleteFunctionUrlConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteFunctionUrlConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionUrlConfigAsync(const Model::DeleteFunctionUrlConfigRequest& request, const DeleteFunctionUrlConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
         * layer</a>. Deleted versions can no longer be viewed or added to functions. To
         * avoid breaking functions, a copy of the version remains in Lambda until no
         * functions refer to it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteLayerVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLayerVersionOutcome DeleteLayerVersion(const Model::DeleteLayerVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteLayerVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLayerVersionOutcomeCallable DeleteLayerVersionCallable(const Model::DeleteLayerVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteLayerVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLayerVersionAsync(const Model::DeleteLayerVersionRequest& request, const DeleteLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the provisioned concurrency configuration for a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteProvisionedConcurrencyConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProvisionedConcurrencyConfigOutcome DeleteProvisionedConcurrencyConfig(const Model::DeleteProvisionedConcurrencyConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteProvisionedConcurrencyConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProvisionedConcurrencyConfigOutcomeCallable DeleteProvisionedConcurrencyConfigCallable(const Model::DeleteProvisionedConcurrencyConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteProvisionedConcurrencyConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProvisionedConcurrencyConfigAsync(const Model::DeleteProvisionedConcurrencyConfigRequest& request, const DeleteProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details about your account's <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/limits.html">limits</a> and
         * usage in an Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const Model::GetAccountSettingsRequest& request) const;

        /**
         * An Async wrapper for GetAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountSettingsAsync(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about a Lambda function <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetAlias">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAliasOutcome GetAlias(const Model::GetAliasRequest& request) const;

        /**
         * A Callable wrapper for GetAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAliasOutcomeCallable GetAliasCallable(const Model::GetAliasRequest& request) const;

        /**
         * An Async wrapper for GetAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAliasAsync(const Model::GetAliasRequest& request, const GetAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified code signing
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCodeSigningConfigOutcome GetCodeSigningConfig(const Model::GetCodeSigningConfigRequest& request) const;

        /**
         * A Callable wrapper for GetCodeSigningConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCodeSigningConfigOutcomeCallable GetCodeSigningConfigCallable(const Model::GetCodeSigningConfigRequest& request) const;

        /**
         * An Async wrapper for GetCodeSigningConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCodeSigningConfigAsync(const Model::GetCodeSigningConfigRequest& request, const GetCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about an event source mapping. You can get the identifier of
         * a mapping from the output of <a>ListEventSourceMappings</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventSourceMappingOutcome GetEventSourceMapping(const Model::GetEventSourceMappingRequest& request) const;

        /**
         * A Callable wrapper for GetEventSourceMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventSourceMappingOutcomeCallable GetEventSourceMappingCallable(const Model::GetEventSourceMappingRequest& request) const;

        /**
         * An Async wrapper for GetEventSourceMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventSourceMappingAsync(const Model::GetEventSourceMappingRequest& request, const GetEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the function or function version, with a link to
         * download the deployment package that's valid for 10 minutes. If you specify a
         * function version, only details that are specific to that version are
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionOutcome GetFunction(const Model::GetFunctionRequest& request) const;

        /**
         * A Callable wrapper for GetFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionOutcomeCallable GetFunctionCallable(const Model::GetFunctionRequest& request) const;

        /**
         * An Async wrapper for GetFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionAsync(const Model::GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the code signing configuration for the specified
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionCodeSigningConfigOutcome GetFunctionCodeSigningConfig(const Model::GetFunctionCodeSigningConfigRequest& request) const;

        /**
         * A Callable wrapper for GetFunctionCodeSigningConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionCodeSigningConfigOutcomeCallable GetFunctionCodeSigningConfigCallable(const Model::GetFunctionCodeSigningConfigRequest& request) const;

        /**
         * An Async wrapper for GetFunctionCodeSigningConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionCodeSigningConfigAsync(const Model::GetFunctionCodeSigningConfigRequest& request, const GetFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about the reserved concurrency configuration for a function.
         * To set a concurrency limit for a function, use
         * <a>PutFunctionConcurrency</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionConcurrency">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionConcurrencyOutcome GetFunctionConcurrency(const Model::GetFunctionConcurrencyRequest& request) const;

        /**
         * A Callable wrapper for GetFunctionConcurrency that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionConcurrencyOutcomeCallable GetFunctionConcurrencyCallable(const Model::GetFunctionConcurrencyRequest& request) const;

        /**
         * An Async wrapper for GetFunctionConcurrency that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionConcurrencyAsync(const Model::GetFunctionConcurrencyRequest& request, const GetFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the version-specific settings of a Lambda function or version. The
         * output includes only options that can vary between versions of a function. To
         * modify these settings, use <a>UpdateFunctionConfiguration</a>.</p> <p>To get all
         * of a function's details, including function-level settings, use
         * <a>GetFunction</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionConfigurationOutcome GetFunctionConfiguration(const Model::GetFunctionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetFunctionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionConfigurationOutcomeCallable GetFunctionConfigurationCallable(const Model::GetFunctionConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetFunctionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionConfigurationAsync(const Model::GetFunctionConfigurationRequest& request, const GetFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configuration for asynchronous invocation for a function,
         * version, or alias.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionEventInvokeConfigOutcome GetFunctionEventInvokeConfig(const Model::GetFunctionEventInvokeConfigRequest& request) const;

        /**
         * A Callable wrapper for GetFunctionEventInvokeConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionEventInvokeConfigOutcomeCallable GetFunctionEventInvokeConfigCallable(const Model::GetFunctionEventInvokeConfigRequest& request) const;

        /**
         * An Async wrapper for GetFunctionEventInvokeConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionEventInvokeConfigAsync(const Model::GetFunctionEventInvokeConfigRequest& request, const GetFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about a Lambda function URL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionUrlConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionUrlConfigOutcome GetFunctionUrlConfig(const Model::GetFunctionUrlConfigRequest& request) const;

        /**
         * A Callable wrapper for GetFunctionUrlConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionUrlConfigOutcomeCallable GetFunctionUrlConfigCallable(const Model::GetFunctionUrlConfigRequest& request) const;

        /**
         * An Async wrapper for GetFunctionUrlConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionUrlConfigAsync(const Model::GetFunctionUrlConfigRequest& request, const GetFunctionUrlConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
         * layer</a>, with a link to download the layer archive that's valid for 10
         * minutes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetLayerVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLayerVersionOutcome GetLayerVersion(const Model::GetLayerVersionRequest& request) const;

        /**
         * A Callable wrapper for GetLayerVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLayerVersionOutcomeCallable GetLayerVersionCallable(const Model::GetLayerVersionRequest& request) const;

        /**
         * An Async wrapper for GetLayerVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLayerVersionAsync(const Model::GetLayerVersionRequest& request, const GetLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
         * layer</a>, with a link to download the layer archive that's valid for 10
         * minutes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetLayerVersionByArn">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLayerVersionByArnOutcome GetLayerVersionByArn(const Model::GetLayerVersionByArnRequest& request) const;

        /**
         * A Callable wrapper for GetLayerVersionByArn that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLayerVersionByArnOutcomeCallable GetLayerVersionByArnCallable(const Model::GetLayerVersionByArnRequest& request) const;

        /**
         * An Async wrapper for GetLayerVersionByArn that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLayerVersionByArnAsync(const Model::GetLayerVersionByArnRequest& request, const GetLayerVersionByArnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the permission policy for a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
         * layer</a>. For more information, see
         * <a>AddLayerVersionPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetLayerVersionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLayerVersionPolicyOutcome GetLayerVersionPolicy(const Model::GetLayerVersionPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetLayerVersionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLayerVersionPolicyOutcomeCallable GetLayerVersionPolicyCallable(const Model::GetLayerVersionPolicyRequest& request) const;

        /**
         * An Async wrapper for GetLayerVersionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLayerVersionPolicyAsync(const Model::GetLayerVersionPolicyRequest& request, const GetLayerVersionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/access-control-resource-based.html">resource-based
         * IAM policy</a> for a function, version, or alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /**
         * An Async wrapper for GetPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the provisioned concurrency configuration for a function's alias or
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetProvisionedConcurrencyConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProvisionedConcurrencyConfigOutcome GetProvisionedConcurrencyConfig(const Model::GetProvisionedConcurrencyConfigRequest& request) const;

        /**
         * A Callable wrapper for GetProvisionedConcurrencyConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProvisionedConcurrencyConfigOutcomeCallable GetProvisionedConcurrencyConfigCallable(const Model::GetProvisionedConcurrencyConfigRequest& request) const;

        /**
         * An Async wrapper for GetProvisionedConcurrencyConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProvisionedConcurrencyConfigAsync(const Model::GetProvisionedConcurrencyConfigRequest& request, const GetProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Invokes a Lambda function. You can invoke a function synchronously (and wait
         * for the response), or asynchronously. To invoke a function asynchronously, set
         * <code>InvocationType</code> to <code>Event</code>.</p> <p>For <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-sync.html">synchronous
         * invocation</a>, details about the function response, including errors, are
         * included in the response body and headers. For either invocation type, you can
         * find more information in the <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/monitoring-functions.html">execution
         * log</a> and <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-x-ray.html">trace</a>.</p>
         * <p>When an error occurs, your function may be invoked multiple times. Retry
         * behavior varies by error type, client, event source, and invocation type. For
         * example, if you invoke a function asynchronously and it returns an error, Lambda
         * executes the function up to two more times. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-retries.html">Error
         * handling and automatic retries in Lambda</a>.</p> <p>For <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html">asynchronous
         * invocation</a>, Lambda adds events to a queue before sending them to your
         * function. If your function does not have enough capacity to keep up with the
         * queue, events may be lost. Occasionally, your function may receive the same
         * event multiple times, even if no error occurs. To retain events that were not
         * processed, configure your function with a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-dlq">dead-letter
         * queue</a>.</p> <p>The status code in the API response doesn't reflect function
         * errors. Error codes are reserved for errors that prevent your function from
         * executing, such as permissions errors, <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/gettingstarted-limits.html">quota</a>
         * errors, or issues with your function's code and configuration. For example,
         * Lambda returns <code>TooManyRequestsException</code> if running the function
         * would cause you to exceed a concurrency limit at either the account level
         * (<code>ConcurrentInvocationLimitExceeded</code>) or function level
         * (<code>ReservedFunctionConcurrentInvocationLimitExceeded</code>).</p> <p>For
         * functions with a long timeout, your client might disconnect during synchronous
         * invocation while it waits for a response. Configure your HTTP client, SDK,
         * firewall, proxy, or operating system to allow for long connections with timeout
         * or keep-alive settings.</p> <p>This operation requires permission for the <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_awslambda.html">lambda:InvokeFunction</a>
         * action. For details on how to set up permissions for cross-account invocations,
         * see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/access-control-resource-based.html#permissions-resource-xaccountinvoke">Granting
         * function access to other accounts</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Invoke">AWS API
         * Reference</a></p>
         */
        virtual Model::InvokeOutcome Invoke(const Model::InvokeRequest& request) const;

        /**
         * A Callable wrapper for Invoke that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InvokeOutcomeCallable InvokeCallable(const Model::InvokeRequest& request) const;

        /**
         * An Async wrapper for Invoke that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InvokeAsync(const Model::InvokeRequest& request, const InvokeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">aliases</a>
         * for a Lambda function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request) const;

        /**
         * An Async wrapper for ListAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuring-codesigning.html">code
         * signing configurations</a>. A request returns up to 10,000 configurations per
         * call. You can use the <code>MaxItems</code> parameter to return fewer
         * configurations per call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListCodeSigningConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCodeSigningConfigsOutcome ListCodeSigningConfigs(const Model::ListCodeSigningConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListCodeSigningConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCodeSigningConfigsOutcomeCallable ListCodeSigningConfigsCallable(const Model::ListCodeSigningConfigsRequest& request) const;

        /**
         * An Async wrapper for ListCodeSigningConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCodeSigningConfigsAsync(const Model::ListCodeSigningConfigsRequest& request, const ListCodeSigningConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists event source mappings. Specify an <code>EventSourceArn</code> to show
         * only event source mappings for a single event source.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListEventSourceMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventSourceMappingsOutcome ListEventSourceMappings(const Model::ListEventSourceMappingsRequest& request) const;

        /**
         * A Callable wrapper for ListEventSourceMappings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventSourceMappingsOutcomeCallable ListEventSourceMappingsCallable(const Model::ListEventSourceMappingsRequest& request) const;

        /**
         * An Async wrapper for ListEventSourceMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventSourceMappingsAsync(const Model::ListEventSourceMappingsRequest& request, const ListEventSourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of configurations for asynchronous invocation for a
         * function.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctionEventInvokeConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionEventInvokeConfigsOutcome ListFunctionEventInvokeConfigs(const Model::ListFunctionEventInvokeConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListFunctionEventInvokeConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionEventInvokeConfigsOutcomeCallable ListFunctionEventInvokeConfigsCallable(const Model::ListFunctionEventInvokeConfigsRequest& request) const;

        /**
         * An Async wrapper for ListFunctionEventInvokeConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionEventInvokeConfigsAsync(const Model::ListFunctionEventInvokeConfigsRequest& request, const ListFunctionEventInvokeConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Lambda function URLs for the specified
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctionUrlConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionUrlConfigsOutcome ListFunctionUrlConfigs(const Model::ListFunctionUrlConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListFunctionUrlConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionUrlConfigsOutcomeCallable ListFunctionUrlConfigsCallable(const Model::ListFunctionUrlConfigsRequest& request) const;

        /**
         * An Async wrapper for ListFunctionUrlConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionUrlConfigsAsync(const Model::ListFunctionUrlConfigsRequest& request, const ListFunctionUrlConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Lambda functions, with the version-specific configuration
         * of each. Lambda returns up to 50 functions per call.</p> <p>Set
         * <code>FunctionVersion</code> to <code>ALL</code> to include all published
         * versions of each function in addition to the unpublished version.</p> 
         * <p>The <code>ListFunctions</code> operation returns a subset of the
         * <a>FunctionConfiguration</a> fields. To get the additional fields (State,
         * StateReasonCode, StateReason, LastUpdateStatus, LastUpdateStatusReason,
         * LastUpdateStatusReasonCode) for a function or version, use
         * <a>GetFunction</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionsOutcome ListFunctions(const Model::ListFunctionsRequest& request) const;

        /**
         * A Callable wrapper for ListFunctions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionsOutcomeCallable ListFunctionsCallable(const Model::ListFunctionsRequest& request) const;

        /**
         * An Async wrapper for ListFunctions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionsAsync(const Model::ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the functions that use the specified code signing configuration. You can
         * use this method prior to deleting a code signing configuration, to verify that
         * no functions are using it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctionsByCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionsByCodeSigningConfigOutcome ListFunctionsByCodeSigningConfig(const Model::ListFunctionsByCodeSigningConfigRequest& request) const;

        /**
         * A Callable wrapper for ListFunctionsByCodeSigningConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionsByCodeSigningConfigOutcomeCallable ListFunctionsByCodeSigningConfigCallable(const Model::ListFunctionsByCodeSigningConfigRequest& request) const;

        /**
         * An Async wrapper for ListFunctionsByCodeSigningConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionsByCodeSigningConfigAsync(const Model::ListFunctionsByCodeSigningConfigRequest& request, const ListFunctionsByCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the versions of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
         * layer</a>. Versions that have been deleted aren't listed. Specify a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime
         * identifier</a> to list only versions that indicate that they're compatible with
         * that runtime. Specify a compatible architecture to include only layer versions
         * that are compatible with that architecture.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListLayerVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLayerVersionsOutcome ListLayerVersions(const Model::ListLayerVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListLayerVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLayerVersionsOutcomeCallable ListLayerVersionsCallable(const Model::ListLayerVersionsRequest& request) const;

        /**
         * An Async wrapper for ListLayerVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLayerVersionsAsync(const Model::ListLayerVersionsRequest& request, const ListLayerVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-layers.html">Lambda
         * layers</a> and shows information about the latest version of each. Specify a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html">runtime
         * identifier</a> to list only layers that indicate that they're compatible with
         * that runtime. Specify a compatible architecture to include only layers that are
         * compatible with that <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-arch.html">instruction
         * set architecture</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListLayers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLayersOutcome ListLayers(const Model::ListLayersRequest& request) const;

        /**
         * A Callable wrapper for ListLayers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLayersOutcomeCallable ListLayersCallable(const Model::ListLayersRequest& request) const;

        /**
         * An Async wrapper for ListLayers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLayersAsync(const Model::ListLayersRequest& request, const ListLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of provisioned concurrency configurations for a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListProvisionedConcurrencyConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisionedConcurrencyConfigsOutcome ListProvisionedConcurrencyConfigs(const Model::ListProvisionedConcurrencyConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListProvisionedConcurrencyConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProvisionedConcurrencyConfigsOutcomeCallable ListProvisionedConcurrencyConfigsCallable(const Model::ListProvisionedConcurrencyConfigsRequest& request) const;

        /**
         * An Async wrapper for ListProvisionedConcurrencyConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProvisionedConcurrencyConfigsAsync(const Model::ListProvisionedConcurrencyConfigsRequest& request, const ListProvisionedConcurrencyConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a function's <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>. You
         * can also view tags with <a>GetFunction</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListTags">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">versions</a>,
         * with the version-specific configuration of each. Lambda returns up to 50
         * versions per call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListVersionsByFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVersionsByFunctionOutcome ListVersionsByFunction(const Model::ListVersionsByFunctionRequest& request) const;

        /**
         * A Callable wrapper for ListVersionsByFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVersionsByFunctionOutcomeCallable ListVersionsByFunctionCallable(const Model::ListVersionsByFunctionRequest& request) const;

        /**
         * An Async wrapper for ListVersionsByFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVersionsByFunctionAsync(const Model::ListVersionsByFunctionRequest& request, const ListVersionsByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
         * layer</a> from a ZIP archive. Each time you call
         * <code>PublishLayerVersion</code> with the same layer name, a new version is
         * created.</p> <p>Add layers to your function with <a>CreateFunction</a> or
         * <a>UpdateFunctionConfiguration</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PublishLayerVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishLayerVersionOutcome PublishLayerVersion(const Model::PublishLayerVersionRequest& request) const;

        /**
         * A Callable wrapper for PublishLayerVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PublishLayerVersionOutcomeCallable PublishLayerVersionCallable(const Model::PublishLayerVersionRequest& request) const;

        /**
         * An Async wrapper for PublishLayerVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PublishLayerVersionAsync(const Model::PublishLayerVersionRequest& request, const PublishLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">version</a>
         * from the current code and configuration of a function. Use versions to create a
         * snapshot of your function code and configuration that doesn't change.</p>
         * <p>Lambda doesn't publish a version if the function's configuration and code
         * haven't changed since the last version. Use <a>UpdateFunctionCode</a> or
         * <a>UpdateFunctionConfiguration</a> to update the function before publishing a
         * version.</p> <p>Clients can invoke versions directly or with an alias. To create
         * an alias, use <a>CreateAlias</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PublishVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishVersionOutcome PublishVersion(const Model::PublishVersionRequest& request) const;

        /**
         * A Callable wrapper for PublishVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PublishVersionOutcomeCallable PublishVersionCallable(const Model::PublishVersionRequest& request) const;

        /**
         * An Async wrapper for PublishVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PublishVersionAsync(const Model::PublishVersionRequest& request, const PublishVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the code signing configuration for the function. Changes to the code
         * signing configuration take effect the next time a user tries to deploy a code
         * package to the function. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFunctionCodeSigningConfigOutcome PutFunctionCodeSigningConfig(const Model::PutFunctionCodeSigningConfigRequest& request) const;

        /**
         * A Callable wrapper for PutFunctionCodeSigningConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFunctionCodeSigningConfigOutcomeCallable PutFunctionCodeSigningConfigCallable(const Model::PutFunctionCodeSigningConfigRequest& request) const;

        /**
         * An Async wrapper for PutFunctionCodeSigningConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFunctionCodeSigningConfigAsync(const Model::PutFunctionCodeSigningConfigRequest& request, const PutFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the maximum number of simultaneous executions for a function, and
         * reserves capacity for that concurrency level.</p> <p>Concurrency settings apply
         * to the function as a whole, including all published versions and the unpublished
         * version. Reserving concurrency both ensures that your function has capacity to
         * process the specified number of events simultaneously, and prevents it from
         * scaling beyond that level. Use <a>GetFunction</a> to see the current setting for
         * a function.</p> <p>Use <a>GetAccountSettings</a> to see your Regional
         * concurrency limit. You can reserve concurrency for as many functions as you
         * like, as long as you leave at least 100 simultaneous executions unreserved for
         * functions that aren't configured with a per-function limit. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-scaling.html">Lambda
         * function scaling</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionConcurrency">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFunctionConcurrencyOutcome PutFunctionConcurrency(const Model::PutFunctionConcurrencyRequest& request) const;

        /**
         * A Callable wrapper for PutFunctionConcurrency that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFunctionConcurrencyOutcomeCallable PutFunctionConcurrencyCallable(const Model::PutFunctionConcurrencyRequest& request) const;

        /**
         * An Async wrapper for PutFunctionConcurrency that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFunctionConcurrencyAsync(const Model::PutFunctionConcurrencyRequest& request, const PutFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures options for <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html">asynchronous
         * invocation</a> on a function, version, or alias. If a configuration already
         * exists for a function, version, or alias, this operation overwrites it. If you
         * exclude any settings, they are removed. To set one option without affecting
         * existing settings for other options, use
         * <a>UpdateFunctionEventInvokeConfig</a>.</p> <p>By default, Lambda retries an
         * asynchronous invocation twice if the function returns an error. It retains
         * events in a queue for up to six hours. When an event fails all processing
         * attempts or stays in the asynchronous invocation queue for too long, Lambda
         * discards it. To retain discarded events, configure a dead-letter queue with
         * <a>UpdateFunctionConfiguration</a>.</p> <p>To send an invocation record to a
         * queue, topic, function, or event bus, specify a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-async.html#invocation-async-destinations">destination</a>.
         * You can configure separate destinations for successful invocations (on-success)
         * and events that fail all processing attempts (on-failure). You can configure
         * destinations in addition to or instead of a dead-letter queue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFunctionEventInvokeConfigOutcome PutFunctionEventInvokeConfig(const Model::PutFunctionEventInvokeConfigRequest& request) const;

        /**
         * A Callable wrapper for PutFunctionEventInvokeConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFunctionEventInvokeConfigOutcomeCallable PutFunctionEventInvokeConfigCallable(const Model::PutFunctionEventInvokeConfigRequest& request) const;

        /**
         * An Async wrapper for PutFunctionEventInvokeConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFunctionEventInvokeConfigAsync(const Model::PutFunctionEventInvokeConfigRequest& request, const PutFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a provisioned concurrency configuration to a function's alias or
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutProvisionedConcurrencyConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::PutProvisionedConcurrencyConfigOutcome PutProvisionedConcurrencyConfig(const Model::PutProvisionedConcurrencyConfigRequest& request) const;

        /**
         * A Callable wrapper for PutProvisionedConcurrencyConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutProvisionedConcurrencyConfigOutcomeCallable PutProvisionedConcurrencyConfigCallable(const Model::PutProvisionedConcurrencyConfigRequest& request) const;

        /**
         * An Async wrapper for PutProvisionedConcurrencyConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutProvisionedConcurrencyConfigAsync(const Model::PutProvisionedConcurrencyConfigRequest& request, const PutProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a statement from the permissions policy for a version of an <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
         * layer</a>. For more information, see
         * <a>AddLayerVersionPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/RemoveLayerVersionPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveLayerVersionPermissionOutcome RemoveLayerVersionPermission(const Model::RemoveLayerVersionPermissionRequest& request) const;

        /**
         * A Callable wrapper for RemoveLayerVersionPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveLayerVersionPermissionOutcomeCallable RemoveLayerVersionPermissionCallable(const Model::RemoveLayerVersionPermissionRequest& request) const;

        /**
         * An Async wrapper for RemoveLayerVersionPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveLayerVersionPermissionAsync(const Model::RemoveLayerVersionPermissionRequest& request, const RemoveLayerVersionPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes function-use permission from an Amazon Web Service or another Amazon
         * Web Services account. You can get the ID of the statement from the output of
         * <a>GetPolicy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/RemovePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /**
         * A Callable wrapper for RemovePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

        /**
         * An Async wrapper for RemovePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemovePermissionAsync(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a> to a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/TagResource">AWS
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
         * <p>Removes <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a> from a
         * function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UntagResource">AWS
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
         * <p>Updates the configuration of a Lambda function <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">alias</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request) const;

        /**
         * An Async wrapper for UpdateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the code signing configuration. Changes to the code signing
         * configuration take effect the next time a user tries to deploy a code package to
         * the function. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateCodeSigningConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCodeSigningConfigOutcome UpdateCodeSigningConfig(const Model::UpdateCodeSigningConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateCodeSigningConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCodeSigningConfigOutcomeCallable UpdateCodeSigningConfigCallable(const Model::UpdateCodeSigningConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateCodeSigningConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCodeSigningConfigAsync(const Model::UpdateCodeSigningConfigRequest& request, const UpdateCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an event source mapping. You can change the function that Lambda
         * invokes, or pause invocation and resume later from the same location.</p> <p>For
         * details about how to configure different event sources, see the following
         * topics. </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html#services-dynamodb-eventsourcemapping">
         * Amazon DynamoDB Streams</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html#services-kinesis-eventsourcemapping">
         * Amazon Kinesis</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html#events-sqs-eventsource">
         * Amazon SQS</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-mq.html#services-mq-eventsourcemapping">
         * Amazon MQ and RabbitMQ</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html"> Amazon
         * MSK</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/kafka-smaa.html"> Apache
         * Kafka</a> </p> </li> </ul> <p>The following error handling options are available
         * only for stream sources (DynamoDB and Kinesis):</p> <ul> <li> <p>
         * <code>BisectBatchOnFunctionError</code> - If the function returns an error,
         * split the batch in two and retry.</p> </li> <li> <p>
         * <code>DestinationConfig</code> - Send discarded records to an Amazon SQS queue
         * or Amazon SNS topic.</p> </li> <li> <p> <code>MaximumRecordAgeInSeconds</code> -
         * Discard records older than the specified age. The default value is infinite
         * (-1). When set to infinite (-1), failed records are retried until the record
         * expires</p> </li> <li> <p> <code>MaximumRetryAttempts</code> - Discard records
         * after the specified number of retries. The default value is infinite (-1). When
         * set to infinite (-1), failed records are retried until the record expires.</p>
         * </li> <li> <p> <code>ParallelizationFactor</code> - Process multiple batches
         * from each shard concurrently.</p> </li> </ul> <p>For information about which
         * configuration parameters apply to each event source, see the following
         * topics.</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html#services-ddb-params">
         * Amazon DynamoDB Streams</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html#services-kinesis-params">
         * Amazon Kinesis</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html#services-sqs-params">
         * Amazon SQS</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-mq.html#services-mq-params">
         * Amazon MQ and RabbitMQ</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#services-msk-parms">
         * Amazon MSK</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/with-kafka.html#services-kafka-parms">
         * Apache Kafka</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventSourceMappingOutcome UpdateEventSourceMapping(const Model::UpdateEventSourceMappingRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventSourceMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventSourceMappingOutcomeCallable UpdateEventSourceMappingCallable(const Model::UpdateEventSourceMappingRequest& request) const;

        /**
         * An Async wrapper for UpdateEventSourceMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventSourceMappingAsync(const Model::UpdateEventSourceMappingRequest& request, const UpdateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a Lambda function's code. If code signing is enabled for the
         * function, the code package must be signed by a trusted publisher. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-codesigning.html">Configuring
         * code signing for Lambda</a>.</p> <p>If the function's package type is
         * <code>Image</code>, then you must specify the code package in
         * <code>ImageUri</code> as the URI of a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-images.html">container
         * image</a> in the Amazon ECR registry.</p> <p>If the function's package type is
         * <code>Zip</code>, then you must specify the deployment package as a <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/gettingstarted-package.html#gettingstarted-package-zip">.zip
         * file archive</a>. Enter the Amazon S3 bucket and key of the code .zip file
         * location. You can also provide the function code inline using the
         * <code>ZipFile</code> field.</p> <p>The code in the deployment package must be
         * compatible with the target instruction set architecture of the function
         * (<code>x86-64</code> or <code>arm64</code>).</p> <p>The function's code is
         * locked when you publish a version. You can't modify the code of a published
         * version, only the unpublished version.</p>  <p>For a function defined as a
         * container image, Lambda resolves the image tag to an image digest. In Amazon
         * ECR, if you update the image tag to a new image, Lambda does not automatically
         * update the function.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionCode">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionCodeOutcome UpdateFunctionCode(const Model::UpdateFunctionCodeRequest& request) const;

        /**
         * A Callable wrapper for UpdateFunctionCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionCodeOutcomeCallable UpdateFunctionCodeCallable(const Model::UpdateFunctionCodeRequest& request) const;

        /**
         * An Async wrapper for UpdateFunctionCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionCodeAsync(const Model::UpdateFunctionCodeRequest& request, const UpdateFunctionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify the version-specific settings of a Lambda function.</p> <p>When you
         * update a function, Lambda provisions an instance of the function and its
         * supporting resources. If your function connects to a VPC, this process can take
         * a minute. During this time, you can't modify the function, but you can still
         * invoke it. The <code>LastUpdateStatus</code>,
         * <code>LastUpdateStatusReason</code>, and <code>LastUpdateStatusReasonCode</code>
         * fields in the response from <a>GetFunctionConfiguration</a> indicate when the
         * update is complete and the function is processing events with the new
         * configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/functions-states.html">Lambda
         * function states</a>.</p> <p>These settings can vary between versions of a
         * function and are locked when you publish a version. You can't modify the
         * configuration of a published version, only the unpublished version.</p> <p>To
         * configure function concurrency, use <a>PutFunctionConcurrency</a>. To grant
         * invoke permissions to an Amazon Web Services account or Amazon Web Service, use
         * <a>AddPermission</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionConfigurationOutcome UpdateFunctionConfiguration(const Model::UpdateFunctionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateFunctionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionConfigurationOutcomeCallable UpdateFunctionConfigurationCallable(const Model::UpdateFunctionConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateFunctionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionConfigurationAsync(const Model::UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration for asynchronous invocation for a function,
         * version, or alias.</p> <p>To configure options for asynchronous invocation, use
         * <a>PutFunctionEventInvokeConfig</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionEventInvokeConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionEventInvokeConfigOutcome UpdateFunctionEventInvokeConfig(const Model::UpdateFunctionEventInvokeConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateFunctionEventInvokeConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionEventInvokeConfigOutcomeCallable UpdateFunctionEventInvokeConfigCallable(const Model::UpdateFunctionEventInvokeConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateFunctionEventInvokeConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionEventInvokeConfigAsync(const Model::UpdateFunctionEventInvokeConfigRequest& request, const UpdateFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration for a Lambda function URL.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionUrlConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionUrlConfigOutcome UpdateFunctionUrlConfig(const Model::UpdateFunctionUrlConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateFunctionUrlConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionUrlConfigOutcomeCallable UpdateFunctionUrlConfigCallable(const Model::UpdateFunctionUrlConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateFunctionUrlConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionUrlConfigAsync(const Model::UpdateFunctionUrlConfigRequest& request, const UpdateFunctionUrlConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LambdaEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LambdaClient>;
      void init(const LambdaClientConfiguration& clientConfiguration);

      LambdaClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LambdaEndpointProviderBase> m_endpointProvider;
  };

} // namespace Lambda
} // namespace Aws

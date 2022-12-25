/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/SageMakerServiceClientModel.h>

namespace Aws
{
namespace SageMaker
{
  /**
   * <p>Provides APIs for creating and managing SageMaker resources. </p> <p>Other
   * Resources:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker
   * Developer Guide</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon
   * Augmented AI Runtime API Reference</a> </p> </li> </ul>
   */
  class AWS_SAGEMAKER_API SageMakerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SageMakerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerClient(const Aws::SageMaker::SageMakerClientConfiguration& clientConfiguration = Aws::SageMaker::SageMakerClientConfiguration(),
                        std::shared_ptr<SageMakerEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<SageMakerEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerEndpointProvider>(ALLOCATION_TAG),
                        const Aws::SageMaker::SageMakerClientConfiguration& clientConfiguration = Aws::SageMaker::SageMakerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<SageMakerEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerEndpointProvider>(ALLOCATION_TAG),
                        const Aws::SageMaker::SageMakerClientConfiguration& clientConfiguration = Aws::SageMaker::SageMakerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SageMakerClient();

        /**
         * <p>Creates an <i>association</i> between the source and the destination. A
         * source can be associated with multiple destinations, and a destination can be
         * associated with multiple sources. An association is a lineage tracking entity.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking.html">Amazon
         * SageMaker ML Lineage Tracking</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AddAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::AddAssociationOutcome AddAssociation(const Model::AddAssociationRequest& request) const;

        /**
         * A Callable wrapper for AddAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddAssociationOutcomeCallable AddAssociationCallable(const Model::AddAssociationRequest& request) const;

        /**
         * An Async wrapper for AddAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddAssociationAsync(const Model::AddAssociationRequest& request, const AddAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified SageMaker resource. You
         * can add tags to notebook instances, training jobs, hyperparameter tuning jobs,
         * batch transform jobs, models, labeling jobs, work teams, endpoint
         * configurations, and endpoints.</p> <p>Each tag consists of a key and an optional
         * value. Tag keys must be unique per resource. For more information about tags,
         * see For more information, see <a
         * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">Amazon
         * Web Services Tagging Strategies</a>.</p>  <p>Tags that you add to a
         * hyperparameter tuning job by calling this API are also added to any training
         * jobs that the hyperparameter tuning job launches after you call this API, but
         * not to training jobs that the hyperparameter tuning job launched before you
         * called this API. To make sure that the tags associated with a hyperparameter
         * tuning job are also added to all training jobs that the hyperparameter tuning
         * job launches, add the tags when you first create the tuning job by specifying
         * them in the <code>Tags</code> parameter of <a>CreateHyperParameterTuningJob</a>
         * </p>   <p>Tags that you add to a SageMaker Studio Domain or User
         * Profile by calling this API are also added to any Apps that the Domain or User
         * Profile launches after you call this API, but not to Apps that the Domain or
         * User Profile launched before you called this API. To make sure that the tags
         * associated with a Domain or User Profile are also added to all Apps that the
         * Domain or User Profile launches, add the tags when you first create the Domain
         * or User Profile by specifying them in the <code>Tags</code> parameter of
         * <a>CreateDomain</a> or <a>CreateUserProfile</a>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * A Callable wrapper for AddTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * An Async wrapper for AddTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a trial component with a trial. A trial component can be
         * associated with multiple trials. To disassociate a trial component from a trial,
         * call the <a>DisassociateTrialComponent</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AssociateTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTrialComponentOutcome AssociateTrialComponent(const Model::AssociateTrialComponentRequest& request) const;

        /**
         * A Callable wrapper for AssociateTrialComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTrialComponentOutcomeCallable AssociateTrialComponentCallable(const Model::AssociateTrialComponentRequest& request) const;

        /**
         * An Async wrapper for AssociateTrialComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTrialComponentAsync(const Model::AssociateTrialComponentRequest& request, const AssociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action batch describes a list of versioned model packages</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BatchDescribeModelPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDescribeModelPackageOutcome BatchDescribeModelPackage(const Model::BatchDescribeModelPackageRequest& request) const;

        /**
         * A Callable wrapper for BatchDescribeModelPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDescribeModelPackageOutcomeCallable BatchDescribeModelPackageCallable(const Model::BatchDescribeModelPackageRequest& request) const;

        /**
         * An Async wrapper for BatchDescribeModelPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDescribeModelPackageAsync(const Model::BatchDescribeModelPackageRequest& request, const BatchDescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an <i>action</i>. An action is a lineage tracking entity that
         * represents an action or activity. For example, a model deployment or an HPO job.
         * Generally, an action involves at least one input or output artifact. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking.html">Amazon
         * SageMaker ML Lineage Tracking</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateActionOutcome CreateAction(const Model::CreateActionRequest& request) const;

        /**
         * A Callable wrapper for CreateAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateActionOutcomeCallable CreateActionCallable(const Model::CreateActionRequest& request) const;

        /**
         * An Async wrapper for CreateAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateActionAsync(const Model::CreateActionRequest& request, const CreateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a machine learning algorithm that you can use in SageMaker and list in
         * the Amazon Web Services Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAlgorithmOutcome CreateAlgorithm(const Model::CreateAlgorithmRequest& request) const;

        /**
         * A Callable wrapper for CreateAlgorithm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAlgorithmOutcomeCallable CreateAlgorithmCallable(const Model::CreateAlgorithmRequest& request) const;

        /**
         * An Async wrapper for CreateAlgorithm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAlgorithmAsync(const Model::CreateAlgorithmRequest& request, const CreateAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a running app for the specified UserProfile. This operation is
         * automatically invoked by Amazon SageMaker Studio upon access to the associated
         * Domain, and when new kernel configurations are selected by the user. A user may
         * have multiple Apps active simultaneously.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * A Callable wrapper for CreateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request) const;

        /**
         * An Async wrapper for CreateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a configuration for running a SageMaker image as a KernelGateway app.
         * The configuration specifies the Amazon Elastic File System (EFS) storage volume
         * on the image, and a list of the kernels in the image.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAppImageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppImageConfigOutcome CreateAppImageConfig(const Model::CreateAppImageConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateAppImageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppImageConfigOutcomeCallable CreateAppImageConfigCallable(const Model::CreateAppImageConfigRequest& request) const;

        /**
         * An Async wrapper for CreateAppImageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppImageConfigAsync(const Model::CreateAppImageConfigRequest& request, const CreateAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an <i>artifact</i>. An artifact is a lineage tracking entity that
         * represents a URI addressable object or data. Some examples are the S3 URI of a
         * dataset and the ECR registry path of an image. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking.html">Amazon
         * SageMaker ML Lineage Tracking</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateArtifactOutcome CreateArtifact(const Model::CreateArtifactRequest& request) const;

        /**
         * A Callable wrapper for CreateArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateArtifactOutcomeCallable CreateArtifactCallable(const Model::CreateArtifactRequest& request) const;

        /**
         * An Async wrapper for CreateArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateArtifactAsync(const Model::CreateArtifactRequest& request, const CreateArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Autopilot job.</p> <p>Find the best-performing model after you run
         * an Autopilot job by calling .</p> <p>For information about how to use Autopilot,
         * see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-automate-model-development.html">Automate
         * Model Development with Amazon SageMaker Autopilot</a>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAutoMLJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAutoMLJobOutcome CreateAutoMLJob(const Model::CreateAutoMLJobRequest& request) const;

        /**
         * A Callable wrapper for CreateAutoMLJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAutoMLJobOutcomeCallable CreateAutoMLJobCallable(const Model::CreateAutoMLJobRequest& request) const;

        /**
         * An Async wrapper for CreateAutoMLJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAutoMLJobAsync(const Model::CreateAutoMLJobRequest& request, const CreateAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Git repository as a resource in your SageMaker account. You can
         * associate the repository with notebook instances so that you can use Git source
         * control for the notebooks you create. The Git repository is a resource in your
         * SageMaker account, so it can be associated with more than one notebook instance,
         * and it persists independently from the lifecycle of any notebook instances it is
         * associated with.</p> <p>The repository can be hosted either in <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">Amazon
         * Web Services CodeCommit</a> or in any other Git repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateCodeRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCodeRepositoryOutcome CreateCodeRepository(const Model::CreateCodeRepositoryRequest& request) const;

        /**
         * A Callable wrapper for CreateCodeRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCodeRepositoryOutcomeCallable CreateCodeRepositoryCallable(const Model::CreateCodeRepositoryRequest& request) const;

        /**
         * An Async wrapper for CreateCodeRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCodeRepositoryAsync(const Model::CreateCodeRepositoryRequest& request, const CreateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a model compilation job. After the model has been compiled, Amazon
         * SageMaker saves the resulting model artifacts to an Amazon Simple Storage
         * Service (Amazon S3) bucket that you specify. </p> <p>If you choose to host your
         * model using Amazon SageMaker hosting services, you can use the resulting model
         * artifacts as part of the model. You can also use the artifacts with Amazon Web
         * Services IoT Greengrass. In that case, deploy them as an ML resource.</p> <p>In
         * the request body, you provide the following:</p> <ul> <li> <p>A name for the
         * compilation job</p> </li> <li> <p> Information about the input model artifacts
         * </p> </li> <li> <p>The output location for the compiled model and the device
         * (target) that the model runs on </p> </li> <li> <p>The Amazon Resource Name
         * (ARN) of the IAM role that Amazon SageMaker assumes to perform the model
         * compilation job. </p> </li> </ul> <p>You can also provide a <code>Tag</code> to
         * track the model compilation job's resource use and costs. The response body
         * contains the <code>CompilationJobArn</code> for the compiled job.</p> <p>To stop
         * a model compilation job, use <a>StopCompilationJob</a>. To get information about
         * a particular model compilation job, use <a>DescribeCompilationJob</a>. To get
         * information about multiple model compilation jobs, use
         * <a>ListCompilationJobs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateCompilationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCompilationJobOutcome CreateCompilationJob(const Model::CreateCompilationJobRequest& request) const;

        /**
         * A Callable wrapper for CreateCompilationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCompilationJobOutcomeCallable CreateCompilationJobCallable(const Model::CreateCompilationJobRequest& request) const;

        /**
         * An Async wrapper for CreateCompilationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCompilationJobAsync(const Model::CreateCompilationJobRequest& request, const CreateCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <i>context</i>. A context is a lineage tracking entity that
         * represents a logical grouping of other tracking or experiment entities. Some
         * examples are an endpoint and a model package. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking.html">Amazon
         * SageMaker ML Lineage Tracking</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateContext">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContextOutcome CreateContext(const Model::CreateContextRequest& request) const;

        /**
         * A Callable wrapper for CreateContext that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContextOutcomeCallable CreateContextCallable(const Model::CreateContextRequest& request) const;

        /**
         * An Async wrapper for CreateContext that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContextAsync(const Model::CreateContextRequest& request, const CreateContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a definition for a job that monitors data quality and drift. For
         * information about model monitor, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
         * SageMaker Model Monitor</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateDataQualityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataQualityJobDefinitionOutcome CreateDataQualityJobDefinition(const Model::CreateDataQualityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateDataQualityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataQualityJobDefinitionOutcomeCallable CreateDataQualityJobDefinitionCallable(const Model::CreateDataQualityJobDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateDataQualityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataQualityJobDefinitionAsync(const Model::CreateDataQualityJobDefinitionRequest& request, const CreateDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a device fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateDeviceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceFleetOutcome CreateDeviceFleet(const Model::CreateDeviceFleetRequest& request) const;

        /**
         * A Callable wrapper for CreateDeviceFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeviceFleetOutcomeCallable CreateDeviceFleetCallable(const Model::CreateDeviceFleetRequest& request) const;

        /**
         * An Async wrapper for CreateDeviceFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeviceFleetAsync(const Model::CreateDeviceFleetRequest& request, const CreateDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>Domain</code> used by Amazon SageMaker Studio. A domain
         * consists of an associated Amazon Elastic File System (EFS) volume, a list of
         * authorized users, and a variety of security, application, policy, and Amazon
         * Virtual Private Cloud (VPC) configurations. An Amazon Web Services account is
         * limited to one domain per region. Users within a domain can share notebook files
         * and other artifacts with each other.</p> <p> <b>EFS storage</b> </p> <p>When a
         * domain is created, an EFS volume is created for use by all of the users within
         * the domain. Each user receives a private home directory within the EFS volume
         * for notebooks, Git repositories, and data files.</p> <p>SageMaker uses the
         * Amazon Web Services Key Management Service (Amazon Web Services KMS) to encrypt
         * the EFS volume attached to the domain with an Amazon Web Services managed key by
         * default. For more control, you can specify a customer managed key. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/encryption-at-rest.html">Protect
         * Data at Rest Using Encryption</a>.</p> <p> <b>VPC configuration</b> </p> <p>All
         * SageMaker Studio traffic between the domain and the EFS volume is through the
         * specified VPC and subnets. For other Studio traffic, you can specify the
         * <code>AppNetworkAccessType</code> parameter. <code>AppNetworkAccessType</code>
         * corresponds to the network access type that you choose when you onboard to
         * Studio. The following options are available:</p> <ul> <li> <p>
         * <code>PublicInternetOnly</code> - Non-EFS traffic goes through a VPC managed by
         * Amazon SageMaker, which allows internet access. This is the default value.</p>
         * </li> <li> <p> <code>VpcOnly</code> - All Studio traffic is through the
         * specified VPC and subnets. Internet access is disabled by default. To allow
         * internet access, you must specify a NAT gateway.</p> <p>When internet access is
         * disabled, you won't be able to run a Studio notebook or to train or host models
         * unless your VPC has an interface endpoint to the SageMaker API and runtime or a
         * NAT gateway and your security groups allow outbound connections.</p> </li> </ul>
         *  <p>NFS traffic over TCP on port 2049 needs to be allowed in both
         * inbound and outbound rules in order to launch a SageMaker Studio app
         * successfully.</p>  <p>For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-notebooks-and-internet-access.html">Connect
         * SageMaker Studio Notebooks to Resources in a VPC</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateDomain">AWS
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
         * <p>Creates an edge deployment plan, consisting of multiple stages. Each stage
         * may have a different deployment configuration and devices.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEdgeDeploymentPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEdgeDeploymentPlanOutcome CreateEdgeDeploymentPlan(const Model::CreateEdgeDeploymentPlanRequest& request) const;

        /**
         * A Callable wrapper for CreateEdgeDeploymentPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEdgeDeploymentPlanOutcomeCallable CreateEdgeDeploymentPlanCallable(const Model::CreateEdgeDeploymentPlanRequest& request) const;

        /**
         * An Async wrapper for CreateEdgeDeploymentPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEdgeDeploymentPlanAsync(const Model::CreateEdgeDeploymentPlanRequest& request, const CreateEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new stage in an existing edge deployment plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEdgeDeploymentStage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEdgeDeploymentStageOutcome CreateEdgeDeploymentStage(const Model::CreateEdgeDeploymentStageRequest& request) const;

        /**
         * A Callable wrapper for CreateEdgeDeploymentStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEdgeDeploymentStageOutcomeCallable CreateEdgeDeploymentStageCallable(const Model::CreateEdgeDeploymentStageRequest& request) const;

        /**
         * An Async wrapper for CreateEdgeDeploymentStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEdgeDeploymentStageAsync(const Model::CreateEdgeDeploymentStageRequest& request, const CreateEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a SageMaker Edge Manager model packaging job. Edge Manager will use
         * the model artifacts from the Amazon Simple Storage Service bucket that you
         * specify. After the model has been packaged, Amazon SageMaker saves the resulting
         * artifacts to an S3 bucket that you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEdgePackagingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEdgePackagingJobOutcome CreateEdgePackagingJob(const Model::CreateEdgePackagingJobRequest& request) const;

        /**
         * A Callable wrapper for CreateEdgePackagingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEdgePackagingJobOutcomeCallable CreateEdgePackagingJobCallable(const Model::CreateEdgePackagingJobRequest& request) const;

        /**
         * An Async wrapper for CreateEdgePackagingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEdgePackagingJobAsync(const Model::CreateEdgePackagingJobRequest& request, const CreateEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint using the endpoint configuration specified in the
         * request. SageMaker uses the endpoint to provision resources and deploy models.
         * You create the endpoint configuration with the <a>CreateEndpointConfig</a> API.
         * </p> <p> Use this API to deploy models using SageMaker hosting services. </p>
         * <p>For an example that calls this method when deploying a model to SageMaker
         * hosting services, see the <a
         * href="https://github.com/aws/amazon-sagemaker-examples/blob/master/sagemaker-fundamentals/create-endpoint/create_endpoint.ipynb">Create
         * Endpoint example notebook.</a> </p>  <p> You must not delete an
         * <code>EndpointConfig</code> that is in use by an endpoint that is live or while
         * the <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are
         * being performed on the endpoint. To update an endpoint, you must create a new
         * <code>EndpointConfig</code>.</p>  <p>The endpoint name must be unique
         * within an Amazon Web Services Region in your Amazon Web Services account. </p>
         * <p>When it receives the request, SageMaker creates the endpoint, launches the
         * resources (ML compute instances), and deploys the model(s) on them. </p> 
         * <p>When you call <a>CreateEndpoint</a>, a load call is made to DynamoDB to
         * verify that your endpoint configuration exists. When you read data from a
         * DynamoDB table supporting <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadConsistency.html">
         * <code>Eventually Consistent Reads</code> </a>, the response might not reflect
         * the results of a recently completed write operation. The response might include
         * some stale data. If the dependent entities are not yet in DynamoDB, this causes
         * a validation error. If you repeat your read request after a short time, the
         * response should return the latest data. So retry logic is recommended to handle
         * these possible issues. We also recommend that customers call
         * <a>DescribeEndpointConfig</a> before calling <a>CreateEndpoint</a> to minimize
         * the potential impact of a DynamoDB eventually consistent read.</p> 
         * <p>When SageMaker receives the request, it sets the endpoint status to
         * <code>Creating</code>. After it creates the endpoint, it sets the status to
         * <code>InService</code>. SageMaker can then process incoming requests for
         * inferences. To check the status of an endpoint, use the <a>DescribeEndpoint</a>
         * API.</p> <p>If any of the models hosted at this endpoint get model data from an
         * Amazon S3 location, SageMaker uses Amazon Web Services Security Token Service to
         * download model artifacts from the S3 path you provided. Amazon Web Services STS
         * is activated in your IAM user account by default. If you previously deactivated
         * Amazon Web Services STS for a region, you need to reactivate Amazon Web Services
         * STS for that region. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and Deactivating Amazon Web Services STS in an Amazon Web Services Region</a> in
         * the <i>Amazon Web Services Identity and Access Management User Guide</i>.</p>
         *  <p> To add the IAM role policies for using this API operation, go to the
         * <a href="https://console.aws.amazon.com/iam/">IAM console</a>, and choose Roles
         * in the left navigation pane. Search the IAM role that you want to grant access
         * to use the <a>CreateEndpoint</a> and <a>CreateEndpointConfig</a> API operations,
         * add the following policies to the role. </p> <ul> <li> <p>Option 1: For a full
         * SageMaker access, search and attach the <code>AmazonSageMakerFullAccess</code>
         * policy.</p> </li> <li> <p>Option 2: For granting a limited access to an IAM
         * role, paste the following Action elements manually into the JSON file of the IAM
         * role: </p> <p> <code>"Action": ["sagemaker:CreateEndpoint",
         * "sagemaker:CreateEndpointConfig"]</code> </p> <p> <code>"Resource": [</code>
         * </p> <p>
         * <code>"arn:aws:sagemaker:region:account-id:endpoint/endpointName"</code> </p>
         * <p>
         * <code>"arn:aws:sagemaker:region:account-id:endpoint-config/endpointConfigName"</code>
         * </p> <p> <code>]</code> </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/api-permissions-reference.html">SageMaker
         * API Permissions: Actions, Permissions, and Resources Reference</a>.</p> </li>
         * </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointOutcome CreateEndpoint(const Model::CreateEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointOutcomeCallable CreateEndpointCallable(const Model::CreateEndpointRequest& request) const;

        /**
         * An Async wrapper for CreateEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEndpointAsync(const Model::CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint configuration that SageMaker hosting services uses to
         * deploy models. In the configuration, you identify one or more models, created
         * using the <code>CreateModel</code> API, to deploy and the resources that you
         * want SageMaker to provision. Then you call the <a>CreateEndpoint</a> API.</p>
         *  <p> Use this API if you want to use SageMaker hosting services to deploy
         * models into production. </p>  <p>In the request, you define a
         * <code>ProductionVariant</code>, for each model that you want to deploy. Each
         * <code>ProductionVariant</code> parameter also describes the resources that you
         * want SageMaker to provision. This includes the number and type of ML compute
         * instances to deploy. </p> <p>If you are hosting multiple models, you also assign
         * a <code>VariantWeight</code> to specify how much traffic you want to allocate to
         * each model. For example, suppose that you want to host two models, A and B, and
         * you assign traffic weight 2 for model A and 1 for model B. SageMaker distributes
         * two-thirds of the traffic to Model A, and one-third to model B. </p> 
         * <p>When you call <a>CreateEndpoint</a>, a load call is made to DynamoDB to
         * verify that your endpoint configuration exists. When you read data from a
         * DynamoDB table supporting <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadConsistency.html">
         * <code>Eventually Consistent Reads</code> </a>, the response might not reflect
         * the results of a recently completed write operation. The response might include
         * some stale data. If the dependent entities are not yet in DynamoDB, this causes
         * a validation error. If you repeat your read request after a short time, the
         * response should return the latest data. So retry logic is recommended to handle
         * these possible issues. We also recommend that customers call
         * <a>DescribeEndpointConfig</a> before calling <a>CreateEndpoint</a> to minimize
         * the potential impact of a DynamoDB eventually consistent read.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpointConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointConfigOutcome CreateEndpointConfig(const Model::CreateEndpointConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateEndpointConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointConfigOutcomeCallable CreateEndpointConfigCallable(const Model::CreateEndpointConfigRequest& request) const;

        /**
         * An Async wrapper for CreateEndpointConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEndpointConfigAsync(const Model::CreateEndpointConfigRequest& request, const CreateEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a SageMaker <i>experiment</i>. An experiment is a collection of
         * <i>trials</i> that are observed, compared and evaluated as a group. A trial is a
         * set of steps, called <i>trial components</i>, that produce a machine learning
         * model.</p>  <p>In the Studio UI, trials are referred to as <i>run
         * groups</i> and trial components are referred to as <i>runs</i>.</p> 
         * <p>The goal of an experiment is to determine the components that produce the
         * best model. Multiple trials are performed, each one isolating and measuring the
         * impact of a change to one or more inputs, while keeping the remaining inputs
         * constant.</p> <p>When you use SageMaker Studio or the SageMaker Python SDK, all
         * experiments, trials, and trial components are automatically tracked, logged, and
         * indexed. When you use the Amazon Web Services SDK for Python (Boto), you must
         * use the logging APIs provided by the SDK.</p> <p>You can add tags to
         * experiments, trials, trial components and then use the <a>Search</a> API to
         * search for the tags.</p> <p>To add a description to an experiment, specify the
         * optional <code>Description</code> parameter. To add a description later, or to
         * change the description, call the <a>UpdateExperiment</a> API.</p> <p>To get a
         * list of all your experiments, call the <a>ListExperiments</a> API. To view an
         * experiment's properties, call the <a>DescribeExperiment</a> API. To get a list
         * of all the trials associated with an experiment, call the <a>ListTrials</a> API.
         * To create a trial call the <a>CreateTrial</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExperimentOutcome CreateExperiment(const Model::CreateExperimentRequest& request) const;

        /**
         * A Callable wrapper for CreateExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExperimentOutcomeCallable CreateExperimentCallable(const Model::CreateExperimentRequest& request) const;

        /**
         * An Async wrapper for CreateExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExperimentAsync(const Model::CreateExperimentRequest& request, const CreateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new <code>FeatureGroup</code>. A <code>FeatureGroup</code> is a
         * group of <code>Features</code> defined in the <code>FeatureStore</code> to
         * describe a <code>Record</code>. </p> <p>The <code>FeatureGroup</code> defines
         * the schema and features contained in the FeatureGroup. A
         * <code>FeatureGroup</code> definition is composed of a list of
         * <code>Features</code>, a <code>RecordIdentifierFeatureName</code>, an
         * <code>EventTimeFeatureName</code> and configurations for its
         * <code>OnlineStore</code> and <code>OfflineStore</code>. Check <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">Amazon
         * Web Services service quotas</a> to see the <code>FeatureGroup</code>s quota for
         * your Amazon Web Services account.</p>  <p>You must include at least
         * one of <code>OnlineStoreConfig</code> and <code>OfflineStoreConfig</code> to
         * create a <code>FeatureGroup</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateFeatureGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFeatureGroupOutcome CreateFeatureGroup(const Model::CreateFeatureGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateFeatureGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFeatureGroupOutcomeCallable CreateFeatureGroupCallable(const Model::CreateFeatureGroupRequest& request) const;

        /**
         * An Async wrapper for CreateFeatureGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFeatureGroupAsync(const Model::CreateFeatureGroupRequest& request, const CreateFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a flow definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateFlowDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFlowDefinitionOutcome CreateFlowDefinition(const Model::CreateFlowDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateFlowDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFlowDefinitionOutcomeCallable CreateFlowDefinitionCallable(const Model::CreateFlowDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateFlowDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFlowDefinitionAsync(const Model::CreateFlowDefinitionRequest& request, const CreateFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateHub">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHubOutcome CreateHub(const Model::CreateHubRequest& request) const;

        /**
         * A Callable wrapper for CreateHub that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHubOutcomeCallable CreateHubCallable(const Model::CreateHubRequest& request) const;

        /**
         * An Async wrapper for CreateHub that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHubAsync(const Model::CreateHubRequest& request, const CreateHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines the settings you will use for the human review workflow user
         * interface. Reviewers will see a three-panel interface with an instruction area,
         * the item to review, and an input area.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateHumanTaskUi">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHumanTaskUiOutcome CreateHumanTaskUi(const Model::CreateHumanTaskUiRequest& request) const;

        /**
         * A Callable wrapper for CreateHumanTaskUi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHumanTaskUiOutcomeCallable CreateHumanTaskUiCallable(const Model::CreateHumanTaskUiRequest& request) const;

        /**
         * An Async wrapper for CreateHumanTaskUi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHumanTaskUiAsync(const Model::CreateHumanTaskUiRequest& request, const CreateHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a hyperparameter tuning job. A hyperparameter tuning job finds the
         * best version of a model by running many training jobs on your dataset using the
         * algorithm you choose and values for hyperparameters within ranges that you
         * specify. It then chooses the hyperparameter values that result in a model that
         * performs the best, as measured by an objective metric that you choose.</p> <p>A
         * hyperparameter tuning job automatically creates Amazon SageMaker experiments,
         * trials, and trial components for each training job that it runs. You can view
         * these entities in Amazon SageMaker Studio. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/experiments-view-compare.html#experiments-view">View
         * Experiments, Trials, and Trial Components</a>.</p>  <p>Do not include
         * any security-sensitive information including account access IDs, secrets or
         * tokens in any hyperparameter field. If the use of security-sensitive credentials
         * are detected, SageMaker will reject your training job request and return an
         * exception error.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateHyperParameterTuningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHyperParameterTuningJobOutcome CreateHyperParameterTuningJob(const Model::CreateHyperParameterTuningJobRequest& request) const;

        /**
         * A Callable wrapper for CreateHyperParameterTuningJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHyperParameterTuningJobOutcomeCallable CreateHyperParameterTuningJobCallable(const Model::CreateHyperParameterTuningJobRequest& request) const;

        /**
         * An Async wrapper for CreateHyperParameterTuningJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHyperParameterTuningJobAsync(const Model::CreateHyperParameterTuningJobRequest& request, const CreateHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a custom SageMaker image. A SageMaker image is a set of image
         * versions. Each image version represents a container image stored in Amazon
         * Elastic Container Registry (ECR). For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-byoi.html">Bring
         * your own SageMaker image</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageOutcome CreateImage(const Model::CreateImageRequest& request) const;

        /**
         * A Callable wrapper for CreateImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImageOutcomeCallable CreateImageCallable(const Model::CreateImageRequest& request) const;

        /**
         * An Async wrapper for CreateImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImageAsync(const Model::CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a version of the SageMaker image specified by <code>ImageName</code>.
         * The version represents the Amazon Elastic Container Registry (ECR) container
         * image specified by <code>BaseImage</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateImageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageVersionOutcome CreateImageVersion(const Model::CreateImageVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateImageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImageVersionOutcomeCallable CreateImageVersionCallable(const Model::CreateImageVersionRequest& request) const;

        /**
         * An Async wrapper for CreateImageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImageVersionAsync(const Model::CreateImageVersionRequest& request, const CreateImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates an inference experiment using the configurations specified in the
         * request. </p> <p> Use this API to setup and schedule an experiment to compare
         * model variants on a Amazon SageMaker inference endpoint. For more information
         * about inference experiments, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/shadow-tests.html">Shadow
         * tests</a>. </p> <p> Amazon SageMaker begins your experiment at the scheduled
         * time and routes traffic to your endpoint's model variants based on your
         * specified configuration. </p> <p> While the experiment is in progress or after
         * it has concluded, you can view metrics that compare your model variants. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/shadow-tests-view-monitor-edit.html">View,
         * monitor, and edit shadow tests</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateInferenceExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInferenceExperimentOutcome CreateInferenceExperiment(const Model::CreateInferenceExperimentRequest& request) const;

        /**
         * A Callable wrapper for CreateInferenceExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInferenceExperimentOutcomeCallable CreateInferenceExperimentCallable(const Model::CreateInferenceExperimentRequest& request) const;

        /**
         * An Async wrapper for CreateInferenceExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInferenceExperimentAsync(const Model::CreateInferenceExperimentRequest& request, const CreateInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a recommendation job. You can create either an instance recommendation
         * or load test job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateInferenceRecommendationsJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInferenceRecommendationsJobOutcome CreateInferenceRecommendationsJob(const Model::CreateInferenceRecommendationsJobRequest& request) const;

        /**
         * A Callable wrapper for CreateInferenceRecommendationsJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInferenceRecommendationsJobOutcomeCallable CreateInferenceRecommendationsJobCallable(const Model::CreateInferenceRecommendationsJobRequest& request) const;

        /**
         * An Async wrapper for CreateInferenceRecommendationsJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInferenceRecommendationsJobAsync(const Model::CreateInferenceRecommendationsJobRequest& request, const CreateInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a job that uses workers to label the data objects in your input
         * dataset. You can use the labeled data to train machine learning models. </p>
         * <p>You can select your workforce from one of three providers:</p> <ul> <li> <p>A
         * private workforce that you create. It can include employees, contractors, and
         * outside experts. Use a private workforce when want the data to stay within your
         * organization or when a specific set of skills is required.</p> </li> <li> <p>One
         * or more vendors that you select from the Amazon Web Services Marketplace.
         * Vendors provide expertise in specific areas. </p> </li> <li> <p>The Amazon
         * Mechanical Turk workforce. This is the largest workforce, but it should only be
         * used for public data or data that has been stripped of any personally
         * identifiable information.</p> </li> </ul> <p>You can also use <i>automated data
         * labeling</i> to reduce the number of data objects that need to be labeled by a
         * human. Automated data labeling uses <i>active learning</i> to determine if a
         * data object can be labeled by machine or if it needs to be sent to a human
         * worker. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-automated-labeling.html">Using
         * Automated Data Labeling</a>.</p> <p>The data objects to be labeled are contained
         * in an Amazon S3 bucket. You create a <i>manifest file</i> that describes the
         * location of each object. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-data.html">Using Input
         * and Output Data</a>.</p> <p>The output can be used as the manifest file for
         * another labeling job or as training data for your machine learning models.</p>
         * <p>You can use this operation to create a static labeling job or a streaming
         * labeling job. A static labeling job stops if all data objects in the input
         * manifest file identified in <code>ManifestS3Uri</code> have been labeled. A
         * streaming labeling job runs perpetually until it is manually stopped, or remains
         * idle for 10 days. You can send new data objects to an active
         * (<code>InProgress</code>) streaming labeling job in real time. To learn how to
         * create a static labeling job, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-create-labeling-job-api.html">Create
         * a Labeling Job (API) </a> in the Amazon SageMaker Developer Guide. To learn how
         * to create a streaming labeling job, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-streaming-create-job.html">Create
         * a Streaming Labeling Job</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateLabelingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLabelingJobOutcome CreateLabelingJob(const Model::CreateLabelingJobRequest& request) const;

        /**
         * A Callable wrapper for CreateLabelingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLabelingJobOutcomeCallable CreateLabelingJobCallable(const Model::CreateLabelingJobRequest& request) const;

        /**
         * An Async wrapper for CreateLabelingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLabelingJobAsync(const Model::CreateLabelingJobRequest& request, const CreateLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a model in SageMaker. In the request, you name the model and describe
         * a primary container. For the primary container, you specify the Docker image
         * that contains inference code, artifacts (from prior training), and a custom
         * environment map that the inference code uses when you deploy the model for
         * predictions.</p> <p>Use this API to create a model if you want to use SageMaker
         * hosting services or run a batch transform job.</p> <p>To host your model, you
         * create an endpoint configuration with the <code>CreateEndpointConfig</code> API,
         * and then create an endpoint with the <code>CreateEndpoint</code> API. SageMaker
         * then deploys all of the containers that you defined for the model in the hosting
         * environment. </p> <p>For an example that calls this method when deploying a
         * model to SageMaker hosting services, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/realtime-endpoints-deployment.html#realtime-endpoints-deployment-create-model">Create
         * a Model (Amazon Web Services SDK for Python (Boto 3)).</a> </p> <p>To run a
         * batch transform using your model, you start a job with the
         * <code>CreateTransformJob</code> API. SageMaker uses your model and your dataset
         * to get inferences which are then saved to a specified S3 location.</p> <p>In the
         * request, you also provide an IAM role that SageMaker can assume to access model
         * artifacts and docker image for deployment on ML compute hosting instances or for
         * batch transform jobs. In addition, you also use the IAM role to manage
         * permissions the inference code needs. For example, if the inference code access
         * any other Amazon Web Services resources, you grant necessary permissions via
         * this role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelOutcome CreateModel(const Model::CreateModelRequest& request) const;

        /**
         * A Callable wrapper for CreateModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request) const;

        /**
         * An Async wrapper for CreateModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelAsync(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the definition for a model bias job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelBiasJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelBiasJobDefinitionOutcome CreateModelBiasJobDefinition(const Model::CreateModelBiasJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateModelBiasJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelBiasJobDefinitionOutcomeCallable CreateModelBiasJobDefinitionCallable(const Model::CreateModelBiasJobDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateModelBiasJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelBiasJobDefinitionAsync(const Model::CreateModelBiasJobDefinitionRequest& request, const CreateModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon SageMaker Model Card.</p> <p>For information about how to
         * use model cards, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-cards.html">Amazon
         * SageMaker Model Card</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelCard">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelCardOutcome CreateModelCard(const Model::CreateModelCardRequest& request) const;

        /**
         * A Callable wrapper for CreateModelCard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelCardOutcomeCallable CreateModelCardCallable(const Model::CreateModelCardRequest& request) const;

        /**
         * An Async wrapper for CreateModelCard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelCardAsync(const Model::CreateModelCardRequest& request, const CreateModelCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon SageMaker Model Card export job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelCardExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelCardExportJobOutcome CreateModelCardExportJob(const Model::CreateModelCardExportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateModelCardExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelCardExportJobOutcomeCallable CreateModelCardExportJobCallable(const Model::CreateModelCardExportJobRequest& request) const;

        /**
         * An Async wrapper for CreateModelCardExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelCardExportJobAsync(const Model::CreateModelCardExportJobRequest& request, const CreateModelCardExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the definition for a model explainability job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelExplainabilityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelExplainabilityJobDefinitionOutcome CreateModelExplainabilityJobDefinition(const Model::CreateModelExplainabilityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateModelExplainabilityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelExplainabilityJobDefinitionOutcomeCallable CreateModelExplainabilityJobDefinitionCallable(const Model::CreateModelExplainabilityJobDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateModelExplainabilityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelExplainabilityJobDefinitionAsync(const Model::CreateModelExplainabilityJobDefinitionRequest& request, const CreateModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a model package that you can use to create SageMaker models or list
         * on Amazon Web Services Marketplace, or a versioned model that is part of a model
         * group. Buyers can subscribe to model packages listed on Amazon Web Services
         * Marketplace to create models in SageMaker.</p> <p>To create a model package by
         * specifying a Docker container that contains your inference code and the Amazon
         * S3 location of your model artifacts, provide values for
         * <code>InferenceSpecification</code>. To create a model from an algorithm
         * resource that you created or subscribed to in Amazon Web Services Marketplace,
         * provide a value for <code>SourceAlgorithmSpecification</code>.</p> 
         * <p>There are two types of model packages:</p> <ul> <li> <p>Versioned - a model
         * that is part of a model group in the model registry.</p> </li> <li>
         * <p>Unversioned - a model package that is not part of a model group.</p> </li>
         * </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelPackageOutcome CreateModelPackage(const Model::CreateModelPackageRequest& request) const;

        /**
         * A Callable wrapper for CreateModelPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelPackageOutcomeCallable CreateModelPackageCallable(const Model::CreateModelPackageRequest& request) const;

        /**
         * An Async wrapper for CreateModelPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelPackageAsync(const Model::CreateModelPackageRequest& request, const CreateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a model group. A model group contains a group of model
         * versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelPackageGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelPackageGroupOutcome CreateModelPackageGroup(const Model::CreateModelPackageGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateModelPackageGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelPackageGroupOutcomeCallable CreateModelPackageGroupCallable(const Model::CreateModelPackageGroupRequest& request) const;

        /**
         * An Async wrapper for CreateModelPackageGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelPackageGroupAsync(const Model::CreateModelPackageGroupRequest& request, const CreateModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a definition for a job that monitors model quality and drift. For
         * information about model monitor, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
         * SageMaker Model Monitor</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelQualityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelQualityJobDefinitionOutcome CreateModelQualityJobDefinition(const Model::CreateModelQualityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateModelQualityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelQualityJobDefinitionOutcomeCallable CreateModelQualityJobDefinitionCallable(const Model::CreateModelQualityJobDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateModelQualityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelQualityJobDefinitionAsync(const Model::CreateModelQualityJobDefinitionRequest& request, const CreateModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a schedule that regularly starts Amazon SageMaker Processing Jobs to
         * monitor the data captured for an Amazon SageMaker Endoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMonitoringScheduleOutcome CreateMonitoringSchedule(const Model::CreateMonitoringScheduleRequest& request) const;

        /**
         * A Callable wrapper for CreateMonitoringSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMonitoringScheduleOutcomeCallable CreateMonitoringScheduleCallable(const Model::CreateMonitoringScheduleRequest& request) const;

        /**
         * An Async wrapper for CreateMonitoringSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMonitoringScheduleAsync(const Model::CreateMonitoringScheduleRequest& request, const CreateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an SageMaker notebook instance. A notebook instance is a machine
         * learning (ML) compute instance running on a Jupyter notebook. </p> <p>In a
         * <code>CreateNotebookInstance</code> request, specify the type of ML compute
         * instance that you want to run. SageMaker launches the instance, installs common
         * libraries that you can use to explore datasets for model training, and attaches
         * an ML storage volume to the notebook instance. </p> <p>SageMaker also provides a
         * set of example notebooks. Each notebook demonstrates how to use SageMaker with a
         * specific algorithm or with a machine learning framework. </p> <p>After receiving
         * the request, SageMaker does the following:</p> <ol> <li> <p>Creates a network
         * interface in the SageMaker VPC.</p> </li> <li> <p>(Option) If you specified
         * <code>SubnetId</code>, SageMaker creates a network interface in your own VPC,
         * which is inferred from the subnet ID that you provide in the input. When
         * creating this network interface, SageMaker attaches the security group that you
         * specified in the request to the network interface that it creates in your
         * VPC.</p> </li> <li> <p>Launches an EC2 instance of the type specified in the
         * request in the SageMaker VPC. If you specified <code>SubnetId</code> of your
         * VPC, SageMaker specifies both network interfaces when launching this instance.
         * This enables inbound traffic from your own VPC to the notebook instance,
         * assuming that the security groups allow it.</p> </li> </ol> <p>After creating
         * the notebook instance, SageMaker returns its Amazon Resource Name (ARN). You
         * can't change the name of a notebook instance after you create it.</p> <p>After
         * SageMaker creates the notebook instance, you can connect to the Jupyter server
         * and work in Jupyter notebooks. For example, you can write code to explore a
         * dataset that you can use for model training, train a model, host models by
         * creating SageMaker endpoints, and validate hosted models. </p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotebookInstanceOutcome CreateNotebookInstance(const Model::CreateNotebookInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateNotebookInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNotebookInstanceOutcomeCallable CreateNotebookInstanceCallable(const Model::CreateNotebookInstanceRequest& request) const;

        /**
         * An Async wrapper for CreateNotebookInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNotebookInstanceAsync(const Model::CreateNotebookInstanceRequest& request, const CreateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a lifecycle configuration that you can associate with a notebook
         * instance. A <i>lifecycle configuration</i> is a collection of shell scripts that
         * run when you create or start a notebook instance.</p> <p>Each lifecycle
         * configuration script has a limit of 16384 characters.</p> <p>The value of the
         * <code>$PATH</code> environment variable that is available to both scripts is
         * <code>/sbin:bin:/usr/sbin:/usr/bin</code>.</p> <p>View CloudWatch Logs for
         * notebook instance lifecycle configurations in log group
         * <code>/aws/sagemaker/NotebookInstances</code> in log stream
         * <code>[notebook-instance-name]/[LifecycleConfigHook]</code>.</p> <p>Lifecycle
         * configuration scripts cannot run for longer than 5 minutes. If a script runs for
         * longer than 5 minutes, it fails and the notebook instance is not created or
         * started.</p> <p>For information about notebook instance lifestyle
         * configurations, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
         * 2.1: (Optional) Customize a Notebook Instance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotebookInstanceLifecycleConfigOutcome CreateNotebookInstanceLifecycleConfig(const Model::CreateNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateNotebookInstanceLifecycleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNotebookInstanceLifecycleConfigOutcomeCallable CreateNotebookInstanceLifecycleConfigCallable(const Model::CreateNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * An Async wrapper for CreateNotebookInstanceLifecycleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNotebookInstanceLifecycleConfigAsync(const Model::CreateNotebookInstanceLifecycleConfigRequest& request, const CreateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a pipeline using a JSON pipeline definition.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePipelineOutcome CreatePipeline(const Model::CreatePipelineRequest& request) const;

        /**
         * A Callable wrapper for CreatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const Model::CreatePipelineRequest& request) const;

        /**
         * An Async wrapper for CreatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePipelineAsync(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a URL for a specified UserProfile in a Domain. When accessed in a web
         * browser, the user will be automatically signed in to Amazon SageMaker Studio,
         * and granted access to all of the Apps and files associated with the Domain's
         * Amazon Elastic File System (EFS) volume. This operation can only be called when
         * the authentication mode equals IAM. </p> <p>The IAM role or user passed to this
         * API defines the permissions to access the app. Once the presigned URL is
         * created, no additional permission is required to access this URL. IAM
         * authorization policies for this API are also enforced for every HTTP request and
         * WebSocket frame that attempts to connect to the app.</p> <p>You can restrict
         * access to this API and to the URL that it returns to a list of IP addresses,
         * Amazon VPCs or Amazon VPC Endpoints that you specify. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-interface-endpoint.html">Connect
         * to SageMaker Studio Through an Interface VPC Endpoint</a> .</p>  <p>The
         * URL that you get from a call to <code>CreatePresignedDomainUrl</code> has a
         * default timeout of 5 minutes. You can configure this value using
         * <code>ExpiresInSeconds</code>. If you try to use the URL after the timeout limit
         * expires, you are directed to the Amazon Web Services console sign-in page.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedDomainUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresignedDomainUrlOutcome CreatePresignedDomainUrl(const Model::CreatePresignedDomainUrlRequest& request) const;

        /**
         * A Callable wrapper for CreatePresignedDomainUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePresignedDomainUrlOutcomeCallable CreatePresignedDomainUrlCallable(const Model::CreatePresignedDomainUrlRequest& request) const;

        /**
         * An Async wrapper for CreatePresignedDomainUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePresignedDomainUrlAsync(const Model::CreatePresignedDomainUrlRequest& request, const CreatePresignedDomainUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a URL that you can use to connect to the Jupyter server from a
         * notebook instance. In the SageMaker console, when you choose <code>Open</code>
         * next to a notebook instance, SageMaker opens a new tab showing the Jupyter
         * server home page from the notebook instance. The console uses this API to get
         * the URL and show the page.</p> <p> The IAM role or user used to call this API
         * defines the permissions to access the notebook instance. Once the presigned URL
         * is created, no additional permission is required to access this URL. IAM
         * authorization policies for this API are also enforced for every HTTP request and
         * WebSocket frame that attempts to connect to the notebook instance.</p> <p>You
         * can restrict access to this API and to the URL that it returns to a list of IP
         * addresses that you specify. Use the <code>NotIpAddress</code> condition operator
         * and the <code>aws:SourceIP</code> condition context key to specify the list of
         * IP addresses that you want to have access to the notebook instance. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security_iam_id-based-policy-examples.html#nbi-ip-filter">Limit
         * Access to a Notebook Instance by IP Address</a>.</p>  <p>The URL that you
         * get from a call to <a>CreatePresignedNotebookInstanceUrl</a> is valid only for 5
         * minutes. If you try to use the URL after the 5-minute limit expires, you are
         * directed to the Amazon Web Services console sign-in page.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedNotebookInstanceUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresignedNotebookInstanceUrlOutcome CreatePresignedNotebookInstanceUrl(const Model::CreatePresignedNotebookInstanceUrlRequest& request) const;

        /**
         * A Callable wrapper for CreatePresignedNotebookInstanceUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePresignedNotebookInstanceUrlOutcomeCallable CreatePresignedNotebookInstanceUrlCallable(const Model::CreatePresignedNotebookInstanceUrlRequest& request) const;

        /**
         * An Async wrapper for CreatePresignedNotebookInstanceUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePresignedNotebookInstanceUrlAsync(const Model::CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateProcessingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProcessingJobOutcome CreateProcessingJob(const Model::CreateProcessingJobRequest& request) const;

        /**
         * A Callable wrapper for CreateProcessingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProcessingJobOutcomeCallable CreateProcessingJobCallable(const Model::CreateProcessingJobRequest& request) const;

        /**
         * An Async wrapper for CreateProcessingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProcessingJobAsync(const Model::CreateProcessingJobRequest& request, const CreateProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a machine learning (ML) project that can contain one or more
         * templates that set up an ML pipeline from training to deploying an approved
         * model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a space used for real time collaboration in a Domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSpaceOutcome CreateSpace(const Model::CreateSpaceRequest& request) const;

        /**
         * A Callable wrapper for CreateSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSpaceOutcomeCallable CreateSpaceCallable(const Model::CreateSpaceRequest& request) const;

        /**
         * An Async wrapper for CreateSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSpaceAsync(const Model::CreateSpaceRequest& request, const CreateSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Studio Lifecycle Configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateStudioLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioLifecycleConfigOutcome CreateStudioLifecycleConfig(const Model::CreateStudioLifecycleConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateStudioLifecycleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStudioLifecycleConfigOutcomeCallable CreateStudioLifecycleConfigCallable(const Model::CreateStudioLifecycleConfigRequest& request) const;

        /**
         * An Async wrapper for CreateStudioLifecycleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStudioLifecycleConfigAsync(const Model::CreateStudioLifecycleConfigRequest& request, const CreateStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a model training job. After training completes, SageMaker saves the
         * resulting model artifacts to an Amazon S3 location that you specify. </p> <p>If
         * you choose to host your model using SageMaker hosting services, you can use the
         * resulting model artifacts as part of the model. You can also use the artifacts
         * in a machine learning service other than SageMaker, provided that you know how
         * to use them for inference. </p> <p>In the request body, you provide the
         * following: </p> <ul> <li> <p> <code>AlgorithmSpecification</code> - Identifies
         * the training algorithm to use. </p> </li> <li> <p> <code>HyperParameters</code>
         * - Specify these algorithm-specific parameters to enable the estimation of model
         * parameters during training. Hyperparameters can be tuned to optimize this
         * learning process. For a list of hyperparameters for each training algorithm
         * provided by SageMaker, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
         * </p>  <p>Do not include any security-sensitive information including
         * account access IDs, secrets or tokens in any hyperparameter field. If the use of
         * security-sensitive credentials are detected, SageMaker will reject your training
         * job request and return an exception error.</p>  </li> <li> <p>
         * <code>InputDataConfig</code> - Describes the input required by the training job
         * and the Amazon S3, EFS, or FSx location where it is stored.</p> </li> <li> <p>
         * <code>OutputDataConfig</code> - Identifies the Amazon S3 bucket where you want
         * SageMaker to save the results of model training. </p> </li> <li> <p>
         * <code>ResourceConfig</code> - Identifies the resources, ML compute instances,
         * and ML storage volumes to deploy for model training. In distributed training,
         * you specify more than one instance. </p> </li> <li> <p>
         * <code>EnableManagedSpotTraining</code> - Optimize the cost of training machine
         * learning models by up to 80% by using Amazon EC2 Spot instances. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-managed-spot-training.html">Managed
         * Spot Training</a>. </p> </li> <li> <p> <code>RoleArn</code> - The Amazon
         * Resource Name (ARN) that SageMaker assumes to perform tasks on your behalf
         * during model training. You must grant this role the necessary permissions so
         * that SageMaker can successfully complete model training. </p> </li> <li> <p>
         * <code>StoppingCondition</code> - To help cap training costs, use
         * <code>MaxRuntimeInSeconds</code> to set a time limit for training. Use
         * <code>MaxWaitTimeInSeconds</code> to specify how long a managed spot training
         * job has to complete. </p> </li> <li> <p> <code>Environment</code> - The
         * environment variables to set in the Docker container.</p> </li> <li> <p>
         * <code>RetryStrategy</code> - The number of times to retry the job when the job
         * fails due to an <code>InternalServerError</code>.</p> </li> </ul> <p> For more
         * information about SageMaker, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrainingJobOutcome CreateTrainingJob(const Model::CreateTrainingJobRequest& request) const;

        /**
         * A Callable wrapper for CreateTrainingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrainingJobOutcomeCallable CreateTrainingJobCallable(const Model::CreateTrainingJobRequest& request) const;

        /**
         * An Async wrapper for CreateTrainingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrainingJobAsync(const Model::CreateTrainingJobRequest& request, const CreateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a transform job. A transform job uses a trained model to get
         * inferences on a dataset and saves these results to an Amazon S3 location that
         * you specify.</p> <p>To perform batch transformations, you create a transform job
         * and use the data that you have readily available.</p> <p>In the request body,
         * you provide the following:</p> <ul> <li> <p> <code>TransformJobName</code> -
         * Identifies the transform job. The name must be unique within an Amazon Web
         * Services Region in an Amazon Web Services account.</p> </li> <li> <p>
         * <code>ModelName</code> - Identifies the model to use. <code>ModelName</code>
         * must be the name of an existing Amazon SageMaker model in the same Amazon Web
         * Services Region and Amazon Web Services account. For information on creating a
         * model, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateModel.html">CreateModel</a>.</p>
         * </li> <li> <p> <code>TransformInput</code> - Describes the dataset to be
         * transformed and the Amazon S3 location where it is stored.</p> </li> <li> <p>
         * <code>TransformOutput</code> - Identifies the Amazon S3 location where you want
         * Amazon SageMaker to save the results from the transform job.</p> </li> <li> <p>
         * <code>TransformResources</code> - Identifies the ML compute instances for the
         * transform job.</p> </li> </ul> <p>For more information about how batch
         * transformation works, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform.html">Batch
         * Transform</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTransformJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransformJobOutcome CreateTransformJob(const Model::CreateTransformJobRequest& request) const;

        /**
         * A Callable wrapper for CreateTransformJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransformJobOutcomeCallable CreateTransformJobCallable(const Model::CreateTransformJobRequest& request) const;

        /**
         * An Async wrapper for CreateTransformJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransformJobAsync(const Model::CreateTransformJobRequest& request, const CreateTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an SageMaker <i>trial</i>. A trial is a set of steps called <i>trial
         * components</i> that produce a machine learning model. A trial is part of a
         * single SageMaker <i>experiment</i>.</p> <p>When you use SageMaker Studio or the
         * SageMaker Python SDK, all experiments, trials, and trial components are
         * automatically tracked, logged, and indexed. When you use the Amazon Web Services
         * SDK for Python (Boto), you must use the logging APIs provided by the SDK.</p>
         * <p>You can add tags to a trial and then use the <a>Search</a> API to search for
         * the tags.</p> <p>To get a list of all your trials, call the <a>ListTrials</a>
         * API. To view a trial's properties, call the <a>DescribeTrial</a> API. To create
         * a trial component, call the <a>CreateTrialComponent</a> API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrial">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrialOutcome CreateTrial(const Model::CreateTrialRequest& request) const;

        /**
         * A Callable wrapper for CreateTrial that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrialOutcomeCallable CreateTrialCallable(const Model::CreateTrialRequest& request) const;

        /**
         * An Async wrapper for CreateTrial that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrialAsync(const Model::CreateTrialRequest& request, const CreateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <i>trial component</i>, which is a stage of a machine learning
         * <i>trial</i>. A trial is composed of one or more trial components. A trial
         * component can be used in multiple trials.</p> <p>Trial components include
         * pre-processing jobs, training jobs, and batch transform jobs.</p> <p>When you
         * use SageMaker Studio or the SageMaker Python SDK, all experiments, trials, and
         * trial components are automatically tracked, logged, and indexed. When you use
         * the Amazon Web Services SDK for Python (Boto), you must use the logging APIs
         * provided by the SDK.</p> <p>You can add tags to a trial component and then use
         * the <a>Search</a> API to search for the tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrialComponentOutcome CreateTrialComponent(const Model::CreateTrialComponentRequest& request) const;

        /**
         * A Callable wrapper for CreateTrialComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrialComponentOutcomeCallable CreateTrialComponentCallable(const Model::CreateTrialComponentRequest& request) const;

        /**
         * An Async wrapper for CreateTrialComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrialComponentAsync(const Model::CreateTrialComponentRequest& request, const CreateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a user profile. A user profile represents a single user within a
         * domain, and is the main way to reference a "person" for the purposes of sharing,
         * reporting, and other user-oriented features. This entity is created when a user
         * onboards to Amazon SageMaker Studio. If an administrator invites a person by
         * email or imports them from IAM Identity Center, a user profile is automatically
         * created. A user profile is the primary holder of settings for an individual user
         * and has a reference to the user's private Amazon Elastic File System (EFS) home
         * directory. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserProfileOutcome CreateUserProfile(const Model::CreateUserProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserProfileOutcomeCallable CreateUserProfileCallable(const Model::CreateUserProfileRequest& request) const;

        /**
         * An Async wrapper for CreateUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserProfileAsync(const Model::CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to create a workforce. This operation will return an error
         * if a workforce already exists in the Amazon Web Services Region that you
         * specify. You can only create one workforce in each Amazon Web Services Region
         * per Amazon Web Services account.</p> <p>If you want to create a new workforce in
         * an Amazon Web Services Region where a workforce already exists, use the API
         * operation to delete the existing workforce and then use
         * <code>CreateWorkforce</code> to create a new workforce.</p> <p>To create a
         * private workforce using Amazon Cognito, you must specify a Cognito user pool in
         * <code>CognitoConfig</code>. You can also create an Amazon Cognito workforce
         * using the Amazon SageMaker console. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">
         * Create a Private Workforce (Amazon Cognito)</a>.</p> <p>To create a private
         * workforce using your own OIDC Identity Provider (IdP), specify your IdP
         * configuration in <code>OidcConfig</code>. Your OIDC IdP must support
         * <i>groups</i> because groups are used by Ground Truth and Amazon A2I to create
         * work teams. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private-oidc.html">
         * Create a Private Workforce (OIDC IdP)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateWorkforce">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkforceOutcome CreateWorkforce(const Model::CreateWorkforceRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkforce that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkforceOutcomeCallable CreateWorkforceCallable(const Model::CreateWorkforceRequest& request) const;

        /**
         * An Async wrapper for CreateWorkforce that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkforceAsync(const Model::CreateWorkforceRequest& request, const CreateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new work team for labeling your data. A work team is defined by one
         * or more Amazon Cognito user pools. You must first create the user pools before
         * you can create a work team.</p> <p>You cannot create more than 25 work teams in
         * an account and region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkteamOutcome CreateWorkteam(const Model::CreateWorkteamRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkteam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkteamOutcomeCallable CreateWorkteamCallable(const Model::CreateWorkteamRequest& request) const;

        /**
         * An Async wrapper for CreateWorkteam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkteamAsync(const Model::CreateWorkteamRequest& request, const CreateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteActionOutcome DeleteAction(const Model::DeleteActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteActionOutcomeCallable DeleteActionCallable(const Model::DeleteActionRequest& request) const;

        /**
         * An Async wrapper for DeleteAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteActionAsync(const Model::DeleteActionRequest& request, const DeleteActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified algorithm from your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlgorithmOutcome DeleteAlgorithm(const Model::DeleteAlgorithmRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlgorithm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAlgorithmOutcomeCallable DeleteAlgorithmCallable(const Model::DeleteAlgorithmRequest& request) const;

        /**
         * An Async wrapper for DeleteAlgorithm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAlgorithmAsync(const Model::DeleteAlgorithmRequest& request, const DeleteAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to stop and delete an app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * A Callable wrapper for DeleteApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request) const;

        /**
         * An Async wrapper for DeleteApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteAppImageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppImageConfigOutcome DeleteAppImageConfig(const Model::DeleteAppImageConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppImageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppImageConfigOutcomeCallable DeleteAppImageConfigCallable(const Model::DeleteAppImageConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteAppImageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppImageConfigAsync(const Model::DeleteAppImageConfigRequest& request, const DeleteAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an artifact. Either <code>ArtifactArn</code> or <code>Source</code>
         * must be specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteArtifactOutcome DeleteArtifact(const Model::DeleteArtifactRequest& request) const;

        /**
         * A Callable wrapper for DeleteArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteArtifactOutcomeCallable DeleteArtifactCallable(const Model::DeleteArtifactRequest& request) const;

        /**
         * An Async wrapper for DeleteArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteArtifactAsync(const Model::DeleteArtifactRequest& request, const DeleteArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssociationOutcome DeleteAssociation(const Model::DeleteAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssociationOutcomeCallable DeleteAssociationCallable(const Model::DeleteAssociationRequest& request) const;

        /**
         * An Async wrapper for DeleteAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssociationAsync(const Model::DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Git repository from your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteCodeRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCodeRepositoryOutcome DeleteCodeRepository(const Model::DeleteCodeRepositoryRequest& request) const;

        /**
         * A Callable wrapper for DeleteCodeRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCodeRepositoryOutcomeCallable DeleteCodeRepositoryCallable(const Model::DeleteCodeRepositoryRequest& request) const;

        /**
         * An Async wrapper for DeleteCodeRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCodeRepositoryAsync(const Model::DeleteCodeRepositoryRequest& request, const DeleteCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an context.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteContext">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContextOutcome DeleteContext(const Model::DeleteContextRequest& request) const;

        /**
         * A Callable wrapper for DeleteContext that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContextOutcomeCallable DeleteContextCallable(const Model::DeleteContextRequest& request) const;

        /**
         * An Async wrapper for DeleteContext that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContextAsync(const Model::DeleteContextRequest& request, const DeleteContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a data quality monitoring job definition.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteDataQualityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataQualityJobDefinitionOutcome DeleteDataQualityJobDefinition(const Model::DeleteDataQualityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataQualityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataQualityJobDefinitionOutcomeCallable DeleteDataQualityJobDefinitionCallable(const Model::DeleteDataQualityJobDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteDataQualityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataQualityJobDefinitionAsync(const Model::DeleteDataQualityJobDefinitionRequest& request, const DeleteDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteDeviceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceFleetOutcome DeleteDeviceFleet(const Model::DeleteDeviceFleetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeviceFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeviceFleetOutcomeCallable DeleteDeviceFleetCallable(const Model::DeleteDeviceFleetRequest& request) const;

        /**
         * An Async wrapper for DeleteDeviceFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeviceFleetAsync(const Model::DeleteDeviceFleetRequest& request, const DeleteDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to delete a domain. If you onboarded with IAM mode, you will need to
         * delete your domain to onboard again using IAM Identity Center. Use with caution.
         * All of the members of the domain will lose access to their EFS volume, including
         * data, notebooks, and other artifacts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request) const;

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an edge deployment plan if (and only if) all the stages in the plan
         * are inactive or there are no stages in the plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEdgeDeploymentPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEdgeDeploymentPlanOutcome DeleteEdgeDeploymentPlan(const Model::DeleteEdgeDeploymentPlanRequest& request) const;

        /**
         * A Callable wrapper for DeleteEdgeDeploymentPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEdgeDeploymentPlanOutcomeCallable DeleteEdgeDeploymentPlanCallable(const Model::DeleteEdgeDeploymentPlanRequest& request) const;

        /**
         * An Async wrapper for DeleteEdgeDeploymentPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEdgeDeploymentPlanAsync(const Model::DeleteEdgeDeploymentPlanRequest& request, const DeleteEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a stage in an edge deployment plan if (and only if) the stage is
         * inactive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEdgeDeploymentStage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEdgeDeploymentStageOutcome DeleteEdgeDeploymentStage(const Model::DeleteEdgeDeploymentStageRequest& request) const;

        /**
         * A Callable wrapper for DeleteEdgeDeploymentStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEdgeDeploymentStageOutcomeCallable DeleteEdgeDeploymentStageCallable(const Model::DeleteEdgeDeploymentStageRequest& request) const;

        /**
         * An Async wrapper for DeleteEdgeDeploymentStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEdgeDeploymentStageAsync(const Model::DeleteEdgeDeploymentStageRequest& request, const DeleteEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an endpoint. SageMaker frees up all of the resources that were
         * deployed when the endpoint was created. </p> <p>SageMaker retires any custom KMS
         * key grants associated with the endpoint, meaning you don't need to use the <a
         * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_RevokeGrant.html">RevokeGrant</a>
         * API call.</p> <p>When you delete your endpoint, SageMaker asynchronously deletes
         * associated endpoint resources such as KMS key grants. You might still see these
         * resources in your account for a few minutes after deleting your endpoint. Do not
         * delete or revoke the permissions for your <code> <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateModel.html#sagemaker-CreateModel-request-ExecutionRoleArn">ExecutionRoleArn</a>
         * </code>, otherwise SageMaker cannot delete these resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const Model::DeleteEndpointRequest& request) const;

        /**
         * An Async wrapper for DeleteEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointAsync(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an endpoint configuration. The <code>DeleteEndpointConfig</code> API
         * deletes only the specified configuration. It does not delete endpoints created
         * using the configuration. </p> <p>You must not delete an
         * <code>EndpointConfig</code> in use by an endpoint that is live or while the
         * <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are being
         * performed on the endpoint. If you delete the <code>EndpointConfig</code> of an
         * endpoint that is active or being created or updated you may lose visibility into
         * the instance type the endpoint is using. The endpoint must be deleted in order
         * to stop incurring charges.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpointConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointConfigOutcome DeleteEndpointConfig(const Model::DeleteEndpointConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteEndpointConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointConfigOutcomeCallable DeleteEndpointConfigCallable(const Model::DeleteEndpointConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteEndpointConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointConfigAsync(const Model::DeleteEndpointConfigRequest& request, const DeleteEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an SageMaker experiment. All trials associated with the experiment
         * must be deleted first. Use the <a>ListTrials</a> API to get a list of the trials
         * associated with the experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExperimentOutcome DeleteExperiment(const Model::DeleteExperimentRequest& request) const;

        /**
         * A Callable wrapper for DeleteExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteExperimentOutcomeCallable DeleteExperimentCallable(const Model::DeleteExperimentRequest& request) const;

        /**
         * An Async wrapper for DeleteExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteExperimentAsync(const Model::DeleteExperimentRequest& request, const DeleteExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete the <code>FeatureGroup</code> and any data that was written to the
         * <code>OnlineStore</code> of the <code>FeatureGroup</code>. Data cannot be
         * accessed from the <code>OnlineStore</code> immediately after
         * <code>DeleteFeatureGroup</code> is called. </p> <p>Data written into the
         * <code>OfflineStore</code> will not be deleted. The Amazon Web Services Glue
         * database and tables that are automatically created for your
         * <code>OfflineStore</code> are not deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteFeatureGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFeatureGroupOutcome DeleteFeatureGroup(const Model::DeleteFeatureGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteFeatureGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFeatureGroupOutcomeCallable DeleteFeatureGroupCallable(const Model::DeleteFeatureGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteFeatureGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFeatureGroupAsync(const Model::DeleteFeatureGroupRequest& request, const DeleteFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified flow definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteFlowDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFlowDefinitionOutcome DeleteFlowDefinition(const Model::DeleteFlowDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteFlowDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFlowDefinitionOutcomeCallable DeleteFlowDefinitionCallable(const Model::DeleteFlowDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteFlowDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFlowDefinitionAsync(const Model::DeleteFlowDefinitionRequest& request, const DeleteFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteHub">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHubOutcome DeleteHub(const Model::DeleteHubRequest& request) const;

        /**
         * A Callable wrapper for DeleteHub that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHubOutcomeCallable DeleteHubCallable(const Model::DeleteHubRequest& request) const;

        /**
         * An Async wrapper for DeleteHub that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHubAsync(const Model::DeleteHubRequest& request, const DeleteHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete the contents of a hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteHubContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHubContentOutcome DeleteHubContent(const Model::DeleteHubContentRequest& request) const;

        /**
         * A Callable wrapper for DeleteHubContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHubContentOutcomeCallable DeleteHubContentCallable(const Model::DeleteHubContentRequest& request) const;

        /**
         * An Async wrapper for DeleteHubContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHubContentAsync(const Model::DeleteHubContentRequest& request, const DeleteHubContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to delete a human task user interface (worker task
         * template).</p> <p> To see a list of human task user interfaces (work task
         * templates) in your account, use . When you delete a worker task template, it no
         * longer appears when you call <code>ListHumanTaskUis</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteHumanTaskUi">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHumanTaskUiOutcome DeleteHumanTaskUi(const Model::DeleteHumanTaskUiRequest& request) const;

        /**
         * A Callable wrapper for DeleteHumanTaskUi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHumanTaskUiOutcomeCallable DeleteHumanTaskUiCallable(const Model::DeleteHumanTaskUiRequest& request) const;

        /**
         * An Async wrapper for DeleteHumanTaskUi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHumanTaskUiAsync(const Model::DeleteHumanTaskUiRequest& request, const DeleteHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a SageMaker image and all versions of the image. The container images
         * aren't deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageOutcome DeleteImage(const Model::DeleteImageRequest& request) const;

        /**
         * A Callable wrapper for DeleteImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImageOutcomeCallable DeleteImageCallable(const Model::DeleteImageRequest& request) const;

        /**
         * An Async wrapper for DeleteImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a version of a SageMaker image. The container image the version
         * represents isn't deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteImageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageVersionOutcome DeleteImageVersion(const Model::DeleteImageVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteImageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImageVersionOutcomeCallable DeleteImageVersionCallable(const Model::DeleteImageVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteImageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImageVersionAsync(const Model::DeleteImageVersionRequest& request, const DeleteImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an inference experiment.</p>  <p> This operation does not
         * delete your endpoint, variants, or any underlying resources. This operation only
         * deletes the metadata of your experiment. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteInferenceExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInferenceExperimentOutcome DeleteInferenceExperiment(const Model::DeleteInferenceExperimentRequest& request) const;

        /**
         * A Callable wrapper for DeleteInferenceExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInferenceExperimentOutcomeCallable DeleteInferenceExperimentCallable(const Model::DeleteInferenceExperimentRequest& request) const;

        /**
         * An Async wrapper for DeleteInferenceExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInferenceExperimentAsync(const Model::DeleteInferenceExperimentRequest& request, const DeleteInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a model. The <code>DeleteModel</code> API deletes only the model
         * entry that was created in SageMaker when you called the <code>CreateModel</code>
         * API. It does not delete model artifacts, inference code, or the IAM role that
         * you specified when creating the model. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request) const;

        /**
         * An Async wrapper for DeleteModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon SageMaker model bias job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelBiasJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelBiasJobDefinitionOutcome DeleteModelBiasJobDefinition(const Model::DeleteModelBiasJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelBiasJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelBiasJobDefinitionOutcomeCallable DeleteModelBiasJobDefinitionCallable(const Model::DeleteModelBiasJobDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteModelBiasJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelBiasJobDefinitionAsync(const Model::DeleteModelBiasJobDefinitionRequest& request, const DeleteModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon SageMaker Model Card.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelCard">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelCardOutcome DeleteModelCard(const Model::DeleteModelCardRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelCard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelCardOutcomeCallable DeleteModelCardCallable(const Model::DeleteModelCardRequest& request) const;

        /**
         * An Async wrapper for DeleteModelCard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelCardAsync(const Model::DeleteModelCardRequest& request, const DeleteModelCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon SageMaker model explainability job
         * definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelExplainabilityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelExplainabilityJobDefinitionOutcome DeleteModelExplainabilityJobDefinition(const Model::DeleteModelExplainabilityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelExplainabilityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelExplainabilityJobDefinitionOutcomeCallable DeleteModelExplainabilityJobDefinitionCallable(const Model::DeleteModelExplainabilityJobDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteModelExplainabilityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelExplainabilityJobDefinitionAsync(const Model::DeleteModelExplainabilityJobDefinitionRequest& request, const DeleteModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a model package.</p> <p>A model package is used to create SageMaker
         * models or list on Amazon Web Services Marketplace. Buyers can subscribe to model
         * packages listed on Amazon Web Services Marketplace to create models in
         * SageMaker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelPackageOutcome DeleteModelPackage(const Model::DeleteModelPackageRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelPackageOutcomeCallable DeleteModelPackageCallable(const Model::DeleteModelPackageRequest& request) const;

        /**
         * An Async wrapper for DeleteModelPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelPackageAsync(const Model::DeleteModelPackageRequest& request, const DeleteModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified model group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelPackageGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelPackageGroupOutcome DeleteModelPackageGroup(const Model::DeleteModelPackageGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelPackageGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelPackageGroupOutcomeCallable DeleteModelPackageGroupCallable(const Model::DeleteModelPackageGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteModelPackageGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelPackageGroupAsync(const Model::DeleteModelPackageGroupRequest& request, const DeleteModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a model group resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelPackageGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelPackageGroupPolicyOutcome DeleteModelPackageGroupPolicy(const Model::DeleteModelPackageGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelPackageGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelPackageGroupPolicyOutcomeCallable DeleteModelPackageGroupPolicyCallable(const Model::DeleteModelPackageGroupPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteModelPackageGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelPackageGroupPolicyAsync(const Model::DeleteModelPackageGroupPolicyRequest& request, const DeleteModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the secified model quality monitoring job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelQualityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelQualityJobDefinitionOutcome DeleteModelQualityJobDefinition(const Model::DeleteModelQualityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteModelQualityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelQualityJobDefinitionOutcomeCallable DeleteModelQualityJobDefinitionCallable(const Model::DeleteModelQualityJobDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteModelQualityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelQualityJobDefinitionAsync(const Model::DeleteModelQualityJobDefinitionRequest& request, const DeleteModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a monitoring schedule. Also stops the schedule had not already been
         * stopped. This does not delete the job execution history of the monitoring
         * schedule. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMonitoringScheduleOutcome DeleteMonitoringSchedule(const Model::DeleteMonitoringScheduleRequest& request) const;

        /**
         * A Callable wrapper for DeleteMonitoringSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMonitoringScheduleOutcomeCallable DeleteMonitoringScheduleCallable(const Model::DeleteMonitoringScheduleRequest& request) const;

        /**
         * An Async wrapper for DeleteMonitoringSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMonitoringScheduleAsync(const Model::DeleteMonitoringScheduleRequest& request, const DeleteMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes an SageMaker notebook instance. Before you can delete a notebook
         * instance, you must call the <code>StopNotebookInstance</code> API. </p>
         *  <p>When you delete a notebook instance, you lose all of your data.
         * SageMaker removes the ML compute instance, and deletes the ML storage volume and
         * the network interface associated with the notebook instance. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotebookInstanceOutcome DeleteNotebookInstance(const Model::DeleteNotebookInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteNotebookInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotebookInstanceOutcomeCallable DeleteNotebookInstanceCallable(const Model::DeleteNotebookInstanceRequest& request) const;

        /**
         * An Async wrapper for DeleteNotebookInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotebookInstanceAsync(const Model::DeleteNotebookInstanceRequest& request, const DeleteNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a notebook instance lifecycle configuration.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotebookInstanceLifecycleConfigOutcome DeleteNotebookInstanceLifecycleConfig(const Model::DeleteNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteNotebookInstanceLifecycleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotebookInstanceLifecycleConfigOutcomeCallable DeleteNotebookInstanceLifecycleConfigCallable(const Model::DeleteNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteNotebookInstanceLifecycleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotebookInstanceLifecycleConfigAsync(const Model::DeleteNotebookInstanceLifecycleConfigRequest& request, const DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a pipeline if there are no running instances of the pipeline. To
         * delete a pipeline, you must stop all running instances of the pipeline using the
         * <code>StopPipelineExecution</code> API. When you delete a pipeline, all
         * instances of the pipeline are deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeletePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;

        /**
         * A Callable wrapper for DeletePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const Model::DeletePipelineRequest& request) const;

        /**
         * An Async wrapper for DeletePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePipelineAsync(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete the specified project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to delete a space.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSpaceOutcome DeleteSpace(const Model::DeleteSpaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSpaceOutcomeCallable DeleteSpaceCallable(const Model::DeleteSpaceRequest& request) const;

        /**
         * An Async wrapper for DeleteSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSpaceAsync(const Model::DeleteSpaceRequest& request, const DeleteSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Studio Lifecycle Configuration. In order to delete the Lifecycle
         * Configuration, there must be no running apps using the Lifecycle Configuration.
         * You must also remove the Lifecycle Configuration from UserSettings in all
         * Domains and UserProfiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteStudioLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioLifecycleConfigOutcome DeleteStudioLifecycleConfig(const Model::DeleteStudioLifecycleConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteStudioLifecycleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStudioLifecycleConfigOutcomeCallable DeleteStudioLifecycleConfigCallable(const Model::DeleteStudioLifecycleConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteStudioLifecycleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStudioLifecycleConfigAsync(const Model::DeleteStudioLifecycleConfigRequest& request, const DeleteStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified tags from an SageMaker resource.</p> <p>To list a
         * resource's tags, use the <code>ListTags</code> API. </p>  <p>When you call
         * this API to delete tags from a hyperparameter tuning job, the deleted tags are
         * not removed from training jobs that the hyperparameter tuning job launched
         * before you called this API.</p>   <p>When you call this API to
         * delete tags from a SageMaker Studio Domain or User Profile, the deleted tags are
         * not removed from Apps that the SageMaker Studio Domain or User Profile launched
         * before you called this API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * A Callable wrapper for DeleteTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * An Async wrapper for DeleteTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified trial. All trial components that make up the trial must
         * be deleted first. Use the <a>DescribeTrialComponent</a> API to get the list of
         * trial components.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTrial">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrialOutcome DeleteTrial(const Model::DeleteTrialRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrial that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrialOutcomeCallable DeleteTrialCallable(const Model::DeleteTrialRequest& request) const;

        /**
         * An Async wrapper for DeleteTrial that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrialAsync(const Model::DeleteTrialRequest& request, const DeleteTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified trial component. A trial component must be
         * disassociated from all trials before the trial component can be deleted. To
         * disassociate a trial component from a trial, call the
         * <a>DisassociateTrialComponent</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrialComponentOutcome DeleteTrialComponent(const Model::DeleteTrialComponentRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrialComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrialComponentOutcomeCallable DeleteTrialComponentCallable(const Model::DeleteTrialComponentRequest& request) const;

        /**
         * An Async wrapper for DeleteTrialComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrialComponentAsync(const Model::DeleteTrialComponentRequest& request, const DeleteTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user profile. When a user profile is deleted, the user loses access
         * to their EFS volume, including data, notebooks, and other
         * artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserProfileOutcome DeleteUserProfile(const Model::DeleteUserProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserProfileOutcomeCallable DeleteUserProfileCallable(const Model::DeleteUserProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserProfileAsync(const Model::DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to delete a workforce.</p> <p>If you want to create a new
         * workforce in an Amazon Web Services Region where a workforce already exists, use
         * this operation to delete the existing workforce and then use to create a new
         * workforce.</p>  <p>If a private workforce contains one or more work
         * teams, you must use the operation to delete all work teams before you delete the
         * workforce. If you try to delete a workforce that contains one or more work
         * teams, you will recieve a <code>ResourceInUse</code> error.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteWorkforce">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkforceOutcome DeleteWorkforce(const Model::DeleteWorkforceRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkforce that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkforceOutcomeCallable DeleteWorkforceCallable(const Model::DeleteWorkforceRequest& request) const;

        /**
         * An Async wrapper for DeleteWorkforce that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkforceAsync(const Model::DeleteWorkforceRequest& request, const DeleteWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing work team. This operation can't be undone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkteamOutcome DeleteWorkteam(const Model::DeleteWorkteamRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkteam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkteamOutcomeCallable DeleteWorkteamCallable(const Model::DeleteWorkteamRequest& request) const;

        /**
         * An Async wrapper for DeleteWorkteam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkteamAsync(const Model::DeleteWorkteamRequest& request, const DeleteWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters the specified devices. After you deregister a device, you will
         * need to re-register the devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeregisterDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterDevicesOutcome DeregisterDevices(const Model::DeregisterDevicesRequest& request) const;

        /**
         * A Callable wrapper for DeregisterDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterDevicesOutcomeCallable DeregisterDevicesCallable(const Model::DeregisterDevicesRequest& request) const;

        /**
         * An Async wrapper for DeregisterDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterDevicesAsync(const Model::DeregisterDevicesRequest& request, const DeregisterDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActionOutcome DescribeAction(const Model::DescribeActionRequest& request) const;

        /**
         * A Callable wrapper for DescribeAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeActionOutcomeCallable DescribeActionCallable(const Model::DescribeActionRequest& request) const;

        /**
         * An Async wrapper for DescribeAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeActionAsync(const Model::DescribeActionRequest& request, const DescribeActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of the specified algorithm that is in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlgorithmOutcome DescribeAlgorithm(const Model::DescribeAlgorithmRequest& request) const;

        /**
         * A Callable wrapper for DescribeAlgorithm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlgorithmOutcomeCallable DescribeAlgorithmCallable(const Model::DescribeAlgorithmRequest& request) const;

        /**
         * An Async wrapper for DescribeAlgorithm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlgorithmAsync(const Model::DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppOutcome DescribeApp(const Model::DescribeAppRequest& request) const;

        /**
         * A Callable wrapper for DescribeApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAppOutcomeCallable DescribeAppCallable(const Model::DescribeAppRequest& request) const;

        /**
         * An Async wrapper for DescribeApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppAsync(const Model::DescribeAppRequest& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAppImageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppImageConfigOutcome DescribeAppImageConfig(const Model::DescribeAppImageConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppImageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAppImageConfigOutcomeCallable DescribeAppImageConfigCallable(const Model::DescribeAppImageConfigRequest& request) const;

        /**
         * An Async wrapper for DescribeAppImageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppImageConfigAsync(const Model::DescribeAppImageConfigRequest& request, const DescribeAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeArtifactOutcome DescribeArtifact(const Model::DescribeArtifactRequest& request) const;

        /**
         * A Callable wrapper for DescribeArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeArtifactOutcomeCallable DescribeArtifactCallable(const Model::DescribeArtifactRequest& request) const;

        /**
         * An Async wrapper for DescribeArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeArtifactAsync(const Model::DescribeArtifactRequest& request, const DescribeArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about an Amazon SageMaker AutoML job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAutoMLJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoMLJobOutcome DescribeAutoMLJob(const Model::DescribeAutoMLJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeAutoMLJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAutoMLJobOutcomeCallable DescribeAutoMLJobCallable(const Model::DescribeAutoMLJobRequest& request) const;

        /**
         * An Async wrapper for DescribeAutoMLJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAutoMLJobAsync(const Model::DescribeAutoMLJobRequest& request, const DescribeAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details about the specified Git repository.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeCodeRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCodeRepositoryOutcome DescribeCodeRepository(const Model::DescribeCodeRepositoryRequest& request) const;

        /**
         * A Callable wrapper for DescribeCodeRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCodeRepositoryOutcomeCallable DescribeCodeRepositoryCallable(const Model::DescribeCodeRepositoryRequest& request) const;

        /**
         * An Async wrapper for DescribeCodeRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCodeRepositoryAsync(const Model::DescribeCodeRepositoryRequest& request, const DescribeCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a model compilation job.</p> <p>To create a model
         * compilation job, use <a>CreateCompilationJob</a>. To get information about
         * multiple model compilation jobs, use <a>ListCompilationJobs</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeCompilationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCompilationJobOutcome DescribeCompilationJob(const Model::DescribeCompilationJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeCompilationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCompilationJobOutcomeCallable DescribeCompilationJobCallable(const Model::DescribeCompilationJobRequest& request) const;

        /**
         * An Async wrapper for DescribeCompilationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCompilationJobAsync(const Model::DescribeCompilationJobRequest& request, const DescribeCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a context.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeContext">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContextOutcome DescribeContext(const Model::DescribeContextRequest& request) const;

        /**
         * A Callable wrapper for DescribeContext that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeContextOutcomeCallable DescribeContextCallable(const Model::DescribeContextRequest& request) const;

        /**
         * An Async wrapper for DescribeContext that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeContextAsync(const Model::DescribeContextRequest& request, const DescribeContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the details of a data quality monitoring job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeDataQualityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataQualityJobDefinitionOutcome DescribeDataQualityJobDefinition(const Model::DescribeDataQualityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataQualityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataQualityJobDefinitionOutcomeCallable DescribeDataQualityJobDefinitionCallable(const Model::DescribeDataQualityJobDefinitionRequest& request) const;

        /**
         * An Async wrapper for DescribeDataQualityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataQualityJobDefinitionAsync(const Model::DescribeDataQualityJobDefinitionRequest& request, const DescribeDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest& request) const;

        /**
         * A Callable wrapper for DescribeDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request) const;

        /**
         * An Async wrapper for DescribeDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A description of the fleet the device belongs to.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeDeviceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeviceFleetOutcome DescribeDeviceFleet(const Model::DescribeDeviceFleetRequest& request) const;

        /**
         * A Callable wrapper for DescribeDeviceFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeviceFleetOutcomeCallable DescribeDeviceFleetCallable(const Model::DescribeDeviceFleetRequest& request) const;

        /**
         * An Async wrapper for DescribeDeviceFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeviceFleetAsync(const Model::DescribeDeviceFleetRequest& request, const DescribeDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The description of the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainOutcomeCallable DescribeDomainCallable(const Model::DescribeDomainRequest& request) const;

        /**
         * An Async wrapper for DescribeDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainAsync(const Model::DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an edge deployment plan with deployment status per
         * stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEdgeDeploymentPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEdgeDeploymentPlanOutcome DescribeEdgeDeploymentPlan(const Model::DescribeEdgeDeploymentPlanRequest& request) const;

        /**
         * A Callable wrapper for DescribeEdgeDeploymentPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEdgeDeploymentPlanOutcomeCallable DescribeEdgeDeploymentPlanCallable(const Model::DescribeEdgeDeploymentPlanRequest& request) const;

        /**
         * An Async wrapper for DescribeEdgeDeploymentPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEdgeDeploymentPlanAsync(const Model::DescribeEdgeDeploymentPlanRequest& request, const DescribeEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A description of edge packaging jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEdgePackagingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEdgePackagingJobOutcome DescribeEdgePackagingJob(const Model::DescribeEdgePackagingJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeEdgePackagingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEdgePackagingJobOutcomeCallable DescribeEdgePackagingJobCallable(const Model::DescribeEdgePackagingJobRequest& request) const;

        /**
         * An Async wrapper for DescribeEdgePackagingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEdgePackagingJobAsync(const Model::DescribeEdgePackagingJobRequest& request, const DescribeEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointOutcome DescribeEndpoint(const Model::DescribeEndpointRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointOutcomeCallable DescribeEndpointCallable(const Model::DescribeEndpointRequest& request) const;

        /**
         * An Async wrapper for DescribeEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointAsync(const Model::DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of an endpoint configuration created using the
         * <code>CreateEndpointConfig</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpointConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointConfigOutcome DescribeEndpointConfig(const Model::DescribeEndpointConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpointConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointConfigOutcomeCallable DescribeEndpointConfigCallable(const Model::DescribeEndpointConfigRequest& request) const;

        /**
         * An Async wrapper for DescribeEndpointConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointConfigAsync(const Model::DescribeEndpointConfigRequest& request, const DescribeEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of an experiment's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExperimentOutcome DescribeExperiment(const Model::DescribeExperimentRequest& request) const;

        /**
         * A Callable wrapper for DescribeExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExperimentOutcomeCallable DescribeExperimentCallable(const Model::DescribeExperimentRequest& request) const;

        /**
         * An Async wrapper for DescribeExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExperimentAsync(const Model::DescribeExperimentRequest& request, const DescribeExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to describe a <code>FeatureGroup</code>. The response
         * includes information on the creation time, <code>FeatureGroup</code> name, the
         * unique identifier for each <code>FeatureGroup</code>, and more.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeFeatureGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFeatureGroupOutcome DescribeFeatureGroup(const Model::DescribeFeatureGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeFeatureGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFeatureGroupOutcomeCallable DescribeFeatureGroupCallable(const Model::DescribeFeatureGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeFeatureGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFeatureGroupAsync(const Model::DescribeFeatureGroupRequest& request, const DescribeFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Shows the metadata for a feature within a feature group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeFeatureMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFeatureMetadataOutcome DescribeFeatureMetadata(const Model::DescribeFeatureMetadataRequest& request) const;

        /**
         * A Callable wrapper for DescribeFeatureMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFeatureMetadataOutcomeCallable DescribeFeatureMetadataCallable(const Model::DescribeFeatureMetadataRequest& request) const;

        /**
         * An Async wrapper for DescribeFeatureMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFeatureMetadataAsync(const Model::DescribeFeatureMetadataRequest& request, const DescribeFeatureMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified flow definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeFlowDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowDefinitionOutcome DescribeFlowDefinition(const Model::DescribeFlowDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeFlowDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFlowDefinitionOutcomeCallable DescribeFlowDefinitionCallable(const Model::DescribeFlowDefinitionRequest& request) const;

        /**
         * An Async wrapper for DescribeFlowDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFlowDefinitionAsync(const Model::DescribeFlowDefinitionRequest& request, const DescribeFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe a hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeHub">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHubOutcome DescribeHub(const Model::DescribeHubRequest& request) const;

        /**
         * A Callable wrapper for DescribeHub that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHubOutcomeCallable DescribeHubCallable(const Model::DescribeHubRequest& request) const;

        /**
         * An Async wrapper for DescribeHub that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHubAsync(const Model::DescribeHubRequest& request, const DescribeHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe the content of a hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeHubContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHubContentOutcome DescribeHubContent(const Model::DescribeHubContentRequest& request) const;

        /**
         * A Callable wrapper for DescribeHubContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHubContentOutcomeCallable DescribeHubContentCallable(const Model::DescribeHubContentRequest& request) const;

        /**
         * An Async wrapper for DescribeHubContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHubContentAsync(const Model::DescribeHubContentRequest& request, const DescribeHubContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the requested human task user interface (worker
         * task template).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeHumanTaskUi">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHumanTaskUiOutcome DescribeHumanTaskUi(const Model::DescribeHumanTaskUiRequest& request) const;

        /**
         * A Callable wrapper for DescribeHumanTaskUi that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHumanTaskUiOutcomeCallable DescribeHumanTaskUiCallable(const Model::DescribeHumanTaskUiRequest& request) const;

        /**
         * An Async wrapper for DescribeHumanTaskUi that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHumanTaskUiAsync(const Model::DescribeHumanTaskUiRequest& request, const DescribeHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a description of a hyperparameter tuning job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeHyperParameterTuningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHyperParameterTuningJobOutcome DescribeHyperParameterTuningJob(const Model::DescribeHyperParameterTuningJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeHyperParameterTuningJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHyperParameterTuningJobOutcomeCallable DescribeHyperParameterTuningJobCallable(const Model::DescribeHyperParameterTuningJobRequest& request) const;

        /**
         * An Async wrapper for DescribeHyperParameterTuningJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHyperParameterTuningJobAsync(const Model::DescribeHyperParameterTuningJobRequest& request, const DescribeHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a SageMaker image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageOutcome DescribeImage(const Model::DescribeImageRequest& request) const;

        /**
         * A Callable wrapper for DescribeImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImageOutcomeCallable DescribeImageCallable(const Model::DescribeImageRequest& request) const;

        /**
         * An Async wrapper for DescribeImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImageAsync(const Model::DescribeImageRequest& request, const DescribeImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a version of a SageMaker image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeImageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageVersionOutcome DescribeImageVersion(const Model::DescribeImageVersionRequest& request) const;

        /**
         * A Callable wrapper for DescribeImageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImageVersionOutcomeCallable DescribeImageVersionCallable(const Model::DescribeImageVersionRequest& request) const;

        /**
         * An Async wrapper for DescribeImageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImageVersionAsync(const Model::DescribeImageVersionRequest& request, const DescribeImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about an inference experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeInferenceExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInferenceExperimentOutcome DescribeInferenceExperiment(const Model::DescribeInferenceExperimentRequest& request) const;

        /**
         * A Callable wrapper for DescribeInferenceExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInferenceExperimentOutcomeCallable DescribeInferenceExperimentCallable(const Model::DescribeInferenceExperimentRequest& request) const;

        /**
         * An Async wrapper for DescribeInferenceExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInferenceExperimentAsync(const Model::DescribeInferenceExperimentRequest& request, const DescribeInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the results of the Inference Recommender job. One or more
         * recommendation jobs are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeInferenceRecommendationsJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInferenceRecommendationsJobOutcome DescribeInferenceRecommendationsJob(const Model::DescribeInferenceRecommendationsJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeInferenceRecommendationsJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInferenceRecommendationsJobOutcomeCallable DescribeInferenceRecommendationsJobCallable(const Model::DescribeInferenceRecommendationsJobRequest& request) const;

        /**
         * An Async wrapper for DescribeInferenceRecommendationsJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInferenceRecommendationsJobAsync(const Model::DescribeInferenceRecommendationsJobRequest& request, const DescribeInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a labeling job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeLabelingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLabelingJobOutcome DescribeLabelingJob(const Model::DescribeLabelingJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeLabelingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLabelingJobOutcomeCallable DescribeLabelingJobCallable(const Model::DescribeLabelingJobRequest& request) const;

        /**
         * An Async wrapper for DescribeLabelingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLabelingJobAsync(const Model::DescribeLabelingJobRequest& request, const DescribeLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of properties for the requested lineage group. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/xaccount-lineage-tracking.html">
         * Cross-Account Lineage Tracking </a> in the <i>Amazon SageMaker Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeLineageGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLineageGroupOutcome DescribeLineageGroup(const Model::DescribeLineageGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeLineageGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLineageGroupOutcomeCallable DescribeLineageGroupCallable(const Model::DescribeLineageGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeLineageGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLineageGroupAsync(const Model::DescribeLineageGroupRequest& request, const DescribeLineageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a model that you created using the <code>CreateModel</code>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelOutcome DescribeModel(const Model::DescribeModelRequest& request) const;

        /**
         * A Callable wrapper for DescribeModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelOutcomeCallable DescribeModelCallable(const Model::DescribeModelRequest& request) const;

        /**
         * An Async wrapper for DescribeModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelAsync(const Model::DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of a model bias job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelBiasJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelBiasJobDefinitionOutcome DescribeModelBiasJobDefinition(const Model::DescribeModelBiasJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelBiasJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelBiasJobDefinitionOutcomeCallable DescribeModelBiasJobDefinitionCallable(const Model::DescribeModelBiasJobDefinitionRequest& request) const;

        /**
         * An Async wrapper for DescribeModelBiasJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelBiasJobDefinitionAsync(const Model::DescribeModelBiasJobDefinitionRequest& request, const DescribeModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the content, creation time, and security configuration of an Amazon
         * SageMaker Model Card.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelCard">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelCardOutcome DescribeModelCard(const Model::DescribeModelCardRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelCard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelCardOutcomeCallable DescribeModelCardCallable(const Model::DescribeModelCardRequest& request) const;

        /**
         * An Async wrapper for DescribeModelCard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelCardAsync(const Model::DescribeModelCardRequest& request, const DescribeModelCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an Amazon SageMaker Model Card export job.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelCardExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelCardExportJobOutcome DescribeModelCardExportJob(const Model::DescribeModelCardExportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelCardExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelCardExportJobOutcomeCallable DescribeModelCardExportJobCallable(const Model::DescribeModelCardExportJobRequest& request) const;

        /**
         * An Async wrapper for DescribeModelCardExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelCardExportJobAsync(const Model::DescribeModelCardExportJobRequest& request, const DescribeModelCardExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of a model explainability job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelExplainabilityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelExplainabilityJobDefinitionOutcome DescribeModelExplainabilityJobDefinition(const Model::DescribeModelExplainabilityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelExplainabilityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelExplainabilityJobDefinitionOutcomeCallable DescribeModelExplainabilityJobDefinitionCallable(const Model::DescribeModelExplainabilityJobDefinitionRequest& request) const;

        /**
         * An Async wrapper for DescribeModelExplainabilityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelExplainabilityJobDefinitionAsync(const Model::DescribeModelExplainabilityJobDefinitionRequest& request, const DescribeModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of the specified model package, which is used to create
         * SageMaker models or list them on Amazon Web Services Marketplace.</p> <p>To
         * create models in SageMaker, buyers can subscribe to model packages listed on
         * Amazon Web Services Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelPackageOutcome DescribeModelPackage(const Model::DescribeModelPackageRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelPackageOutcomeCallable DescribeModelPackageCallable(const Model::DescribeModelPackageRequest& request) const;

        /**
         * An Async wrapper for DescribeModelPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelPackageAsync(const Model::DescribeModelPackageRequest& request, const DescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a description for the specified model group.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelPackageGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelPackageGroupOutcome DescribeModelPackageGroup(const Model::DescribeModelPackageGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelPackageGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelPackageGroupOutcomeCallable DescribeModelPackageGroupCallable(const Model::DescribeModelPackageGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeModelPackageGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelPackageGroupAsync(const Model::DescribeModelPackageGroupRequest& request, const DescribeModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of a model quality job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelQualityJobDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelQualityJobDefinitionOutcome DescribeModelQualityJobDefinition(const Model::DescribeModelQualityJobDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeModelQualityJobDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelQualityJobDefinitionOutcomeCallable DescribeModelQualityJobDefinitionCallable(const Model::DescribeModelQualityJobDefinitionRequest& request) const;

        /**
         * An Async wrapper for DescribeModelQualityJobDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelQualityJobDefinitionAsync(const Model::DescribeModelQualityJobDefinitionRequest& request, const DescribeModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the schedule for a monitoring job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMonitoringScheduleOutcome DescribeMonitoringSchedule(const Model::DescribeMonitoringScheduleRequest& request) const;

        /**
         * A Callable wrapper for DescribeMonitoringSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMonitoringScheduleOutcomeCallable DescribeMonitoringScheduleCallable(const Model::DescribeMonitoringScheduleRequest& request) const;

        /**
         * An Async wrapper for DescribeMonitoringSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMonitoringScheduleAsync(const Model::DescribeMonitoringScheduleRequest& request, const DescribeMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a notebook instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotebookInstanceOutcome DescribeNotebookInstance(const Model::DescribeNotebookInstanceRequest& request) const;

        /**
         * A Callable wrapper for DescribeNotebookInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotebookInstanceOutcomeCallable DescribeNotebookInstanceCallable(const Model::DescribeNotebookInstanceRequest& request) const;

        /**
         * An Async wrapper for DescribeNotebookInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotebookInstanceAsync(const Model::DescribeNotebookInstanceRequest& request, const DescribeNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of a notebook instance lifecycle configuration.</p>
         * <p>For information about notebook instance lifestyle configurations, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
         * 2.1: (Optional) Customize a Notebook Instance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotebookInstanceLifecycleConfigOutcome DescribeNotebookInstanceLifecycleConfig(const Model::DescribeNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeNotebookInstanceLifecycleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotebookInstanceLifecycleConfigOutcomeCallable DescribeNotebookInstanceLifecycleConfigCallable(const Model::DescribeNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * An Async wrapper for DescribeNotebookInstanceLifecycleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotebookInstanceLifecycleConfigAsync(const Model::DescribeNotebookInstanceLifecycleConfigRequest& request, const DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the details of a pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePipelineOutcome DescribePipeline(const Model::DescribePipelineRequest& request) const;

        /**
         * A Callable wrapper for DescribePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePipelineOutcomeCallable DescribePipelineCallable(const Model::DescribePipelineRequest& request) const;

        /**
         * An Async wrapper for DescribePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePipelineAsync(const Model::DescribePipelineRequest& request, const DescribePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the details of an execution's pipeline definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribePipelineDefinitionForExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePipelineDefinitionForExecutionOutcome DescribePipelineDefinitionForExecution(const Model::DescribePipelineDefinitionForExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribePipelineDefinitionForExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePipelineDefinitionForExecutionOutcomeCallable DescribePipelineDefinitionForExecutionCallable(const Model::DescribePipelineDefinitionForExecutionRequest& request) const;

        /**
         * An Async wrapper for DescribePipelineDefinitionForExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePipelineDefinitionForExecutionAsync(const Model::DescribePipelineDefinitionForExecutionRequest& request, const DescribePipelineDefinitionForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the details of a pipeline execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribePipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePipelineExecutionOutcome DescribePipelineExecution(const Model::DescribePipelineExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribePipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePipelineExecutionOutcomeCallable DescribePipelineExecutionCallable(const Model::DescribePipelineExecutionRequest& request) const;

        /**
         * An Async wrapper for DescribePipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePipelineExecutionAsync(const Model::DescribePipelineExecutionRequest& request, const DescribePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeProcessingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProcessingJobOutcome DescribeProcessingJob(const Model::DescribeProcessingJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeProcessingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProcessingJobOutcomeCallable DescribeProcessingJobCallable(const Model::DescribeProcessingJobRequest& request) const;

        /**
         * An Async wrapper for DescribeProcessingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProcessingJobAsync(const Model::DescribeProcessingJobRequest& request, const DescribeProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the details of a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

        /**
         * A Callable wrapper for DescribeProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request) const;

        /**
         * An Async wrapper for DescribeProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the space.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpaceOutcome DescribeSpace(const Model::DescribeSpaceRequest& request) const;

        /**
         * A Callable wrapper for DescribeSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpaceOutcomeCallable DescribeSpaceCallable(const Model::DescribeSpaceRequest& request) const;

        /**
         * An Async wrapper for DescribeSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpaceAsync(const Model::DescribeSpaceRequest& request, const DescribeSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the Studio Lifecycle Configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeStudioLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStudioLifecycleConfigOutcome DescribeStudioLifecycleConfig(const Model::DescribeStudioLifecycleConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeStudioLifecycleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStudioLifecycleConfigOutcomeCallable DescribeStudioLifecycleConfigCallable(const Model::DescribeStudioLifecycleConfigRequest& request) const;

        /**
         * An Async wrapper for DescribeStudioLifecycleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStudioLifecycleConfigAsync(const Model::DescribeStudioLifecycleConfigRequest& request, const DescribeStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a work team provided by a vendor. It returns details
         * about the subscription with a vendor in the Amazon Web Services
         * Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeSubscribedWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubscribedWorkteamOutcome DescribeSubscribedWorkteam(const Model::DescribeSubscribedWorkteamRequest& request) const;

        /**
         * A Callable wrapper for DescribeSubscribedWorkteam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSubscribedWorkteamOutcomeCallable DescribeSubscribedWorkteamCallable(const Model::DescribeSubscribedWorkteamRequest& request) const;

        /**
         * An Async wrapper for DescribeSubscribedWorkteam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSubscribedWorkteamAsync(const Model::DescribeSubscribedWorkteamRequest& request, const DescribeSubscribedWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a training job. </p> <p>Some of the attributes
         * below only appear if the training job successfully starts. If the training job
         * fails, <code>TrainingJobStatus</code> is <code>Failed</code> and, depending on
         * the <code>FailureReason</code>, attributes like <code>TrainingStartTime</code>,
         * <code>TrainingTimeInSeconds</code>, <code>TrainingEndTime</code>, and
         * <code>BillableTimeInSeconds</code> may not be present in the
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrainingJobOutcome DescribeTrainingJob(const Model::DescribeTrainingJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrainingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrainingJobOutcomeCallable DescribeTrainingJobCallable(const Model::DescribeTrainingJobRequest& request) const;

        /**
         * An Async wrapper for DescribeTrainingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrainingJobAsync(const Model::DescribeTrainingJobRequest& request, const DescribeTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a transform job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTransformJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransformJobOutcome DescribeTransformJob(const Model::DescribeTransformJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeTransformJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTransformJobOutcomeCallable DescribeTransformJobCallable(const Model::DescribeTransformJobRequest& request) const;

        /**
         * An Async wrapper for DescribeTransformJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTransformJobAsync(const Model::DescribeTransformJobRequest& request, const DescribeTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of a trial's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrial">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrialOutcome DescribeTrial(const Model::DescribeTrialRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrial that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrialOutcomeCallable DescribeTrialCallable(const Model::DescribeTrialRequest& request) const;

        /**
         * An Async wrapper for DescribeTrial that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrialAsync(const Model::DescribeTrialRequest& request, const DescribeTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of a trials component's properties.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrialComponentOutcome DescribeTrialComponent(const Model::DescribeTrialComponentRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrialComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrialComponentOutcomeCallable DescribeTrialComponentCallable(const Model::DescribeTrialComponentRequest& request) const;

        /**
         * An Async wrapper for DescribeTrialComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrialComponentAsync(const Model::DescribeTrialComponentRequest& request, const DescribeTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a user profile. For more information, see
         * <code>CreateUserProfile</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserProfileOutcome DescribeUserProfile(const Model::DescribeUserProfileRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserProfileOutcomeCallable DescribeUserProfileCallable(const Model::DescribeUserProfileRequest& request) const;

        /**
         * An Async wrapper for DescribeUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserProfileAsync(const Model::DescribeUserProfileRequest& request, const DescribeUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists private workforce information, including workforce name, Amazon
         * Resource Name (ARN), and, if applicable, allowed IP address ranges (<a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>).
         * Allowable IP address ranges are the IP addresses that workers can use to access
         * tasks. </p>  <p>This operation applies only to private
         * workforces.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeWorkforce">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkforceOutcome DescribeWorkforce(const Model::DescribeWorkforceRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkforce that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkforceOutcomeCallable DescribeWorkforceCallable(const Model::DescribeWorkforceRequest& request) const;

        /**
         * An Async wrapper for DescribeWorkforce that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkforceAsync(const Model::DescribeWorkforceRequest& request, const DescribeWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specific work team. You can see information such as
         * the create date, the last updated date, membership information, and the work
         * team's Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkteamOutcome DescribeWorkteam(const Model::DescribeWorkteamRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkteam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkteamOutcomeCallable DescribeWorkteamCallable(const Model::DescribeWorkteamRequest& request) const;

        /**
         * An Async wrapper for DescribeWorkteam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkteamAsync(const Model::DescribeWorkteamRequest& request, const DescribeWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables using Service Catalog in SageMaker. Service Catalog is used to
         * create SageMaker projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DisableSagemakerServicecatalogPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableSagemakerServicecatalogPortfolioOutcome DisableSagemakerServicecatalogPortfolio(const Model::DisableSagemakerServicecatalogPortfolioRequest& request) const;

        /**
         * A Callable wrapper for DisableSagemakerServicecatalogPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableSagemakerServicecatalogPortfolioOutcomeCallable DisableSagemakerServicecatalogPortfolioCallable(const Model::DisableSagemakerServicecatalogPortfolioRequest& request) const;

        /**
         * An Async wrapper for DisableSagemakerServicecatalogPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableSagemakerServicecatalogPortfolioAsync(const Model::DisableSagemakerServicecatalogPortfolioRequest& request, const DisableSagemakerServicecatalogPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a trial component from a trial. This doesn't effect other
         * trials the component is associated with. Before you can delete a component, you
         * must disassociate the component from all trials it is associated with. To
         * associate a trial component with a trial, call the
         * <a>AssociateTrialComponent</a> API.</p> <p>To get a list of the trials a
         * component is associated with, use the <a>Search</a> API. Specify
         * <code>ExperimentTrialComponent</code> for the <code>Resource</code> parameter.
         * The list appears in the response under
         * <code>Results.TrialComponent.Parents</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DisassociateTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTrialComponentOutcome DisassociateTrialComponent(const Model::DisassociateTrialComponentRequest& request) const;

        /**
         * A Callable wrapper for DisassociateTrialComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTrialComponentOutcomeCallable DisassociateTrialComponentCallable(const Model::DisassociateTrialComponentRequest& request) const;

        /**
         * An Async wrapper for DisassociateTrialComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateTrialComponentAsync(const Model::DisassociateTrialComponentRequest& request, const DisassociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables using Service Catalog in SageMaker. Service Catalog is used to create
         * SageMaker projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EnableSagemakerServicecatalogPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableSagemakerServicecatalogPortfolioOutcome EnableSagemakerServicecatalogPortfolio(const Model::EnableSagemakerServicecatalogPortfolioRequest& request) const;

        /**
         * A Callable wrapper for EnableSagemakerServicecatalogPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableSagemakerServicecatalogPortfolioOutcomeCallable EnableSagemakerServicecatalogPortfolioCallable(const Model::EnableSagemakerServicecatalogPortfolioRequest& request) const;

        /**
         * An Async wrapper for EnableSagemakerServicecatalogPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableSagemakerServicecatalogPortfolioAsync(const Model::EnableSagemakerServicecatalogPortfolioRequest& request, const EnableSagemakerServicecatalogPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GetDeviceFleetReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceFleetReportOutcome GetDeviceFleetReport(const Model::GetDeviceFleetReportRequest& request) const;

        /**
         * A Callable wrapper for GetDeviceFleetReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceFleetReportOutcomeCallable GetDeviceFleetReportCallable(const Model::GetDeviceFleetReportRequest& request) const;

        /**
         * An Async wrapper for GetDeviceFleetReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceFleetReportAsync(const Model::GetDeviceFleetReportRequest& request, const GetDeviceFleetReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The resource policy for the lineage group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GetLineageGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLineageGroupPolicyOutcome GetLineageGroupPolicy(const Model::GetLineageGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetLineageGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLineageGroupPolicyOutcomeCallable GetLineageGroupPolicyCallable(const Model::GetLineageGroupPolicyRequest& request) const;

        /**
         * An Async wrapper for GetLineageGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLineageGroupPolicyAsync(const Model::GetLineageGroupPolicyRequest& request, const GetLineageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a resource policy that manages access for a model group. For information
         * about resource policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_identity-vs-resource.html">Identity-based
         * policies and resource-based policies</a> in the <i>Amazon Web Services Identity
         * and Access Management User Guide.</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GetModelPackageGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelPackageGroupPolicyOutcome GetModelPackageGroupPolicy(const Model::GetModelPackageGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetModelPackageGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetModelPackageGroupPolicyOutcomeCallable GetModelPackageGroupPolicyCallable(const Model::GetModelPackageGroupPolicyRequest& request) const;

        /**
         * An Async wrapper for GetModelPackageGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetModelPackageGroupPolicyAsync(const Model::GetModelPackageGroupPolicyRequest& request, const GetModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the status of Service Catalog in SageMaker. Service Catalog is used to
         * create SageMaker projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GetSagemakerServicecatalogPortfolioStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSagemakerServicecatalogPortfolioStatusOutcome GetSagemakerServicecatalogPortfolioStatus(const Model::GetSagemakerServicecatalogPortfolioStatusRequest& request) const;

        /**
         * A Callable wrapper for GetSagemakerServicecatalogPortfolioStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSagemakerServicecatalogPortfolioStatusOutcomeCallable GetSagemakerServicecatalogPortfolioStatusCallable(const Model::GetSagemakerServicecatalogPortfolioStatusRequest& request) const;

        /**
         * An Async wrapper for GetSagemakerServicecatalogPortfolioStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSagemakerServicecatalogPortfolioStatusAsync(const Model::GetSagemakerServicecatalogPortfolioStatusRequest& request, const GetSagemakerServicecatalogPortfolioStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An auto-complete API for the search functionality in the Amazon SageMaker
         * console. It returns suggestions of possible matches for the property name to use
         * in <code>Search</code> queries. Provides suggestions for
         * <code>HyperParameters</code>, <code>Tags</code>, and
         * <code>Metrics</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GetSearchSuggestions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSearchSuggestionsOutcome GetSearchSuggestions(const Model::GetSearchSuggestionsRequest& request) const;

        /**
         * A Callable wrapper for GetSearchSuggestions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSearchSuggestionsOutcomeCallable GetSearchSuggestionsCallable(const Model::GetSearchSuggestionsRequest& request) const;

        /**
         * An Async wrapper for GetSearchSuggestions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSearchSuggestionsAsync(const Model::GetSearchSuggestionsRequest& request, const GetSearchSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Import hub content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ImportHubContent">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportHubContentOutcome ImportHubContent(const Model::ImportHubContentRequest& request) const;

        /**
         * A Callable wrapper for ImportHubContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportHubContentOutcomeCallable ImportHubContentCallable(const Model::ImportHubContentRequest& request) const;

        /**
         * An Async wrapper for ImportHubContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportHubContentAsync(const Model::ImportHubContentRequest& request, const ImportHubContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the actions in your account and their properties.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActionsOutcome ListActions(const Model::ListActionsRequest& request) const;

        /**
         * A Callable wrapper for ListActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListActionsOutcomeCallable ListActionsCallable(const Model::ListActionsRequest& request) const;

        /**
         * An Async wrapper for ListActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListActionsAsync(const Model::ListActionsRequest& request, const ListActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the machine learning algorithms that have been created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAlgorithms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlgorithmsOutcome ListAlgorithms(const Model::ListAlgorithmsRequest& request) const;

        /**
         * A Callable wrapper for ListAlgorithms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAlgorithmsOutcomeCallable ListAlgorithmsCallable(const Model::ListAlgorithmsRequest& request) const;

        /**
         * An Async wrapper for ListAlgorithms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAlgorithmsAsync(const Model::ListAlgorithmsRequest& request, const ListAlgorithmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the aliases of a specified image or image version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAliases">AWS
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
         * <p>Lists the AppImageConfigs in your account and their properties. The list can
         * be filtered by creation time or modified time, and whether the AppImageConfig
         * name contains a specified string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAppImageConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppImageConfigsOutcome ListAppImageConfigs(const Model::ListAppImageConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListAppImageConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppImageConfigsOutcomeCallable ListAppImageConfigsCallable(const Model::ListAppImageConfigsRequest& request) const;

        /**
         * An Async wrapper for ListAppImageConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppImageConfigsAsync(const Model::ListAppImageConfigsRequest& request, const ListAppImageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists apps.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListApps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;

        /**
         * A Callable wrapper for ListApps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppsOutcomeCallable ListAppsCallable(const Model::ListAppsRequest& request) const;

        /**
         * An Async wrapper for ListApps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppsAsync(const Model::ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the artifacts in your account and their properties.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArtifactsOutcome ListArtifacts(const Model::ListArtifactsRequest& request) const;

        /**
         * A Callable wrapper for ListArtifacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListArtifactsOutcomeCallable ListArtifactsCallable(const Model::ListArtifactsRequest& request) const;

        /**
         * An Async wrapper for ListArtifacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListArtifactsAsync(const Model::ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the associations in your account and their properties.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssociationsOutcome ListAssociations(const Model::ListAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociationsOutcomeCallable ListAssociationsCallable(const Model::ListAssociationsRequest& request) const;

        /**
         * An Async wrapper for ListAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociationsAsync(const Model::ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Request a list of jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAutoMLJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAutoMLJobsOutcome ListAutoMLJobs(const Model::ListAutoMLJobsRequest& request) const;

        /**
         * A Callable wrapper for ListAutoMLJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAutoMLJobsOutcomeCallable ListAutoMLJobsCallable(const Model::ListAutoMLJobsRequest& request) const;

        /**
         * An Async wrapper for ListAutoMLJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAutoMLJobsAsync(const Model::ListAutoMLJobsRequest& request, const ListAutoMLJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the candidates created for the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCandidatesForAutoMLJob">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCandidatesForAutoMLJobOutcome ListCandidatesForAutoMLJob(const Model::ListCandidatesForAutoMLJobRequest& request) const;

        /**
         * A Callable wrapper for ListCandidatesForAutoMLJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCandidatesForAutoMLJobOutcomeCallable ListCandidatesForAutoMLJobCallable(const Model::ListCandidatesForAutoMLJobRequest& request) const;

        /**
         * An Async wrapper for ListCandidatesForAutoMLJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCandidatesForAutoMLJobAsync(const Model::ListCandidatesForAutoMLJobRequest& request, const ListCandidatesForAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the Git repositories in your account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCodeRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCodeRepositoriesOutcome ListCodeRepositories(const Model::ListCodeRepositoriesRequest& request) const;

        /**
         * A Callable wrapper for ListCodeRepositories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCodeRepositoriesOutcomeCallable ListCodeRepositoriesCallable(const Model::ListCodeRepositoriesRequest& request) const;

        /**
         * An Async wrapper for ListCodeRepositories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCodeRepositoriesAsync(const Model::ListCodeRepositoriesRequest& request, const ListCodeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists model compilation jobs that satisfy various filters.</p> <p>To create a
         * model compilation job, use <a>CreateCompilationJob</a>. To get information about
         * a particular model compilation job you have created, use
         * <a>DescribeCompilationJob</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCompilationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCompilationJobsOutcome ListCompilationJobs(const Model::ListCompilationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListCompilationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCompilationJobsOutcomeCallable ListCompilationJobsCallable(const Model::ListCompilationJobsRequest& request) const;

        /**
         * An Async wrapper for ListCompilationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCompilationJobsAsync(const Model::ListCompilationJobsRequest& request, const ListCompilationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the contexts in your account and their properties.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListContexts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContextsOutcome ListContexts(const Model::ListContextsRequest& request) const;

        /**
         * A Callable wrapper for ListContexts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContextsOutcomeCallable ListContextsCallable(const Model::ListContextsRequest& request) const;

        /**
         * An Async wrapper for ListContexts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContextsAsync(const Model::ListContextsRequest& request, const ListContextsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the data quality job definitions in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListDataQualityJobDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataQualityJobDefinitionsOutcome ListDataQualityJobDefinitions(const Model::ListDataQualityJobDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListDataQualityJobDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataQualityJobDefinitionsOutcomeCallable ListDataQualityJobDefinitionsCallable(const Model::ListDataQualityJobDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListDataQualityJobDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataQualityJobDefinitionsAsync(const Model::ListDataQualityJobDefinitionsRequest& request, const ListDataQualityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of devices in the fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListDeviceFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceFleetsOutcome ListDeviceFleets(const Model::ListDeviceFleetsRequest& request) const;

        /**
         * A Callable wrapper for ListDeviceFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceFleetsOutcomeCallable ListDeviceFleetsCallable(const Model::ListDeviceFleetsRequest& request) const;

        /**
         * An Async wrapper for ListDeviceFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeviceFleetsAsync(const Model::ListDeviceFleetsRequest& request, const ListDeviceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A list of devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicesOutcomeCallable ListDevicesCallable(const Model::ListDevicesRequest& request) const;

        /**
         * An Async wrapper for ListDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListDomains">AWS
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
         * <p>Lists all edge deployment plans.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEdgeDeploymentPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEdgeDeploymentPlansOutcome ListEdgeDeploymentPlans(const Model::ListEdgeDeploymentPlansRequest& request) const;

        /**
         * A Callable wrapper for ListEdgeDeploymentPlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEdgeDeploymentPlansOutcomeCallable ListEdgeDeploymentPlansCallable(const Model::ListEdgeDeploymentPlansRequest& request) const;

        /**
         * An Async wrapper for ListEdgeDeploymentPlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEdgeDeploymentPlansAsync(const Model::ListEdgeDeploymentPlansRequest& request, const ListEdgeDeploymentPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of edge packaging jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEdgePackagingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEdgePackagingJobsOutcome ListEdgePackagingJobs(const Model::ListEdgePackagingJobsRequest& request) const;

        /**
         * A Callable wrapper for ListEdgePackagingJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEdgePackagingJobsOutcomeCallable ListEdgePackagingJobsCallable(const Model::ListEdgePackagingJobsRequest& request) const;

        /**
         * An Async wrapper for ListEdgePackagingJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEdgePackagingJobsAsync(const Model::ListEdgePackagingJobsRequest& request, const ListEdgePackagingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists endpoint configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpointConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointConfigsOutcome ListEndpointConfigs(const Model::ListEndpointConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListEndpointConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEndpointConfigsOutcomeCallable ListEndpointConfigsCallable(const Model::ListEndpointConfigsRequest& request) const;

        /**
         * An Async wrapper for ListEndpointConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEndpointConfigsAsync(const Model::ListEndpointConfigsRequest& request, const ListEndpointConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointsOutcome ListEndpoints(const Model::ListEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEndpointsOutcomeCallable ListEndpointsCallable(const Model::ListEndpointsRequest& request) const;

        /**
         * An Async wrapper for ListEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEndpointsAsync(const Model::ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the experiments in your account. The list can be filtered to show
         * only experiments that were created in a specific time range. The list can be
         * sorted by experiment name or creation time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListExperiments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentsOutcome ListExperiments(const Model::ListExperimentsRequest& request) const;

        /**
         * A Callable wrapper for ListExperiments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExperimentsOutcomeCallable ListExperimentsCallable(const Model::ListExperimentsRequest& request) const;

        /**
         * An Async wrapper for ListExperiments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExperimentsAsync(const Model::ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List <code>FeatureGroup</code>s based on given filter and
         * order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListFeatureGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFeatureGroupsOutcome ListFeatureGroups(const Model::ListFeatureGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListFeatureGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFeatureGroupsOutcomeCallable ListFeatureGroupsCallable(const Model::ListFeatureGroupsRequest& request) const;

        /**
         * An Async wrapper for ListFeatureGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFeatureGroupsAsync(const Model::ListFeatureGroupsRequest& request, const ListFeatureGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the flow definitions in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListFlowDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowDefinitionsOutcome ListFlowDefinitions(const Model::ListFlowDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListFlowDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFlowDefinitionsOutcomeCallable ListFlowDefinitionsCallable(const Model::ListFlowDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListFlowDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFlowDefinitionsAsync(const Model::ListFlowDefinitionsRequest& request, const ListFlowDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List hub content versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHubContentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHubContentVersionsOutcome ListHubContentVersions(const Model::ListHubContentVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListHubContentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHubContentVersionsOutcomeCallable ListHubContentVersionsCallable(const Model::ListHubContentVersionsRequest& request) const;

        /**
         * An Async wrapper for ListHubContentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHubContentVersionsAsync(const Model::ListHubContentVersionsRequest& request, const ListHubContentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the contents of a hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHubContents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHubContentsOutcome ListHubContents(const Model::ListHubContentsRequest& request) const;

        /**
         * A Callable wrapper for ListHubContents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHubContentsOutcomeCallable ListHubContentsCallable(const Model::ListHubContentsRequest& request) const;

        /**
         * An Async wrapper for ListHubContents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHubContentsAsync(const Model::ListHubContentsRequest& request, const ListHubContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all existing hubs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHubs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHubsOutcome ListHubs(const Model::ListHubsRequest& request) const;

        /**
         * A Callable wrapper for ListHubs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHubsOutcomeCallable ListHubsCallable(const Model::ListHubsRequest& request) const;

        /**
         * An Async wrapper for ListHubs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHubsAsync(const Model::ListHubsRequest& request, const ListHubsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the human task user interfaces in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHumanTaskUis">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHumanTaskUisOutcome ListHumanTaskUis(const Model::ListHumanTaskUisRequest& request) const;

        /**
         * A Callable wrapper for ListHumanTaskUis that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHumanTaskUisOutcomeCallable ListHumanTaskUisCallable(const Model::ListHumanTaskUisRequest& request) const;

        /**
         * An Async wrapper for ListHumanTaskUis that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHumanTaskUisAsync(const Model::ListHumanTaskUisRequest& request, const ListHumanTaskUisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of <a>HyperParameterTuningJobSummary</a> objects that describe
         * the hyperparameter tuning jobs launched in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHyperParameterTuningJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHyperParameterTuningJobsOutcome ListHyperParameterTuningJobs(const Model::ListHyperParameterTuningJobsRequest& request) const;

        /**
         * A Callable wrapper for ListHyperParameterTuningJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHyperParameterTuningJobsOutcomeCallable ListHyperParameterTuningJobsCallable(const Model::ListHyperParameterTuningJobsRequest& request) const;

        /**
         * An Async wrapper for ListHyperParameterTuningJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHyperParameterTuningJobsAsync(const Model::ListHyperParameterTuningJobsRequest& request, const ListHyperParameterTuningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the versions of a specified image and their properties. The list can be
         * filtered by creation time or modified time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListImageVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImageVersionsOutcome ListImageVersions(const Model::ListImageVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListImageVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImageVersionsOutcomeCallable ListImageVersionsCallable(const Model::ListImageVersionsRequest& request) const;

        /**
         * An Async wrapper for ListImageVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImageVersionsAsync(const Model::ListImageVersionsRequest& request, const ListImageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the images in your account and their properties. The list can be
         * filtered by creation time or modified time, and whether the image name contains
         * a specified string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagesOutcome ListImages(const Model::ListImagesRequest& request) const;

        /**
         * A Callable wrapper for ListImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImagesOutcomeCallable ListImagesCallable(const Model::ListImagesRequest& request) const;

        /**
         * An Async wrapper for ListImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImagesAsync(const Model::ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of all inference experiments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListInferenceExperiments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceExperimentsOutcome ListInferenceExperiments(const Model::ListInferenceExperimentsRequest& request) const;

        /**
         * A Callable wrapper for ListInferenceExperiments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInferenceExperimentsOutcomeCallable ListInferenceExperimentsCallable(const Model::ListInferenceExperimentsRequest& request) const;

        /**
         * An Async wrapper for ListInferenceExperiments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInferenceExperimentsAsync(const Model::ListInferenceExperimentsRequest& request, const ListInferenceExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the subtasks for an Inference Recommender job.</p> <p>The
         * supported subtasks are benchmarks, which evaluate the performance of your model
         * on different instance types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListInferenceRecommendationsJobSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceRecommendationsJobStepsOutcome ListInferenceRecommendationsJobSteps(const Model::ListInferenceRecommendationsJobStepsRequest& request) const;

        /**
         * A Callable wrapper for ListInferenceRecommendationsJobSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInferenceRecommendationsJobStepsOutcomeCallable ListInferenceRecommendationsJobStepsCallable(const Model::ListInferenceRecommendationsJobStepsRequest& request) const;

        /**
         * An Async wrapper for ListInferenceRecommendationsJobSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInferenceRecommendationsJobStepsAsync(const Model::ListInferenceRecommendationsJobStepsRequest& request, const ListInferenceRecommendationsJobStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists recommendation jobs that satisfy various filters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListInferenceRecommendationsJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInferenceRecommendationsJobsOutcome ListInferenceRecommendationsJobs(const Model::ListInferenceRecommendationsJobsRequest& request) const;

        /**
         * A Callable wrapper for ListInferenceRecommendationsJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInferenceRecommendationsJobsOutcomeCallable ListInferenceRecommendationsJobsCallable(const Model::ListInferenceRecommendationsJobsRequest& request) const;

        /**
         * An Async wrapper for ListInferenceRecommendationsJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInferenceRecommendationsJobsAsync(const Model::ListInferenceRecommendationsJobsRequest& request, const ListInferenceRecommendationsJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of labeling jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListLabelingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLabelingJobsOutcome ListLabelingJobs(const Model::ListLabelingJobsRequest& request) const;

        /**
         * A Callable wrapper for ListLabelingJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLabelingJobsOutcomeCallable ListLabelingJobsCallable(const Model::ListLabelingJobsRequest& request) const;

        /**
         * An Async wrapper for ListLabelingJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLabelingJobsAsync(const Model::ListLabelingJobsRequest& request, const ListLabelingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of labeling jobs assigned to a specified work team.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListLabelingJobsForWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLabelingJobsForWorkteamOutcome ListLabelingJobsForWorkteam(const Model::ListLabelingJobsForWorkteamRequest& request) const;

        /**
         * A Callable wrapper for ListLabelingJobsForWorkteam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLabelingJobsForWorkteamOutcomeCallable ListLabelingJobsForWorkteamCallable(const Model::ListLabelingJobsForWorkteamRequest& request) const;

        /**
         * An Async wrapper for ListLabelingJobsForWorkteam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLabelingJobsForWorkteamAsync(const Model::ListLabelingJobsForWorkteamRequest& request, const ListLabelingJobsForWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A list of lineage groups shared with your Amazon Web Services account. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/xaccount-lineage-tracking.html">
         * Cross-Account Lineage Tracking </a> in the <i>Amazon SageMaker Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListLineageGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLineageGroupsOutcome ListLineageGroups(const Model::ListLineageGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListLineageGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLineageGroupsOutcomeCallable ListLineageGroupsCallable(const Model::ListLineageGroupsRequest& request) const;

        /**
         * An Async wrapper for ListLineageGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLineageGroupsAsync(const Model::ListLineageGroupsRequest& request, const ListLineageGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists model bias jobs definitions that satisfy various filters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelBiasJobDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelBiasJobDefinitionsOutcome ListModelBiasJobDefinitions(const Model::ListModelBiasJobDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListModelBiasJobDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelBiasJobDefinitionsOutcomeCallable ListModelBiasJobDefinitionsCallable(const Model::ListModelBiasJobDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListModelBiasJobDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelBiasJobDefinitionsAsync(const Model::ListModelBiasJobDefinitionsRequest& request, const ListModelBiasJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the export jobs for the Amazon SageMaker Model Card.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelCardExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelCardExportJobsOutcome ListModelCardExportJobs(const Model::ListModelCardExportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListModelCardExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelCardExportJobsOutcomeCallable ListModelCardExportJobsCallable(const Model::ListModelCardExportJobsRequest& request) const;

        /**
         * An Async wrapper for ListModelCardExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelCardExportJobsAsync(const Model::ListModelCardExportJobsRequest& request, const ListModelCardExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List existing versions of an Amazon SageMaker Model Card.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelCardVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelCardVersionsOutcome ListModelCardVersions(const Model::ListModelCardVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListModelCardVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelCardVersionsOutcomeCallable ListModelCardVersionsCallable(const Model::ListModelCardVersionsRequest& request) const;

        /**
         * An Async wrapper for ListModelCardVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelCardVersionsAsync(const Model::ListModelCardVersionsRequest& request, const ListModelCardVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List existing model cards.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelCards">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelCardsOutcome ListModelCards(const Model::ListModelCardsRequest& request) const;

        /**
         * A Callable wrapper for ListModelCards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelCardsOutcomeCallable ListModelCardsCallable(const Model::ListModelCardsRequest& request) const;

        /**
         * An Async wrapper for ListModelCards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelCardsAsync(const Model::ListModelCardsRequest& request, const ListModelCardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists model explainability job definitions that satisfy various
         * filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelExplainabilityJobDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelExplainabilityJobDefinitionsOutcome ListModelExplainabilityJobDefinitions(const Model::ListModelExplainabilityJobDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListModelExplainabilityJobDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelExplainabilityJobDefinitionsOutcomeCallable ListModelExplainabilityJobDefinitionsCallable(const Model::ListModelExplainabilityJobDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListModelExplainabilityJobDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelExplainabilityJobDefinitionsAsync(const Model::ListModelExplainabilityJobDefinitionsRequest& request, const ListModelExplainabilityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the domain, framework, task, and model name of standard machine
         * learning models found in common model zoos.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelMetadataOutcome ListModelMetadata(const Model::ListModelMetadataRequest& request) const;

        /**
         * A Callable wrapper for ListModelMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelMetadataOutcomeCallable ListModelMetadataCallable(const Model::ListModelMetadataRequest& request) const;

        /**
         * An Async wrapper for ListModelMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelMetadataAsync(const Model::ListModelMetadataRequest& request, const ListModelMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the model groups in your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelPackageGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelPackageGroupsOutcome ListModelPackageGroups(const Model::ListModelPackageGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListModelPackageGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelPackageGroupsOutcomeCallable ListModelPackageGroupsCallable(const Model::ListModelPackageGroupsRequest& request) const;

        /**
         * An Async wrapper for ListModelPackageGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelPackageGroupsAsync(const Model::ListModelPackageGroupsRequest& request, const ListModelPackageGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the model packages that have been created.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelPackagesOutcome ListModelPackages(const Model::ListModelPackagesRequest& request) const;

        /**
         * A Callable wrapper for ListModelPackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelPackagesOutcomeCallable ListModelPackagesCallable(const Model::ListModelPackagesRequest& request) const;

        /**
         * An Async wrapper for ListModelPackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelPackagesAsync(const Model::ListModelPackagesRequest& request, const ListModelPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of model quality monitoring job definitions in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelQualityJobDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelQualityJobDefinitionsOutcome ListModelQualityJobDefinitions(const Model::ListModelQualityJobDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListModelQualityJobDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelQualityJobDefinitionsOutcomeCallable ListModelQualityJobDefinitionsCallable(const Model::ListModelQualityJobDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListModelQualityJobDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelQualityJobDefinitionsAsync(const Model::ListModelQualityJobDefinitionsRequest& request, const ListModelQualityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists models created with the <code>CreateModel</code> API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelsOutcome ListModels(const Model::ListModelsRequest& request) const;

        /**
         * A Callable wrapper for ListModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelsOutcomeCallable ListModelsCallable(const Model::ListModelsRequest& request) const;

        /**
         * An Async wrapper for ListModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelsAsync(const Model::ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of past alerts in a model monitoring schedule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListMonitoringAlertHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitoringAlertHistoryOutcome ListMonitoringAlertHistory(const Model::ListMonitoringAlertHistoryRequest& request) const;

        /**
         * A Callable wrapper for ListMonitoringAlertHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMonitoringAlertHistoryOutcomeCallable ListMonitoringAlertHistoryCallable(const Model::ListMonitoringAlertHistoryRequest& request) const;

        /**
         * An Async wrapper for ListMonitoringAlertHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMonitoringAlertHistoryAsync(const Model::ListMonitoringAlertHistoryRequest& request, const ListMonitoringAlertHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the alerts for a single monitoring schedule.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListMonitoringAlerts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitoringAlertsOutcome ListMonitoringAlerts(const Model::ListMonitoringAlertsRequest& request) const;

        /**
         * A Callable wrapper for ListMonitoringAlerts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMonitoringAlertsOutcomeCallable ListMonitoringAlertsCallable(const Model::ListMonitoringAlertsRequest& request) const;

        /**
         * An Async wrapper for ListMonitoringAlerts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMonitoringAlertsAsync(const Model::ListMonitoringAlertsRequest& request, const ListMonitoringAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns list of all monitoring job executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListMonitoringExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitoringExecutionsOutcome ListMonitoringExecutions(const Model::ListMonitoringExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListMonitoringExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMonitoringExecutionsOutcomeCallable ListMonitoringExecutionsCallable(const Model::ListMonitoringExecutionsRequest& request) const;

        /**
         * An Async wrapper for ListMonitoringExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMonitoringExecutionsAsync(const Model::ListMonitoringExecutionsRequest& request, const ListMonitoringExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns list of all monitoring schedules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListMonitoringSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitoringSchedulesOutcome ListMonitoringSchedules(const Model::ListMonitoringSchedulesRequest& request) const;

        /**
         * A Callable wrapper for ListMonitoringSchedules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMonitoringSchedulesOutcomeCallable ListMonitoringSchedulesCallable(const Model::ListMonitoringSchedulesRequest& request) const;

        /**
         * An Async wrapper for ListMonitoringSchedules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMonitoringSchedulesAsync(const Model::ListMonitoringSchedulesRequest& request, const ListMonitoringSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists notebook instance lifestyle configurations created with the
         * <a>CreateNotebookInstanceLifecycleConfig</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstanceLifecycleConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotebookInstanceLifecycleConfigsOutcome ListNotebookInstanceLifecycleConfigs(const Model::ListNotebookInstanceLifecycleConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListNotebookInstanceLifecycleConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotebookInstanceLifecycleConfigsOutcomeCallable ListNotebookInstanceLifecycleConfigsCallable(const Model::ListNotebookInstanceLifecycleConfigsRequest& request) const;

        /**
         * An Async wrapper for ListNotebookInstanceLifecycleConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotebookInstanceLifecycleConfigsAsync(const Model::ListNotebookInstanceLifecycleConfigsRequest& request, const ListNotebookInstanceLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the SageMaker notebook instances in the requester's account
         * in an Amazon Web Services Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotebookInstancesOutcome ListNotebookInstances(const Model::ListNotebookInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListNotebookInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotebookInstancesOutcomeCallable ListNotebookInstancesCallable(const Model::ListNotebookInstancesRequest& request) const;

        /**
         * An Async wrapper for ListNotebookInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotebookInstancesAsync(const Model::ListNotebookInstancesRequest& request, const ListNotebookInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of <code>PipeLineExecutionStep</code> objects.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListPipelineExecutionSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelineExecutionStepsOutcome ListPipelineExecutionSteps(const Model::ListPipelineExecutionStepsRequest& request) const;

        /**
         * A Callable wrapper for ListPipelineExecutionSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPipelineExecutionStepsOutcomeCallable ListPipelineExecutionStepsCallable(const Model::ListPipelineExecutionStepsRequest& request) const;

        /**
         * An Async wrapper for ListPipelineExecutionSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPipelineExecutionStepsAsync(const Model::ListPipelineExecutionStepsRequest& request, const ListPipelineExecutionStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the pipeline executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListPipelineExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelineExecutionsOutcome ListPipelineExecutions(const Model::ListPipelineExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListPipelineExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPipelineExecutionsOutcomeCallable ListPipelineExecutionsCallable(const Model::ListPipelineExecutionsRequest& request) const;

        /**
         * An Async wrapper for ListPipelineExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPipelineExecutionsAsync(const Model::ListPipelineExecutionsRequest& request, const ListPipelineExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of parameters for a pipeline execution.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListPipelineParametersForExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelineParametersForExecutionOutcome ListPipelineParametersForExecution(const Model::ListPipelineParametersForExecutionRequest& request) const;

        /**
         * A Callable wrapper for ListPipelineParametersForExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPipelineParametersForExecutionOutcomeCallable ListPipelineParametersForExecutionCallable(const Model::ListPipelineParametersForExecutionRequest& request) const;

        /**
         * An Async wrapper for ListPipelineParametersForExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPipelineParametersForExecutionAsync(const Model::ListPipelineParametersForExecutionRequest& request, const ListPipelineParametersForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListPipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const Model::ListPipelinesRequest& request) const;

        /**
         * An Async wrapper for ListPipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPipelinesAsync(const Model::ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists processing jobs that satisfy various filters.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListProcessingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProcessingJobsOutcome ListProcessingJobs(const Model::ListProcessingJobsRequest& request) const;

        /**
         * A Callable wrapper for ListProcessingJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProcessingJobsOutcomeCallable ListProcessingJobsCallable(const Model::ListProcessingJobsRequest& request) const;

        /**
         * An Async wrapper for ListProcessingJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProcessingJobsAsync(const Model::ListProcessingJobsRequest& request, const ListProcessingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the projects in an Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * A Callable wrapper for ListProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists spaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListSpaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSpacesOutcome ListSpaces(const Model::ListSpacesRequest& request) const;

        /**
         * A Callable wrapper for ListSpaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSpacesOutcomeCallable ListSpacesCallable(const Model::ListSpacesRequest& request) const;

        /**
         * An Async wrapper for ListSpaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSpacesAsync(const Model::ListSpacesRequest& request, const ListSpacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists devices allocated to the stage, containing detailed device information
         * and deployment status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListStageDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStageDevicesOutcome ListStageDevices(const Model::ListStageDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListStageDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStageDevicesOutcomeCallable ListStageDevicesCallable(const Model::ListStageDevicesRequest& request) const;

        /**
         * An Async wrapper for ListStageDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStageDevicesAsync(const Model::ListStageDevicesRequest& request, const ListStageDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Studio Lifecycle Configurations in your Amazon Web Services
         * Account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListStudioLifecycleConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudioLifecycleConfigsOutcome ListStudioLifecycleConfigs(const Model::ListStudioLifecycleConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListStudioLifecycleConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStudioLifecycleConfigsOutcomeCallable ListStudioLifecycleConfigsCallable(const Model::ListStudioLifecycleConfigsRequest& request) const;

        /**
         * An Async wrapper for ListStudioLifecycleConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStudioLifecycleConfigsAsync(const Model::ListStudioLifecycleConfigsRequest& request, const ListStudioLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the work teams that you are subscribed to in the Amazon Web
         * Services Marketplace. The list may be empty if no work team satisfies the filter
         * specified in the <code>NameContains</code> parameter.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListSubscribedWorkteams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscribedWorkteamsOutcome ListSubscribedWorkteams(const Model::ListSubscribedWorkteamsRequest& request) const;

        /**
         * A Callable wrapper for ListSubscribedWorkteams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSubscribedWorkteamsOutcomeCallable ListSubscribedWorkteamsCallable(const Model::ListSubscribedWorkteamsRequest& request) const;

        /**
         * An Async wrapper for ListSubscribedWorkteams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSubscribedWorkteamsAsync(const Model::ListSubscribedWorkteamsRequest& request, const ListSubscribedWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the tags for the specified SageMaker resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTags">AWS
         * API Reference</a></p>
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
         * <p>Lists training jobs.</p>  <p>When <code>StatusEquals</code> and
         * <code>MaxResults</code> are set at the same time, the <code>MaxResults</code>
         * number of training jobs are first retrieved ignoring the
         * <code>StatusEquals</code> parameter and then they are filtered by the
         * <code>StatusEquals</code> parameter, which is returned as a response.</p> <p>For
         * example, if <code>ListTrainingJobs</code> is invoked with the following
         * parameters:</p> <p> <code>{ ... MaxResults: 100, StatusEquals: InProgress ...
         * }</code> </p> <p>First, 100 trainings jobs with any status, including those
         * other than <code>InProgress</code>, are selected (sorted according to the
         * creation time, from the most current to the oldest). Next, those with a status
         * of <code>InProgress</code> are returned.</p> <p>You can quickly test the API
         * using the following Amazon Web Services CLI code.</p> <p> <code>aws sagemaker
         * list-training-jobs --max-results 100 --status-equals InProgress</code> </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrainingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrainingJobsOutcome ListTrainingJobs(const Model::ListTrainingJobsRequest& request) const;

        /**
         * A Callable wrapper for ListTrainingJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrainingJobsOutcomeCallable ListTrainingJobsCallable(const Model::ListTrainingJobsRequest& request) const;

        /**
         * An Async wrapper for ListTrainingJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrainingJobsAsync(const Model::ListTrainingJobsRequest& request, const ListTrainingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of <a>TrainingJobSummary</a> objects that describe the training
         * jobs that a hyperparameter tuning job launched.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrainingJobsForHyperParameterTuningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrainingJobsForHyperParameterTuningJobOutcome ListTrainingJobsForHyperParameterTuningJob(const Model::ListTrainingJobsForHyperParameterTuningJobRequest& request) const;

        /**
         * A Callable wrapper for ListTrainingJobsForHyperParameterTuningJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrainingJobsForHyperParameterTuningJobOutcomeCallable ListTrainingJobsForHyperParameterTuningJobCallable(const Model::ListTrainingJobsForHyperParameterTuningJobRequest& request) const;

        /**
         * An Async wrapper for ListTrainingJobsForHyperParameterTuningJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrainingJobsForHyperParameterTuningJobAsync(const Model::ListTrainingJobsForHyperParameterTuningJobRequest& request, const ListTrainingJobsForHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists transform jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTransformJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTransformJobsOutcome ListTransformJobs(const Model::ListTransformJobsRequest& request) const;

        /**
         * A Callable wrapper for ListTransformJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTransformJobsOutcomeCallable ListTransformJobsCallable(const Model::ListTransformJobsRequest& request) const;

        /**
         * An Async wrapper for ListTransformJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTransformJobsAsync(const Model::ListTransformJobsRequest& request, const ListTransformJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the trial components in your account. You can sort the list by trial
         * component name or creation time. You can filter the list to show only components
         * that were created in a specific time range. You can also filter on one of the
         * following:</p> <ul> <li> <p> <code>ExperimentName</code> </p> </li> <li> <p>
         * <code>SourceArn</code> </p> </li> <li> <p> <code>TrialName</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrialComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrialComponentsOutcome ListTrialComponents(const Model::ListTrialComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListTrialComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrialComponentsOutcomeCallable ListTrialComponentsCallable(const Model::ListTrialComponentsRequest& request) const;

        /**
         * An Async wrapper for ListTrialComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrialComponentsAsync(const Model::ListTrialComponentsRequest& request, const ListTrialComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the trials in your account. Specify an experiment name to limit the
         * list to the trials that are part of that experiment. Specify a trial component
         * name to limit the list to the trials that associated with that trial component.
         * The list can be filtered to show only trials that were created in a specific
         * time range. The list can be sorted by trial name or creation time.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrials">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrialsOutcome ListTrials(const Model::ListTrialsRequest& request) const;

        /**
         * A Callable wrapper for ListTrials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrialsOutcomeCallable ListTrialsCallable(const Model::ListTrialsRequest& request) const;

        /**
         * An Async wrapper for ListTrials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrialsAsync(const Model::ListTrialsRequest& request, const ListTrialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists user profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListUserProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserProfilesOutcome ListUserProfiles(const Model::ListUserProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListUserProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserProfilesOutcomeCallable ListUserProfilesCallable(const Model::ListUserProfilesRequest& request) const;

        /**
         * An Async wrapper for ListUserProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserProfilesAsync(const Model::ListUserProfilesRequest& request, const ListUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to list all private and vendor workforces in an Amazon Web
         * Services Region. Note that you can only have one private workforce per Amazon
         * Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListWorkforces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkforcesOutcome ListWorkforces(const Model::ListWorkforcesRequest& request) const;

        /**
         * A Callable wrapper for ListWorkforces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkforcesOutcomeCallable ListWorkforcesCallable(const Model::ListWorkforcesRequest& request) const;

        /**
         * An Async wrapper for ListWorkforces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkforcesAsync(const Model::ListWorkforcesRequest& request, const ListWorkforcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of private work teams that you have defined in a region. The list
         * may be empty if no work team satisfies the filter specified in the
         * <code>NameContains</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListWorkteams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkteamsOutcome ListWorkteams(const Model::ListWorkteamsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkteams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkteamsOutcomeCallable ListWorkteamsCallable(const Model::ListWorkteamsRequest& request) const;

        /**
         * An Async wrapper for ListWorkteams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkteamsAsync(const Model::ListWorkteamsRequest& request, const ListWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a resouce policy to control access to a model group. For information
         * about resoure policies, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_identity-vs-resource.html">Identity-based
         * policies and resource-based policies</a> in the <i>Amazon Web Services Identity
         * and Access Management User Guide.</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PutModelPackageGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutModelPackageGroupPolicyOutcome PutModelPackageGroupPolicy(const Model::PutModelPackageGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutModelPackageGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutModelPackageGroupPolicyOutcomeCallable PutModelPackageGroupPolicyCallable(const Model::PutModelPackageGroupPolicyRequest& request) const;

        /**
         * An Async wrapper for PutModelPackageGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutModelPackageGroupPolicyAsync(const Model::PutModelPackageGroupPolicyRequest& request, const PutModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this action to inspect your lineage and discover relationships between
         * entities. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/querying-lineage-entities.html">
         * Querying Lineage Entities</a> in the <i>Amazon SageMaker Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/QueryLineage">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryLineageOutcome QueryLineage(const Model::QueryLineageRequest& request) const;

        /**
         * A Callable wrapper for QueryLineage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::QueryLineageOutcomeCallable QueryLineageCallable(const Model::QueryLineageRequest& request) const;

        /**
         * An Async wrapper for QueryLineage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QueryLineageAsync(const Model::QueryLineageRequest& request, const QueryLineageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Register devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RegisterDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDevicesOutcome RegisterDevices(const Model::RegisterDevicesRequest& request) const;

        /**
         * A Callable wrapper for RegisterDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterDevicesOutcomeCallable RegisterDevicesCallable(const Model::RegisterDevicesRequest& request) const;

        /**
         * An Async wrapper for RegisterDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterDevicesAsync(const Model::RegisterDevicesRequest& request, const RegisterDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Renders the UI template so that you can preview the worker's experience.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RenderUiTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::RenderUiTemplateOutcome RenderUiTemplate(const Model::RenderUiTemplateRequest& request) const;

        /**
         * A Callable wrapper for RenderUiTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RenderUiTemplateOutcomeCallable RenderUiTemplateCallable(const Model::RenderUiTemplateRequest& request) const;

        /**
         * An Async wrapper for RenderUiTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RenderUiTemplateAsync(const Model::RenderUiTemplateRequest& request, const RenderUiTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retry the execution of the pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RetryPipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryPipelineExecutionOutcome RetryPipelineExecution(const Model::RetryPipelineExecutionRequest& request) const;

        /**
         * A Callable wrapper for RetryPipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetryPipelineExecutionOutcomeCallable RetryPipelineExecutionCallable(const Model::RetryPipelineExecutionRequest& request) const;

        /**
         * An Async wrapper for RetryPipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetryPipelineExecutionAsync(const Model::RetryPipelineExecutionRequest& request, const RetryPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Finds Amazon SageMaker resources that match a search query. Matching
         * resources are returned as a list of <code>SearchRecord</code> objects in the
         * response. You can sort the search results by any resource property in a
         * ascending or descending order.</p> <p>You can query against the following value
         * types: numeric, text, Boolean, and timestamp.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Search">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchOutcome Search(const Model::SearchRequest& request) const;

        /**
         * A Callable wrapper for Search that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchOutcomeCallable SearchCallable(const Model::SearchRequest& request) const;

        /**
         * An Async wrapper for Search that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchAsync(const Model::SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Notifies the pipeline that the execution of a callback step failed, along
         * with a message describing why. When a callback step is run, the pipeline
         * generates a callback token and includes the token in a message sent to Amazon
         * Simple Queue Service (Amazon SQS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SendPipelineExecutionStepFailure">AWS
         * API Reference</a></p>
         */
        virtual Model::SendPipelineExecutionStepFailureOutcome SendPipelineExecutionStepFailure(const Model::SendPipelineExecutionStepFailureRequest& request) const;

        /**
         * A Callable wrapper for SendPipelineExecutionStepFailure that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendPipelineExecutionStepFailureOutcomeCallable SendPipelineExecutionStepFailureCallable(const Model::SendPipelineExecutionStepFailureRequest& request) const;

        /**
         * An Async wrapper for SendPipelineExecutionStepFailure that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendPipelineExecutionStepFailureAsync(const Model::SendPipelineExecutionStepFailureRequest& request, const SendPipelineExecutionStepFailureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Notifies the pipeline that the execution of a callback step succeeded and
         * provides a list of the step's output parameters. When a callback step is run,
         * the pipeline generates a callback token and includes the token in a message sent
         * to Amazon Simple Queue Service (Amazon SQS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SendPipelineExecutionStepSuccess">AWS
         * API Reference</a></p>
         */
        virtual Model::SendPipelineExecutionStepSuccessOutcome SendPipelineExecutionStepSuccess(const Model::SendPipelineExecutionStepSuccessRequest& request) const;

        /**
         * A Callable wrapper for SendPipelineExecutionStepSuccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendPipelineExecutionStepSuccessOutcomeCallable SendPipelineExecutionStepSuccessCallable(const Model::SendPipelineExecutionStepSuccessRequest& request) const;

        /**
         * An Async wrapper for SendPipelineExecutionStepSuccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendPipelineExecutionStepSuccessAsync(const Model::SendPipelineExecutionStepSuccessRequest& request, const SendPipelineExecutionStepSuccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a stage in an edge deployment plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartEdgeDeploymentStage">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEdgeDeploymentStageOutcome StartEdgeDeploymentStage(const Model::StartEdgeDeploymentStageRequest& request) const;

        /**
         * A Callable wrapper for StartEdgeDeploymentStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartEdgeDeploymentStageOutcomeCallable StartEdgeDeploymentStageCallable(const Model::StartEdgeDeploymentStageRequest& request) const;

        /**
         * An Async wrapper for StartEdgeDeploymentStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartEdgeDeploymentStageAsync(const Model::StartEdgeDeploymentStageRequest& request, const StartEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an inference experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartInferenceExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInferenceExperimentOutcome StartInferenceExperiment(const Model::StartInferenceExperimentRequest& request) const;

        /**
         * A Callable wrapper for StartInferenceExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartInferenceExperimentOutcomeCallable StartInferenceExperimentCallable(const Model::StartInferenceExperimentRequest& request) const;

        /**
         * An Async wrapper for StartInferenceExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartInferenceExperimentAsync(const Model::StartInferenceExperimentRequest& request, const StartInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a previously stopped monitoring schedule.</p>  <p>By default,
         * when you successfully create a new schedule, the status of a monitoring schedule
         * is <code>scheduled</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMonitoringScheduleOutcome StartMonitoringSchedule(const Model::StartMonitoringScheduleRequest& request) const;

        /**
         * A Callable wrapper for StartMonitoringSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMonitoringScheduleOutcomeCallable StartMonitoringScheduleCallable(const Model::StartMonitoringScheduleRequest& request) const;

        /**
         * An Async wrapper for StartMonitoringSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMonitoringScheduleAsync(const Model::StartMonitoringScheduleRequest& request, const StartMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Launches an ML compute instance with the latest version of the libraries and
         * attaches your ML storage volume. After configuring the notebook instance,
         * SageMaker sets the notebook instance status to <code>InService</code>. A
         * notebook instance's status must be <code>InService</code> before you can connect
         * to your Jupyter notebook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartNotebookInstanceOutcome StartNotebookInstance(const Model::StartNotebookInstanceRequest& request) const;

        /**
         * A Callable wrapper for StartNotebookInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartNotebookInstanceOutcomeCallable StartNotebookInstanceCallable(const Model::StartNotebookInstanceRequest& request) const;

        /**
         * An Async wrapper for StartNotebookInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartNotebookInstanceAsync(const Model::StartNotebookInstanceRequest& request, const StartNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a pipeline execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartPipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPipelineExecutionOutcome StartPipelineExecution(const Model::StartPipelineExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartPipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartPipelineExecutionOutcomeCallable StartPipelineExecutionCallable(const Model::StartPipelineExecutionRequest& request) const;

        /**
         * An Async wrapper for StartPipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartPipelineExecutionAsync(const Model::StartPipelineExecutionRequest& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A method for forcing the termination of a running job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopAutoMLJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAutoMLJobOutcome StopAutoMLJob(const Model::StopAutoMLJobRequest& request) const;

        /**
         * A Callable wrapper for StopAutoMLJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopAutoMLJobOutcomeCallable StopAutoMLJobCallable(const Model::StopAutoMLJobRequest& request) const;

        /**
         * An Async wrapper for StopAutoMLJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopAutoMLJobAsync(const Model::StopAutoMLJobRequest& request, const StopAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a model compilation job.</p> <p> To stop a job, Amazon SageMaker sends
         * the algorithm the SIGTERM signal. This gracefully shuts the job down. If the job
         * hasn't stopped, it sends the SIGKILL signal.</p> <p>When it receives a
         * <code>StopCompilationJob</code> request, Amazon SageMaker changes the
         * <a>CompilationJobSummary$CompilationJobStatus</a> of the job to
         * <code>Stopping</code>. After Amazon SageMaker stops the job, it sets the
         * <a>CompilationJobSummary$CompilationJobStatus</a> to <code>Stopped</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopCompilationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCompilationJobOutcome StopCompilationJob(const Model::StopCompilationJobRequest& request) const;

        /**
         * A Callable wrapper for StopCompilationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopCompilationJobOutcomeCallable StopCompilationJobCallable(const Model::StopCompilationJobRequest& request) const;

        /**
         * An Async wrapper for StopCompilationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopCompilationJobAsync(const Model::StopCompilationJobRequest& request, const StopCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a stage in an edge deployment plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopEdgeDeploymentStage">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEdgeDeploymentStageOutcome StopEdgeDeploymentStage(const Model::StopEdgeDeploymentStageRequest& request) const;

        /**
         * A Callable wrapper for StopEdgeDeploymentStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopEdgeDeploymentStageOutcomeCallable StopEdgeDeploymentStageCallable(const Model::StopEdgeDeploymentStageRequest& request) const;

        /**
         * An Async wrapper for StopEdgeDeploymentStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopEdgeDeploymentStageAsync(const Model::StopEdgeDeploymentStageRequest& request, const StopEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Request to stop an edge packaging job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopEdgePackagingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEdgePackagingJobOutcome StopEdgePackagingJob(const Model::StopEdgePackagingJobRequest& request) const;

        /**
         * A Callable wrapper for StopEdgePackagingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopEdgePackagingJobOutcomeCallable StopEdgePackagingJobCallable(const Model::StopEdgePackagingJobRequest& request) const;

        /**
         * An Async wrapper for StopEdgePackagingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopEdgePackagingJobAsync(const Model::StopEdgePackagingJobRequest& request, const StopEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a running hyperparameter tuning job and all running training jobs that
         * the tuning job launched.</p> <p>All model artifacts output from the training
         * jobs are stored in Amazon Simple Storage Service (Amazon S3). All data that the
         * training jobs write to Amazon CloudWatch Logs are still available in CloudWatch.
         * After the tuning job moves to the <code>Stopped</code> state, it releases all
         * reserved resources for the tuning job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopHyperParameterTuningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopHyperParameterTuningJobOutcome StopHyperParameterTuningJob(const Model::StopHyperParameterTuningJobRequest& request) const;

        /**
         * A Callable wrapper for StopHyperParameterTuningJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopHyperParameterTuningJobOutcomeCallable StopHyperParameterTuningJobCallable(const Model::StopHyperParameterTuningJobRequest& request) const;

        /**
         * An Async wrapper for StopHyperParameterTuningJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopHyperParameterTuningJobAsync(const Model::StopHyperParameterTuningJobRequest& request, const StopHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an inference experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopInferenceExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInferenceExperimentOutcome StopInferenceExperiment(const Model::StopInferenceExperimentRequest& request) const;

        /**
         * A Callable wrapper for StopInferenceExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopInferenceExperimentOutcomeCallable StopInferenceExperimentCallable(const Model::StopInferenceExperimentRequest& request) const;

        /**
         * An Async wrapper for StopInferenceExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopInferenceExperimentAsync(const Model::StopInferenceExperimentRequest& request, const StopInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an Inference Recommender job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopInferenceRecommendationsJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInferenceRecommendationsJobOutcome StopInferenceRecommendationsJob(const Model::StopInferenceRecommendationsJobRequest& request) const;

        /**
         * A Callable wrapper for StopInferenceRecommendationsJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopInferenceRecommendationsJobOutcomeCallable StopInferenceRecommendationsJobCallable(const Model::StopInferenceRecommendationsJobRequest& request) const;

        /**
         * An Async wrapper for StopInferenceRecommendationsJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopInferenceRecommendationsJobAsync(const Model::StopInferenceRecommendationsJobRequest& request, const StopInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a running labeling job. A job that is stopped cannot be restarted. Any
         * results obtained before the job is stopped are placed in the Amazon S3 output
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopLabelingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopLabelingJobOutcome StopLabelingJob(const Model::StopLabelingJobRequest& request) const;

        /**
         * A Callable wrapper for StopLabelingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopLabelingJobOutcomeCallable StopLabelingJobCallable(const Model::StopLabelingJobRequest& request) const;

        /**
         * An Async wrapper for StopLabelingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopLabelingJobAsync(const Model::StopLabelingJobRequest& request, const StopLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a previously started monitoring schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMonitoringScheduleOutcome StopMonitoringSchedule(const Model::StopMonitoringScheduleRequest& request) const;

        /**
         * A Callable wrapper for StopMonitoringSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopMonitoringScheduleOutcomeCallable StopMonitoringScheduleCallable(const Model::StopMonitoringScheduleRequest& request) const;

        /**
         * An Async wrapper for StopMonitoringSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopMonitoringScheduleAsync(const Model::StopMonitoringScheduleRequest& request, const StopMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Terminates the ML compute instance. Before terminating the instance,
         * SageMaker disconnects the ML storage volume from it. SageMaker preserves the ML
         * storage volume. SageMaker stops charging you for the ML compute instance when
         * you call <code>StopNotebookInstance</code>.</p> <p>To access data on the ML
         * storage volume for a notebook instance that has been terminated, call the
         * <code>StartNotebookInstance</code> API. <code>StartNotebookInstance</code>
         * launches another ML compute instance, configures it, and attaches the preserved
         * ML storage volume so you can continue your work. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StopNotebookInstanceOutcome StopNotebookInstance(const Model::StopNotebookInstanceRequest& request) const;

        /**
         * A Callable wrapper for StopNotebookInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopNotebookInstanceOutcomeCallable StopNotebookInstanceCallable(const Model::StopNotebookInstanceRequest& request) const;

        /**
         * An Async wrapper for StopNotebookInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopNotebookInstanceAsync(const Model::StopNotebookInstanceRequest& request, const StopNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a pipeline execution.</p> <p> <b>Callback Step</b> </p> <p>A pipeline
         * execution won't stop while a callback step is running. When you call
         * <code>StopPipelineExecution</code> on a pipeline execution with a running
         * callback step, SageMaker Pipelines sends an additional Amazon SQS message to the
         * specified SQS queue. The body of the SQS message contains a "Status" field which
         * is set to "Stopping".</p> <p>You should add logic to your Amazon SQS message
         * consumer to take any needed action (for example, resource cleanup) upon receipt
         * of the message followed by a call to
         * <code>SendPipelineExecutionStepSuccess</code> or
         * <code>SendPipelineExecutionStepFailure</code>.</p> <p>Only when SageMaker
         * Pipelines receives one of these calls will it stop the pipeline execution.</p>
         * <p> <b>Lambda Step</b> </p> <p>A pipeline execution can't be stopped while a
         * lambda step is running because the Lambda function invoked by the lambda step
         * can't be stopped. If you attempt to stop the execution while the Lambda function
         * is running, the pipeline waits for the Lambda function to finish or until the
         * timeout is hit, whichever occurs first, and then stops. If the Lambda function
         * finishes, the pipeline execution status is <code>Stopped</code>. If the timeout
         * is hit the pipeline execution status is <code>Failed</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopPipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopPipelineExecutionOutcome StopPipelineExecution(const Model::StopPipelineExecutionRequest& request) const;

        /**
         * A Callable wrapper for StopPipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopPipelineExecutionOutcomeCallable StopPipelineExecutionCallable(const Model::StopPipelineExecutionRequest& request) const;

        /**
         * An Async wrapper for StopPipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopPipelineExecutionAsync(const Model::StopPipelineExecutionRequest& request, const StopPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopProcessingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopProcessingJobOutcome StopProcessingJob(const Model::StopProcessingJobRequest& request) const;

        /**
         * A Callable wrapper for StopProcessingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopProcessingJobOutcomeCallable StopProcessingJobCallable(const Model::StopProcessingJobRequest& request) const;

        /**
         * An Async wrapper for StopProcessingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopProcessingJobAsync(const Model::StopProcessingJobRequest& request, const StopProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a training job. To stop a job, SageMaker sends the algorithm the
         * <code>SIGTERM</code> signal, which delays job termination for 120 seconds.
         * Algorithms might use this 120-second window to save the model artifacts, so the
         * results of the training is not lost. </p> <p>When it receives a
         * <code>StopTrainingJob</code> request, SageMaker changes the status of the job to
         * <code>Stopping</code>. After SageMaker stops the job, it sets the status to
         * <code>Stopped</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTrainingJobOutcome StopTrainingJob(const Model::StopTrainingJobRequest& request) const;

        /**
         * A Callable wrapper for StopTrainingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTrainingJobOutcomeCallable StopTrainingJobCallable(const Model::StopTrainingJobRequest& request) const;

        /**
         * An Async wrapper for StopTrainingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopTrainingJobAsync(const Model::StopTrainingJobRequest& request, const StopTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a batch transform job.</p> <p>When Amazon SageMaker receives a
         * <code>StopTransformJob</code> request, the status of the job changes to
         * <code>Stopping</code>. After Amazon SageMaker stops the job, the status is set
         * to <code>Stopped</code>. When you stop a batch transform job before it is
         * completed, Amazon SageMaker doesn't store the job's output in Amazon
         * S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopTransformJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTransformJobOutcome StopTransformJob(const Model::StopTransformJobRequest& request) const;

        /**
         * A Callable wrapper for StopTransformJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTransformJobOutcomeCallable StopTransformJobCallable(const Model::StopTransformJobRequest& request) const;

        /**
         * An Async wrapper for StopTransformJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopTransformJobAsync(const Model::StopTransformJobRequest& request, const StopTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateActionOutcome UpdateAction(const Model::UpdateActionRequest& request) const;

        /**
         * A Callable wrapper for UpdateAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateActionOutcomeCallable UpdateActionCallable(const Model::UpdateActionRequest& request) const;

        /**
         * An Async wrapper for UpdateAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateActionAsync(const Model::UpdateActionRequest& request, const UpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the properties of an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateAppImageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppImageConfigOutcome UpdateAppImageConfig(const Model::UpdateAppImageConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateAppImageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAppImageConfigOutcomeCallable UpdateAppImageConfigCallable(const Model::UpdateAppImageConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateAppImageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAppImageConfigAsync(const Model::UpdateAppImageConfigRequest& request, const UpdateAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateArtifactOutcome UpdateArtifact(const Model::UpdateArtifactRequest& request) const;

        /**
         * A Callable wrapper for UpdateArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateArtifactOutcomeCallable UpdateArtifactCallable(const Model::UpdateArtifactRequest& request) const;

        /**
         * An Async wrapper for UpdateArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateArtifactAsync(const Model::UpdateArtifactRequest& request, const UpdateArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified Git repository with the specified values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateCodeRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCodeRepositoryOutcome UpdateCodeRepository(const Model::UpdateCodeRepositoryRequest& request) const;

        /**
         * A Callable wrapper for UpdateCodeRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCodeRepositoryOutcomeCallable UpdateCodeRepositoryCallable(const Model::UpdateCodeRepositoryRequest& request) const;

        /**
         * An Async wrapper for UpdateCodeRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCodeRepositoryAsync(const Model::UpdateCodeRepositoryRequest& request, const UpdateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a context.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateContext">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContextOutcome UpdateContext(const Model::UpdateContextRequest& request) const;

        /**
         * A Callable wrapper for UpdateContext that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContextOutcomeCallable UpdateContextCallable(const Model::UpdateContextRequest& request) const;

        /**
         * An Async wrapper for UpdateContext that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContextAsync(const Model::UpdateContextRequest& request, const UpdateContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a fleet of devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateDeviceFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceFleetOutcome UpdateDeviceFleet(const Model::UpdateDeviceFleetRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeviceFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceFleetOutcomeCallable UpdateDeviceFleetCallable(const Model::UpdateDeviceFleetRequest& request) const;

        /**
         * An Async wrapper for UpdateDeviceFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceFleetAsync(const Model::UpdateDeviceFleetRequest& request, const UpdateDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates one or more devices in a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDevicesOutcome UpdateDevices(const Model::UpdateDevicesRequest& request) const;

        /**
         * A Callable wrapper for UpdateDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDevicesOutcomeCallable UpdateDevicesCallable(const Model::UpdateDevicesRequest& request) const;

        /**
         * An Async wrapper for UpdateDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDevicesAsync(const Model::UpdateDevicesRequest& request, const UpdateDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the default settings for new user profiles in the
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainOutcome UpdateDomain(const Model::UpdateDomainRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainOutcomeCallable UpdateDomainCallable(const Model::UpdateDomainRequest& request) const;

        /**
         * An Async wrapper for UpdateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainAsync(const Model::UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deploys the new <code>EndpointConfig</code> specified in the request,
         * switches to using newly created endpoint, and then deletes resources provisioned
         * for the endpoint using the previous <code>EndpointConfig</code> (there is no
         * availability loss). </p> <p>When SageMaker receives the request, it sets the
         * endpoint status to <code>Updating</code>. After updating the endpoint, it sets
         * the status to <code>InService</code>. To check the status of an endpoint, use
         * the <a>DescribeEndpoint</a> API. </p>  <p>You must not delete an
         * <code>EndpointConfig</code> in use by an endpoint that is live or while the
         * <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are being
         * performed on the endpoint. To update an endpoint, you must create a new
         * <code>EndpointConfig</code>.</p> <p>If you delete the
         * <code>EndpointConfig</code> of an endpoint that is active or being created or
         * updated you may lose visibility into the instance type the endpoint is using.
         * The endpoint must be deleted in order to stop incurring charges.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointOutcome UpdateEndpoint(const Model::UpdateEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointOutcomeCallable UpdateEndpointCallable(const Model::UpdateEndpointRequest& request) const;

        /**
         * An Async wrapper for UpdateEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointAsync(const Model::UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates variant weight of one or more variants associated with an existing
         * endpoint, or capacity of one variant associated with an existing endpoint. When
         * it receives the request, SageMaker sets the endpoint status to
         * <code>Updating</code>. After updating the endpoint, it sets the status to
         * <code>InService</code>. To check the status of an endpoint, use the
         * <a>DescribeEndpoint</a> API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpointWeightsAndCapacities">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointWeightsAndCapacitiesOutcome UpdateEndpointWeightsAndCapacities(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request) const;

        /**
         * A Callable wrapper for UpdateEndpointWeightsAndCapacities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointWeightsAndCapacitiesOutcomeCallable UpdateEndpointWeightsAndCapacitiesCallable(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request) const;

        /**
         * An Async wrapper for UpdateEndpointWeightsAndCapacities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointWeightsAndCapacitiesAsync(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request, const UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds, updates, or removes the description of an experiment. Updates the
         * display name of an experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExperimentOutcome UpdateExperiment(const Model::UpdateExperimentRequest& request) const;

        /**
         * A Callable wrapper for UpdateExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateExperimentOutcomeCallable UpdateExperimentCallable(const Model::UpdateExperimentRequest& request) const;

        /**
         * An Async wrapper for UpdateExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateExperimentAsync(const Model::UpdateExperimentRequest& request, const UpdateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the feature group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateFeatureGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFeatureGroupOutcome UpdateFeatureGroup(const Model::UpdateFeatureGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateFeatureGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFeatureGroupOutcomeCallable UpdateFeatureGroupCallable(const Model::UpdateFeatureGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateFeatureGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFeatureGroupAsync(const Model::UpdateFeatureGroupRequest& request, const UpdateFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description and parameters of the feature group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateFeatureMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFeatureMetadataOutcome UpdateFeatureMetadata(const Model::UpdateFeatureMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateFeatureMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFeatureMetadataOutcomeCallable UpdateFeatureMetadataCallable(const Model::UpdateFeatureMetadataRequest& request) const;

        /**
         * An Async wrapper for UpdateFeatureMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFeatureMetadataAsync(const Model::UpdateFeatureMetadataRequest& request, const UpdateFeatureMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateHub">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHubOutcome UpdateHub(const Model::UpdateHubRequest& request) const;

        /**
         * A Callable wrapper for UpdateHub that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateHubOutcomeCallable UpdateHubCallable(const Model::UpdateHubRequest& request) const;

        /**
         * An Async wrapper for UpdateHub that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateHubAsync(const Model::UpdateHubRequest& request, const UpdateHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the properties of a SageMaker image. To change the image's tags, use
         * the <a>AddTags</a> and <a>DeleteTags</a> APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateImage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImageOutcome UpdateImage(const Model::UpdateImageRequest& request) const;

        /**
         * A Callable wrapper for UpdateImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateImageOutcomeCallable UpdateImageCallable(const Model::UpdateImageRequest& request) const;

        /**
         * An Async wrapper for UpdateImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateImageAsync(const Model::UpdateImageRequest& request, const UpdateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the properties of a SageMaker image version.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateImageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImageVersionOutcome UpdateImageVersion(const Model::UpdateImageVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateImageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateImageVersionOutcomeCallable UpdateImageVersionCallable(const Model::UpdateImageVersionRequest& request) const;

        /**
         * An Async wrapper for UpdateImageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateImageVersionAsync(const Model::UpdateImageVersionRequest& request, const UpdateImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates an inference experiment that you created. The status of the
         * inference experiment has to be either <code>Created</code>,
         * <code>Running</code>. For more information on the status of an inference
         * experiment, see <a>DescribeInferenceExperimentResponse$Status</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateInferenceExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInferenceExperimentOutcome UpdateInferenceExperiment(const Model::UpdateInferenceExperimentRequest& request) const;

        /**
         * A Callable wrapper for UpdateInferenceExperiment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInferenceExperimentOutcomeCallable UpdateInferenceExperimentCallable(const Model::UpdateInferenceExperimentRequest& request) const;

        /**
         * An Async wrapper for UpdateInferenceExperiment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInferenceExperimentAsync(const Model::UpdateInferenceExperimentRequest& request, const UpdateInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update an Amazon SageMaker Model Card.</p>  <p>You cannot update
         * both model card content and model card status in a single call.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateModelCard">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelCardOutcome UpdateModelCard(const Model::UpdateModelCardRequest& request) const;

        /**
         * A Callable wrapper for UpdateModelCard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateModelCardOutcomeCallable UpdateModelCardCallable(const Model::UpdateModelCardRequest& request) const;

        /**
         * An Async wrapper for UpdateModelCard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateModelCardAsync(const Model::UpdateModelCardRequest& request, const UpdateModelCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a versioned model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateModelPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelPackageOutcome UpdateModelPackage(const Model::UpdateModelPackageRequest& request) const;

        /**
         * A Callable wrapper for UpdateModelPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateModelPackageOutcomeCallable UpdateModelPackageCallable(const Model::UpdateModelPackageRequest& request) const;

        /**
         * An Async wrapper for UpdateModelPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateModelPackageAsync(const Model::UpdateModelPackageRequest& request, const UpdateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the parameters of a model monitor alert.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateMonitoringAlert">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMonitoringAlertOutcome UpdateMonitoringAlert(const Model::UpdateMonitoringAlertRequest& request) const;

        /**
         * A Callable wrapper for UpdateMonitoringAlert that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMonitoringAlertOutcomeCallable UpdateMonitoringAlertCallable(const Model::UpdateMonitoringAlertRequest& request) const;

        /**
         * An Async wrapper for UpdateMonitoringAlert that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMonitoringAlertAsync(const Model::UpdateMonitoringAlertRequest& request, const UpdateMonitoringAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a previously created schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMonitoringScheduleOutcome UpdateMonitoringSchedule(const Model::UpdateMonitoringScheduleRequest& request) const;

        /**
         * A Callable wrapper for UpdateMonitoringSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMonitoringScheduleOutcomeCallable UpdateMonitoringScheduleCallable(const Model::UpdateMonitoringScheduleRequest& request) const;

        /**
         * An Async wrapper for UpdateMonitoringSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMonitoringScheduleAsync(const Model::UpdateMonitoringScheduleRequest& request, const UpdateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a notebook instance. NotebookInstance updates include upgrading or
         * downgrading the ML compute instance used for your notebook instance to
         * accommodate changes in your workload requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotebookInstanceOutcome UpdateNotebookInstance(const Model::UpdateNotebookInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateNotebookInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNotebookInstanceOutcomeCallable UpdateNotebookInstanceCallable(const Model::UpdateNotebookInstanceRequest& request) const;

        /**
         * An Async wrapper for UpdateNotebookInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNotebookInstanceAsync(const Model::UpdateNotebookInstanceRequest& request, const UpdateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a notebook instance lifecycle configuration created with the
         * <a>CreateNotebookInstanceLifecycleConfig</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotebookInstanceLifecycleConfigOutcome UpdateNotebookInstanceLifecycleConfig(const Model::UpdateNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateNotebookInstanceLifecycleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNotebookInstanceLifecycleConfigOutcomeCallable UpdateNotebookInstanceLifecycleConfigCallable(const Model::UpdateNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateNotebookInstanceLifecycleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNotebookInstanceLifecycleConfigAsync(const Model::UpdateNotebookInstanceLifecycleConfigRequest& request, const UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePipelineOutcome UpdatePipeline(const Model::UpdatePipelineRequest& request) const;

        /**
         * A Callable wrapper for UpdatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePipelineOutcomeCallable UpdatePipelineCallable(const Model::UpdatePipelineRequest& request) const;

        /**
         * An Async wrapper for UpdatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePipelineAsync(const Model::UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a pipeline execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdatePipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePipelineExecutionOutcome UpdatePipelineExecution(const Model::UpdatePipelineExecutionRequest& request) const;

        /**
         * A Callable wrapper for UpdatePipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePipelineExecutionOutcomeCallable UpdatePipelineExecutionCallable(const Model::UpdatePipelineExecutionRequest& request) const;

        /**
         * An Async wrapper for UpdatePipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePipelineExecutionAsync(const Model::UpdatePipelineExecutionRequest& request, const UpdatePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a machine learning (ML) project that is created from a template that
         * sets up an ML pipeline from training to deploying an approved model.</p> 
         * <p>You must not update a project that is in use. If you update the
         * <code>ServiceCatalogProvisioningUpdateDetails</code> of a project that is active
         * or being created, or updated, you may lose resources already created by the
         * project.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * A Callable wrapper for UpdateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request) const;

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings of a space.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSpaceOutcome UpdateSpace(const Model::UpdateSpaceRequest& request) const;

        /**
         * A Callable wrapper for UpdateSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSpaceOutcomeCallable UpdateSpaceCallable(const Model::UpdateSpaceRequest& request) const;

        /**
         * An Async wrapper for UpdateSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSpaceAsync(const Model::UpdateSpaceRequest& request, const UpdateSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a model training job to request a new Debugger profiling configuration
         * or to change warm pool retention length.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrainingJobOutcome UpdateTrainingJob(const Model::UpdateTrainingJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrainingJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrainingJobOutcomeCallable UpdateTrainingJobCallable(const Model::UpdateTrainingJobRequest& request) const;

        /**
         * An Async wrapper for UpdateTrainingJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrainingJobAsync(const Model::UpdateTrainingJobRequest& request, const UpdateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the display name of a trial.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateTrial">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrialOutcome UpdateTrial(const Model::UpdateTrialRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrial that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrialOutcomeCallable UpdateTrialCallable(const Model::UpdateTrialRequest& request) const;

        /**
         * An Async wrapper for UpdateTrial that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrialAsync(const Model::UpdateTrialRequest& request, const UpdateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates one or more properties of a trial component.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrialComponentOutcome UpdateTrialComponent(const Model::UpdateTrialComponentRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrialComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrialComponentOutcomeCallable UpdateTrialComponentCallable(const Model::UpdateTrialComponentRequest& request) const;

        /**
         * An Async wrapper for UpdateTrialComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrialComponentAsync(const Model::UpdateTrialComponentRequest& request, const UpdateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a user profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserProfileOutcome UpdateUserProfile(const Model::UpdateUserProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserProfileOutcomeCallable UpdateUserProfileCallable(const Model::UpdateUserProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserProfileAsync(const Model::UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to update your workforce. You can use this operation to
         * require that workers use specific IP addresses to work on tasks and to update
         * your OpenID Connect (OIDC) Identity Provider (IdP) workforce configuration.</p>
         * <p>The worker portal is now supported in VPC and public internet.</p> <p> Use
         * <code>SourceIpConfig</code> to restrict worker access to tasks to a specific
         * range of IP addresses. You specify allowed IP addresses by creating a list of up
         * to ten <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>.
         * By default, a workforce isn't restricted to specific IP addresses. If you
         * specify a range of IP addresses, workers who attempt to access tasks using any
         * IP address outside the specified range are denied and get a <code>Not
         * Found</code> error message on the worker portal.</p> <p>To restrict access to
         * all the workers in public internet, add the <code>SourceIpConfig</code> CIDR
         * value as "0.0.0.0/0".</p>  <p>Amazon SageMaker does not support
         * Source Ip restriction for worker portals in VPC.</p>  <p>Use
         * <code>OidcConfig</code> to update the configuration of a workforce created using
         * your own OIDC IdP. </p>  <p>You can only update your OIDC IdP
         * configuration when there are no work teams associated with your workforce. You
         * can delete work teams using the operation.</p>  <p>After restricting
         * access to a range of IP addresses or updating your OIDC IdP configuration with
         * this operation, you can view details about your update workforce using the
         * operation.</p>  <p>This operation only applies to private
         * workforces.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateWorkforce">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkforceOutcome UpdateWorkforce(const Model::UpdateWorkforceRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkforce that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkforceOutcomeCallable UpdateWorkforceCallable(const Model::UpdateWorkforceRequest& request) const;

        /**
         * An Async wrapper for UpdateWorkforce that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkforceAsync(const Model::UpdateWorkforceRequest& request, const UpdateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing work team with new member definitions or
         * description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkteamOutcome UpdateWorkteam(const Model::UpdateWorkteamRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkteam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkteamOutcomeCallable UpdateWorkteamCallable(const Model::UpdateWorkteamRequest& request) const;

        /**
         * An Async wrapper for UpdateWorkteam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkteamAsync(const Model::UpdateWorkteamRequest& request, const UpdateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SageMakerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SageMakerClient>;
      void init(const SageMakerClientConfiguration& clientConfiguration);

      SageMakerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SageMakerEndpointProviderBase> m_endpointProvider;
  };

} // namespace SageMaker
} // namespace Aws

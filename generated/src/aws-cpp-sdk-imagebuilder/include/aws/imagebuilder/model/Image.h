/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ImageType.h>
#include <aws/imagebuilder/model/Platform.h>
#include <aws/imagebuilder/model/ImageState.h>
#include <aws/imagebuilder/model/ImageRecipe.h>
#include <aws/imagebuilder/model/ContainerRecipe.h>
#include <aws/imagebuilder/model/InfrastructureConfiguration.h>
#include <aws/imagebuilder/model/DistributionConfiguration.h>
#include <aws/imagebuilder/model/ImageTestsConfiguration.h>
#include <aws/imagebuilder/model/OutputResources.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/BuildType.h>
#include <aws/imagebuilder/model/ImageSource.h>
#include <aws/imagebuilder/model/ImageScanState.h>
#include <aws/imagebuilder/model/ImageScanningConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/WorkflowConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>An Image Builder image. You must specify exactly one recipe for the image –
   * either a container recipe (<code>containerRecipe</code>), which creates a
   * container image, or an image recipe (<code>imageRecipe</code>), which creates an
   * AMI.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Image">AWS
   * API Reference</a></p>
   */
  class Image
  {
  public:
    AWS_IMAGEBUILDER_API Image() = default;
    AWS_IMAGEBUILDER_API Image(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image.</p>  <p>Semantic
     * versioning is included in each object's Amazon Resource Name (ARN), at the level
     * that applies to that object as follows:</p> <ol> <li> <p>Versionless ARNs and
     * Name ARNs do not include specific values in any of the nodes. The nodes are
     * either left off entirely, or they are specified as wildcards, for example:
     * x.x.x.</p> </li> <li> <p>Version ARNs have only the first three nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;</p> </li> <li> <p>Build version ARNs
     * have all four nodes, and point to a specific build for a specific version of an
     * object.</p> </li> </ol> 
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Image& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this image produces an AMI or a container image.</p>
     */
    inline ImageType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ImageType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Image& WithType(ImageType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Image& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The semantic version of the image.</p>  <p>The semantic version has
     * four nodes: &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can
     * assign values for the first three, and can filter on all of them.</p> <p>
     * <b>Assignment:</b> For the first three nodes you can assign any positive integer
     * value, including zero, with an upper limit of 2^30-1, or 1073741823 for each
     * node. Image Builder automatically assigns the build number to the fourth
     * node.</p> <p> <b>Patterns:</b> You can use any numeric pattern that adheres to
     * the assignment requirements for the nodes that you can assign. For example, you
     * might choose a software version pattern, such as 1.0.0, or a date, such as
     * 2021.01.01.</p> <p> <b>Filtering:</b> With semantic versioning, you have the
     * flexibility to use wildcards (x) to specify the most recent versions or nodes
     * when selecting the base image or components for your recipe. When you use a
     * wildcard in any node, all nodes to the right of the first wildcard must also be
     * wildcards.</p> 
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    Image& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image operating system platform, such as Linux or Windows.</p>
     */
    inline Platform GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(Platform value) { m_platformHasBeenSet = true; m_platform = value; }
    inline Image& WithPlatform(Platform value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Image Builder collects additional information about the
     * image, such as the operating system (OS) version and package list.</p>
     */
    inline bool GetEnhancedImageMetadataEnabled() const { return m_enhancedImageMetadataEnabled; }
    inline bool EnhancedImageMetadataEnabledHasBeenSet() const { return m_enhancedImageMetadataEnabledHasBeenSet; }
    inline void SetEnhancedImageMetadataEnabled(bool value) { m_enhancedImageMetadataEnabledHasBeenSet = true; m_enhancedImageMetadataEnabled = value; }
    inline Image& WithEnhancedImageMetadataEnabled(bool value) { SetEnhancedImageMetadataEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system version for instances that launch from this image. For
     * example, Amazon Linux 2, Ubuntu 18, or Microsoft Windows Server 2019.</p>
     */
    inline const Aws::String& GetOsVersion() const { return m_osVersion; }
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }
    template<typename OsVersionT = Aws::String>
    void SetOsVersion(OsVersionT&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::forward<OsVersionT>(value); }
    template<typename OsVersionT = Aws::String>
    Image& WithOsVersion(OsVersionT&& value) { SetOsVersion(std::forward<OsVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the image.</p>
     */
    inline const ImageState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = ImageState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = ImageState>
    Image& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For images that distribute an AMI, this is the image recipe that Image
     * Builder used to create the image. For container images, this is empty.</p>
     */
    inline const ImageRecipe& GetImageRecipe() const { return m_imageRecipe; }
    inline bool ImageRecipeHasBeenSet() const { return m_imageRecipeHasBeenSet; }
    template<typename ImageRecipeT = ImageRecipe>
    void SetImageRecipe(ImageRecipeT&& value) { m_imageRecipeHasBeenSet = true; m_imageRecipe = std::forward<ImageRecipeT>(value); }
    template<typename ImageRecipeT = ImageRecipe>
    Image& WithImageRecipe(ImageRecipeT&& value) { SetImageRecipe(std::forward<ImageRecipeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For container images, this is the container recipe that Image Builder used to
     * create the image. For images that distribute an AMI, this is empty.</p>
     */
    inline const ContainerRecipe& GetContainerRecipe() const { return m_containerRecipe; }
    inline bool ContainerRecipeHasBeenSet() const { return m_containerRecipeHasBeenSet; }
    template<typename ContainerRecipeT = ContainerRecipe>
    void SetContainerRecipe(ContainerRecipeT&& value) { m_containerRecipeHasBeenSet = true; m_containerRecipe = std::forward<ContainerRecipeT>(value); }
    template<typename ContainerRecipeT = ContainerRecipe>
    Image& WithContainerRecipe(ContainerRecipeT&& value) { SetContainerRecipe(std::forward<ContainerRecipeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the image pipeline that created this image.</p>
     */
    inline const Aws::String& GetSourcePipelineName() const { return m_sourcePipelineName; }
    inline bool SourcePipelineNameHasBeenSet() const { return m_sourcePipelineNameHasBeenSet; }
    template<typename SourcePipelineNameT = Aws::String>
    void SetSourcePipelineName(SourcePipelineNameT&& value) { m_sourcePipelineNameHasBeenSet = true; m_sourcePipelineName = std::forward<SourcePipelineNameT>(value); }
    template<typename SourcePipelineNameT = Aws::String>
    Image& WithSourcePipelineName(SourcePipelineNameT&& value) { SetSourcePipelineName(std::forward<SourcePipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that created this
     * image.</p>
     */
    inline const Aws::String& GetSourcePipelineArn() const { return m_sourcePipelineArn; }
    inline bool SourcePipelineArnHasBeenSet() const { return m_sourcePipelineArnHasBeenSet; }
    template<typename SourcePipelineArnT = Aws::String>
    void SetSourcePipelineArn(SourcePipelineArnT&& value) { m_sourcePipelineArnHasBeenSet = true; m_sourcePipelineArn = std::forward<SourcePipelineArnT>(value); }
    template<typename SourcePipelineArnT = Aws::String>
    Image& WithSourcePipelineArn(SourcePipelineArnT&& value) { SetSourcePipelineArn(std::forward<SourcePipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The infrastructure that Image Builder used to create this image.</p>
     */
    inline const InfrastructureConfiguration& GetInfrastructureConfiguration() const { return m_infrastructureConfiguration; }
    inline bool InfrastructureConfigurationHasBeenSet() const { return m_infrastructureConfigurationHasBeenSet; }
    template<typename InfrastructureConfigurationT = InfrastructureConfiguration>
    void SetInfrastructureConfiguration(InfrastructureConfigurationT&& value) { m_infrastructureConfigurationHasBeenSet = true; m_infrastructureConfiguration = std::forward<InfrastructureConfigurationT>(value); }
    template<typename InfrastructureConfigurationT = InfrastructureConfiguration>
    Image& WithInfrastructureConfiguration(InfrastructureConfigurationT&& value) { SetInfrastructureConfiguration(std::forward<InfrastructureConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution configuration that Image Builder used to create this
     * image.</p>
     */
    inline const DistributionConfiguration& GetDistributionConfiguration() const { return m_distributionConfiguration; }
    inline bool DistributionConfigurationHasBeenSet() const { return m_distributionConfigurationHasBeenSet; }
    template<typename DistributionConfigurationT = DistributionConfiguration>
    void SetDistributionConfiguration(DistributionConfigurationT&& value) { m_distributionConfigurationHasBeenSet = true; m_distributionConfiguration = std::forward<DistributionConfigurationT>(value); }
    template<typename DistributionConfigurationT = DistributionConfiguration>
    Image& WithDistributionConfiguration(DistributionConfigurationT&& value) { SetDistributionConfiguration(std::forward<DistributionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image tests that ran when that Image Builder created this image.</p>
     */
    inline const ImageTestsConfiguration& GetImageTestsConfiguration() const { return m_imageTestsConfiguration; }
    inline bool ImageTestsConfigurationHasBeenSet() const { return m_imageTestsConfigurationHasBeenSet; }
    template<typename ImageTestsConfigurationT = ImageTestsConfiguration>
    void SetImageTestsConfiguration(ImageTestsConfigurationT&& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = std::forward<ImageTestsConfigurationT>(value); }
    template<typename ImageTestsConfigurationT = ImageTestsConfiguration>
    Image& WithImageTestsConfiguration(ImageTestsConfigurationT&& value) { SetImageTestsConfiguration(std::forward<ImageTestsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which Image Builder created this image.</p>
     */
    inline const Aws::String& GetDateCreated() const { return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    template<typename DateCreatedT = Aws::String>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::String>
    Image& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output resources that Image Builder produces for this image.</p>
     */
    inline const OutputResources& GetOutputResources() const { return m_outputResources; }
    inline bool OutputResourcesHasBeenSet() const { return m_outputResourcesHasBeenSet; }
    template<typename OutputResourcesT = OutputResources>
    void SetOutputResources(OutputResourcesT&& value) { m_outputResourcesHasBeenSet = true; m_outputResources = std::forward<OutputResourcesT>(value); }
    template<typename OutputResourcesT = OutputResources>
    Image& WithOutputResources(OutputResourcesT&& value) { SetOutputResources(std::forward<OutputResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that apply to this image.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Image& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Image& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Indicates the type of build that created this image. The build can be
     * initiated in the following ways:</p> <ul> <li> <p> <b>USER_INITIATED</b> – A
     * manual pipeline build request.</p> </li> <li> <p> <b>SCHEDULED</b> – A pipeline
     * build initiated by a cron expression in the Image Builder pipeline, or from
     * EventBridge.</p> </li> <li> <p> <b>IMPORT</b> – A VM import created the image to
     * use as the base image for the recipe.</p> </li> <li> <p> <b>IMPORT_ISO</b> – An
     * ISO disk import created the image.</p> </li> </ul>
     */
    inline BuildType GetBuildType() const { return m_buildType; }
    inline bool BuildTypeHasBeenSet() const { return m_buildTypeHasBeenSet; }
    inline void SetBuildType(BuildType value) { m_buildTypeHasBeenSet = true; m_buildType = value; }
    inline Image& WithBuildType(BuildType value) { SetBuildType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin of the base image that Image Builder used to build this image.</p>
     */
    inline ImageSource GetImageSource() const { return m_imageSource; }
    inline bool ImageSourceHasBeenSet() const { return m_imageSourceHasBeenSet; }
    inline void SetImageSource(ImageSource value) { m_imageSourceHasBeenSet = true; m_imageSource = value; }
    inline Image& WithImageSource(ImageSource value) { SetImageSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the current state of scans for this image.</p>
     */
    inline const ImageScanState& GetScanState() const { return m_scanState; }
    inline bool ScanStateHasBeenSet() const { return m_scanStateHasBeenSet; }
    template<typename ScanStateT = ImageScanState>
    void SetScanState(ScanStateT&& value) { m_scanStateHasBeenSet = true; m_scanState = std::forward<ScanStateT>(value); }
    template<typename ScanStateT = ImageScanState>
    Image& WithScanState(ScanStateT&& value) { SetScanState(std::forward<ScanStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains settings for vulnerability scans.</p>
     */
    inline const ImageScanningConfiguration& GetImageScanningConfiguration() const { return m_imageScanningConfiguration; }
    inline bool ImageScanningConfigurationHasBeenSet() const { return m_imageScanningConfigurationHasBeenSet; }
    template<typename ImageScanningConfigurationT = ImageScanningConfiguration>
    void SetImageScanningConfiguration(ImageScanningConfigurationT&& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = std::forward<ImageScanningConfigurationT>(value); }
    template<typename ImageScanningConfigurationT = ImageScanningConfiguration>
    Image& WithImageScanningConfiguration(ImageScanningConfigurationT&& value) { SetImageScanningConfiguration(std::forward<ImageScanningConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when deprecation occurs for an image resource. This can be a past or
     * future date.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationTime() const { return m_deprecationTime; }
    inline bool DeprecationTimeHasBeenSet() const { return m_deprecationTimeHasBeenSet; }
    template<typename DeprecationTimeT = Aws::Utils::DateTime>
    void SetDeprecationTime(DeprecationTimeT&& value) { m_deprecationTimeHasBeenSet = true; m_deprecationTime = std::forward<DeprecationTimeT>(value); }
    template<typename DeprecationTimeT = Aws::Utils::DateTime>
    Image& WithDeprecationTime(DeprecationTimeT&& value) { SetDeprecationTime(std::forward<DeprecationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the last runtime instance of the lifecycle policy to take action
     * on the image.</p>
     */
    inline const Aws::String& GetLifecycleExecutionId() const { return m_lifecycleExecutionId; }
    inline bool LifecycleExecutionIdHasBeenSet() const { return m_lifecycleExecutionIdHasBeenSet; }
    template<typename LifecycleExecutionIdT = Aws::String>
    void SetLifecycleExecutionId(LifecycleExecutionIdT&& value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId = std::forward<LifecycleExecutionIdT>(value); }
    template<typename LifecycleExecutionIdT = Aws::String>
    Image& WithLifecycleExecutionId(LifecycleExecutionIdT&& value) { SetLifecycleExecutionId(std::forward<LifecycleExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) for the IAM role you create that
     * grants Image Builder access to perform workflow actions.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    Image& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the build and test workflows that are associated with the image.</p>
     */
    inline const Aws::Vector<WorkflowConfiguration>& GetWorkflows() const { return m_workflows; }
    inline bool WorkflowsHasBeenSet() const { return m_workflowsHasBeenSet; }
    template<typename WorkflowsT = Aws::Vector<WorkflowConfiguration>>
    void SetWorkflows(WorkflowsT&& value) { m_workflowsHasBeenSet = true; m_workflows = std::forward<WorkflowsT>(value); }
    template<typename WorkflowsT = Aws::Vector<WorkflowConfiguration>>
    Image& WithWorkflows(WorkflowsT&& value) { SetWorkflows(std::forward<WorkflowsT>(value)); return *this;}
    template<typename WorkflowsT = WorkflowConfiguration>
    Image& AddWorkflows(WorkflowsT&& value) { m_workflowsHasBeenSet = true; m_workflows.emplace_back(std::forward<WorkflowsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ImageType m_type{ImageType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Platform m_platform{Platform::NOT_SET};
    bool m_platformHasBeenSet = false;

    bool m_enhancedImageMetadataEnabled{false};
    bool m_enhancedImageMetadataEnabledHasBeenSet = false;

    Aws::String m_osVersion;
    bool m_osVersionHasBeenSet = false;

    ImageState m_state;
    bool m_stateHasBeenSet = false;

    ImageRecipe m_imageRecipe;
    bool m_imageRecipeHasBeenSet = false;

    ContainerRecipe m_containerRecipe;
    bool m_containerRecipeHasBeenSet = false;

    Aws::String m_sourcePipelineName;
    bool m_sourcePipelineNameHasBeenSet = false;

    Aws::String m_sourcePipelineArn;
    bool m_sourcePipelineArnHasBeenSet = false;

    InfrastructureConfiguration m_infrastructureConfiguration;
    bool m_infrastructureConfigurationHasBeenSet = false;

    DistributionConfiguration m_distributionConfiguration;
    bool m_distributionConfigurationHasBeenSet = false;

    ImageTestsConfiguration m_imageTestsConfiguration;
    bool m_imageTestsConfigurationHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    OutputResources m_outputResources;
    bool m_outputResourcesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    BuildType m_buildType{BuildType::NOT_SET};
    bool m_buildTypeHasBeenSet = false;

    ImageSource m_imageSource{ImageSource::NOT_SET};
    bool m_imageSourceHasBeenSet = false;

    ImageScanState m_scanState;
    bool m_scanStateHasBeenSet = false;

    ImageScanningConfiguration m_imageScanningConfiguration;
    bool m_imageScanningConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_deprecationTime{};
    bool m_deprecationTimeHasBeenSet = false;

    Aws::String m_lifecycleExecutionId;
    bool m_lifecycleExecutionIdHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    Aws::Vector<WorkflowConfiguration> m_workflows;
    bool m_workflowsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws

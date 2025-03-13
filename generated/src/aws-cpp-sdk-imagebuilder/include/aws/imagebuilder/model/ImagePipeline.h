/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/Platform.h>
#include <aws/imagebuilder/model/ImageTestsConfiguration.h>
#include <aws/imagebuilder/model/Schedule.h>
#include <aws/imagebuilder/model/PipelineStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/ImageScanningConfiguration.h>
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
   * <p>Details of an image pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImagePipeline">AWS
   * API Reference</a></p>
   */
  class ImagePipeline
  {
  public:
    AWS_IMAGEBUILDER_API ImagePipeline() = default;
    AWS_IMAGEBUILDER_API ImagePipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImagePipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ImagePipeline& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the image pipeline.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ImagePipeline& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the image pipeline.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImagePipeline& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the image pipeline.</p>
     */
    inline Platform GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(Platform value) { m_platformHasBeenSet = true; m_platform = value; }
    inline ImagePipeline& WithPlatform(Platform value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Collects additional information about the image being created, including the
     * operating system (OS) version and package list. This information is used to
     * enhance the overall experience of using EC2 Image Builder. Enabled by
     * default.</p>
     */
    inline bool GetEnhancedImageMetadataEnabled() const { return m_enhancedImageMetadataEnabled; }
    inline bool EnhancedImageMetadataEnabledHasBeenSet() const { return m_enhancedImageMetadataEnabledHasBeenSet; }
    inline void SetEnhancedImageMetadataEnabled(bool value) { m_enhancedImageMetadataEnabledHasBeenSet = true; m_enhancedImageMetadataEnabled = value; }
    inline ImagePipeline& WithEnhancedImageMetadataEnabled(bool value) { SetEnhancedImageMetadataEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe associated with this image
     * pipeline.</p>
     */
    inline const Aws::String& GetImageRecipeArn() const { return m_imageRecipeArn; }
    inline bool ImageRecipeArnHasBeenSet() const { return m_imageRecipeArnHasBeenSet; }
    template<typename ImageRecipeArnT = Aws::String>
    void SetImageRecipeArn(ImageRecipeArnT&& value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn = std::forward<ImageRecipeArnT>(value); }
    template<typename ImageRecipeArnT = Aws::String>
    ImagePipeline& WithImageRecipeArn(ImageRecipeArnT&& value) { SetImageRecipeArn(std::forward<ImageRecipeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that is used for this
     * pipeline.</p>
     */
    inline const Aws::String& GetContainerRecipeArn() const { return m_containerRecipeArn; }
    inline bool ContainerRecipeArnHasBeenSet() const { return m_containerRecipeArnHasBeenSet; }
    template<typename ContainerRecipeArnT = Aws::String>
    void SetContainerRecipeArn(ContainerRecipeArnT&& value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn = std::forward<ContainerRecipeArnT>(value); }
    template<typename ContainerRecipeArnT = Aws::String>
    ImagePipeline& WithContainerRecipeArn(ContainerRecipeArnT&& value) { SetContainerRecipeArn(std::forward<ContainerRecipeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration associated
     * with this image pipeline.</p>
     */
    inline const Aws::String& GetInfrastructureConfigurationArn() const { return m_infrastructureConfigurationArn; }
    inline bool InfrastructureConfigurationArnHasBeenSet() const { return m_infrastructureConfigurationArnHasBeenSet; }
    template<typename InfrastructureConfigurationArnT = Aws::String>
    void SetInfrastructureConfigurationArn(InfrastructureConfigurationArnT&& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = std::forward<InfrastructureConfigurationArnT>(value); }
    template<typename InfrastructureConfigurationArnT = Aws::String>
    ImagePipeline& WithInfrastructureConfigurationArn(InfrastructureConfigurationArnT&& value) { SetInfrastructureConfigurationArn(std::forward<InfrastructureConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration associated
     * with this image pipeline.</p>
     */
    inline const Aws::String& GetDistributionConfigurationArn() const { return m_distributionConfigurationArn; }
    inline bool DistributionConfigurationArnHasBeenSet() const { return m_distributionConfigurationArnHasBeenSet; }
    template<typename DistributionConfigurationArnT = Aws::String>
    void SetDistributionConfigurationArn(DistributionConfigurationArnT&& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = std::forward<DistributionConfigurationArnT>(value); }
    template<typename DistributionConfigurationArnT = Aws::String>
    ImagePipeline& WithDistributionConfigurationArn(DistributionConfigurationArnT&& value) { SetDistributionConfigurationArn(std::forward<DistributionConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image tests configuration of the image pipeline.</p>
     */
    inline const ImageTestsConfiguration& GetImageTestsConfiguration() const { return m_imageTestsConfiguration; }
    inline bool ImageTestsConfigurationHasBeenSet() const { return m_imageTestsConfigurationHasBeenSet; }
    template<typename ImageTestsConfigurationT = ImageTestsConfiguration>
    void SetImageTestsConfiguration(ImageTestsConfigurationT&& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = std::forward<ImageTestsConfigurationT>(value); }
    template<typename ImageTestsConfigurationT = ImageTestsConfiguration>
    ImagePipeline& WithImageTestsConfiguration(ImageTestsConfigurationT&& value) { SetImageTestsConfiguration(std::forward<ImageTestsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule of the image pipeline.</p>
     */
    inline const Schedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Schedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Schedule>
    ImagePipeline& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the image pipeline.</p>
     */
    inline PipelineStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PipelineStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ImagePipeline& WithStatus(PipelineStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which this image pipeline was created.</p>
     */
    inline const Aws::String& GetDateCreated() const { return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    template<typename DateCreatedT = Aws::String>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::String>
    ImagePipeline& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which this image pipeline was last updated.</p>
     */
    inline const Aws::String& GetDateUpdated() const { return m_dateUpdated; }
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }
    template<typename DateUpdatedT = Aws::String>
    void SetDateUpdated(DateUpdatedT&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::forward<DateUpdatedT>(value); }
    template<typename DateUpdatedT = Aws::String>
    ImagePipeline& WithDateUpdated(DateUpdatedT&& value) { SetDateUpdated(std::forward<DateUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is no longer supported, and does not return a value.</p>
     */
    inline const Aws::String& GetDateLastRun() const { return m_dateLastRun; }
    inline bool DateLastRunHasBeenSet() const { return m_dateLastRunHasBeenSet; }
    template<typename DateLastRunT = Aws::String>
    void SetDateLastRun(DateLastRunT&& value) { m_dateLastRunHasBeenSet = true; m_dateLastRun = std::forward<DateLastRunT>(value); }
    template<typename DateLastRunT = Aws::String>
    ImagePipeline& WithDateLastRun(DateLastRunT&& value) { SetDateLastRun(std::forward<DateLastRunT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next date when the pipeline is scheduled to run.</p>
     */
    inline const Aws::String& GetDateNextRun() const { return m_dateNextRun; }
    inline bool DateNextRunHasBeenSet() const { return m_dateNextRunHasBeenSet; }
    template<typename DateNextRunT = Aws::String>
    void SetDateNextRun(DateNextRunT&& value) { m_dateNextRunHasBeenSet = true; m_dateNextRun = std::forward<DateNextRunT>(value); }
    template<typename DateNextRunT = Aws::String>
    ImagePipeline& WithDateNextRun(DateNextRunT&& value) { SetDateNextRun(std::forward<DateNextRunT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of this image pipeline.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ImagePipeline& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ImagePipeline& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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
    ImagePipeline& WithImageScanningConfiguration(ImageScanningConfigurationT&& value) { SetImageScanningConfiguration(std::forward<ImageScanningConfigurationT>(value)); return *this;}
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
    ImagePipeline& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the workflows that run for the image pipeline.</p>
     */
    inline const Aws::Vector<WorkflowConfiguration>& GetWorkflows() const { return m_workflows; }
    inline bool WorkflowsHasBeenSet() const { return m_workflowsHasBeenSet; }
    template<typename WorkflowsT = Aws::Vector<WorkflowConfiguration>>
    void SetWorkflows(WorkflowsT&& value) { m_workflowsHasBeenSet = true; m_workflows = std::forward<WorkflowsT>(value); }
    template<typename WorkflowsT = Aws::Vector<WorkflowConfiguration>>
    ImagePipeline& WithWorkflows(WorkflowsT&& value) { SetWorkflows(std::forward<WorkflowsT>(value)); return *this;}
    template<typename WorkflowsT = WorkflowConfiguration>
    ImagePipeline& AddWorkflows(WorkflowsT&& value) { m_workflowsHasBeenSet = true; m_workflows.emplace_back(std::forward<WorkflowsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Platform m_platform{Platform::NOT_SET};
    bool m_platformHasBeenSet = false;

    bool m_enhancedImageMetadataEnabled{false};
    bool m_enhancedImageMetadataEnabledHasBeenSet = false;

    Aws::String m_imageRecipeArn;
    bool m_imageRecipeArnHasBeenSet = false;

    Aws::String m_containerRecipeArn;
    bool m_containerRecipeArnHasBeenSet = false;

    Aws::String m_infrastructureConfigurationArn;
    bool m_infrastructureConfigurationArnHasBeenSet = false;

    Aws::String m_distributionConfigurationArn;
    bool m_distributionConfigurationArnHasBeenSet = false;

    ImageTestsConfiguration m_imageTestsConfiguration;
    bool m_imageTestsConfigurationHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    PipelineStatus m_status{PipelineStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::String m_dateUpdated;
    bool m_dateUpdatedHasBeenSet = false;

    Aws::String m_dateLastRun;
    bool m_dateLastRunHasBeenSet = false;

    Aws::String m_dateNextRun;
    bool m_dateNextRunHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ImageScanningConfiguration m_imageScanningConfiguration;
    bool m_imageScanningConfigurationHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    Aws::Vector<WorkflowConfiguration> m_workflows;
    bool m_workflowsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws

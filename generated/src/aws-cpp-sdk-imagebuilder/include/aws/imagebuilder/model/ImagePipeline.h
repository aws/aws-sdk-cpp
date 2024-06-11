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
    AWS_IMAGEBUILDER_API ImagePipeline();
    AWS_IMAGEBUILDER_API ImagePipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImagePipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ImagePipeline& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ImagePipeline& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ImagePipeline& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the image pipeline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ImagePipeline& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ImagePipeline& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ImagePipeline& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the image pipeline.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ImagePipeline& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ImagePipeline& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ImagePipeline& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the image pipeline.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline ImagePipeline& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}
    inline ImagePipeline& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Collects additional information about the image being created, including the
     * operating system (OS) version and package list. This information is used to
     * enhance the overall experience of using EC2 Image Builder. Enabled by
     * default.</p>
     */
    inline bool GetEnhancedImageMetadataEnabled() const{ return m_enhancedImageMetadataEnabled; }
    inline bool EnhancedImageMetadataEnabledHasBeenSet() const { return m_enhancedImageMetadataEnabledHasBeenSet; }
    inline void SetEnhancedImageMetadataEnabled(bool value) { m_enhancedImageMetadataEnabledHasBeenSet = true; m_enhancedImageMetadataEnabled = value; }
    inline ImagePipeline& WithEnhancedImageMetadataEnabled(bool value) { SetEnhancedImageMetadataEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe associated with this image
     * pipeline.</p>
     */
    inline const Aws::String& GetImageRecipeArn() const{ return m_imageRecipeArn; }
    inline bool ImageRecipeArnHasBeenSet() const { return m_imageRecipeArnHasBeenSet; }
    inline void SetImageRecipeArn(const Aws::String& value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn = value; }
    inline void SetImageRecipeArn(Aws::String&& value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn = std::move(value); }
    inline void SetImageRecipeArn(const char* value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn.assign(value); }
    inline ImagePipeline& WithImageRecipeArn(const Aws::String& value) { SetImageRecipeArn(value); return *this;}
    inline ImagePipeline& WithImageRecipeArn(Aws::String&& value) { SetImageRecipeArn(std::move(value)); return *this;}
    inline ImagePipeline& WithImageRecipeArn(const char* value) { SetImageRecipeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that is used for this
     * pipeline.</p>
     */
    inline const Aws::String& GetContainerRecipeArn() const{ return m_containerRecipeArn; }
    inline bool ContainerRecipeArnHasBeenSet() const { return m_containerRecipeArnHasBeenSet; }
    inline void SetContainerRecipeArn(const Aws::String& value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn = value; }
    inline void SetContainerRecipeArn(Aws::String&& value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn = std::move(value); }
    inline void SetContainerRecipeArn(const char* value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn.assign(value); }
    inline ImagePipeline& WithContainerRecipeArn(const Aws::String& value) { SetContainerRecipeArn(value); return *this;}
    inline ImagePipeline& WithContainerRecipeArn(Aws::String&& value) { SetContainerRecipeArn(std::move(value)); return *this;}
    inline ImagePipeline& WithContainerRecipeArn(const char* value) { SetContainerRecipeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration associated
     * with this image pipeline.</p>
     */
    inline const Aws::String& GetInfrastructureConfigurationArn() const{ return m_infrastructureConfigurationArn; }
    inline bool InfrastructureConfigurationArnHasBeenSet() const { return m_infrastructureConfigurationArnHasBeenSet; }
    inline void SetInfrastructureConfigurationArn(const Aws::String& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = value; }
    inline void SetInfrastructureConfigurationArn(Aws::String&& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = std::move(value); }
    inline void SetInfrastructureConfigurationArn(const char* value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn.assign(value); }
    inline ImagePipeline& WithInfrastructureConfigurationArn(const Aws::String& value) { SetInfrastructureConfigurationArn(value); return *this;}
    inline ImagePipeline& WithInfrastructureConfigurationArn(Aws::String&& value) { SetInfrastructureConfigurationArn(std::move(value)); return *this;}
    inline ImagePipeline& WithInfrastructureConfigurationArn(const char* value) { SetInfrastructureConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration associated
     * with this image pipeline.</p>
     */
    inline const Aws::String& GetDistributionConfigurationArn() const{ return m_distributionConfigurationArn; }
    inline bool DistributionConfigurationArnHasBeenSet() const { return m_distributionConfigurationArnHasBeenSet; }
    inline void SetDistributionConfigurationArn(const Aws::String& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = value; }
    inline void SetDistributionConfigurationArn(Aws::String&& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = std::move(value); }
    inline void SetDistributionConfigurationArn(const char* value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn.assign(value); }
    inline ImagePipeline& WithDistributionConfigurationArn(const Aws::String& value) { SetDistributionConfigurationArn(value); return *this;}
    inline ImagePipeline& WithDistributionConfigurationArn(Aws::String&& value) { SetDistributionConfigurationArn(std::move(value)); return *this;}
    inline ImagePipeline& WithDistributionConfigurationArn(const char* value) { SetDistributionConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image tests configuration of the image pipeline.</p>
     */
    inline const ImageTestsConfiguration& GetImageTestsConfiguration() const{ return m_imageTestsConfiguration; }
    inline bool ImageTestsConfigurationHasBeenSet() const { return m_imageTestsConfigurationHasBeenSet; }
    inline void SetImageTestsConfiguration(const ImageTestsConfiguration& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = value; }
    inline void SetImageTestsConfiguration(ImageTestsConfiguration&& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = std::move(value); }
    inline ImagePipeline& WithImageTestsConfiguration(const ImageTestsConfiguration& value) { SetImageTestsConfiguration(value); return *this;}
    inline ImagePipeline& WithImageTestsConfiguration(ImageTestsConfiguration&& value) { SetImageTestsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule of the image pipeline.</p>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline ImagePipeline& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}
    inline ImagePipeline& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the image pipeline.</p>
     */
    inline const PipelineStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const PipelineStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(PipelineStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ImagePipeline& WithStatus(const PipelineStatus& value) { SetStatus(value); return *this;}
    inline ImagePipeline& WithStatus(PipelineStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which this image pipeline was created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }
    inline ImagePipeline& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}
    inline ImagePipeline& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}
    inline ImagePipeline& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which this image pipeline was last updated.</p>
     */
    inline const Aws::String& GetDateUpdated() const{ return m_dateUpdated; }
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }
    inline void SetDateUpdated(const Aws::String& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }
    inline void SetDateUpdated(Aws::String&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }
    inline void SetDateUpdated(const char* value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated.assign(value); }
    inline ImagePipeline& WithDateUpdated(const Aws::String& value) { SetDateUpdated(value); return *this;}
    inline ImagePipeline& WithDateUpdated(Aws::String&& value) { SetDateUpdated(std::move(value)); return *this;}
    inline ImagePipeline& WithDateUpdated(const char* value) { SetDateUpdated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is no longer supported, and does not return a value.</p>
     */
    inline const Aws::String& GetDateLastRun() const{ return m_dateLastRun; }
    inline bool DateLastRunHasBeenSet() const { return m_dateLastRunHasBeenSet; }
    inline void SetDateLastRun(const Aws::String& value) { m_dateLastRunHasBeenSet = true; m_dateLastRun = value; }
    inline void SetDateLastRun(Aws::String&& value) { m_dateLastRunHasBeenSet = true; m_dateLastRun = std::move(value); }
    inline void SetDateLastRun(const char* value) { m_dateLastRunHasBeenSet = true; m_dateLastRun.assign(value); }
    inline ImagePipeline& WithDateLastRun(const Aws::String& value) { SetDateLastRun(value); return *this;}
    inline ImagePipeline& WithDateLastRun(Aws::String&& value) { SetDateLastRun(std::move(value)); return *this;}
    inline ImagePipeline& WithDateLastRun(const char* value) { SetDateLastRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next date when the pipeline is scheduled to run.</p>
     */
    inline const Aws::String& GetDateNextRun() const{ return m_dateNextRun; }
    inline bool DateNextRunHasBeenSet() const { return m_dateNextRunHasBeenSet; }
    inline void SetDateNextRun(const Aws::String& value) { m_dateNextRunHasBeenSet = true; m_dateNextRun = value; }
    inline void SetDateNextRun(Aws::String&& value) { m_dateNextRunHasBeenSet = true; m_dateNextRun = std::move(value); }
    inline void SetDateNextRun(const char* value) { m_dateNextRunHasBeenSet = true; m_dateNextRun.assign(value); }
    inline ImagePipeline& WithDateNextRun(const Aws::String& value) { SetDateNextRun(value); return *this;}
    inline ImagePipeline& WithDateNextRun(Aws::String&& value) { SetDateNextRun(std::move(value)); return *this;}
    inline ImagePipeline& WithDateNextRun(const char* value) { SetDateNextRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of this image pipeline.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ImagePipeline& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ImagePipeline& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ImagePipeline& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ImagePipeline& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ImagePipeline& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ImagePipeline& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ImagePipeline& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ImagePipeline& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ImagePipeline& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains settings for vulnerability scans.</p>
     */
    inline const ImageScanningConfiguration& GetImageScanningConfiguration() const{ return m_imageScanningConfiguration; }
    inline bool ImageScanningConfigurationHasBeenSet() const { return m_imageScanningConfigurationHasBeenSet; }
    inline void SetImageScanningConfiguration(const ImageScanningConfiguration& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = value; }
    inline void SetImageScanningConfiguration(ImageScanningConfiguration&& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = std::move(value); }
    inline ImagePipeline& WithImageScanningConfiguration(const ImageScanningConfiguration& value) { SetImageScanningConfiguration(value); return *this;}
    inline ImagePipeline& WithImageScanningConfiguration(ImageScanningConfiguration&& value) { SetImageScanningConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) for the IAM role you create that
     * grants Image Builder access to perform workflow actions.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }
    inline ImagePipeline& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}
    inline ImagePipeline& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}
    inline ImagePipeline& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the workflows that run for the image pipeline.</p>
     */
    inline const Aws::Vector<WorkflowConfiguration>& GetWorkflows() const{ return m_workflows; }
    inline bool WorkflowsHasBeenSet() const { return m_workflowsHasBeenSet; }
    inline void SetWorkflows(const Aws::Vector<WorkflowConfiguration>& value) { m_workflowsHasBeenSet = true; m_workflows = value; }
    inline void SetWorkflows(Aws::Vector<WorkflowConfiguration>&& value) { m_workflowsHasBeenSet = true; m_workflows = std::move(value); }
    inline ImagePipeline& WithWorkflows(const Aws::Vector<WorkflowConfiguration>& value) { SetWorkflows(value); return *this;}
    inline ImagePipeline& WithWorkflows(Aws::Vector<WorkflowConfiguration>&& value) { SetWorkflows(std::move(value)); return *this;}
    inline ImagePipeline& AddWorkflows(const WorkflowConfiguration& value) { m_workflowsHasBeenSet = true; m_workflows.push_back(value); return *this; }
    inline ImagePipeline& AddWorkflows(WorkflowConfiguration&& value) { m_workflowsHasBeenSet = true; m_workflows.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;

    bool m_enhancedImageMetadataEnabled;
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

    PipelineStatus m_status;
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

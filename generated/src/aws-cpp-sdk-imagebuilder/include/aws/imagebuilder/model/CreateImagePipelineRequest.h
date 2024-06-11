/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ImageTestsConfiguration.h>
#include <aws/imagebuilder/model/Schedule.h>
#include <aws/imagebuilder/model/PipelineStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/imagebuilder/model/ImageScanningConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/WorkflowConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class CreateImagePipelineRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API CreateImagePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateImagePipeline"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the image pipeline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateImagePipelineRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateImagePipelineRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateImagePipelineRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline CreateImagePipelineRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateImagePipelineRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateImagePipelineRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that will be used to
     * configure images created by this image pipeline.</p>
     */
    inline const Aws::String& GetImageRecipeArn() const{ return m_imageRecipeArn; }
    inline bool ImageRecipeArnHasBeenSet() const { return m_imageRecipeArnHasBeenSet; }
    inline void SetImageRecipeArn(const Aws::String& value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn = value; }
    inline void SetImageRecipeArn(Aws::String&& value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn = std::move(value); }
    inline void SetImageRecipeArn(const char* value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn.assign(value); }
    inline CreateImagePipelineRequest& WithImageRecipeArn(const Aws::String& value) { SetImageRecipeArn(value); return *this;}
    inline CreateImagePipelineRequest& WithImageRecipeArn(Aws::String&& value) { SetImageRecipeArn(std::move(value)); return *this;}
    inline CreateImagePipelineRequest& WithImageRecipeArn(const char* value) { SetImageRecipeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that is used to
     * configure images created by this container pipeline.</p>
     */
    inline const Aws::String& GetContainerRecipeArn() const{ return m_containerRecipeArn; }
    inline bool ContainerRecipeArnHasBeenSet() const { return m_containerRecipeArnHasBeenSet; }
    inline void SetContainerRecipeArn(const Aws::String& value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn = value; }
    inline void SetContainerRecipeArn(Aws::String&& value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn = std::move(value); }
    inline void SetContainerRecipeArn(const char* value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn.assign(value); }
    inline CreateImagePipelineRequest& WithContainerRecipeArn(const Aws::String& value) { SetContainerRecipeArn(value); return *this;}
    inline CreateImagePipelineRequest& WithContainerRecipeArn(Aws::String&& value) { SetContainerRecipeArn(std::move(value)); return *this;}
    inline CreateImagePipelineRequest& WithContainerRecipeArn(const char* value) { SetContainerRecipeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that will
     * be used to build images created by this image pipeline.</p>
     */
    inline const Aws::String& GetInfrastructureConfigurationArn() const{ return m_infrastructureConfigurationArn; }
    inline bool InfrastructureConfigurationArnHasBeenSet() const { return m_infrastructureConfigurationArnHasBeenSet; }
    inline void SetInfrastructureConfigurationArn(const Aws::String& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = value; }
    inline void SetInfrastructureConfigurationArn(Aws::String&& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = std::move(value); }
    inline void SetInfrastructureConfigurationArn(const char* value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn.assign(value); }
    inline CreateImagePipelineRequest& WithInfrastructureConfigurationArn(const Aws::String& value) { SetInfrastructureConfigurationArn(value); return *this;}
    inline CreateImagePipelineRequest& WithInfrastructureConfigurationArn(Aws::String&& value) { SetInfrastructureConfigurationArn(std::move(value)); return *this;}
    inline CreateImagePipelineRequest& WithInfrastructureConfigurationArn(const char* value) { SetInfrastructureConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that will be
     * used to configure and distribute images created by this image pipeline.</p>
     */
    inline const Aws::String& GetDistributionConfigurationArn() const{ return m_distributionConfigurationArn; }
    inline bool DistributionConfigurationArnHasBeenSet() const { return m_distributionConfigurationArnHasBeenSet; }
    inline void SetDistributionConfigurationArn(const Aws::String& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = value; }
    inline void SetDistributionConfigurationArn(Aws::String&& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = std::move(value); }
    inline void SetDistributionConfigurationArn(const char* value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn.assign(value); }
    inline CreateImagePipelineRequest& WithDistributionConfigurationArn(const Aws::String& value) { SetDistributionConfigurationArn(value); return *this;}
    inline CreateImagePipelineRequest& WithDistributionConfigurationArn(Aws::String&& value) { SetDistributionConfigurationArn(std::move(value)); return *this;}
    inline CreateImagePipelineRequest& WithDistributionConfigurationArn(const char* value) { SetDistributionConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image test configuration of the image pipeline.</p>
     */
    inline const ImageTestsConfiguration& GetImageTestsConfiguration() const{ return m_imageTestsConfiguration; }
    inline bool ImageTestsConfigurationHasBeenSet() const { return m_imageTestsConfigurationHasBeenSet; }
    inline void SetImageTestsConfiguration(const ImageTestsConfiguration& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = value; }
    inline void SetImageTestsConfiguration(ImageTestsConfiguration&& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = std::move(value); }
    inline CreateImagePipelineRequest& WithImageTestsConfiguration(const ImageTestsConfiguration& value) { SetImageTestsConfiguration(value); return *this;}
    inline CreateImagePipelineRequest& WithImageTestsConfiguration(ImageTestsConfiguration&& value) { SetImageTestsConfiguration(std::move(value)); return *this;}
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
    inline CreateImagePipelineRequest& WithEnhancedImageMetadataEnabled(bool value) { SetEnhancedImageMetadataEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule of the image pipeline.</p>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline CreateImagePipelineRequest& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}
    inline CreateImagePipelineRequest& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the image pipeline.</p>
     */
    inline const PipelineStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const PipelineStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(PipelineStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CreateImagePipelineRequest& WithStatus(const PipelineStatus& value) { SetStatus(value); return *this;}
    inline CreateImagePipelineRequest& WithStatus(PipelineStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of the image pipeline.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateImagePipelineRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateImagePipelineRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateImagePipelineRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateImagePipelineRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateImagePipelineRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateImagePipelineRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateImagePipelineRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateImagePipelineRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateImagePipelineRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateImagePipelineRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateImagePipelineRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateImagePipelineRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains settings for vulnerability scans.</p>
     */
    inline const ImageScanningConfiguration& GetImageScanningConfiguration() const{ return m_imageScanningConfiguration; }
    inline bool ImageScanningConfigurationHasBeenSet() const { return m_imageScanningConfigurationHasBeenSet; }
    inline void SetImageScanningConfiguration(const ImageScanningConfiguration& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = value; }
    inline void SetImageScanningConfiguration(ImageScanningConfiguration&& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = std::move(value); }
    inline CreateImagePipelineRequest& WithImageScanningConfiguration(const ImageScanningConfiguration& value) { SetImageScanningConfiguration(value); return *this;}
    inline CreateImagePipelineRequest& WithImageScanningConfiguration(ImageScanningConfiguration&& value) { SetImageScanningConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains an array of workflow configuration objects.</p>
     */
    inline const Aws::Vector<WorkflowConfiguration>& GetWorkflows() const{ return m_workflows; }
    inline bool WorkflowsHasBeenSet() const { return m_workflowsHasBeenSet; }
    inline void SetWorkflows(const Aws::Vector<WorkflowConfiguration>& value) { m_workflowsHasBeenSet = true; m_workflows = value; }
    inline void SetWorkflows(Aws::Vector<WorkflowConfiguration>&& value) { m_workflowsHasBeenSet = true; m_workflows = std::move(value); }
    inline CreateImagePipelineRequest& WithWorkflows(const Aws::Vector<WorkflowConfiguration>& value) { SetWorkflows(value); return *this;}
    inline CreateImagePipelineRequest& WithWorkflows(Aws::Vector<WorkflowConfiguration>&& value) { SetWorkflows(std::move(value)); return *this;}
    inline CreateImagePipelineRequest& AddWorkflows(const WorkflowConfiguration& value) { m_workflowsHasBeenSet = true; m_workflows.push_back(value); return *this; }
    inline CreateImagePipelineRequest& AddWorkflows(WorkflowConfiguration&& value) { m_workflowsHasBeenSet = true; m_workflows.push_back(std::move(value)); return *this; }
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
    inline CreateImagePipelineRequest& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}
    inline CreateImagePipelineRequest& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}
    inline CreateImagePipelineRequest& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

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

    bool m_enhancedImageMetadataEnabled;
    bool m_enhancedImageMetadataEnabledHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    PipelineStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ImageScanningConfiguration m_imageScanningConfiguration;
    bool m_imageScanningConfigurationHasBeenSet = false;

    Aws::Vector<WorkflowConfiguration> m_workflows;
    bool m_workflowsHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws

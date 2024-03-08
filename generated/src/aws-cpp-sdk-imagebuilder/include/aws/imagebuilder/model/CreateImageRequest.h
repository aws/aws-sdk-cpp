/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ImageTestsConfiguration.h>
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
  class CreateImageRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API CreateImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateImage"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested, and assessed.</p>
     */
    inline const Aws::String& GetImageRecipeArn() const{ return m_imageRecipeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested, and assessed.</p>
     */
    inline bool ImageRecipeArnHasBeenSet() const { return m_imageRecipeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested, and assessed.</p>
     */
    inline void SetImageRecipeArn(const Aws::String& value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested, and assessed.</p>
     */
    inline void SetImageRecipeArn(Aws::String&& value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested, and assessed.</p>
     */
    inline void SetImageRecipeArn(const char* value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested, and assessed.</p>
     */
    inline CreateImageRequest& WithImageRecipeArn(const Aws::String& value) { SetImageRecipeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested, and assessed.</p>
     */
    inline CreateImageRequest& WithImageRecipeArn(Aws::String&& value) { SetImageRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested, and assessed.</p>
     */
    inline CreateImageRequest& WithImageRecipeArn(const char* value) { SetImageRecipeArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that defines how
     * images are configured and tested.</p>
     */
    inline const Aws::String& GetContainerRecipeArn() const{ return m_containerRecipeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that defines how
     * images are configured and tested.</p>
     */
    inline bool ContainerRecipeArnHasBeenSet() const { return m_containerRecipeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that defines how
     * images are configured and tested.</p>
     */
    inline void SetContainerRecipeArn(const Aws::String& value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that defines how
     * images are configured and tested.</p>
     */
    inline void SetContainerRecipeArn(Aws::String&& value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that defines how
     * images are configured and tested.</p>
     */
    inline void SetContainerRecipeArn(const char* value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that defines how
     * images are configured and tested.</p>
     */
    inline CreateImageRequest& WithContainerRecipeArn(const Aws::String& value) { SetContainerRecipeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that defines how
     * images are configured and tested.</p>
     */
    inline CreateImageRequest& WithContainerRecipeArn(Aws::String&& value) { SetContainerRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that defines how
     * images are configured and tested.</p>
     */
    inline CreateImageRequest& WithContainerRecipeArn(const char* value) { SetContainerRecipeArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that defines
     * and configures the outputs of your pipeline.</p>
     */
    inline const Aws::String& GetDistributionConfigurationArn() const{ return m_distributionConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that defines
     * and configures the outputs of your pipeline.</p>
     */
    inline bool DistributionConfigurationArnHasBeenSet() const { return m_distributionConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that defines
     * and configures the outputs of your pipeline.</p>
     */
    inline void SetDistributionConfigurationArn(const Aws::String& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that defines
     * and configures the outputs of your pipeline.</p>
     */
    inline void SetDistributionConfigurationArn(Aws::String&& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that defines
     * and configures the outputs of your pipeline.</p>
     */
    inline void SetDistributionConfigurationArn(const char* value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that defines
     * and configures the outputs of your pipeline.</p>
     */
    inline CreateImageRequest& WithDistributionConfigurationArn(const Aws::String& value) { SetDistributionConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that defines
     * and configures the outputs of your pipeline.</p>
     */
    inline CreateImageRequest& WithDistributionConfigurationArn(Aws::String&& value) { SetDistributionConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that defines
     * and configures the outputs of your pipeline.</p>
     */
    inline CreateImageRequest& WithDistributionConfigurationArn(const char* value) { SetDistributionConfigurationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested.</p>
     */
    inline const Aws::String& GetInfrastructureConfigurationArn() const{ return m_infrastructureConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested.</p>
     */
    inline bool InfrastructureConfigurationArnHasBeenSet() const { return m_infrastructureConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested.</p>
     */
    inline void SetInfrastructureConfigurationArn(const Aws::String& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested.</p>
     */
    inline void SetInfrastructureConfigurationArn(Aws::String&& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested.</p>
     */
    inline void SetInfrastructureConfigurationArn(const char* value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested.</p>
     */
    inline CreateImageRequest& WithInfrastructureConfigurationArn(const Aws::String& value) { SetInfrastructureConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested.</p>
     */
    inline CreateImageRequest& WithInfrastructureConfigurationArn(Aws::String&& value) { SetInfrastructureConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested.</p>
     */
    inline CreateImageRequest& WithInfrastructureConfigurationArn(const char* value) { SetInfrastructureConfigurationArn(value); return *this;}


    /**
     * <p>The image tests configuration of the image.</p>
     */
    inline const ImageTestsConfiguration& GetImageTestsConfiguration() const{ return m_imageTestsConfiguration; }

    /**
     * <p>The image tests configuration of the image.</p>
     */
    inline bool ImageTestsConfigurationHasBeenSet() const { return m_imageTestsConfigurationHasBeenSet; }

    /**
     * <p>The image tests configuration of the image.</p>
     */
    inline void SetImageTestsConfiguration(const ImageTestsConfiguration& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = value; }

    /**
     * <p>The image tests configuration of the image.</p>
     */
    inline void SetImageTestsConfiguration(ImageTestsConfiguration&& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = std::move(value); }

    /**
     * <p>The image tests configuration of the image.</p>
     */
    inline CreateImageRequest& WithImageTestsConfiguration(const ImageTestsConfiguration& value) { SetImageTestsConfiguration(value); return *this;}

    /**
     * <p>The image tests configuration of the image.</p>
     */
    inline CreateImageRequest& WithImageTestsConfiguration(ImageTestsConfiguration&& value) { SetImageTestsConfiguration(std::move(value)); return *this;}


    /**
     * <p>Collects additional information about the image being created, including the
     * operating system (OS) version and package list. This information is used to
     * enhance the overall experience of using EC2 Image Builder. Enabled by
     * default.</p>
     */
    inline bool GetEnhancedImageMetadataEnabled() const{ return m_enhancedImageMetadataEnabled; }

    /**
     * <p>Collects additional information about the image being created, including the
     * operating system (OS) version and package list. This information is used to
     * enhance the overall experience of using EC2 Image Builder. Enabled by
     * default.</p>
     */
    inline bool EnhancedImageMetadataEnabledHasBeenSet() const { return m_enhancedImageMetadataEnabledHasBeenSet; }

    /**
     * <p>Collects additional information about the image being created, including the
     * operating system (OS) version and package list. This information is used to
     * enhance the overall experience of using EC2 Image Builder. Enabled by
     * default.</p>
     */
    inline void SetEnhancedImageMetadataEnabled(bool value) { m_enhancedImageMetadataEnabledHasBeenSet = true; m_enhancedImageMetadataEnabled = value; }

    /**
     * <p>Collects additional information about the image being created, including the
     * operating system (OS) version and package list. This information is used to
     * enhance the overall experience of using EC2 Image Builder. Enabled by
     * default.</p>
     */
    inline CreateImageRequest& WithEnhancedImageMetadataEnabled(bool value) { SetEnhancedImageMetadataEnabled(value); return *this;}


    /**
     * <p>The tags of the image.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of the image.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags of the image.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags of the image.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags of the image.</p>
     */
    inline CreateImageRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of the image.</p>
     */
    inline CreateImageRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of the image.</p>
     */
    inline CreateImageRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline CreateImageRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline CreateImageRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline CreateImageRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline CreateImageRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline CreateImageRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of the image.</p>
     */
    inline CreateImageRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline CreateImageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline CreateImageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline CreateImageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Contains settings for vulnerability scans.</p>
     */
    inline const ImageScanningConfiguration& GetImageScanningConfiguration() const{ return m_imageScanningConfiguration; }

    /**
     * <p>Contains settings for vulnerability scans.</p>
     */
    inline bool ImageScanningConfigurationHasBeenSet() const { return m_imageScanningConfigurationHasBeenSet; }

    /**
     * <p>Contains settings for vulnerability scans.</p>
     */
    inline void SetImageScanningConfiguration(const ImageScanningConfiguration& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = value; }

    /**
     * <p>Contains settings for vulnerability scans.</p>
     */
    inline void SetImageScanningConfiguration(ImageScanningConfiguration&& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = std::move(value); }

    /**
     * <p>Contains settings for vulnerability scans.</p>
     */
    inline CreateImageRequest& WithImageScanningConfiguration(const ImageScanningConfiguration& value) { SetImageScanningConfiguration(value); return *this;}

    /**
     * <p>Contains settings for vulnerability scans.</p>
     */
    inline CreateImageRequest& WithImageScanningConfiguration(ImageScanningConfiguration&& value) { SetImageScanningConfiguration(std::move(value)); return *this;}


    /**
     * <p>Contains an array of workflow configuration objects.</p>
     */
    inline const Aws::Vector<WorkflowConfiguration>& GetWorkflows() const{ return m_workflows; }

    /**
     * <p>Contains an array of workflow configuration objects.</p>
     */
    inline bool WorkflowsHasBeenSet() const { return m_workflowsHasBeenSet; }

    /**
     * <p>Contains an array of workflow configuration objects.</p>
     */
    inline void SetWorkflows(const Aws::Vector<WorkflowConfiguration>& value) { m_workflowsHasBeenSet = true; m_workflows = value; }

    /**
     * <p>Contains an array of workflow configuration objects.</p>
     */
    inline void SetWorkflows(Aws::Vector<WorkflowConfiguration>&& value) { m_workflowsHasBeenSet = true; m_workflows = std::move(value); }

    /**
     * <p>Contains an array of workflow configuration objects.</p>
     */
    inline CreateImageRequest& WithWorkflows(const Aws::Vector<WorkflowConfiguration>& value) { SetWorkflows(value); return *this;}

    /**
     * <p>Contains an array of workflow configuration objects.</p>
     */
    inline CreateImageRequest& WithWorkflows(Aws::Vector<WorkflowConfiguration>&& value) { SetWorkflows(std::move(value)); return *this;}

    /**
     * <p>Contains an array of workflow configuration objects.</p>
     */
    inline CreateImageRequest& AddWorkflows(const WorkflowConfiguration& value) { m_workflowsHasBeenSet = true; m_workflows.push_back(value); return *this; }

    /**
     * <p>Contains an array of workflow configuration objects.</p>
     */
    inline CreateImageRequest& AddWorkflows(WorkflowConfiguration&& value) { m_workflowsHasBeenSet = true; m_workflows.push_back(std::move(value)); return *this; }


    /**
     * <p>The name or Amazon Resource Name (ARN) for the IAM role you create that
     * grants Image Builder access to perform workflow actions.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }

    /**
     * <p>The name or Amazon Resource Name (ARN) for the IAM role you create that
     * grants Image Builder access to perform workflow actions.</p>
     */
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) for the IAM role you create that
     * grants Image Builder access to perform workflow actions.</p>
     */
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) for the IAM role you create that
     * grants Image Builder access to perform workflow actions.</p>
     */
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) for the IAM role you create that
     * grants Image Builder access to perform workflow actions.</p>
     */
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) for the IAM role you create that
     * grants Image Builder access to perform workflow actions.</p>
     */
    inline CreateImageRequest& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) for the IAM role you create that
     * grants Image Builder access to perform workflow actions.</p>
     */
    inline CreateImageRequest& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) for the IAM role you create that
     * grants Image Builder access to perform workflow actions.</p>
     */
    inline CreateImageRequest& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}

  private:

    Aws::String m_imageRecipeArn;
    bool m_imageRecipeArnHasBeenSet = false;

    Aws::String m_containerRecipeArn;
    bool m_containerRecipeArnHasBeenSet = false;

    Aws::String m_distributionConfigurationArn;
    bool m_distributionConfigurationArnHasBeenSet = false;

    Aws::String m_infrastructureConfigurationArn;
    bool m_infrastructureConfigurationArnHasBeenSet = false;

    ImageTestsConfiguration m_imageTestsConfiguration;
    bool m_imageTestsConfigurationHasBeenSet = false;

    bool m_enhancedImageMetadataEnabled;
    bool m_enhancedImageMetadataEnabledHasBeenSet = false;

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

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
    AWS_IMAGEBUILDER_API CreateImageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateImage"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that defines how images
     * are configured, tested, and assessed.</p>
     */
    inline const Aws::String& GetImageRecipeArn() const { return m_imageRecipeArn; }
    inline bool ImageRecipeArnHasBeenSet() const { return m_imageRecipeArnHasBeenSet; }
    template<typename ImageRecipeArnT = Aws::String>
    void SetImageRecipeArn(ImageRecipeArnT&& value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn = std::forward<ImageRecipeArnT>(value); }
    template<typename ImageRecipeArnT = Aws::String>
    CreateImageRequest& WithImageRecipeArn(ImageRecipeArnT&& value) { SetImageRecipeArn(std::forward<ImageRecipeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that defines how
     * images are configured and tested.</p>
     */
    inline const Aws::String& GetContainerRecipeArn() const { return m_containerRecipeArn; }
    inline bool ContainerRecipeArnHasBeenSet() const { return m_containerRecipeArnHasBeenSet; }
    template<typename ContainerRecipeArnT = Aws::String>
    void SetContainerRecipeArn(ContainerRecipeArnT&& value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn = std::forward<ContainerRecipeArnT>(value); }
    template<typename ContainerRecipeArnT = Aws::String>
    CreateImageRequest& WithContainerRecipeArn(ContainerRecipeArnT&& value) { SetContainerRecipeArn(std::forward<ContainerRecipeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that defines
     * and configures the outputs of your pipeline.</p>
     */
    inline const Aws::String& GetDistributionConfigurationArn() const { return m_distributionConfigurationArn; }
    inline bool DistributionConfigurationArnHasBeenSet() const { return m_distributionConfigurationArnHasBeenSet; }
    template<typename DistributionConfigurationArnT = Aws::String>
    void SetDistributionConfigurationArn(DistributionConfigurationArnT&& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = std::forward<DistributionConfigurationArnT>(value); }
    template<typename DistributionConfigurationArnT = Aws::String>
    CreateImageRequest& WithDistributionConfigurationArn(DistributionConfigurationArnT&& value) { SetDistributionConfigurationArn(std::forward<DistributionConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that
     * defines the environment in which your image will be built and tested.</p>
     */
    inline const Aws::String& GetInfrastructureConfigurationArn() const { return m_infrastructureConfigurationArn; }
    inline bool InfrastructureConfigurationArnHasBeenSet() const { return m_infrastructureConfigurationArnHasBeenSet; }
    template<typename InfrastructureConfigurationArnT = Aws::String>
    void SetInfrastructureConfigurationArn(InfrastructureConfigurationArnT&& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = std::forward<InfrastructureConfigurationArnT>(value); }
    template<typename InfrastructureConfigurationArnT = Aws::String>
    CreateImageRequest& WithInfrastructureConfigurationArn(InfrastructureConfigurationArnT&& value) { SetInfrastructureConfigurationArn(std::forward<InfrastructureConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image tests configuration of the image.</p>
     */
    inline const ImageTestsConfiguration& GetImageTestsConfiguration() const { return m_imageTestsConfiguration; }
    inline bool ImageTestsConfigurationHasBeenSet() const { return m_imageTestsConfigurationHasBeenSet; }
    template<typename ImageTestsConfigurationT = ImageTestsConfiguration>
    void SetImageTestsConfiguration(ImageTestsConfigurationT&& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = std::forward<ImageTestsConfigurationT>(value); }
    template<typename ImageTestsConfigurationT = ImageTestsConfiguration>
    CreateImageRequest& WithImageTestsConfiguration(ImageTestsConfigurationT&& value) { SetImageTestsConfiguration(std::forward<ImageTestsConfigurationT>(value)); return *this;}
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
    inline CreateImageRequest& WithEnhancedImageMetadataEnabled(bool value) { SetEnhancedImageMetadataEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags of the image.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateImageRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateImageRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateImageRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    CreateImageRequest& WithImageScanningConfiguration(ImageScanningConfigurationT&& value) { SetImageScanningConfiguration(std::forward<ImageScanningConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains an array of workflow configuration objects.</p>
     */
    inline const Aws::Vector<WorkflowConfiguration>& GetWorkflows() const { return m_workflows; }
    inline bool WorkflowsHasBeenSet() const { return m_workflowsHasBeenSet; }
    template<typename WorkflowsT = Aws::Vector<WorkflowConfiguration>>
    void SetWorkflows(WorkflowsT&& value) { m_workflowsHasBeenSet = true; m_workflows = std::forward<WorkflowsT>(value); }
    template<typename WorkflowsT = Aws::Vector<WorkflowConfiguration>>
    CreateImageRequest& WithWorkflows(WorkflowsT&& value) { SetWorkflows(std::forward<WorkflowsT>(value)); return *this;}
    template<typename WorkflowsT = WorkflowConfiguration>
    CreateImageRequest& AddWorkflows(WorkflowsT&& value) { m_workflowsHasBeenSet = true; m_workflows.emplace_back(std::forward<WorkflowsT>(value)); return *this; }
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
    CreateImageRequest& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}
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

    bool m_enhancedImageMetadataEnabled{false};
    bool m_enhancedImageMetadataEnabledHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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

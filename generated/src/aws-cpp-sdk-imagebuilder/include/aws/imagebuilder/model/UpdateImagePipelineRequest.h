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
  class UpdateImagePipelineRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API UpdateImagePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateImagePipeline"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * update.</p>
     */
    inline const Aws::String& GetImagePipelineArn() const{ return m_imagePipelineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * update.</p>
     */
    inline bool ImagePipelineArnHasBeenSet() const { return m_imagePipelineArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * update.</p>
     */
    inline void SetImagePipelineArn(const Aws::String& value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * update.</p>
     */
    inline void SetImagePipelineArn(Aws::String&& value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * update.</p>
     */
    inline void SetImagePipelineArn(const char* value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * update.</p>
     */
    inline UpdateImagePipelineRequest& WithImagePipelineArn(const Aws::String& value) { SetImagePipelineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * update.</p>
     */
    inline UpdateImagePipelineRequest& WithImagePipelineArn(Aws::String&& value) { SetImagePipelineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * update.</p>
     */
    inline UpdateImagePipelineRequest& WithImagePipelineArn(const char* value) { SetImagePipelineArn(value); return *this;}


    /**
     * <p>The description of the image pipeline.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the image pipeline.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the image pipeline.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the image pipeline.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the image pipeline.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that will be used to
     * configure images updated by this image pipeline.</p>
     */
    inline const Aws::String& GetImageRecipeArn() const{ return m_imageRecipeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that will be used to
     * configure images updated by this image pipeline.</p>
     */
    inline bool ImageRecipeArnHasBeenSet() const { return m_imageRecipeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that will be used to
     * configure images updated by this image pipeline.</p>
     */
    inline void SetImageRecipeArn(const Aws::String& value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that will be used to
     * configure images updated by this image pipeline.</p>
     */
    inline void SetImageRecipeArn(Aws::String&& value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that will be used to
     * configure images updated by this image pipeline.</p>
     */
    inline void SetImageRecipeArn(const char* value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that will be used to
     * configure images updated by this image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithImageRecipeArn(const Aws::String& value) { SetImageRecipeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that will be used to
     * configure images updated by this image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithImageRecipeArn(Aws::String&& value) { SetImageRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that will be used to
     * configure images updated by this image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithImageRecipeArn(const char* value) { SetImageRecipeArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the container pipeline to update.</p>
     */
    inline const Aws::String& GetContainerRecipeArn() const{ return m_containerRecipeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container pipeline to update.</p>
     */
    inline bool ContainerRecipeArnHasBeenSet() const { return m_containerRecipeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container pipeline to update.</p>
     */
    inline void SetContainerRecipeArn(const Aws::String& value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container pipeline to update.</p>
     */
    inline void SetContainerRecipeArn(Aws::String&& value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container pipeline to update.</p>
     */
    inline void SetContainerRecipeArn(const char* value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container pipeline to update.</p>
     */
    inline UpdateImagePipelineRequest& WithContainerRecipeArn(const Aws::String& value) { SetContainerRecipeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container pipeline to update.</p>
     */
    inline UpdateImagePipelineRequest& WithContainerRecipeArn(Aws::String&& value) { SetContainerRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container pipeline to update.</p>
     */
    inline UpdateImagePipelineRequest& WithContainerRecipeArn(const char* value) { SetContainerRecipeArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that will
     * be used to build images updated by this image pipeline.</p>
     */
    inline const Aws::String& GetInfrastructureConfigurationArn() const{ return m_infrastructureConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that will
     * be used to build images updated by this image pipeline.</p>
     */
    inline bool InfrastructureConfigurationArnHasBeenSet() const { return m_infrastructureConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that will
     * be used to build images updated by this image pipeline.</p>
     */
    inline void SetInfrastructureConfigurationArn(const Aws::String& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that will
     * be used to build images updated by this image pipeline.</p>
     */
    inline void SetInfrastructureConfigurationArn(Aws::String&& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that will
     * be used to build images updated by this image pipeline.</p>
     */
    inline void SetInfrastructureConfigurationArn(const char* value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that will
     * be used to build images updated by this image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithInfrastructureConfigurationArn(const Aws::String& value) { SetInfrastructureConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that will
     * be used to build images updated by this image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithInfrastructureConfigurationArn(Aws::String&& value) { SetInfrastructureConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that will
     * be used to build images updated by this image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithInfrastructureConfigurationArn(const char* value) { SetInfrastructureConfigurationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that will be
     * used to configure and distribute images updated by this image pipeline.</p>
     */
    inline const Aws::String& GetDistributionConfigurationArn() const{ return m_distributionConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that will be
     * used to configure and distribute images updated by this image pipeline.</p>
     */
    inline bool DistributionConfigurationArnHasBeenSet() const { return m_distributionConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that will be
     * used to configure and distribute images updated by this image pipeline.</p>
     */
    inline void SetDistributionConfigurationArn(const Aws::String& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that will be
     * used to configure and distribute images updated by this image pipeline.</p>
     */
    inline void SetDistributionConfigurationArn(Aws::String&& value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that will be
     * used to configure and distribute images updated by this image pipeline.</p>
     */
    inline void SetDistributionConfigurationArn(const char* value) { m_distributionConfigurationArnHasBeenSet = true; m_distributionConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that will be
     * used to configure and distribute images updated by this image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithDistributionConfigurationArn(const Aws::String& value) { SetDistributionConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that will be
     * used to configure and distribute images updated by this image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithDistributionConfigurationArn(Aws::String&& value) { SetDistributionConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that will be
     * used to configure and distribute images updated by this image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithDistributionConfigurationArn(const char* value) { SetDistributionConfigurationArn(value); return *this;}


    /**
     * <p>The image test configuration of the image pipeline.</p>
     */
    inline const ImageTestsConfiguration& GetImageTestsConfiguration() const{ return m_imageTestsConfiguration; }

    /**
     * <p>The image test configuration of the image pipeline.</p>
     */
    inline bool ImageTestsConfigurationHasBeenSet() const { return m_imageTestsConfigurationHasBeenSet; }

    /**
     * <p>The image test configuration of the image pipeline.</p>
     */
    inline void SetImageTestsConfiguration(const ImageTestsConfiguration& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = value; }

    /**
     * <p>The image test configuration of the image pipeline.</p>
     */
    inline void SetImageTestsConfiguration(ImageTestsConfiguration&& value) { m_imageTestsConfigurationHasBeenSet = true; m_imageTestsConfiguration = std::move(value); }

    /**
     * <p>The image test configuration of the image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithImageTestsConfiguration(const ImageTestsConfiguration& value) { SetImageTestsConfiguration(value); return *this;}

    /**
     * <p>The image test configuration of the image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithImageTestsConfiguration(ImageTestsConfiguration&& value) { SetImageTestsConfiguration(std::move(value)); return *this;}


    /**
     * <p> Collects additional information about the image being created, including the
     * operating system (OS) version and package list. This information is used to
     * enhance the overall experience of using EC2 Image Builder. Enabled by
     * default.</p>
     */
    inline bool GetEnhancedImageMetadataEnabled() const{ return m_enhancedImageMetadataEnabled; }

    /**
     * <p> Collects additional information about the image being created, including the
     * operating system (OS) version and package list. This information is used to
     * enhance the overall experience of using EC2 Image Builder. Enabled by
     * default.</p>
     */
    inline bool EnhancedImageMetadataEnabledHasBeenSet() const { return m_enhancedImageMetadataEnabledHasBeenSet; }

    /**
     * <p> Collects additional information about the image being created, including the
     * operating system (OS) version and package list. This information is used to
     * enhance the overall experience of using EC2 Image Builder. Enabled by
     * default.</p>
     */
    inline void SetEnhancedImageMetadataEnabled(bool value) { m_enhancedImageMetadataEnabledHasBeenSet = true; m_enhancedImageMetadataEnabled = value; }

    /**
     * <p> Collects additional information about the image being created, including the
     * operating system (OS) version and package list. This information is used to
     * enhance the overall experience of using EC2 Image Builder. Enabled by
     * default.</p>
     */
    inline UpdateImagePipelineRequest& WithEnhancedImageMetadataEnabled(bool value) { SetEnhancedImageMetadataEnabled(value); return *this;}


    /**
     * <p>The schedule of the image pipeline.</p>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule of the image pipeline.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The schedule of the image pipeline.</p>
     */
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule of the image pipeline.</p>
     */
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule of the image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule of the image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>The status of the image pipeline.</p>
     */
    inline const PipelineStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the image pipeline.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the image pipeline.</p>
     */
    inline void SetStatus(const PipelineStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the image pipeline.</p>
     */
    inline void SetStatus(PipelineStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithStatus(const PipelineStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the image pipeline.</p>
     */
    inline UpdateImagePipelineRequest& WithStatus(PipelineStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline UpdateImagePipelineRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline UpdateImagePipelineRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline UpdateImagePipelineRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_imagePipelineArn;
    bool m_imagePipelineArnHasBeenSet = false;

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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws

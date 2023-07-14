/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/KernelGatewayImageConfig.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreateAppImageConfigRequest : public SageMakerRequest
  {
  public:
    CreateAppImageConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAppImageConfig"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline const Aws::String& GetAppImageConfigName() const{ return m_appImageConfigName; }

    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline bool AppImageConfigNameHasBeenSet() const { return m_appImageConfigNameHasBeenSet; }

    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline void SetAppImageConfigName(const Aws::String& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = value; }

    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline void SetAppImageConfigName(Aws::String&& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = std::move(value); }

    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline void SetAppImageConfigName(const char* value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName.assign(value); }

    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline CreateAppImageConfigRequest& WithAppImageConfigName(const Aws::String& value) { SetAppImageConfigName(value); return *this;}

    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline CreateAppImageConfigRequest& WithAppImageConfigName(Aws::String&& value) { SetAppImageConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline CreateAppImageConfigRequest& WithAppImageConfigName(const char* value) { SetAppImageConfigName(value); return *this;}


    /**
     * <p>A list of tags to apply to the AppImageConfig.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to apply to the AppImageConfig.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to apply to the AppImageConfig.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to apply to the AppImageConfig.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to apply to the AppImageConfig.</p>
     */
    inline CreateAppImageConfigRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to apply to the AppImageConfig.</p>
     */
    inline CreateAppImageConfigRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to apply to the AppImageConfig.</p>
     */
    inline CreateAppImageConfigRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to apply to the AppImageConfig.</p>
     */
    inline CreateAppImageConfigRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The KernelGatewayImageConfig.</p>
     */
    inline const KernelGatewayImageConfig& GetKernelGatewayImageConfig() const{ return m_kernelGatewayImageConfig; }

    /**
     * <p>The KernelGatewayImageConfig.</p>
     */
    inline bool KernelGatewayImageConfigHasBeenSet() const { return m_kernelGatewayImageConfigHasBeenSet; }

    /**
     * <p>The KernelGatewayImageConfig.</p>
     */
    inline void SetKernelGatewayImageConfig(const KernelGatewayImageConfig& value) { m_kernelGatewayImageConfigHasBeenSet = true; m_kernelGatewayImageConfig = value; }

    /**
     * <p>The KernelGatewayImageConfig.</p>
     */
    inline void SetKernelGatewayImageConfig(KernelGatewayImageConfig&& value) { m_kernelGatewayImageConfigHasBeenSet = true; m_kernelGatewayImageConfig = std::move(value); }

    /**
     * <p>The KernelGatewayImageConfig.</p>
     */
    inline CreateAppImageConfigRequest& WithKernelGatewayImageConfig(const KernelGatewayImageConfig& value) { SetKernelGatewayImageConfig(value); return *this;}

    /**
     * <p>The KernelGatewayImageConfig.</p>
     */
    inline CreateAppImageConfigRequest& WithKernelGatewayImageConfig(KernelGatewayImageConfig&& value) { SetKernelGatewayImageConfig(std::move(value)); return *this;}

  private:

    Aws::String m_appImageConfigName;
    bool m_appImageConfigNameHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    KernelGatewayImageConfig m_kernelGatewayImageConfig;
    bool m_kernelGatewayImageConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

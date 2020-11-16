/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CustomImage.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The KernelGateway app settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/KernelGatewayAppSettings">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API KernelGatewayAppSettings
  {
  public:
    KernelGatewayAppSettings();
    KernelGatewayAppSettings(Aws::Utils::Json::JsonView jsonValue);
    KernelGatewayAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the KernelGateway app.</p>
     */
    inline const ResourceSpec& GetDefaultResourceSpec() const{ return m_defaultResourceSpec; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the KernelGateway app.</p>
     */
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the KernelGateway app.</p>
     */
    inline void SetDefaultResourceSpec(const ResourceSpec& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = value; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the KernelGateway app.</p>
     */
    inline void SetDefaultResourceSpec(ResourceSpec&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::move(value); }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the KernelGateway app.</p>
     */
    inline KernelGatewayAppSettings& WithDefaultResourceSpec(const ResourceSpec& value) { SetDefaultResourceSpec(value); return *this;}

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the KernelGateway app.</p>
     */
    inline KernelGatewayAppSettings& WithDefaultResourceSpec(ResourceSpec&& value) { SetDefaultResourceSpec(std::move(value)); return *this;}


    /**
     * <p>A list of custom SageMaker images that are configured to run as a
     * KernelGateway app.</p>
     */
    inline const Aws::Vector<CustomImage>& GetCustomImages() const{ return m_customImages; }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a
     * KernelGateway app.</p>
     */
    inline bool CustomImagesHasBeenSet() const { return m_customImagesHasBeenSet; }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a
     * KernelGateway app.</p>
     */
    inline void SetCustomImages(const Aws::Vector<CustomImage>& value) { m_customImagesHasBeenSet = true; m_customImages = value; }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a
     * KernelGateway app.</p>
     */
    inline void SetCustomImages(Aws::Vector<CustomImage>&& value) { m_customImagesHasBeenSet = true; m_customImages = std::move(value); }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a
     * KernelGateway app.</p>
     */
    inline KernelGatewayAppSettings& WithCustomImages(const Aws::Vector<CustomImage>& value) { SetCustomImages(value); return *this;}

    /**
     * <p>A list of custom SageMaker images that are configured to run as a
     * KernelGateway app.</p>
     */
    inline KernelGatewayAppSettings& WithCustomImages(Aws::Vector<CustomImage>&& value) { SetCustomImages(std::move(value)); return *this;}

    /**
     * <p>A list of custom SageMaker images that are configured to run as a
     * KernelGateway app.</p>
     */
    inline KernelGatewayAppSettings& AddCustomImages(const CustomImage& value) { m_customImagesHasBeenSet = true; m_customImages.push_back(value); return *this; }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a
     * KernelGateway app.</p>
     */
    inline KernelGatewayAppSettings& AddCustomImages(CustomImage&& value) { m_customImagesHasBeenSet = true; m_customImages.push_back(std::move(value)); return *this; }

  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet;

    Aws::Vector<CustomImage> m_customImages;
    bool m_customImagesHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

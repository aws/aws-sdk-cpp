/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CustomImage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class KernelGatewayAppSettings
  {
  public:
    AWS_SAGEMAKER_API KernelGatewayAppSettings();
    AWS_SAGEMAKER_API KernelGatewayAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API KernelGatewayAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the KernelGateway app.</p>  <p>The Amazon
     * SageMaker Studio UI does not use the default instance type value set here. The
     * default instance type set here is used when Apps are created using the Amazon
     * Web Services Command Line Interface or Amazon Web Services CloudFormation and
     * the instance type parameter value is not passed.</p> 
     */
    inline const ResourceSpec& GetDefaultResourceSpec() const{ return m_defaultResourceSpec; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the KernelGateway app.</p>  <p>The Amazon
     * SageMaker Studio UI does not use the default instance type value set here. The
     * default instance type set here is used when Apps are created using the Amazon
     * Web Services Command Line Interface or Amazon Web Services CloudFormation and
     * the instance type parameter value is not passed.</p> 
     */
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the KernelGateway app.</p>  <p>The Amazon
     * SageMaker Studio UI does not use the default instance type value set here. The
     * default instance type set here is used when Apps are created using the Amazon
     * Web Services Command Line Interface or Amazon Web Services CloudFormation and
     * the instance type parameter value is not passed.</p> 
     */
    inline void SetDefaultResourceSpec(const ResourceSpec& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = value; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the KernelGateway app.</p>  <p>The Amazon
     * SageMaker Studio UI does not use the default instance type value set here. The
     * default instance type set here is used when Apps are created using the Amazon
     * Web Services Command Line Interface or Amazon Web Services CloudFormation and
     * the instance type parameter value is not passed.</p> 
     */
    inline void SetDefaultResourceSpec(ResourceSpec&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::move(value); }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the KernelGateway app.</p>  <p>The Amazon
     * SageMaker Studio UI does not use the default instance type value set here. The
     * default instance type set here is used when Apps are created using the Amazon
     * Web Services Command Line Interface or Amazon Web Services CloudFormation and
     * the instance type parameter value is not passed.</p> 
     */
    inline KernelGatewayAppSettings& WithDefaultResourceSpec(const ResourceSpec& value) { SetDefaultResourceSpec(value); return *this;}

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the KernelGateway app.</p>  <p>The Amazon
     * SageMaker Studio UI does not use the default instance type value set here. The
     * default instance type set here is used when Apps are created using the Amazon
     * Web Services Command Line Interface or Amazon Web Services CloudFormation and
     * the instance type parameter value is not passed.</p> 
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


    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the the user profile or domain.</p>  <p>To remove a Lifecycle Config, you
     * must set <code>LifecycleConfigArns</code> to an empty list.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleConfigArns() const{ return m_lifecycleConfigArns; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the the user profile or domain.</p>  <p>To remove a Lifecycle Config, you
     * must set <code>LifecycleConfigArns</code> to an empty list.</p> 
     */
    inline bool LifecycleConfigArnsHasBeenSet() const { return m_lifecycleConfigArnsHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the the user profile or domain.</p>  <p>To remove a Lifecycle Config, you
     * must set <code>LifecycleConfigArns</code> to an empty list.</p> 
     */
    inline void SetLifecycleConfigArns(const Aws::Vector<Aws::String>& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the the user profile or domain.</p>  <p>To remove a Lifecycle Config, you
     * must set <code>LifecycleConfigArns</code> to an empty list.</p> 
     */
    inline void SetLifecycleConfigArns(Aws::Vector<Aws::String>&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the the user profile or domain.</p>  <p>To remove a Lifecycle Config, you
     * must set <code>LifecycleConfigArns</code> to an empty list.</p> 
     */
    inline KernelGatewayAppSettings& WithLifecycleConfigArns(const Aws::Vector<Aws::String>& value) { SetLifecycleConfigArns(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the the user profile or domain.</p>  <p>To remove a Lifecycle Config, you
     * must set <code>LifecycleConfigArns</code> to an empty list.</p> 
     */
    inline KernelGatewayAppSettings& WithLifecycleConfigArns(Aws::Vector<Aws::String>&& value) { SetLifecycleConfigArns(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the the user profile or domain.</p>  <p>To remove a Lifecycle Config, you
     * must set <code>LifecycleConfigArns</code> to an empty list.</p> 
     */
    inline KernelGatewayAppSettings& AddLifecycleConfigArns(const Aws::String& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(value); return *this; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the the user profile or domain.</p>  <p>To remove a Lifecycle Config, you
     * must set <code>LifecycleConfigArns</code> to an empty list.</p> 
     */
    inline KernelGatewayAppSettings& AddLifecycleConfigArns(Aws::String&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(std::move(value)); return *this; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the the user profile or domain.</p>  <p>To remove a Lifecycle Config, you
     * must set <code>LifecycleConfigArns</code> to an empty list.</p> 
     */
    inline KernelGatewayAppSettings& AddLifecycleConfigArns(const char* value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(value); return *this; }

  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;

    Aws::Vector<CustomImage> m_customImages;
    bool m_customImagesHasBeenSet = false;

    Aws::Vector<Aws::String> m_lifecycleConfigArns;
    bool m_lifecycleConfigArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

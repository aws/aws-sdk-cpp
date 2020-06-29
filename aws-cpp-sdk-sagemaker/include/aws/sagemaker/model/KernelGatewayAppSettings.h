/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
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
   * <p>The kernel gateway app settings.</p><p><h3>See Also:</h3>   <a
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
     * <p>The default instance type and the Amazon Resource Name (ARN) of the SageMaker
     * image created on the instance.</p>
     */
    inline const ResourceSpec& GetDefaultResourceSpec() const{ return m_defaultResourceSpec; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the SageMaker
     * image created on the instance.</p>
     */
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the SageMaker
     * image created on the instance.</p>
     */
    inline void SetDefaultResourceSpec(const ResourceSpec& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = value; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the SageMaker
     * image created on the instance.</p>
     */
    inline void SetDefaultResourceSpec(ResourceSpec&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::move(value); }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the SageMaker
     * image created on the instance.</p>
     */
    inline KernelGatewayAppSettings& WithDefaultResourceSpec(const ResourceSpec& value) { SetDefaultResourceSpec(value); return *this;}

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the SageMaker
     * image created on the instance.</p>
     */
    inline KernelGatewayAppSettings& WithDefaultResourceSpec(ResourceSpec&& value) { SetDefaultResourceSpec(std::move(value)); return *this;}

  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

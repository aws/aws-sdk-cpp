/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/model/LambdaIsolationMode.h>
#include <aws/greengrassv2/model/LambdaContainerParams.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains parameters for a Linux process that contains an Lambda
   * function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/LambdaLinuxProcessParams">AWS
   * API Reference</a></p>
   */
  class LambdaLinuxProcessParams
  {
  public:
    AWS_GREENGRASSV2_API LambdaLinuxProcessParams();
    AWS_GREENGRASSV2_API LambdaLinuxProcessParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API LambdaLinuxProcessParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The isolation mode for the process that contains the Lambda function. The
     * process can run in an isolated runtime environment inside the IoT Greengrass
     * container, or as a regular process outside any container.</p> <p>Default:
     * <code>GreengrassContainer</code> </p>
     */
    inline const LambdaIsolationMode& GetIsolationMode() const{ return m_isolationMode; }

    /**
     * <p>The isolation mode for the process that contains the Lambda function. The
     * process can run in an isolated runtime environment inside the IoT Greengrass
     * container, or as a regular process outside any container.</p> <p>Default:
     * <code>GreengrassContainer</code> </p>
     */
    inline bool IsolationModeHasBeenSet() const { return m_isolationModeHasBeenSet; }

    /**
     * <p>The isolation mode for the process that contains the Lambda function. The
     * process can run in an isolated runtime environment inside the IoT Greengrass
     * container, or as a regular process outside any container.</p> <p>Default:
     * <code>GreengrassContainer</code> </p>
     */
    inline void SetIsolationMode(const LambdaIsolationMode& value) { m_isolationModeHasBeenSet = true; m_isolationMode = value; }

    /**
     * <p>The isolation mode for the process that contains the Lambda function. The
     * process can run in an isolated runtime environment inside the IoT Greengrass
     * container, or as a regular process outside any container.</p> <p>Default:
     * <code>GreengrassContainer</code> </p>
     */
    inline void SetIsolationMode(LambdaIsolationMode&& value) { m_isolationModeHasBeenSet = true; m_isolationMode = std::move(value); }

    /**
     * <p>The isolation mode for the process that contains the Lambda function. The
     * process can run in an isolated runtime environment inside the IoT Greengrass
     * container, or as a regular process outside any container.</p> <p>Default:
     * <code>GreengrassContainer</code> </p>
     */
    inline LambdaLinuxProcessParams& WithIsolationMode(const LambdaIsolationMode& value) { SetIsolationMode(value); return *this;}

    /**
     * <p>The isolation mode for the process that contains the Lambda function. The
     * process can run in an isolated runtime environment inside the IoT Greengrass
     * container, or as a regular process outside any container.</p> <p>Default:
     * <code>GreengrassContainer</code> </p>
     */
    inline LambdaLinuxProcessParams& WithIsolationMode(LambdaIsolationMode&& value) { SetIsolationMode(std::move(value)); return *this;}


    /**
     * <p>The parameters for the container in which the Lambda function runs.</p>
     */
    inline const LambdaContainerParams& GetContainerParams() const{ return m_containerParams; }

    /**
     * <p>The parameters for the container in which the Lambda function runs.</p>
     */
    inline bool ContainerParamsHasBeenSet() const { return m_containerParamsHasBeenSet; }

    /**
     * <p>The parameters for the container in which the Lambda function runs.</p>
     */
    inline void SetContainerParams(const LambdaContainerParams& value) { m_containerParamsHasBeenSet = true; m_containerParams = value; }

    /**
     * <p>The parameters for the container in which the Lambda function runs.</p>
     */
    inline void SetContainerParams(LambdaContainerParams&& value) { m_containerParamsHasBeenSet = true; m_containerParams = std::move(value); }

    /**
     * <p>The parameters for the container in which the Lambda function runs.</p>
     */
    inline LambdaLinuxProcessParams& WithContainerParams(const LambdaContainerParams& value) { SetContainerParams(value); return *this;}

    /**
     * <p>The parameters for the container in which the Lambda function runs.</p>
     */
    inline LambdaLinuxProcessParams& WithContainerParams(LambdaContainerParams&& value) { SetContainerParams(std::move(value)); return *this;}

  private:

    LambdaIsolationMode m_isolationMode;
    bool m_isolationModeHasBeenSet = false;

    LambdaContainerParams m_containerParams;
    bool m_containerParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws

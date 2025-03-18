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
    AWS_GREENGRASSV2_API LambdaLinuxProcessParams() = default;
    AWS_GREENGRASSV2_API LambdaLinuxProcessParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API LambdaLinuxProcessParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The isolation mode for the process that contains the Lambda function. The
     * process can run in an isolated runtime environment inside the IoT Greengrass
     * container, or as a regular process outside any container.</p> <p>Default:
     * <code>GreengrassContainer</code> </p>
     */
    inline LambdaIsolationMode GetIsolationMode() const { return m_isolationMode; }
    inline bool IsolationModeHasBeenSet() const { return m_isolationModeHasBeenSet; }
    inline void SetIsolationMode(LambdaIsolationMode value) { m_isolationModeHasBeenSet = true; m_isolationMode = value; }
    inline LambdaLinuxProcessParams& WithIsolationMode(LambdaIsolationMode value) { SetIsolationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the container in which the Lambda function runs.</p>
     */
    inline const LambdaContainerParams& GetContainerParams() const { return m_containerParams; }
    inline bool ContainerParamsHasBeenSet() const { return m_containerParamsHasBeenSet; }
    template<typename ContainerParamsT = LambdaContainerParams>
    void SetContainerParams(ContainerParamsT&& value) { m_containerParamsHasBeenSet = true; m_containerParams = std::forward<ContainerParamsT>(value); }
    template<typename ContainerParamsT = LambdaContainerParams>
    LambdaLinuxProcessParams& WithContainerParams(ContainerParamsT&& value) { SetContainerParams(std::forward<ContainerParamsT>(value)); return *this;}
    ///@}
  private:

    LambdaIsolationMode m_isolationMode{LambdaIsolationMode::NOT_SET};
    bool m_isolationModeHasBeenSet = false;

    LambdaContainerParams m_containerParams;
    bool m_containerParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>Information about the AWS IoT Greengrass component created by a model
   * packaging job. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/GreengrassOutputDetails">AWS
   * API Reference</a></p>
   */
  class GreengrassOutputDetails
  {
  public:
    AWS_LOOKOUTFORVISION_API GreengrassOutputDetails() = default;
    AWS_LOOKOUTFORVISION_API GreengrassOutputDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API GreengrassOutputDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the component. </p>
     */
    inline const Aws::String& GetComponentVersionArn() const { return m_componentVersionArn; }
    inline bool ComponentVersionArnHasBeenSet() const { return m_componentVersionArnHasBeenSet; }
    template<typename ComponentVersionArnT = Aws::String>
    void SetComponentVersionArn(ComponentVersionArnT&& value) { m_componentVersionArnHasBeenSet = true; m_componentVersionArn = std::forward<ComponentVersionArnT>(value); }
    template<typename ComponentVersionArnT = Aws::String>
    GreengrassOutputDetails& WithComponentVersionArn(ComponentVersionArnT&& value) { SetComponentVersionArn(std::forward<ComponentVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the component. </p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    GreengrassOutputDetails& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the component. </p>
     */
    inline const Aws::String& GetComponentVersion() const { return m_componentVersion; }
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }
    template<typename ComponentVersionT = Aws::String>
    void SetComponentVersion(ComponentVersionT&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::forward<ComponentVersionT>(value); }
    template<typename ComponentVersionT = Aws::String>
    GreengrassOutputDetails& WithComponentVersion(ComponentVersionT&& value) { SetComponentVersion(std::forward<ComponentVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_componentVersionArn;
    bool m_componentVersionArnHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentVersion;
    bool m_componentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws

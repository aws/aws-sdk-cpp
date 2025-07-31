/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details about the step associated with a finding.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Step">AWS
   * API Reference</a></p>
   */
  class Step
  {
  public:
    AWS_INSPECTOR2_API Step() = default;
    AWS_INSPECTOR2_API Step(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Step& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The component ID.</p>
     */
    inline const Aws::String& GetComponentId() const { return m_componentId; }
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
    template<typename ComponentIdT = Aws::String>
    void SetComponentId(ComponentIdT&& value) { m_componentIdHasBeenSet = true; m_componentId = std::forward<ComponentIdT>(value); }
    template<typename ComponentIdT = Aws::String>
    Step& WithComponentId(ComponentIdT&& value) { SetComponentId(std::forward<ComponentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The component type.</p>
     */
    inline const Aws::String& GetComponentType() const { return m_componentType; }
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
    template<typename ComponentTypeT = Aws::String>
    void SetComponentType(ComponentTypeT&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::forward<ComponentTypeT>(value); }
    template<typename ComponentTypeT = Aws::String>
    Step& WithComponentType(ComponentTypeT&& value) { SetComponentType(std::forward<ComponentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The component ARN. The ARN can be null and is not displayed in the Amazon Web
     * Services console.</p>
     */
    inline const Aws::String& GetComponentArn() const { return m_componentArn; }
    inline bool ComponentArnHasBeenSet() const { return m_componentArnHasBeenSet; }
    template<typename ComponentArnT = Aws::String>
    void SetComponentArn(ComponentArnT&& value) { m_componentArnHasBeenSet = true; m_componentArn = std::forward<ComponentArnT>(value); }
    template<typename ComponentArnT = Aws::String>
    Step& WithComponentArn(ComponentArnT&& value) { SetComponentArn(std::forward<ComponentArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;

    Aws::String m_componentType;
    bool m_componentTypeHasBeenSet = false;

    Aws::String m_componentArn;
    bool m_componentArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

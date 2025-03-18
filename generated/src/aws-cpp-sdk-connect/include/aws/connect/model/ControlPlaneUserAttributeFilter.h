/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/AttributeAndCondition.h>
#include <aws/connect/model/TagCondition.h>
#include <aws/connect/model/HierarchyGroupCondition.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>An object that can be used to specify Tag conditions or Hierarchy Group
   * conditions inside the <code>SearchFilter</code>.</p> <p>This accepts an
   * <code>OR</code> of <code>AND</code> (List of List) input where:</p> <ul> <li>
   * <p>The top level list specifies conditions that need to be applied with
   * <code>OR</code> operator</p> </li> <li> <p>The inner list specifies conditions
   * that need to be applied with <code>AND</code> operator.</p> </li> </ul> 
   * <p>Only one field can be populated. Maximum number of allowed Tag conditions is
   * 25. Maximum number of allowed Hierarchy Group conditions is 20. </p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ControlPlaneUserAttributeFilter">AWS
   * API Reference</a></p>
   */
  class ControlPlaneUserAttributeFilter
  {
  public:
    AWS_CONNECT_API ControlPlaneUserAttributeFilter() = default;
    AWS_CONNECT_API ControlPlaneUserAttributeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ControlPlaneUserAttributeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline const Aws::Vector<AttributeAndCondition>& GetOrConditions() const { return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    template<typename OrConditionsT = Aws::Vector<AttributeAndCondition>>
    void SetOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::forward<OrConditionsT>(value); }
    template<typename OrConditionsT = Aws::Vector<AttributeAndCondition>>
    ControlPlaneUserAttributeFilter& WithOrConditions(OrConditionsT&& value) { SetOrConditions(std::forward<OrConditionsT>(value)); return *this;}
    template<typename OrConditionsT = AttributeAndCondition>
    ControlPlaneUserAttributeFilter& AddOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions.emplace_back(std::forward<OrConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline const AttributeAndCondition& GetAndCondition() const { return m_andCondition; }
    inline bool AndConditionHasBeenSet() const { return m_andConditionHasBeenSet; }
    template<typename AndConditionT = AttributeAndCondition>
    void SetAndCondition(AndConditionT&& value) { m_andConditionHasBeenSet = true; m_andCondition = std::forward<AndConditionT>(value); }
    template<typename AndConditionT = AttributeAndCondition>
    ControlPlaneUserAttributeFilter& WithAndCondition(AndConditionT&& value) { SetAndCondition(std::forward<AndConditionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TagCondition& GetTagCondition() const { return m_tagCondition; }
    inline bool TagConditionHasBeenSet() const { return m_tagConditionHasBeenSet; }
    template<typename TagConditionT = TagCondition>
    void SetTagCondition(TagConditionT&& value) { m_tagConditionHasBeenSet = true; m_tagCondition = std::forward<TagConditionT>(value); }
    template<typename TagConditionT = TagCondition>
    ControlPlaneUserAttributeFilter& WithTagCondition(TagConditionT&& value) { SetTagCondition(std::forward<TagConditionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HierarchyGroupCondition& GetHierarchyGroupCondition() const { return m_hierarchyGroupCondition; }
    inline bool HierarchyGroupConditionHasBeenSet() const { return m_hierarchyGroupConditionHasBeenSet; }
    template<typename HierarchyGroupConditionT = HierarchyGroupCondition>
    void SetHierarchyGroupCondition(HierarchyGroupConditionT&& value) { m_hierarchyGroupConditionHasBeenSet = true; m_hierarchyGroupCondition = std::forward<HierarchyGroupConditionT>(value); }
    template<typename HierarchyGroupConditionT = HierarchyGroupCondition>
    ControlPlaneUserAttributeFilter& WithHierarchyGroupCondition(HierarchyGroupConditionT&& value) { SetHierarchyGroupCondition(std::forward<HierarchyGroupConditionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AttributeAndCondition> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    AttributeAndCondition m_andCondition;
    bool m_andConditionHasBeenSet = false;

    TagCondition m_tagCondition;
    bool m_tagConditionHasBeenSet = false;

    HierarchyGroupCondition m_hierarchyGroupCondition;
    bool m_hierarchyGroupConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

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
    AWS_CONNECT_API ControlPlaneUserAttributeFilter();
    AWS_CONNECT_API ControlPlaneUserAttributeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ControlPlaneUserAttributeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline const Aws::Vector<AttributeAndCondition>& GetOrConditions() const{ return m_orConditions; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline void SetOrConditions(const Aws::Vector<AttributeAndCondition>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline void SetOrConditions(Aws::Vector<AttributeAndCondition>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline ControlPlaneUserAttributeFilter& WithOrConditions(const Aws::Vector<AttributeAndCondition>& value) { SetOrConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline ControlPlaneUserAttributeFilter& WithOrConditions(Aws::Vector<AttributeAndCondition>&& value) { SetOrConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline ControlPlaneUserAttributeFilter& AddOrConditions(const AttributeAndCondition& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline ControlPlaneUserAttributeFilter& AddOrConditions(AttributeAndCondition&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline const AttributeAndCondition& GetAndCondition() const{ return m_andCondition; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline bool AndConditionHasBeenSet() const { return m_andConditionHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline void SetAndCondition(const AttributeAndCondition& value) { m_andConditionHasBeenSet = true; m_andCondition = value; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline void SetAndCondition(AttributeAndCondition&& value) { m_andConditionHasBeenSet = true; m_andCondition = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline ControlPlaneUserAttributeFilter& WithAndCondition(const AttributeAndCondition& value) { SetAndCondition(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline ControlPlaneUserAttributeFilter& WithAndCondition(AttributeAndCondition&& value) { SetAndCondition(std::move(value)); return *this;}


    
    inline const TagCondition& GetTagCondition() const{ return m_tagCondition; }

    
    inline bool TagConditionHasBeenSet() const { return m_tagConditionHasBeenSet; }

    
    inline void SetTagCondition(const TagCondition& value) { m_tagConditionHasBeenSet = true; m_tagCondition = value; }

    
    inline void SetTagCondition(TagCondition&& value) { m_tagConditionHasBeenSet = true; m_tagCondition = std::move(value); }

    
    inline ControlPlaneUserAttributeFilter& WithTagCondition(const TagCondition& value) { SetTagCondition(value); return *this;}

    
    inline ControlPlaneUserAttributeFilter& WithTagCondition(TagCondition&& value) { SetTagCondition(std::move(value)); return *this;}


    
    inline const HierarchyGroupCondition& GetHierarchyGroupCondition() const{ return m_hierarchyGroupCondition; }

    
    inline bool HierarchyGroupConditionHasBeenSet() const { return m_hierarchyGroupConditionHasBeenSet; }

    
    inline void SetHierarchyGroupCondition(const HierarchyGroupCondition& value) { m_hierarchyGroupConditionHasBeenSet = true; m_hierarchyGroupCondition = value; }

    
    inline void SetHierarchyGroupCondition(HierarchyGroupCondition&& value) { m_hierarchyGroupConditionHasBeenSet = true; m_hierarchyGroupCondition = std::move(value); }

    
    inline ControlPlaneUserAttributeFilter& WithHierarchyGroupCondition(const HierarchyGroupCondition& value) { SetHierarchyGroupCondition(value); return *this;}

    
    inline ControlPlaneUserAttributeFilter& WithHierarchyGroupCondition(HierarchyGroupCondition&& value) { SetHierarchyGroupCondition(std::move(value)); return *this;}

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

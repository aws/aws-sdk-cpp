/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/HierarchyGroupCondition.h>
#include <aws/connect/model/TagCondition.h>
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
   * <p>A list of conditions which would be applied together with an <code>AND</code>
   * condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AttributeAndCondition">AWS
   * API Reference</a></p>
   */
  class AttributeAndCondition
  {
  public:
    AWS_CONNECT_API AttributeAndCondition();
    AWS_CONNECT_API AttributeAndCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AttributeAndCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline const Aws::Vector<TagCondition>& GetTagConditions() const{ return m_tagConditions; }

    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline bool TagConditionsHasBeenSet() const { return m_tagConditionsHasBeenSet; }

    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline void SetTagConditions(const Aws::Vector<TagCondition>& value) { m_tagConditionsHasBeenSet = true; m_tagConditions = value; }

    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline void SetTagConditions(Aws::Vector<TagCondition>&& value) { m_tagConditionsHasBeenSet = true; m_tagConditions = std::move(value); }

    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline AttributeAndCondition& WithTagConditions(const Aws::Vector<TagCondition>& value) { SetTagConditions(value); return *this;}

    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline AttributeAndCondition& WithTagConditions(Aws::Vector<TagCondition>&& value) { SetTagConditions(std::move(value)); return *this;}

    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline AttributeAndCondition& AddTagConditions(const TagCondition& value) { m_tagConditionsHasBeenSet = true; m_tagConditions.push_back(value); return *this; }

    /**
     * <p>A leaf node condition which can be used to specify a tag condition.</p>
     */
    inline AttributeAndCondition& AddTagConditions(TagCondition&& value) { m_tagConditionsHasBeenSet = true; m_tagConditions.push_back(std::move(value)); return *this; }


    
    inline const HierarchyGroupCondition& GetHierarchyGroupCondition() const{ return m_hierarchyGroupCondition; }

    
    inline bool HierarchyGroupConditionHasBeenSet() const { return m_hierarchyGroupConditionHasBeenSet; }

    
    inline void SetHierarchyGroupCondition(const HierarchyGroupCondition& value) { m_hierarchyGroupConditionHasBeenSet = true; m_hierarchyGroupCondition = value; }

    
    inline void SetHierarchyGroupCondition(HierarchyGroupCondition&& value) { m_hierarchyGroupConditionHasBeenSet = true; m_hierarchyGroupCondition = std::move(value); }

    
    inline AttributeAndCondition& WithHierarchyGroupCondition(const HierarchyGroupCondition& value) { SetHierarchyGroupCondition(value); return *this;}

    
    inline AttributeAndCondition& WithHierarchyGroupCondition(HierarchyGroupCondition&& value) { SetHierarchyGroupCondition(std::move(value)); return *this;}

  private:

    Aws::Vector<TagCondition> m_tagConditions;
    bool m_tagConditionsHasBeenSet = false;

    HierarchyGroupCondition m_hierarchyGroupCondition;
    bool m_hierarchyGroupConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

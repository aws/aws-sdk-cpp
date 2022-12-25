/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/HierarchyGroupMatchType.h>
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
   * <p>A leaf node condition which can be used to specify a hierarchy group
   * condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HierarchyGroupCondition">AWS
   * API Reference</a></p>
   */
  class HierarchyGroupCondition
  {
  public:
    AWS_CONNECT_API HierarchyGroupCondition();
    AWS_CONNECT_API HierarchyGroupCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HierarchyGroupCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value in the hierarchy group condition.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value in the hierarchy group condition.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value in the hierarchy group condition.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value in the hierarchy group condition.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value in the hierarchy group condition.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value in the hierarchy group condition.</p>
     */
    inline HierarchyGroupCondition& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value in the hierarchy group condition.</p>
     */
    inline HierarchyGroupCondition& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value in the hierarchy group condition.</p>
     */
    inline HierarchyGroupCondition& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The type of hierarchy group match.</p>
     */
    inline const HierarchyGroupMatchType& GetHierarchyGroupMatchType() const{ return m_hierarchyGroupMatchType; }

    /**
     * <p>The type of hierarchy group match.</p>
     */
    inline bool HierarchyGroupMatchTypeHasBeenSet() const { return m_hierarchyGroupMatchTypeHasBeenSet; }

    /**
     * <p>The type of hierarchy group match.</p>
     */
    inline void SetHierarchyGroupMatchType(const HierarchyGroupMatchType& value) { m_hierarchyGroupMatchTypeHasBeenSet = true; m_hierarchyGroupMatchType = value; }

    /**
     * <p>The type of hierarchy group match.</p>
     */
    inline void SetHierarchyGroupMatchType(HierarchyGroupMatchType&& value) { m_hierarchyGroupMatchTypeHasBeenSet = true; m_hierarchyGroupMatchType = std::move(value); }

    /**
     * <p>The type of hierarchy group match.</p>
     */
    inline HierarchyGroupCondition& WithHierarchyGroupMatchType(const HierarchyGroupMatchType& value) { SetHierarchyGroupMatchType(value); return *this;}

    /**
     * <p>The type of hierarchy group match.</p>
     */
    inline HierarchyGroupCondition& WithHierarchyGroupMatchType(HierarchyGroupMatchType&& value) { SetHierarchyGroupMatchType(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    HierarchyGroupMatchType m_hierarchyGroupMatchType;
    bool m_hierarchyGroupMatchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

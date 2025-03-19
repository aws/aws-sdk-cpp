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
    AWS_CONNECT_API HierarchyGroupCondition() = default;
    AWS_CONNECT_API HierarchyGroupCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HierarchyGroupCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value in the hierarchy group condition.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    HierarchyGroupCondition& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hierarchy group match.</p>
     */
    inline HierarchyGroupMatchType GetHierarchyGroupMatchType() const { return m_hierarchyGroupMatchType; }
    inline bool HierarchyGroupMatchTypeHasBeenSet() const { return m_hierarchyGroupMatchTypeHasBeenSet; }
    inline void SetHierarchyGroupMatchType(HierarchyGroupMatchType value) { m_hierarchyGroupMatchTypeHasBeenSet = true; m_hierarchyGroupMatchType = value; }
    inline HierarchyGroupCondition& WithHierarchyGroupMatchType(HierarchyGroupMatchType value) { SetHierarchyGroupMatchType(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    HierarchyGroupMatchType m_hierarchyGroupMatchType{HierarchyGroupMatchType::NOT_SET};
    bool m_hierarchyGroupMatchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

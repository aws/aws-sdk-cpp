/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TargetListType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/Condition.h>
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
   * <p>A leaf node condition which can be used to specify a List condition to search
   * users with attributes included in Lists like Proficiencies.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListCondition">AWS
   * API Reference</a></p>
   */
  class ListCondition
  {
  public:
    AWS_CONNECT_API ListCondition() = default;
    AWS_CONNECT_API ListCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ListCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of target list that will be used to filter the users.</p>
     */
    inline TargetListType GetTargetListType() const { return m_targetListType; }
    inline bool TargetListTypeHasBeenSet() const { return m_targetListTypeHasBeenSet; }
    inline void SetTargetListType(TargetListType value) { m_targetListTypeHasBeenSet = true; m_targetListType = value; }
    inline ListCondition& WithTargetListType(TargetListType value) { SetTargetListType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Condition objects which would be applied together with an AND
     * condition.</p>
     */
    inline const Aws::Vector<Condition>& GetConditions() const { return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    template<typename ConditionsT = Aws::Vector<Condition>>
    void SetConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions = std::forward<ConditionsT>(value); }
    template<typename ConditionsT = Aws::Vector<Condition>>
    ListCondition& WithConditions(ConditionsT&& value) { SetConditions(std::forward<ConditionsT>(value)); return *this;}
    template<typename ConditionsT = Condition>
    ListCondition& AddConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions.emplace_back(std::forward<ConditionsT>(value)); return *this; }
    ///@}
  private:

    TargetListType m_targetListType{TargetListType::NOT_SET};
    bool m_targetListTypeHasBeenSet = false;

    Aws::Vector<Condition> m_conditions;
    bool m_conditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

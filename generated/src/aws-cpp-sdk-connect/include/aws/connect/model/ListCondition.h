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
    AWS_CONNECT_API ListCondition();
    AWS_CONNECT_API ListCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ListCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of target list that will be used to filter the users.</p>
     */
    inline const TargetListType& GetTargetListType() const{ return m_targetListType; }
    inline bool TargetListTypeHasBeenSet() const { return m_targetListTypeHasBeenSet; }
    inline void SetTargetListType(const TargetListType& value) { m_targetListTypeHasBeenSet = true; m_targetListType = value; }
    inline void SetTargetListType(TargetListType&& value) { m_targetListTypeHasBeenSet = true; m_targetListType = std::move(value); }
    inline ListCondition& WithTargetListType(const TargetListType& value) { SetTargetListType(value); return *this;}
    inline ListCondition& WithTargetListType(TargetListType&& value) { SetTargetListType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Condition objects which would be applied together with an AND
     * condition.</p>
     */
    inline const Aws::Vector<Condition>& GetConditions() const{ return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    inline void SetConditions(const Aws::Vector<Condition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }
    inline void SetConditions(Aws::Vector<Condition>&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }
    inline ListCondition& WithConditions(const Aws::Vector<Condition>& value) { SetConditions(value); return *this;}
    inline ListCondition& WithConditions(Aws::Vector<Condition>&& value) { SetConditions(std::move(value)); return *this;}
    inline ListCondition& AddConditions(const Condition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }
    inline ListCondition& AddConditions(Condition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    TargetListType m_targetListType;
    bool m_targetListTypeHasBeenSet = false;

    Aws::Vector<Condition> m_conditions;
    bool m_conditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

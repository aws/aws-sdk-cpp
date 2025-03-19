/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/Range.h>
#include <aws/connect/model/MatchCriteria.h>
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
   * <p>An object to specify the predefined attribute condition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AttributeCondition">AWS
   * API Reference</a></p>
   */
  class AttributeCondition
  {
  public:
    AWS_CONNECT_API AttributeCondition() = default;
    AWS_CONNECT_API AttributeCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AttributeCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of predefined attribute.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AttributeCondition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of predefined attribute.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    AttributeCondition& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proficiency level of the condition.</p>
     */
    inline double GetProficiencyLevel() const { return m_proficiencyLevel; }
    inline bool ProficiencyLevelHasBeenSet() const { return m_proficiencyLevelHasBeenSet; }
    inline void SetProficiencyLevel(double value) { m_proficiencyLevelHasBeenSet = true; m_proficiencyLevel = value; }
    inline AttributeCondition& WithProficiencyLevel(double value) { SetProficiencyLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Object to define the minimum and maximum proficiency levels.</p>
     */
    inline const Range& GetRange() const { return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    template<typename RangeT = Range>
    void SetRange(RangeT&& value) { m_rangeHasBeenSet = true; m_range = std::forward<RangeT>(value); }
    template<typename RangeT = Range>
    AttributeCondition& WithRange(RangeT&& value) { SetRange(std::forward<RangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object to define <code>AgentsCriteria</code>.</p>
     */
    inline const MatchCriteria& GetMatchCriteria() const { return m_matchCriteria; }
    inline bool MatchCriteriaHasBeenSet() const { return m_matchCriteriaHasBeenSet; }
    template<typename MatchCriteriaT = MatchCriteria>
    void SetMatchCriteria(MatchCriteriaT&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = std::forward<MatchCriteriaT>(value); }
    template<typename MatchCriteriaT = MatchCriteria>
    AttributeCondition& WithMatchCriteria(MatchCriteriaT&& value) { SetMatchCriteria(std::forward<MatchCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator of the condition.</p>
     */
    inline const Aws::String& GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    template<typename ComparisonOperatorT = Aws::String>
    void SetComparisonOperator(ComparisonOperatorT&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::forward<ComparisonOperatorT>(value); }
    template<typename ComparisonOperatorT = Aws::String>
    AttributeCondition& WithComparisonOperator(ComparisonOperatorT&& value) { SetComparisonOperator(std::forward<ComparisonOperatorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    double m_proficiencyLevel{0.0};
    bool m_proficiencyLevelHasBeenSet = false;

    Range m_range;
    bool m_rangeHasBeenSet = false;

    MatchCriteria m_matchCriteria;
    bool m_matchCriteriaHasBeenSet = false;

    Aws::String m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

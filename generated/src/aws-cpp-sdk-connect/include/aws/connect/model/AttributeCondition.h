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
    AWS_CONNECT_API AttributeCondition();
    AWS_CONNECT_API AttributeCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AttributeCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of predefined attribute.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AttributeCondition& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AttributeCondition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AttributeCondition& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of predefined attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline AttributeCondition& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline AttributeCondition& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline AttributeCondition& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proficiency level of the condition.</p>
     */
    inline double GetProficiencyLevel() const{ return m_proficiencyLevel; }
    inline bool ProficiencyLevelHasBeenSet() const { return m_proficiencyLevelHasBeenSet; }
    inline void SetProficiencyLevel(double value) { m_proficiencyLevelHasBeenSet = true; m_proficiencyLevel = value; }
    inline AttributeCondition& WithProficiencyLevel(double value) { SetProficiencyLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Object to define the minimum and maximum proficiency levels.</p>
     */
    inline const Range& GetRange() const{ return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    inline void SetRange(const Range& value) { m_rangeHasBeenSet = true; m_range = value; }
    inline void SetRange(Range&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }
    inline AttributeCondition& WithRange(const Range& value) { SetRange(value); return *this;}
    inline AttributeCondition& WithRange(Range&& value) { SetRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object to define <code>AgentsCriteria</code>.</p>
     */
    inline const MatchCriteria& GetMatchCriteria() const{ return m_matchCriteria; }
    inline bool MatchCriteriaHasBeenSet() const { return m_matchCriteriaHasBeenSet; }
    inline void SetMatchCriteria(const MatchCriteria& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = value; }
    inline void SetMatchCriteria(MatchCriteria&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = std::move(value); }
    inline AttributeCondition& WithMatchCriteria(const MatchCriteria& value) { SetMatchCriteria(value); return *this;}
    inline AttributeCondition& WithMatchCriteria(MatchCriteria&& value) { SetMatchCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator of the condition.</p>
     */
    inline const Aws::String& GetComparisonOperator() const{ return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(const Aws::String& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline void SetComparisonOperator(Aws::String&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }
    inline void SetComparisonOperator(const char* value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator.assign(value); }
    inline AttributeCondition& WithComparisonOperator(const Aws::String& value) { SetComparisonOperator(value); return *this;}
    inline AttributeCondition& WithComparisonOperator(Aws::String&& value) { SetComparisonOperator(std::move(value)); return *this;}
    inline AttributeCondition& WithComparisonOperator(const char* value) { SetComparisonOperator(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    double m_proficiencyLevel;
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

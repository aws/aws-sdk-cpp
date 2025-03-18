/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/DurationRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>Used as the request parameter in the <a>ListAssessmentTemplates</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AssessmentTemplateFilter">AWS
   * API Reference</a></p>
   */
  class AssessmentTemplateFilter
  {
  public:
    AWS_INSPECTOR_API AssessmentTemplateFilter() = default;
    AWS_INSPECTOR_API AssessmentTemplateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentTemplateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTemplateName</b> property of the <a>AssessmentTemplate</a> data
     * type.</p>
     */
    inline const Aws::String& GetNamePattern() const { return m_namePattern; }
    inline bool NamePatternHasBeenSet() const { return m_namePatternHasBeenSet; }
    template<typename NamePatternT = Aws::String>
    void SetNamePattern(NamePatternT&& value) { m_namePatternHasBeenSet = true; m_namePattern = std::forward<NamePatternT>(value); }
    template<typename NamePatternT = Aws::String>
    AssessmentTemplateFilter& WithNamePattern(NamePatternT&& value) { SetNamePattern(std::forward<NamePatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the
     * <a>AssessmentTemplate</a> data type.</p>
     */
    inline const DurationRange& GetDurationRange() const { return m_durationRange; }
    inline bool DurationRangeHasBeenSet() const { return m_durationRangeHasBeenSet; }
    template<typename DurationRangeT = DurationRange>
    void SetDurationRange(DurationRangeT&& value) { m_durationRangeHasBeenSet = true; m_durationRange = std::forward<DurationRangeT>(value); }
    template<typename DurationRangeT = DurationRange>
    AssessmentTemplateFilter& WithDurationRange(DurationRangeT&& value) { SetDurationRange(std::forward<DurationRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, the values that are specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackageArns</b> property of the <a>AssessmentTemplate</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const { return m_rulesPackageArns; }
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }
    template<typename RulesPackageArnsT = Aws::Vector<Aws::String>>
    void SetRulesPackageArns(RulesPackageArnsT&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::forward<RulesPackageArnsT>(value); }
    template<typename RulesPackageArnsT = Aws::Vector<Aws::String>>
    AssessmentTemplateFilter& WithRulesPackageArns(RulesPackageArnsT&& value) { SetRulesPackageArns(std::forward<RulesPackageArnsT>(value)); return *this;}
    template<typename RulesPackageArnsT = Aws::String>
    AssessmentTemplateFilter& AddRulesPackageArns(RulesPackageArnsT&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.emplace_back(std::forward<RulesPackageArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_namePattern;
    bool m_namePatternHasBeenSet = false;

    DurationRange m_durationRange;
    bool m_durationRangeHasBeenSet = false;

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws

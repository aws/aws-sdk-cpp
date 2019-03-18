/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_INSPECTOR_API AssessmentTemplateFilter
  {
  public:
    AssessmentTemplateFilter();
    AssessmentTemplateFilter(Aws::Utils::Json::JsonView jsonValue);
    AssessmentTemplateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTemplateName</b> property of the <a>AssessmentTemplate</a> data
     * type.</p>
     */
    inline const Aws::String& GetNamePattern() const{ return m_namePattern; }

    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTemplateName</b> property of the <a>AssessmentTemplate</a> data
     * type.</p>
     */
    inline bool NamePatternHasBeenSet() const { return m_namePatternHasBeenSet; }

    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTemplateName</b> property of the <a>AssessmentTemplate</a> data
     * type.</p>
     */
    inline void SetNamePattern(const Aws::String& value) { m_namePatternHasBeenSet = true; m_namePattern = value; }

    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTemplateName</b> property of the <a>AssessmentTemplate</a> data
     * type.</p>
     */
    inline void SetNamePattern(Aws::String&& value) { m_namePatternHasBeenSet = true; m_namePattern = std::move(value); }

    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTemplateName</b> property of the <a>AssessmentTemplate</a> data
     * type.</p>
     */
    inline void SetNamePattern(const char* value) { m_namePatternHasBeenSet = true; m_namePattern.assign(value); }

    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTemplateName</b> property of the <a>AssessmentTemplate</a> data
     * type.</p>
     */
    inline AssessmentTemplateFilter& WithNamePattern(const Aws::String& value) { SetNamePattern(value); return *this;}

    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTemplateName</b> property of the <a>AssessmentTemplate</a> data
     * type.</p>
     */
    inline AssessmentTemplateFilter& WithNamePattern(Aws::String&& value) { SetNamePattern(std::move(value)); return *this;}

    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTemplateName</b> property of the <a>AssessmentTemplate</a> data
     * type.</p>
     */
    inline AssessmentTemplateFilter& WithNamePattern(const char* value) { SetNamePattern(value); return *this;}


    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the
     * <a>AssessmentTemplate</a> data type.</p>
     */
    inline const DurationRange& GetDurationRange() const{ return m_durationRange; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the
     * <a>AssessmentTemplate</a> data type.</p>
     */
    inline bool DurationRangeHasBeenSet() const { return m_durationRangeHasBeenSet; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the
     * <a>AssessmentTemplate</a> data type.</p>
     */
    inline void SetDurationRange(const DurationRange& value) { m_durationRangeHasBeenSet = true; m_durationRange = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the
     * <a>AssessmentTemplate</a> data type.</p>
     */
    inline void SetDurationRange(DurationRange&& value) { m_durationRangeHasBeenSet = true; m_durationRange = std::move(value); }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the
     * <a>AssessmentTemplate</a> data type.</p>
     */
    inline AssessmentTemplateFilter& WithDurationRange(const DurationRange& value) { SetDurationRange(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the
     * <a>AssessmentTemplate</a> data type.</p>
     */
    inline AssessmentTemplateFilter& WithDurationRange(DurationRange&& value) { SetDurationRange(std::move(value)); return *this;}


    /**
     * <p>For a record to match a filter, the values that are specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackageArns</b> property of the <a>AssessmentTemplate</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const{ return m_rulesPackageArns; }

    /**
     * <p>For a record to match a filter, the values that are specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackageArns</b> property of the <a>AssessmentTemplate</a> data type.</p>
     */
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }

    /**
     * <p>For a record to match a filter, the values that are specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackageArns</b> property of the <a>AssessmentTemplate</a> data type.</p>
     */
    inline void SetRulesPackageArns(const Aws::Vector<Aws::String>& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = value; }

    /**
     * <p>For a record to match a filter, the values that are specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackageArns</b> property of the <a>AssessmentTemplate</a> data type.</p>
     */
    inline void SetRulesPackageArns(Aws::Vector<Aws::String>&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::move(value); }

    /**
     * <p>For a record to match a filter, the values that are specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackageArns</b> property of the <a>AssessmentTemplate</a> data type.</p>
     */
    inline AssessmentTemplateFilter& WithRulesPackageArns(const Aws::Vector<Aws::String>& value) { SetRulesPackageArns(value); return *this;}

    /**
     * <p>For a record to match a filter, the values that are specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackageArns</b> property of the <a>AssessmentTemplate</a> data type.</p>
     */
    inline AssessmentTemplateFilter& WithRulesPackageArns(Aws::Vector<Aws::String>&& value) { SetRulesPackageArns(std::move(value)); return *this;}

    /**
     * <p>For a record to match a filter, the values that are specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackageArns</b> property of the <a>AssessmentTemplate</a> data type.</p>
     */
    inline AssessmentTemplateFilter& AddRulesPackageArns(const Aws::String& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the values that are specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackageArns</b> property of the <a>AssessmentTemplate</a> data type.</p>
     */
    inline AssessmentTemplateFilter& AddRulesPackageArns(Aws::String&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(std::move(value)); return *this; }

    /**
     * <p>For a record to match a filter, the values that are specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackageArns</b> property of the <a>AssessmentTemplate</a> data type.</p>
     */
    inline AssessmentTemplateFilter& AddRulesPackageArns(const char* value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }

  private:

    Aws::String m_namePattern;
    bool m_namePatternHasBeenSet;

    DurationRange m_durationRange;
    bool m_durationRangeHasBeenSet;

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws

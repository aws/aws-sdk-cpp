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
   * <p>Used as the request parameter in the <a>ListAssessmentTargets</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AssessmentTargetFilter">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API AssessmentTargetFilter
  {
  public:
    AssessmentTargetFilter();
    AssessmentTargetFilter(Aws::Utils::Json::JsonView jsonValue);
    AssessmentTargetFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTargetName</b> property of the <a>AssessmentTarget</a> data
     * type.</p>
     */
    inline const Aws::String& GetAssessmentTargetNamePattern() const{ return m_assessmentTargetNamePattern; }

    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTargetName</b> property of the <a>AssessmentTarget</a> data
     * type.</p>
     */
    inline bool AssessmentTargetNamePatternHasBeenSet() const { return m_assessmentTargetNamePatternHasBeenSet; }

    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTargetName</b> property of the <a>AssessmentTarget</a> data
     * type.</p>
     */
    inline void SetAssessmentTargetNamePattern(const Aws::String& value) { m_assessmentTargetNamePatternHasBeenSet = true; m_assessmentTargetNamePattern = value; }

    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTargetName</b> property of the <a>AssessmentTarget</a> data
     * type.</p>
     */
    inline void SetAssessmentTargetNamePattern(Aws::String&& value) { m_assessmentTargetNamePatternHasBeenSet = true; m_assessmentTargetNamePattern = std::move(value); }

    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTargetName</b> property of the <a>AssessmentTarget</a> data
     * type.</p>
     */
    inline void SetAssessmentTargetNamePattern(const char* value) { m_assessmentTargetNamePatternHasBeenSet = true; m_assessmentTargetNamePattern.assign(value); }

    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTargetName</b> property of the <a>AssessmentTarget</a> data
     * type.</p>
     */
    inline AssessmentTargetFilter& WithAssessmentTargetNamePattern(const Aws::String& value) { SetAssessmentTargetNamePattern(value); return *this;}

    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTargetName</b> property of the <a>AssessmentTarget</a> data
     * type.</p>
     */
    inline AssessmentTargetFilter& WithAssessmentTargetNamePattern(Aws::String&& value) { SetAssessmentTargetNamePattern(std::move(value)); return *this;}

    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTargetName</b> property of the <a>AssessmentTarget</a> data
     * type.</p>
     */
    inline AssessmentTargetFilter& WithAssessmentTargetNamePattern(const char* value) { SetAssessmentTargetNamePattern(value); return *this;}

  private:

    Aws::String m_assessmentTargetNamePattern;
    bool m_assessmentTargetNamePatternHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws

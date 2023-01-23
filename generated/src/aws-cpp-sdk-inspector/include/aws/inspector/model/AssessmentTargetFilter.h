/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AssessmentTargetFilter
  {
  public:
    AWS_INSPECTOR_API AssessmentTargetFilter();
    AWS_INSPECTOR_API AssessmentTargetFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentTargetFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_assessmentTargetNamePatternHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws

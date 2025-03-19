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
    AWS_INSPECTOR_API AssessmentTargetFilter() = default;
    AWS_INSPECTOR_API AssessmentTargetFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentTargetFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For a record to match a filter, an explicit value or a string that contains a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentTargetName</b> property of the <a>AssessmentTarget</a> data
     * type.</p>
     */
    inline const Aws::String& GetAssessmentTargetNamePattern() const { return m_assessmentTargetNamePattern; }
    inline bool AssessmentTargetNamePatternHasBeenSet() const { return m_assessmentTargetNamePatternHasBeenSet; }
    template<typename AssessmentTargetNamePatternT = Aws::String>
    void SetAssessmentTargetNamePattern(AssessmentTargetNamePatternT&& value) { m_assessmentTargetNamePatternHasBeenSet = true; m_assessmentTargetNamePattern = std::forward<AssessmentTargetNamePatternT>(value); }
    template<typename AssessmentTargetNamePatternT = Aws::String>
    AssessmentTargetFilter& WithAssessmentTargetNamePattern(AssessmentTargetNamePatternT&& value) { SetAssessmentTargetNamePattern(std::forward<AssessmentTargetNamePatternT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentTargetNamePattern;
    bool m_assessmentTargetNamePatternHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws

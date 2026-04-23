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
#include <aws/core/utils/DateTime.h>
#include <aws/inspector/model/AssessmentRunState.h>
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
   * <p>Used as one of the elements of the <a>AssessmentRun</a> data
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AssessmentRunStateChange">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API AssessmentRunStateChange
  {
  public:
    AssessmentRunStateChange();
    AssessmentRunStateChange(Aws::Utils::Json::JsonView jsonValue);
    AssessmentRunStateChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The last time the assessment run state changed.</p>
     */
    inline const Aws::Utils::DateTime& GetStateChangedAt() const{ return m_stateChangedAt; }

    /**
     * <p>The last time the assessment run state changed.</p>
     */
    inline bool StateChangedAtHasBeenSet() const { return m_stateChangedAtHasBeenSet; }

    /**
     * <p>The last time the assessment run state changed.</p>
     */
    inline void SetStateChangedAt(const Aws::Utils::DateTime& value) { m_stateChangedAtHasBeenSet = true; m_stateChangedAt = value; }

    /**
     * <p>The last time the assessment run state changed.</p>
     */
    inline void SetStateChangedAt(Aws::Utils::DateTime&& value) { m_stateChangedAtHasBeenSet = true; m_stateChangedAt = std::move(value); }

    /**
     * <p>The last time the assessment run state changed.</p>
     */
    inline AssessmentRunStateChange& WithStateChangedAt(const Aws::Utils::DateTime& value) { SetStateChangedAt(value); return *this;}

    /**
     * <p>The last time the assessment run state changed.</p>
     */
    inline AssessmentRunStateChange& WithStateChangedAt(Aws::Utils::DateTime&& value) { SetStateChangedAt(std::move(value)); return *this;}


    /**
     * <p>The assessment run state.</p>
     */
    inline const AssessmentRunState& GetState() const{ return m_state; }

    /**
     * <p>The assessment run state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The assessment run state.</p>
     */
    inline void SetState(const AssessmentRunState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The assessment run state.</p>
     */
    inline void SetState(AssessmentRunState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The assessment run state.</p>
     */
    inline AssessmentRunStateChange& WithState(const AssessmentRunState& value) { SetState(value); return *this;}

    /**
     * <p>The assessment run state.</p>
     */
    inline AssessmentRunStateChange& WithState(AssessmentRunState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_stateChangedAt;
    bool m_stateChangedAtHasBeenSet;

    AssessmentRunState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws

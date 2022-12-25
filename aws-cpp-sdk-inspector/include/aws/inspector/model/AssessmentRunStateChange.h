/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AssessmentRunStateChange
  {
  public:
    AWS_INSPECTOR_API AssessmentRunStateChange();
    AWS_INSPECTOR_API AssessmentRunStateChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentRunStateChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_stateChangedAtHasBeenSet = false;

    AssessmentRunState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws

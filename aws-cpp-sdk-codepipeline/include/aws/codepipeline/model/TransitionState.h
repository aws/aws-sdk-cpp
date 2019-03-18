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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about the state of transitions between one stage and
   * another stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/TransitionState">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API TransitionState
  {
  public:
    TransitionState();
    TransitionState(Aws::Utils::Json::JsonView jsonValue);
    TransitionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether the transition between stages is enabled (true) or disabled
     * (false).</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether the transition between stages is enabled (true) or disabled
     * (false).</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether the transition between stages is enabled (true) or disabled
     * (false).</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether the transition between stages is enabled (true) or disabled
     * (false).</p>
     */
    inline TransitionState& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The ID of the user who last changed the transition state.</p>
     */
    inline const Aws::String& GetLastChangedBy() const{ return m_lastChangedBy; }

    /**
     * <p>The ID of the user who last changed the transition state.</p>
     */
    inline bool LastChangedByHasBeenSet() const { return m_lastChangedByHasBeenSet; }

    /**
     * <p>The ID of the user who last changed the transition state.</p>
     */
    inline void SetLastChangedBy(const Aws::String& value) { m_lastChangedByHasBeenSet = true; m_lastChangedBy = value; }

    /**
     * <p>The ID of the user who last changed the transition state.</p>
     */
    inline void SetLastChangedBy(Aws::String&& value) { m_lastChangedByHasBeenSet = true; m_lastChangedBy = std::move(value); }

    /**
     * <p>The ID of the user who last changed the transition state.</p>
     */
    inline void SetLastChangedBy(const char* value) { m_lastChangedByHasBeenSet = true; m_lastChangedBy.assign(value); }

    /**
     * <p>The ID of the user who last changed the transition state.</p>
     */
    inline TransitionState& WithLastChangedBy(const Aws::String& value) { SetLastChangedBy(value); return *this;}

    /**
     * <p>The ID of the user who last changed the transition state.</p>
     */
    inline TransitionState& WithLastChangedBy(Aws::String&& value) { SetLastChangedBy(std::move(value)); return *this;}

    /**
     * <p>The ID of the user who last changed the transition state.</p>
     */
    inline TransitionState& WithLastChangedBy(const char* value) { SetLastChangedBy(value); return *this;}


    /**
     * <p>The timestamp when the transition state was last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastChangedAt() const{ return m_lastChangedAt; }

    /**
     * <p>The timestamp when the transition state was last changed.</p>
     */
    inline bool LastChangedAtHasBeenSet() const { return m_lastChangedAtHasBeenSet; }

    /**
     * <p>The timestamp when the transition state was last changed.</p>
     */
    inline void SetLastChangedAt(const Aws::Utils::DateTime& value) { m_lastChangedAtHasBeenSet = true; m_lastChangedAt = value; }

    /**
     * <p>The timestamp when the transition state was last changed.</p>
     */
    inline void SetLastChangedAt(Aws::Utils::DateTime&& value) { m_lastChangedAtHasBeenSet = true; m_lastChangedAt = std::move(value); }

    /**
     * <p>The timestamp when the transition state was last changed.</p>
     */
    inline TransitionState& WithLastChangedAt(const Aws::Utils::DateTime& value) { SetLastChangedAt(value); return *this;}

    /**
     * <p>The timestamp when the transition state was last changed.</p>
     */
    inline TransitionState& WithLastChangedAt(Aws::Utils::DateTime&& value) { SetLastChangedAt(std::move(value)); return *this;}


    /**
     * <p>The user-specified reason why the transition between two stages of a pipeline
     * was disabled.</p>
     */
    inline const Aws::String& GetDisabledReason() const{ return m_disabledReason; }

    /**
     * <p>The user-specified reason why the transition between two stages of a pipeline
     * was disabled.</p>
     */
    inline bool DisabledReasonHasBeenSet() const { return m_disabledReasonHasBeenSet; }

    /**
     * <p>The user-specified reason why the transition between two stages of a pipeline
     * was disabled.</p>
     */
    inline void SetDisabledReason(const Aws::String& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = value; }

    /**
     * <p>The user-specified reason why the transition between two stages of a pipeline
     * was disabled.</p>
     */
    inline void SetDisabledReason(Aws::String&& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = std::move(value); }

    /**
     * <p>The user-specified reason why the transition between two stages of a pipeline
     * was disabled.</p>
     */
    inline void SetDisabledReason(const char* value) { m_disabledReasonHasBeenSet = true; m_disabledReason.assign(value); }

    /**
     * <p>The user-specified reason why the transition between two stages of a pipeline
     * was disabled.</p>
     */
    inline TransitionState& WithDisabledReason(const Aws::String& value) { SetDisabledReason(value); return *this;}

    /**
     * <p>The user-specified reason why the transition between two stages of a pipeline
     * was disabled.</p>
     */
    inline TransitionState& WithDisabledReason(Aws::String&& value) { SetDisabledReason(std::move(value)); return *this;}

    /**
     * <p>The user-specified reason why the transition between two stages of a pipeline
     * was disabled.</p>
     */
    inline TransitionState& WithDisabledReason(const char* value) { SetDisabledReason(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_lastChangedBy;
    bool m_lastChangedByHasBeenSet;

    Aws::Utils::DateTime m_lastChangedAt;
    bool m_lastChangedAtHasBeenSet;

    Aws::String m_disabledReason;
    bool m_disabledReasonHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws

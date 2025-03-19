/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TransitionState
  {
  public:
    AWS_CODEPIPELINE_API TransitionState() = default;
    AWS_CODEPIPELINE_API TransitionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API TransitionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the transition between stages is enabled (true) or disabled
     * (false).</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline TransitionState& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user who last changed the transition state.</p>
     */
    inline const Aws::String& GetLastChangedBy() const { return m_lastChangedBy; }
    inline bool LastChangedByHasBeenSet() const { return m_lastChangedByHasBeenSet; }
    template<typename LastChangedByT = Aws::String>
    void SetLastChangedBy(LastChangedByT&& value) { m_lastChangedByHasBeenSet = true; m_lastChangedBy = std::forward<LastChangedByT>(value); }
    template<typename LastChangedByT = Aws::String>
    TransitionState& WithLastChangedBy(LastChangedByT&& value) { SetLastChangedBy(std::forward<LastChangedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the transition state was last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastChangedAt() const { return m_lastChangedAt; }
    inline bool LastChangedAtHasBeenSet() const { return m_lastChangedAtHasBeenSet; }
    template<typename LastChangedAtT = Aws::Utils::DateTime>
    void SetLastChangedAt(LastChangedAtT&& value) { m_lastChangedAtHasBeenSet = true; m_lastChangedAt = std::forward<LastChangedAtT>(value); }
    template<typename LastChangedAtT = Aws::Utils::DateTime>
    TransitionState& WithLastChangedAt(LastChangedAtT&& value) { SetLastChangedAt(std::forward<LastChangedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-specified reason why the transition between two stages of a pipeline
     * was disabled.</p>
     */
    inline const Aws::String& GetDisabledReason() const { return m_disabledReason; }
    inline bool DisabledReasonHasBeenSet() const { return m_disabledReasonHasBeenSet; }
    template<typename DisabledReasonT = Aws::String>
    void SetDisabledReason(DisabledReasonT&& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = std::forward<DisabledReasonT>(value); }
    template<typename DisabledReasonT = Aws::String>
    TransitionState& WithDisabledReason(DisabledReasonT&& value) { SetDisabledReason(std::forward<DisabledReasonT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_lastChangedBy;
    bool m_lastChangedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastChangedAt{};
    bool m_lastChangedAtHasBeenSet = false;

    Aws::String m_disabledReason;
    bool m_disabledReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws

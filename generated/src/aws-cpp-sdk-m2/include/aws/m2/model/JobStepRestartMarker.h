/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Provides step/procedure step information for a restart batch job
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/JobStepRestartMarker">AWS
   * API Reference</a></p>
   */
  class JobStepRestartMarker
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API JobStepRestartMarker() = default;
    AWS_MAINFRAMEMODERNIZATION_API JobStepRestartMarker(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API JobStepRestartMarker& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The procedure step name that a batch job was restarted from.</p>
     */
    inline const Aws::String& GetFromProcStep() const { return m_fromProcStep; }
    inline bool FromProcStepHasBeenSet() const { return m_fromProcStepHasBeenSet; }
    template<typename FromProcStepT = Aws::String>
    void SetFromProcStep(FromProcStepT&& value) { m_fromProcStepHasBeenSet = true; m_fromProcStep = std::forward<FromProcStepT>(value); }
    template<typename FromProcStepT = Aws::String>
    JobStepRestartMarker& WithFromProcStep(FromProcStepT&& value) { SetFromProcStep(std::forward<FromProcStepT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step name that a batch job was restarted from.</p>
     */
    inline const Aws::String& GetFromStep() const { return m_fromStep; }
    inline bool FromStepHasBeenSet() const { return m_fromStepHasBeenSet; }
    template<typename FromStepT = Aws::String>
    void SetFromStep(FromStepT&& value) { m_fromStepHasBeenSet = true; m_fromStep = std::forward<FromStepT>(value); }
    template<typename FromStepT = Aws::String>
    JobStepRestartMarker& WithFromStep(FromStepT&& value) { SetFromStep(std::forward<FromStepT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step-level checkpoint timestamp (creation or last modification) for an
     * Amazon Web Services Blu Age application batch job.</p>
     */
    inline bool GetSkip() const { return m_skip; }
    inline bool SkipHasBeenSet() const { return m_skipHasBeenSet; }
    inline void SetSkip(bool value) { m_skipHasBeenSet = true; m_skip = value; }
    inline JobStepRestartMarker& WithSkip(bool value) { SetSkip(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Skip selected step and issue a restart from immediate successor step for an
     * Amazon Web Services Blu Age application batch job.</p>
     */
    inline int GetStepCheckpoint() const { return m_stepCheckpoint; }
    inline bool StepCheckpointHasBeenSet() const { return m_stepCheckpointHasBeenSet; }
    inline void SetStepCheckpoint(int value) { m_stepCheckpointHasBeenSet = true; m_stepCheckpoint = value; }
    inline JobStepRestartMarker& WithStepCheckpoint(int value) { SetStepCheckpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The procedure step name that a batch job was restarted to.</p>
     */
    inline const Aws::String& GetToProcStep() const { return m_toProcStep; }
    inline bool ToProcStepHasBeenSet() const { return m_toProcStepHasBeenSet; }
    template<typename ToProcStepT = Aws::String>
    void SetToProcStep(ToProcStepT&& value) { m_toProcStepHasBeenSet = true; m_toProcStep = std::forward<ToProcStepT>(value); }
    template<typename ToProcStepT = Aws::String>
    JobStepRestartMarker& WithToProcStep(ToProcStepT&& value) { SetToProcStep(std::forward<ToProcStepT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step name that a batch job was restarted to.</p>
     */
    inline const Aws::String& GetToStep() const { return m_toStep; }
    inline bool ToStepHasBeenSet() const { return m_toStepHasBeenSet; }
    template<typename ToStepT = Aws::String>
    void SetToStep(ToStepT&& value) { m_toStepHasBeenSet = true; m_toStep = std::forward<ToStepT>(value); }
    template<typename ToStepT = Aws::String>
    JobStepRestartMarker& WithToStep(ToStepT&& value) { SetToStep(std::forward<ToStepT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fromProcStep;
    bool m_fromProcStepHasBeenSet = false;

    Aws::String m_fromStep;
    bool m_fromStepHasBeenSet = false;

    bool m_skip{false};
    bool m_skipHasBeenSet = false;

    int m_stepCheckpoint{0};
    bool m_stepCheckpointHasBeenSet = false;

    Aws::String m_toProcStep;
    bool m_toProcStepHasBeenSet = false;

    Aws::String m_toStep;
    bool m_toStepHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws

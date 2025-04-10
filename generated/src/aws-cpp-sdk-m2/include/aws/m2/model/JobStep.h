/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Provides information related to a job step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/JobStep">AWS API
   * Reference</a></p>
   */
  class JobStep
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API JobStep() = default;
    AWS_MAINFRAMEMODERNIZATION_API JobStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API JobStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a procedure step.</p>
     */
    inline const Aws::String& GetProcStepName() const { return m_procStepName; }
    inline bool ProcStepNameHasBeenSet() const { return m_procStepNameHasBeenSet; }
    template<typename ProcStepNameT = Aws::String>
    void SetProcStepName(ProcStepNameT&& value) { m_procStepNameHasBeenSet = true; m_procStepName = std::forward<ProcStepNameT>(value); }
    template<typename ProcStepNameT = Aws::String>
    JobStep& WithProcStepName(ProcStepNameT&& value) { SetProcStepName(std::forward<ProcStepNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of a procedure step.</p>
     */
    inline int GetProcStepNumber() const { return m_procStepNumber; }
    inline bool ProcStepNumberHasBeenSet() const { return m_procStepNumberHasBeenSet; }
    inline void SetProcStepNumber(int value) { m_procStepNumberHasBeenSet = true; m_procStepNumber = value; }
    inline JobStep& WithProcStepNumber(int value) { SetProcStepNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A registered step-level checkpoint identifier that can be used for restarting
     * an Amazon Web Services Blu Age application batch job.</p>
     */
    inline int GetStepCheckpoint() const { return m_stepCheckpoint; }
    inline bool StepCheckpointHasBeenSet() const { return m_stepCheckpointHasBeenSet; }
    inline void SetStepCheckpoint(int value) { m_stepCheckpointHasBeenSet = true; m_stepCheckpoint = value; }
    inline JobStep& WithStepCheckpoint(int value) { SetStepCheckpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step-level checkpoint status for an Amazon Web Services Blu Age
     * application batch job.</p>
     */
    inline const Aws::String& GetStepCheckpointStatus() const { return m_stepCheckpointStatus; }
    inline bool StepCheckpointStatusHasBeenSet() const { return m_stepCheckpointStatusHasBeenSet; }
    template<typename StepCheckpointStatusT = Aws::String>
    void SetStepCheckpointStatus(StepCheckpointStatusT&& value) { m_stepCheckpointStatusHasBeenSet = true; m_stepCheckpointStatus = std::forward<StepCheckpointStatusT>(value); }
    template<typename StepCheckpointStatusT = Aws::String>
    JobStep& WithStepCheckpointStatus(StepCheckpointStatusT&& value) { SetStepCheckpointStatus(std::forward<StepCheckpointStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step-level checkpoint status for an Amazon Web Services Blu Age
     * application batch job.</p>
     */
    inline const Aws::Utils::DateTime& GetStepCheckpointTime() const { return m_stepCheckpointTime; }
    inline bool StepCheckpointTimeHasBeenSet() const { return m_stepCheckpointTimeHasBeenSet; }
    template<typename StepCheckpointTimeT = Aws::Utils::DateTime>
    void SetStepCheckpointTime(StepCheckpointTimeT&& value) { m_stepCheckpointTimeHasBeenSet = true; m_stepCheckpointTime = std::forward<StepCheckpointTimeT>(value); }
    template<typename StepCheckpointTimeT = Aws::Utils::DateTime>
    JobStep& WithStepCheckpointTime(StepCheckpointTimeT&& value) { SetStepCheckpointTime(std::forward<StepCheckpointTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition code of a step.</p>
     */
    inline const Aws::String& GetStepCondCode() const { return m_stepCondCode; }
    inline bool StepCondCodeHasBeenSet() const { return m_stepCondCodeHasBeenSet; }
    template<typename StepCondCodeT = Aws::String>
    void SetStepCondCode(StepCondCodeT&& value) { m_stepCondCodeHasBeenSet = true; m_stepCondCode = std::forward<StepCondCodeT>(value); }
    template<typename StepCondCodeT = Aws::String>
    JobStep& WithStepCondCode(StepCondCodeT&& value) { SetStepCondCode(std::forward<StepCondCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a step.</p>
     */
    inline const Aws::String& GetStepName() const { return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    template<typename StepNameT = Aws::String>
    void SetStepName(StepNameT&& value) { m_stepNameHasBeenSet = true; m_stepName = std::forward<StepNameT>(value); }
    template<typename StepNameT = Aws::String>
    JobStep& WithStepName(StepNameT&& value) { SetStepName(std::forward<StepNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of a step.</p>
     */
    inline int GetStepNumber() const { return m_stepNumber; }
    inline bool StepNumberHasBeenSet() const { return m_stepNumberHasBeenSet; }
    inline void SetStepNumber(int value) { m_stepNumberHasBeenSet = true; m_stepNumber = value; }
    inline JobStep& WithStepNumber(int value) { SetStepNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if a step can be restarted or not.</p>
     */
    inline bool GetStepRestartable() const { return m_stepRestartable; }
    inline bool StepRestartableHasBeenSet() const { return m_stepRestartableHasBeenSet; }
    inline void SetStepRestartable(bool value) { m_stepRestartableHasBeenSet = true; m_stepRestartable = value; }
    inline JobStep& WithStepRestartable(bool value) { SetStepRestartable(value); return *this;}
    ///@}
  private:

    Aws::String m_procStepName;
    bool m_procStepNameHasBeenSet = false;

    int m_procStepNumber{0};
    bool m_procStepNumberHasBeenSet = false;

    int m_stepCheckpoint{0};
    bool m_stepCheckpointHasBeenSet = false;

    Aws::String m_stepCheckpointStatus;
    bool m_stepCheckpointStatusHasBeenSet = false;

    Aws::Utils::DateTime m_stepCheckpointTime{};
    bool m_stepCheckpointTimeHasBeenSet = false;

    Aws::String m_stepCondCode;
    bool m_stepCondCodeHasBeenSet = false;

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    int m_stepNumber{0};
    bool m_stepNumberHasBeenSet = false;

    bool m_stepRestartable{false};
    bool m_stepRestartableHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws

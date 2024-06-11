﻿/**
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
   * <p>Provides information related to a job step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/JobStep">AWS API
   * Reference</a></p>
   */
  class JobStep
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API JobStep();
    AWS_MAINFRAMEMODERNIZATION_API JobStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API JobStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a procedure step.</p>
     */
    inline const Aws::String& GetProcStepName() const{ return m_procStepName; }
    inline bool ProcStepNameHasBeenSet() const { return m_procStepNameHasBeenSet; }
    inline void SetProcStepName(const Aws::String& value) { m_procStepNameHasBeenSet = true; m_procStepName = value; }
    inline void SetProcStepName(Aws::String&& value) { m_procStepNameHasBeenSet = true; m_procStepName = std::move(value); }
    inline void SetProcStepName(const char* value) { m_procStepNameHasBeenSet = true; m_procStepName.assign(value); }
    inline JobStep& WithProcStepName(const Aws::String& value) { SetProcStepName(value); return *this;}
    inline JobStep& WithProcStepName(Aws::String&& value) { SetProcStepName(std::move(value)); return *this;}
    inline JobStep& WithProcStepName(const char* value) { SetProcStepName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of a procedure step.</p>
     */
    inline int GetProcStepNumber() const{ return m_procStepNumber; }
    inline bool ProcStepNumberHasBeenSet() const { return m_procStepNumberHasBeenSet; }
    inline void SetProcStepNumber(int value) { m_procStepNumberHasBeenSet = true; m_procStepNumber = value; }
    inline JobStep& WithProcStepNumber(int value) { SetProcStepNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition code of a step.</p>
     */
    inline const Aws::String& GetStepCondCode() const{ return m_stepCondCode; }
    inline bool StepCondCodeHasBeenSet() const { return m_stepCondCodeHasBeenSet; }
    inline void SetStepCondCode(const Aws::String& value) { m_stepCondCodeHasBeenSet = true; m_stepCondCode = value; }
    inline void SetStepCondCode(Aws::String&& value) { m_stepCondCodeHasBeenSet = true; m_stepCondCode = std::move(value); }
    inline void SetStepCondCode(const char* value) { m_stepCondCodeHasBeenSet = true; m_stepCondCode.assign(value); }
    inline JobStep& WithStepCondCode(const Aws::String& value) { SetStepCondCode(value); return *this;}
    inline JobStep& WithStepCondCode(Aws::String&& value) { SetStepCondCode(std::move(value)); return *this;}
    inline JobStep& WithStepCondCode(const char* value) { SetStepCondCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a step.</p>
     */
    inline const Aws::String& GetStepName() const{ return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    inline void SetStepName(const Aws::String& value) { m_stepNameHasBeenSet = true; m_stepName = value; }
    inline void SetStepName(Aws::String&& value) { m_stepNameHasBeenSet = true; m_stepName = std::move(value); }
    inline void SetStepName(const char* value) { m_stepNameHasBeenSet = true; m_stepName.assign(value); }
    inline JobStep& WithStepName(const Aws::String& value) { SetStepName(value); return *this;}
    inline JobStep& WithStepName(Aws::String&& value) { SetStepName(std::move(value)); return *this;}
    inline JobStep& WithStepName(const char* value) { SetStepName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of a step.</p>
     */
    inline int GetStepNumber() const{ return m_stepNumber; }
    inline bool StepNumberHasBeenSet() const { return m_stepNumberHasBeenSet; }
    inline void SetStepNumber(int value) { m_stepNumberHasBeenSet = true; m_stepNumber = value; }
    inline JobStep& WithStepNumber(int value) { SetStepNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if a step can be restarted or not.</p>
     */
    inline bool GetStepRestartable() const{ return m_stepRestartable; }
    inline bool StepRestartableHasBeenSet() const { return m_stepRestartableHasBeenSet; }
    inline void SetStepRestartable(bool value) { m_stepRestartableHasBeenSet = true; m_stepRestartable = value; }
    inline JobStep& WithStepRestartable(bool value) { SetStepRestartable(value); return *this;}
    ///@}
  private:

    Aws::String m_procStepName;
    bool m_procStepNameHasBeenSet = false;

    int m_procStepNumber;
    bool m_procStepNumberHasBeenSet = false;

    Aws::String m_stepCondCode;
    bool m_stepCondCodeHasBeenSet = false;

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    int m_stepNumber;
    bool m_stepNumberHasBeenSet = false;

    bool m_stepRestartable;
    bool m_stepRestartableHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws

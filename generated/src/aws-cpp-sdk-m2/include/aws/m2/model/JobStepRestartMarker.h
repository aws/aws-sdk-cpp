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
    AWS_MAINFRAMEMODERNIZATION_API JobStepRestartMarker();
    AWS_MAINFRAMEMODERNIZATION_API JobStepRestartMarker(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API JobStepRestartMarker& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The procedure step name that a batch job was restarted from.</p>
     */
    inline const Aws::String& GetFromProcStep() const{ return m_fromProcStep; }
    inline bool FromProcStepHasBeenSet() const { return m_fromProcStepHasBeenSet; }
    inline void SetFromProcStep(const Aws::String& value) { m_fromProcStepHasBeenSet = true; m_fromProcStep = value; }
    inline void SetFromProcStep(Aws::String&& value) { m_fromProcStepHasBeenSet = true; m_fromProcStep = std::move(value); }
    inline void SetFromProcStep(const char* value) { m_fromProcStepHasBeenSet = true; m_fromProcStep.assign(value); }
    inline JobStepRestartMarker& WithFromProcStep(const Aws::String& value) { SetFromProcStep(value); return *this;}
    inline JobStepRestartMarker& WithFromProcStep(Aws::String&& value) { SetFromProcStep(std::move(value)); return *this;}
    inline JobStepRestartMarker& WithFromProcStep(const char* value) { SetFromProcStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step name that a batch job was restarted from.</p>
     */
    inline const Aws::String& GetFromStep() const{ return m_fromStep; }
    inline bool FromStepHasBeenSet() const { return m_fromStepHasBeenSet; }
    inline void SetFromStep(const Aws::String& value) { m_fromStepHasBeenSet = true; m_fromStep = value; }
    inline void SetFromStep(Aws::String&& value) { m_fromStepHasBeenSet = true; m_fromStep = std::move(value); }
    inline void SetFromStep(const char* value) { m_fromStepHasBeenSet = true; m_fromStep.assign(value); }
    inline JobStepRestartMarker& WithFromStep(const Aws::String& value) { SetFromStep(value); return *this;}
    inline JobStepRestartMarker& WithFromStep(Aws::String&& value) { SetFromStep(std::move(value)); return *this;}
    inline JobStepRestartMarker& WithFromStep(const char* value) { SetFromStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The procedure step name that a batch job was restarted to.</p>
     */
    inline const Aws::String& GetToProcStep() const{ return m_toProcStep; }
    inline bool ToProcStepHasBeenSet() const { return m_toProcStepHasBeenSet; }
    inline void SetToProcStep(const Aws::String& value) { m_toProcStepHasBeenSet = true; m_toProcStep = value; }
    inline void SetToProcStep(Aws::String&& value) { m_toProcStepHasBeenSet = true; m_toProcStep = std::move(value); }
    inline void SetToProcStep(const char* value) { m_toProcStepHasBeenSet = true; m_toProcStep.assign(value); }
    inline JobStepRestartMarker& WithToProcStep(const Aws::String& value) { SetToProcStep(value); return *this;}
    inline JobStepRestartMarker& WithToProcStep(Aws::String&& value) { SetToProcStep(std::move(value)); return *this;}
    inline JobStepRestartMarker& WithToProcStep(const char* value) { SetToProcStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step name that a batch job was restarted to.</p>
     */
    inline const Aws::String& GetToStep() const{ return m_toStep; }
    inline bool ToStepHasBeenSet() const { return m_toStepHasBeenSet; }
    inline void SetToStep(const Aws::String& value) { m_toStepHasBeenSet = true; m_toStep = value; }
    inline void SetToStep(Aws::String&& value) { m_toStepHasBeenSet = true; m_toStep = std::move(value); }
    inline void SetToStep(const char* value) { m_toStepHasBeenSet = true; m_toStep.assign(value); }
    inline JobStepRestartMarker& WithToStep(const Aws::String& value) { SetToStep(value); return *this;}
    inline JobStepRestartMarker& WithToStep(Aws::String&& value) { SetToStep(std::move(value)); return *this;}
    inline JobStepRestartMarker& WithToStep(const char* value) { SetToStep(value); return *this;}
    ///@}
  private:

    Aws::String m_fromProcStep;
    bool m_fromProcStepHasBeenSet = false;

    Aws::String m_fromStep;
    bool m_fromStepHasBeenSet = false;

    Aws::String m_toProcStep;
    bool m_toProcStepHasBeenSet = false;

    Aws::String m_toStep;
    bool m_toStepHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws

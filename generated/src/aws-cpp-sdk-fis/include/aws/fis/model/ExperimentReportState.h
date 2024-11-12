/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentReportStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/ExperimentReportError.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes the state of the experiment report generation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentReportState">AWS
   * API Reference</a></p>
   */
  class ExperimentReportState
  {
  public:
    AWS_FIS_API ExperimentReportState();
    AWS_FIS_API ExperimentReportState(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentReportState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the experiment report generation.</p>
     */
    inline const ExperimentReportStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ExperimentReportStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ExperimentReportStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ExperimentReportState& WithStatus(const ExperimentReportStatus& value) { SetStatus(value); return *this;}
    inline ExperimentReportState& WithStatus(ExperimentReportStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the state of the experiment report generation.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline ExperimentReportState& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline ExperimentReportState& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline ExperimentReportState& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error information of the experiment when the experiment report generation
     * has failed.</p>
     */
    inline const ExperimentReportError& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ExperimentReportError& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ExperimentReportError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline ExperimentReportState& WithError(const ExperimentReportError& value) { SetError(value); return *this;}
    inline ExperimentReportState& WithError(ExperimentReportError&& value) { SetError(std::move(value)); return *this;}
    ///@}
  private:

    ExperimentReportStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    ExperimentReportError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/PhaseStatus.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Indicates whether DataSync created a complete <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">task
   * report</a> for your transfer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ReportResult">AWS
   * API Reference</a></p>
   */
  class ReportResult
  {
  public:
    AWS_DATASYNC_API ReportResult();
    AWS_DATASYNC_API ReportResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API ReportResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether DataSync is still working on your report, created a report,
     * or can't create a complete report.</p>
     */
    inline const PhaseStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const PhaseStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(PhaseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ReportResult& WithStatus(const PhaseStatus& value) { SetStatus(value); return *this;}
    inline ReportResult& WithStatus(PhaseStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the code associated with the error if DataSync can't create a
     * complete report.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline ReportResult& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline ReportResult& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline ReportResult& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about issues creating a report.</p>
     */
    inline const Aws::String& GetErrorDetail() const{ return m_errorDetail; }
    inline bool ErrorDetailHasBeenSet() const { return m_errorDetailHasBeenSet; }
    inline void SetErrorDetail(const Aws::String& value) { m_errorDetailHasBeenSet = true; m_errorDetail = value; }
    inline void SetErrorDetail(Aws::String&& value) { m_errorDetailHasBeenSet = true; m_errorDetail = std::move(value); }
    inline void SetErrorDetail(const char* value) { m_errorDetailHasBeenSet = true; m_errorDetail.assign(value); }
    inline ReportResult& WithErrorDetail(const Aws::String& value) { SetErrorDetail(value); return *this;}
    inline ReportResult& WithErrorDetail(Aws::String&& value) { SetErrorDetail(std::move(value)); return *this;}
    inline ReportResult& WithErrorDetail(const char* value) { SetErrorDetail(value); return *this;}
    ///@}
  private:

    PhaseStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorDetail;
    bool m_errorDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws

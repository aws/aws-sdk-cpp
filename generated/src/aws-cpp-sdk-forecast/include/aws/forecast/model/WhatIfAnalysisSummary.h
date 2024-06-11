/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides a summary of the what-if analysis properties used in the
   * <a>ListWhatIfAnalyses</a> operation. To get the complete set of properties, call
   * the <a>DescribeWhatIfAnalysis</a> operation, and provide the
   * <code>WhatIfAnalysisArn</code> that is listed in the summary.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/WhatIfAnalysisSummary">AWS
   * API Reference</a></p>
   */
  class WhatIfAnalysisSummary
  {
  public:
    AWS_FORECASTSERVICE_API WhatIfAnalysisSummary();
    AWS_FORECASTSERVICE_API WhatIfAnalysisSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API WhatIfAnalysisSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisArn() const{ return m_whatIfAnalysisArn; }
    inline bool WhatIfAnalysisArnHasBeenSet() const { return m_whatIfAnalysisArnHasBeenSet; }
    inline void SetWhatIfAnalysisArn(const Aws::String& value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn = value; }
    inline void SetWhatIfAnalysisArn(Aws::String&& value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn = std::move(value); }
    inline void SetWhatIfAnalysisArn(const char* value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn.assign(value); }
    inline WhatIfAnalysisSummary& WithWhatIfAnalysisArn(const Aws::String& value) { SetWhatIfAnalysisArn(value); return *this;}
    inline WhatIfAnalysisSummary& WithWhatIfAnalysisArn(Aws::String&& value) { SetWhatIfAnalysisArn(std::move(value)); return *this;}
    inline WhatIfAnalysisSummary& WithWhatIfAnalysisArn(const char* value) { SetWhatIfAnalysisArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the what-if analysis.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisName() const{ return m_whatIfAnalysisName; }
    inline bool WhatIfAnalysisNameHasBeenSet() const { return m_whatIfAnalysisNameHasBeenSet; }
    inline void SetWhatIfAnalysisName(const Aws::String& value) { m_whatIfAnalysisNameHasBeenSet = true; m_whatIfAnalysisName = value; }
    inline void SetWhatIfAnalysisName(Aws::String&& value) { m_whatIfAnalysisNameHasBeenSet = true; m_whatIfAnalysisName = std::move(value); }
    inline void SetWhatIfAnalysisName(const char* value) { m_whatIfAnalysisNameHasBeenSet = true; m_whatIfAnalysisName.assign(value); }
    inline WhatIfAnalysisSummary& WithWhatIfAnalysisName(const Aws::String& value) { SetWhatIfAnalysisName(value); return *this;}
    inline WhatIfAnalysisSummary& WithWhatIfAnalysisName(Aws::String&& value) { SetWhatIfAnalysisName(std::move(value)); return *this;}
    inline WhatIfAnalysisSummary& WithWhatIfAnalysisName(const char* value) { SetWhatIfAnalysisName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the baseline forecast that is being used in
     * this what-if analysis.</p>
     */
    inline const Aws::String& GetForecastArn() const{ return m_forecastArn; }
    inline bool ForecastArnHasBeenSet() const { return m_forecastArnHasBeenSet; }
    inline void SetForecastArn(const Aws::String& value) { m_forecastArnHasBeenSet = true; m_forecastArn = value; }
    inline void SetForecastArn(Aws::String&& value) { m_forecastArnHasBeenSet = true; m_forecastArn = std::move(value); }
    inline void SetForecastArn(const char* value) { m_forecastArnHasBeenSet = true; m_forecastArn.assign(value); }
    inline WhatIfAnalysisSummary& WithForecastArn(const Aws::String& value) { SetForecastArn(value); return *this;}
    inline WhatIfAnalysisSummary& WithForecastArn(Aws::String&& value) { SetForecastArn(std::move(value)); return *this;}
    inline WhatIfAnalysisSummary& WithForecastArn(const char* value) { SetForecastArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the what-if analysis. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if analysis must be <code>ACTIVE</code> before you can access the
     * analysis.</p> 
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline WhatIfAnalysisSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline WhatIfAnalysisSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline WhatIfAnalysisSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline WhatIfAnalysisSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline WhatIfAnalysisSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline WhatIfAnalysisSummary& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the what-if analysis was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline WhatIfAnalysisSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline WhatIfAnalysisSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }
    inline WhatIfAnalysisSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline WhatIfAnalysisSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_whatIfAnalysisArn;
    bool m_whatIfAnalysisArnHasBeenSet = false;

    Aws::String m_whatIfAnalysisName;
    bool m_whatIfAnalysisNameHasBeenSet = false;

    Aws::String m_forecastArn;
    bool m_forecastArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws

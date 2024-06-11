﻿/**
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
   * <p>Provides a summary of the what-if forecast properties used in the
   * <a>ListWhatIfForecasts</a> operation. To get the complete set of properties,
   * call the <a>DescribeWhatIfForecast</a> operation, and provide the
   * <code>WhatIfForecastArn</code> that is listed in the summary.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/WhatIfForecastSummary">AWS
   * API Reference</a></p>
   */
  class WhatIfForecastSummary
  {
  public:
    AWS_FORECASTSERVICE_API WhatIfForecastSummary();
    AWS_FORECASTSERVICE_API WhatIfForecastSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API WhatIfForecastSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline const Aws::String& GetWhatIfForecastArn() const{ return m_whatIfForecastArn; }
    inline bool WhatIfForecastArnHasBeenSet() const { return m_whatIfForecastArnHasBeenSet; }
    inline void SetWhatIfForecastArn(const Aws::String& value) { m_whatIfForecastArnHasBeenSet = true; m_whatIfForecastArn = value; }
    inline void SetWhatIfForecastArn(Aws::String&& value) { m_whatIfForecastArnHasBeenSet = true; m_whatIfForecastArn = std::move(value); }
    inline void SetWhatIfForecastArn(const char* value) { m_whatIfForecastArnHasBeenSet = true; m_whatIfForecastArn.assign(value); }
    inline WhatIfForecastSummary& WithWhatIfForecastArn(const Aws::String& value) { SetWhatIfForecastArn(value); return *this;}
    inline WhatIfForecastSummary& WithWhatIfForecastArn(Aws::String&& value) { SetWhatIfForecastArn(std::move(value)); return *this;}
    inline WhatIfForecastSummary& WithWhatIfForecastArn(const char* value) { SetWhatIfForecastArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the what-if forecast.</p>
     */
    inline const Aws::String& GetWhatIfForecastName() const{ return m_whatIfForecastName; }
    inline bool WhatIfForecastNameHasBeenSet() const { return m_whatIfForecastNameHasBeenSet; }
    inline void SetWhatIfForecastName(const Aws::String& value) { m_whatIfForecastNameHasBeenSet = true; m_whatIfForecastName = value; }
    inline void SetWhatIfForecastName(Aws::String&& value) { m_whatIfForecastNameHasBeenSet = true; m_whatIfForecastName = std::move(value); }
    inline void SetWhatIfForecastName(const char* value) { m_whatIfForecastNameHasBeenSet = true; m_whatIfForecastName.assign(value); }
    inline WhatIfForecastSummary& WithWhatIfForecastName(const Aws::String& value) { SetWhatIfForecastName(value); return *this;}
    inline WhatIfForecastSummary& WithWhatIfForecastName(Aws::String&& value) { SetWhatIfForecastName(std::move(value)); return *this;}
    inline WhatIfForecastSummary& WithWhatIfForecastName(const char* value) { SetWhatIfForecastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that contains this
     * what-if forecast.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisArn() const{ return m_whatIfAnalysisArn; }
    inline bool WhatIfAnalysisArnHasBeenSet() const { return m_whatIfAnalysisArnHasBeenSet; }
    inline void SetWhatIfAnalysisArn(const Aws::String& value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn = value; }
    inline void SetWhatIfAnalysisArn(Aws::String&& value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn = std::move(value); }
    inline void SetWhatIfAnalysisArn(const char* value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn.assign(value); }
    inline WhatIfForecastSummary& WithWhatIfAnalysisArn(const Aws::String& value) { SetWhatIfAnalysisArn(value); return *this;}
    inline WhatIfForecastSummary& WithWhatIfAnalysisArn(Aws::String&& value) { SetWhatIfAnalysisArn(std::move(value)); return *this;}
    inline WhatIfForecastSummary& WithWhatIfAnalysisArn(const char* value) { SetWhatIfAnalysisArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the what-if forecast. States include:</p> <ul> <li> <p>
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
    inline WhatIfForecastSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline WhatIfForecastSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline WhatIfForecastSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
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
    inline WhatIfForecastSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline WhatIfForecastSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline WhatIfForecastSummary& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the what-if forecast was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline WhatIfForecastSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline WhatIfForecastSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
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
    inline WhatIfForecastSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline WhatIfForecastSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_whatIfForecastArn;
    bool m_whatIfForecastArnHasBeenSet = false;

    Aws::String m_whatIfForecastName;
    bool m_whatIfForecastNameHasBeenSet = false;

    Aws::String m_whatIfAnalysisArn;
    bool m_whatIfAnalysisArnHasBeenSet = false;

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

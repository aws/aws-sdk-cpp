/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DataDestination.h>
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
   * <p>Provides a summary of the forecast export job properties used in the
   * <a>ListForecastExportJobs</a> operation. To get the complete set of properties,
   * call the <a>DescribeForecastExportJob</a> operation, and provide the listed
   * <code>ForecastExportJobArn</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ForecastExportJobSummary">AWS
   * API Reference</a></p>
   */
  class ForecastExportJobSummary
  {
  public:
    AWS_FORECASTSERVICE_API ForecastExportJobSummary();
    AWS_FORECASTSERVICE_API ForecastExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API ForecastExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the forecast export job.</p>
     */
    inline const Aws::String& GetForecastExportJobArn() const{ return m_forecastExportJobArn; }
    inline bool ForecastExportJobArnHasBeenSet() const { return m_forecastExportJobArnHasBeenSet; }
    inline void SetForecastExportJobArn(const Aws::String& value) { m_forecastExportJobArnHasBeenSet = true; m_forecastExportJobArn = value; }
    inline void SetForecastExportJobArn(Aws::String&& value) { m_forecastExportJobArnHasBeenSet = true; m_forecastExportJobArn = std::move(value); }
    inline void SetForecastExportJobArn(const char* value) { m_forecastExportJobArnHasBeenSet = true; m_forecastExportJobArn.assign(value); }
    inline ForecastExportJobSummary& WithForecastExportJobArn(const Aws::String& value) { SetForecastExportJobArn(value); return *this;}
    inline ForecastExportJobSummary& WithForecastExportJobArn(Aws::String&& value) { SetForecastExportJobArn(std::move(value)); return *this;}
    inline ForecastExportJobSummary& WithForecastExportJobArn(const char* value) { SetForecastExportJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the forecast export job.</p>
     */
    inline const Aws::String& GetForecastExportJobName() const{ return m_forecastExportJobName; }
    inline bool ForecastExportJobNameHasBeenSet() const { return m_forecastExportJobNameHasBeenSet; }
    inline void SetForecastExportJobName(const Aws::String& value) { m_forecastExportJobNameHasBeenSet = true; m_forecastExportJobName = value; }
    inline void SetForecastExportJobName(Aws::String&& value) { m_forecastExportJobNameHasBeenSet = true; m_forecastExportJobName = std::move(value); }
    inline void SetForecastExportJobName(const char* value) { m_forecastExportJobNameHasBeenSet = true; m_forecastExportJobName.assign(value); }
    inline ForecastExportJobSummary& WithForecastExportJobName(const Aws::String& value) { SetForecastExportJobName(value); return *this;}
    inline ForecastExportJobSummary& WithForecastExportJobName(Aws::String&& value) { SetForecastExportJobName(std::move(value)); return *this;}
    inline ForecastExportJobSummary& WithForecastExportJobName(const char* value) { SetForecastExportJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the Amazon Simple Storage Service (Amazon S3) bucket where the
     * forecast is exported.</p>
     */
    inline const DataDestination& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const DataDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(DataDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline ForecastExportJobSummary& WithDestination(const DataDestination& value) { SetDestination(value); return *this;}
    inline ForecastExportJobSummary& WithDestination(DataDestination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the forecast export job. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the forecast export job must be <code>ACTIVE</code> before you can access the
     * forecast in your S3 bucket.</p> 
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline ForecastExportJobSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ForecastExportJobSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ForecastExportJobSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
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
    inline ForecastExportJobSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ForecastExportJobSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ForecastExportJobSummary& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the forecast export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ForecastExportJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ForecastExportJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
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
    inline ForecastExportJobSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline ForecastExportJobSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_forecastExportJobArn;
    bool m_forecastExportJobArnHasBeenSet = false;

    Aws::String m_forecastExportJobName;
    bool m_forecastExportJobNameHasBeenSet = false;

    DataDestination m_destination;
    bool m_destinationHasBeenSet = false;

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

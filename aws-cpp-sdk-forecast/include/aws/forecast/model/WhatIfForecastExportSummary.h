/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Provides a summary of the what-if forecast export properties used in the
   * <a>ListWhatIfForecastExports</a> operation. To get the complete set of
   * properties, call the <a>DescribeWhatIfForecastExport</a> operation, and provide
   * the <code>WhatIfForecastExportArn</code> that is listed in the
   * summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/WhatIfForecastExportSummary">AWS
   * API Reference</a></p>
   */
  class WhatIfForecastExportSummary
  {
  public:
    AWS_FORECASTSERVICE_API WhatIfForecastExportSummary();
    AWS_FORECASTSERVICE_API WhatIfForecastExportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API WhatIfForecastExportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline const Aws::String& GetWhatIfForecastExportArn() const{ return m_whatIfForecastExportArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline bool WhatIfForecastExportArnHasBeenSet() const { return m_whatIfForecastExportArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline void SetWhatIfForecastExportArn(const Aws::String& value) { m_whatIfForecastExportArnHasBeenSet = true; m_whatIfForecastExportArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline void SetWhatIfForecastExportArn(Aws::String&& value) { m_whatIfForecastExportArnHasBeenSet = true; m_whatIfForecastExportArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline void SetWhatIfForecastExportArn(const char* value) { m_whatIfForecastExportArnHasBeenSet = true; m_whatIfForecastExportArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline WhatIfForecastExportSummary& WithWhatIfForecastExportArn(const Aws::String& value) { SetWhatIfForecastExportArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline WhatIfForecastExportSummary& WithWhatIfForecastExportArn(Aws::String&& value) { SetWhatIfForecastExportArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast export.</p>
     */
    inline WhatIfForecastExportSummary& WithWhatIfForecastExportArn(const char* value) { SetWhatIfForecastExportArn(value); return *this;}


    /**
     * <p>An array of Amazon Resource Names (ARNs) that define the what-if forecasts
     * included in the export.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWhatIfForecastArns() const{ return m_whatIfForecastArns; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) that define the what-if forecasts
     * included in the export.</p>
     */
    inline bool WhatIfForecastArnsHasBeenSet() const { return m_whatIfForecastArnsHasBeenSet; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) that define the what-if forecasts
     * included in the export.</p>
     */
    inline void SetWhatIfForecastArns(const Aws::Vector<Aws::String>& value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns = value; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) that define the what-if forecasts
     * included in the export.</p>
     */
    inline void SetWhatIfForecastArns(Aws::Vector<Aws::String>&& value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns = std::move(value); }

    /**
     * <p>An array of Amazon Resource Names (ARNs) that define the what-if forecasts
     * included in the export.</p>
     */
    inline WhatIfForecastExportSummary& WithWhatIfForecastArns(const Aws::Vector<Aws::String>& value) { SetWhatIfForecastArns(value); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) that define the what-if forecasts
     * included in the export.</p>
     */
    inline WhatIfForecastExportSummary& WithWhatIfForecastArns(Aws::Vector<Aws::String>&& value) { SetWhatIfForecastArns(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) that define the what-if forecasts
     * included in the export.</p>
     */
    inline WhatIfForecastExportSummary& AddWhatIfForecastArns(const Aws::String& value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) that define the what-if forecasts
     * included in the export.</p>
     */
    inline WhatIfForecastExportSummary& AddWhatIfForecastArns(Aws::String&& value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) that define the what-if forecasts
     * included in the export.</p>
     */
    inline WhatIfForecastExportSummary& AddWhatIfForecastArns(const char* value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns.push_back(value); return *this; }


    /**
     * <p>The what-if forecast export name.</p>
     */
    inline const Aws::String& GetWhatIfForecastExportName() const{ return m_whatIfForecastExportName; }

    /**
     * <p>The what-if forecast export name.</p>
     */
    inline bool WhatIfForecastExportNameHasBeenSet() const { return m_whatIfForecastExportNameHasBeenSet; }

    /**
     * <p>The what-if forecast export name.</p>
     */
    inline void SetWhatIfForecastExportName(const Aws::String& value) { m_whatIfForecastExportNameHasBeenSet = true; m_whatIfForecastExportName = value; }

    /**
     * <p>The what-if forecast export name.</p>
     */
    inline void SetWhatIfForecastExportName(Aws::String&& value) { m_whatIfForecastExportNameHasBeenSet = true; m_whatIfForecastExportName = std::move(value); }

    /**
     * <p>The what-if forecast export name.</p>
     */
    inline void SetWhatIfForecastExportName(const char* value) { m_whatIfForecastExportNameHasBeenSet = true; m_whatIfForecastExportName.assign(value); }

    /**
     * <p>The what-if forecast export name.</p>
     */
    inline WhatIfForecastExportSummary& WithWhatIfForecastExportName(const Aws::String& value) { SetWhatIfForecastExportName(value); return *this;}

    /**
     * <p>The what-if forecast export name.</p>
     */
    inline WhatIfForecastExportSummary& WithWhatIfForecastExportName(Aws::String&& value) { SetWhatIfForecastExportName(std::move(value)); return *this;}

    /**
     * <p>The what-if forecast export name.</p>
     */
    inline WhatIfForecastExportSummary& WithWhatIfForecastExportName(const char* value) { SetWhatIfForecastExportName(value); return *this;}


    /**
     * <p>The path to the Amazon Simple Storage Service (Amazon S3) bucket where the
     * forecast is exported.</p>
     */
    inline const DataDestination& GetDestination() const{ return m_destination; }

    /**
     * <p>The path to the Amazon Simple Storage Service (Amazon S3) bucket where the
     * forecast is exported.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The path to the Amazon Simple Storage Service (Amazon S3) bucket where the
     * forecast is exported.</p>
     */
    inline void SetDestination(const DataDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The path to the Amazon Simple Storage Service (Amazon S3) bucket where the
     * forecast is exported.</p>
     */
    inline void SetDestination(DataDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The path to the Amazon Simple Storage Service (Amazon S3) bucket where the
     * forecast is exported.</p>
     */
    inline WhatIfForecastExportSummary& WithDestination(const DataDestination& value) { SetDestination(value); return *this;}

    /**
     * <p>The path to the Amazon Simple Storage Service (Amazon S3) bucket where the
     * forecast is exported.</p>
     */
    inline WhatIfForecastExportSummary& WithDestination(DataDestination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The status of the what-if forecast export. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if analysis must be <code>ACTIVE</code> before you can access the
     * analysis.</p> 
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the what-if forecast export. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if analysis must be <code>ACTIVE</code> before you can access the
     * analysis.</p> 
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the what-if forecast export. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if analysis must be <code>ACTIVE</code> before you can access the
     * analysis.</p> 
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the what-if forecast export. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if analysis must be <code>ACTIVE</code> before you can access the
     * analysis.</p> 
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the what-if forecast export. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if analysis must be <code>ACTIVE</code> before you can access the
     * analysis.</p> 
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the what-if forecast export. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if analysis must be <code>ACTIVE</code> before you can access the
     * analysis.</p> 
     */
    inline WhatIfForecastExportSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the what-if forecast export. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if analysis must be <code>ACTIVE</code> before you can access the
     * analysis.</p> 
     */
    inline WhatIfForecastExportSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the what-if forecast export. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if analysis must be <code>ACTIVE</code> before you can access the
     * analysis.</p> 
     */
    inline WhatIfForecastExportSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline WhatIfForecastExportSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline WhatIfForecastExportSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline WhatIfForecastExportSummary& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>When the what-if forecast export was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the what-if forecast export was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the what-if forecast export was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the what-if forecast export was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the what-if forecast export was created.</p>
     */
    inline WhatIfForecastExportSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the what-if forecast export was created.</p>
     */
    inline WhatIfForecastExportSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline WhatIfForecastExportSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline WhatIfForecastExportSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_whatIfForecastExportArn;
    bool m_whatIfForecastExportArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_whatIfForecastArns;
    bool m_whatIfForecastArnsHasBeenSet = false;

    Aws::String m_whatIfForecastExportName;
    bool m_whatIfForecastExportNameHasBeenSet = false;

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

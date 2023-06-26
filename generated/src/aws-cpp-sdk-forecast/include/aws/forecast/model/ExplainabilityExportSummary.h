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
   * <p>Provides a summary of the Explainability export properties used in the
   * <a>ListExplainabilityExports</a> operation. To get a complete set of properties,
   * call the <a>DescribeExplainabilityExport</a> operation, and provide the
   * <code>ExplainabilityExportArn</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ExplainabilityExportSummary">AWS
   * API Reference</a></p>
   */
  class ExplainabilityExportSummary
  {
  public:
    AWS_FORECASTSERVICE_API ExplainabilityExportSummary();
    AWS_FORECASTSERVICE_API ExplainabilityExportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API ExplainabilityExportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export.</p>
     */
    inline const Aws::String& GetExplainabilityExportArn() const{ return m_explainabilityExportArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export.</p>
     */
    inline bool ExplainabilityExportArnHasBeenSet() const { return m_explainabilityExportArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export.</p>
     */
    inline void SetExplainabilityExportArn(const Aws::String& value) { m_explainabilityExportArnHasBeenSet = true; m_explainabilityExportArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export.</p>
     */
    inline void SetExplainabilityExportArn(Aws::String&& value) { m_explainabilityExportArnHasBeenSet = true; m_explainabilityExportArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export.</p>
     */
    inline void SetExplainabilityExportArn(const char* value) { m_explainabilityExportArnHasBeenSet = true; m_explainabilityExportArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export.</p>
     */
    inline ExplainabilityExportSummary& WithExplainabilityExportArn(const Aws::String& value) { SetExplainabilityExportArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export.</p>
     */
    inline ExplainabilityExportSummary& WithExplainabilityExportArn(Aws::String&& value) { SetExplainabilityExportArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export.</p>
     */
    inline ExplainabilityExportSummary& WithExplainabilityExportArn(const char* value) { SetExplainabilityExportArn(value); return *this;}


    /**
     * <p>The name of the Explainability export</p>
     */
    inline const Aws::String& GetExplainabilityExportName() const{ return m_explainabilityExportName; }

    /**
     * <p>The name of the Explainability export</p>
     */
    inline bool ExplainabilityExportNameHasBeenSet() const { return m_explainabilityExportNameHasBeenSet; }

    /**
     * <p>The name of the Explainability export</p>
     */
    inline void SetExplainabilityExportName(const Aws::String& value) { m_explainabilityExportNameHasBeenSet = true; m_explainabilityExportName = value; }

    /**
     * <p>The name of the Explainability export</p>
     */
    inline void SetExplainabilityExportName(Aws::String&& value) { m_explainabilityExportNameHasBeenSet = true; m_explainabilityExportName = std::move(value); }

    /**
     * <p>The name of the Explainability export</p>
     */
    inline void SetExplainabilityExportName(const char* value) { m_explainabilityExportNameHasBeenSet = true; m_explainabilityExportName.assign(value); }

    /**
     * <p>The name of the Explainability export</p>
     */
    inline ExplainabilityExportSummary& WithExplainabilityExportName(const Aws::String& value) { SetExplainabilityExportName(value); return *this;}

    /**
     * <p>The name of the Explainability export</p>
     */
    inline ExplainabilityExportSummary& WithExplainabilityExportName(Aws::String&& value) { SetExplainabilityExportName(std::move(value)); return *this;}

    /**
     * <p>The name of the Explainability export</p>
     */
    inline ExplainabilityExportSummary& WithExplainabilityExportName(const char* value) { SetExplainabilityExportName(value); return *this;}


    
    inline const DataDestination& GetDestination() const{ return m_destination; }

    
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    
    inline void SetDestination(const DataDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    
    inline void SetDestination(DataDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    
    inline ExplainabilityExportSummary& WithDestination(const DataDestination& value) { SetDestination(value); return *this;}

    
    inline ExplainabilityExportSummary& WithDestination(DataDestination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The status of the Explainability export. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Explainability export. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Explainability export. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Explainability export. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Explainability export. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the Explainability export. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline ExplainabilityExportSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Explainability export. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline ExplainabilityExportSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the Explainability export. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline ExplainabilityExportSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * export.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * export.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * export.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * export.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * export.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * export.</p>
     */
    inline ExplainabilityExportSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * export.</p>
     */
    inline ExplainabilityExportSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * export.</p>
     */
    inline ExplainabilityExportSummary& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>When the Explainability was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the Explainability was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the Explainability was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the Explainability was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the Explainability was created.</p>
     */
    inline ExplainabilityExportSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the Explainability was created.</p>
     */
    inline ExplainabilityExportSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline ExplainabilityExportSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline ExplainabilityExportSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_explainabilityExportArn;
    bool m_explainabilityExportArnHasBeenSet = false;

    Aws::String m_explainabilityExportName;
    bool m_explainabilityExportNameHasBeenSet = false;

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

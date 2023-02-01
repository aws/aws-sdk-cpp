/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/ExplainabilityConfig.h>
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
   * <p>Provides a summary of the Explainability properties used in the
   * <a>ListExplainabilities</a> operation. To get a complete set of properties, call
   * the <a>DescribeExplainability</a> operation, and provide the listed
   * <code>ExplainabilityArn</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ExplainabilitySummary">AWS
   * API Reference</a></p>
   */
  class ExplainabilitySummary
  {
  public:
    AWS_FORECASTSERVICE_API ExplainabilitySummary();
    AWS_FORECASTSERVICE_API ExplainabilitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API ExplainabilitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline const Aws::String& GetExplainabilityArn() const{ return m_explainabilityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline bool ExplainabilityArnHasBeenSet() const { return m_explainabilityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline void SetExplainabilityArn(const Aws::String& value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline void SetExplainabilityArn(Aws::String&& value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline void SetExplainabilityArn(const char* value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline ExplainabilitySummary& WithExplainabilityArn(const Aws::String& value) { SetExplainabilityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline ExplainabilitySummary& WithExplainabilityArn(Aws::String&& value) { SetExplainabilityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline ExplainabilitySummary& WithExplainabilityArn(const char* value) { SetExplainabilityArn(value); return *this;}


    /**
     * <p>The name of the Explainability.</p>
     */
    inline const Aws::String& GetExplainabilityName() const{ return m_explainabilityName; }

    /**
     * <p>The name of the Explainability.</p>
     */
    inline bool ExplainabilityNameHasBeenSet() const { return m_explainabilityNameHasBeenSet; }

    /**
     * <p>The name of the Explainability.</p>
     */
    inline void SetExplainabilityName(const Aws::String& value) { m_explainabilityNameHasBeenSet = true; m_explainabilityName = value; }

    /**
     * <p>The name of the Explainability.</p>
     */
    inline void SetExplainabilityName(Aws::String&& value) { m_explainabilityNameHasBeenSet = true; m_explainabilityName = std::move(value); }

    /**
     * <p>The name of the Explainability.</p>
     */
    inline void SetExplainabilityName(const char* value) { m_explainabilityNameHasBeenSet = true; m_explainabilityName.assign(value); }

    /**
     * <p>The name of the Explainability.</p>
     */
    inline ExplainabilitySummary& WithExplainabilityName(const Aws::String& value) { SetExplainabilityName(value); return *this;}

    /**
     * <p>The name of the Explainability.</p>
     */
    inline ExplainabilitySummary& WithExplainabilityName(Aws::String&& value) { SetExplainabilityName(std::move(value)); return *this;}

    /**
     * <p>The name of the Explainability.</p>
     */
    inline ExplainabilitySummary& WithExplainabilityName(const char* value) { SetExplainabilityName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline ExplainabilitySummary& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline ExplainabilitySummary& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline ExplainabilitySummary& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline const ExplainabilityConfig& GetExplainabilityConfig() const{ return m_explainabilityConfig; }

    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline bool ExplainabilityConfigHasBeenSet() const { return m_explainabilityConfigHasBeenSet; }

    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline void SetExplainabilityConfig(const ExplainabilityConfig& value) { m_explainabilityConfigHasBeenSet = true; m_explainabilityConfig = value; }

    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline void SetExplainabilityConfig(ExplainabilityConfig&& value) { m_explainabilityConfigHasBeenSet = true; m_explainabilityConfig = std::move(value); }

    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline ExplainabilitySummary& WithExplainabilityConfig(const ExplainabilityConfig& value) { SetExplainabilityConfig(value); return *this;}

    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline ExplainabilitySummary& WithExplainabilityConfig(ExplainabilityConfig&& value) { SetExplainabilityConfig(std::move(value)); return *this;}


    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline ExplainabilitySummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline ExplainabilitySummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline ExplainabilitySummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * creation process.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * creation process.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * creation process.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * creation process.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * creation process.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * creation process.</p>
     */
    inline ExplainabilitySummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * creation process.</p>
     */
    inline ExplainabilitySummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Information about any errors that may have occurred during the Explainability
     * creation process.</p>
     */
    inline ExplainabilitySummary& WithMessage(const char* value) { SetMessage(value); return *this;}


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
    inline ExplainabilitySummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the Explainability was created.</p>
     */
    inline ExplainabilitySummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline ExplainabilitySummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline ExplainabilitySummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_explainabilityArn;
    bool m_explainabilityArnHasBeenSet = false;

    Aws::String m_explainabilityName;
    bool m_explainabilityNameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ExplainabilityConfig m_explainabilityConfig;
    bool m_explainabilityConfigHasBeenSet = false;

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

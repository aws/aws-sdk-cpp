﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/ReferencePredictorSummary.h>
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
   * <p>Provides a summary of the predictor properties that are used in the
   * <a>ListPredictors</a> operation. To get the complete set of properties, call the
   * <a>DescribePredictor</a> operation, and provide the listed
   * <code>PredictorArn</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/PredictorSummary">AWS
   * API Reference</a></p>
   */
  class PredictorSummary
  {
  public:
    AWS_FORECASTSERVICE_API PredictorSummary();
    AWS_FORECASTSERVICE_API PredictorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API PredictorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the predictor.</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }
    inline bool PredictorArnHasBeenSet() const { return m_predictorArnHasBeenSet; }
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArnHasBeenSet = true; m_predictorArn = value; }
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArnHasBeenSet = true; m_predictorArn = std::move(value); }
    inline void SetPredictorArn(const char* value) { m_predictorArnHasBeenSet = true; m_predictorArn.assign(value); }
    inline PredictorSummary& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}
    inline PredictorSummary& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}
    inline PredictorSummary& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the predictor.</p>
     */
    inline const Aws::String& GetPredictorName() const{ return m_predictorName; }
    inline bool PredictorNameHasBeenSet() const { return m_predictorNameHasBeenSet; }
    inline void SetPredictorName(const Aws::String& value) { m_predictorNameHasBeenSet = true; m_predictorName = value; }
    inline void SetPredictorName(Aws::String&& value) { m_predictorNameHasBeenSet = true; m_predictorName = std::move(value); }
    inline void SetPredictorName(const char* value) { m_predictorNameHasBeenSet = true; m_predictorName.assign(value); }
    inline PredictorSummary& WithPredictorName(const Aws::String& value) { SetPredictorName(value); return *this;}
    inline PredictorSummary& WithPredictorName(Aws::String&& value) { SetPredictorName(std::move(value)); return *this;}
    inline PredictorSummary& WithPredictorName(const char* value) { SetPredictorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that contains the data
     * used to train the predictor.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }
    inline PredictorSummary& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}
    inline PredictorSummary& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}
    inline PredictorSummary& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether AutoPredictor was used to create the predictor.</p>
     */
    inline bool GetIsAutoPredictor() const{ return m_isAutoPredictor; }
    inline bool IsAutoPredictorHasBeenSet() const { return m_isAutoPredictorHasBeenSet; }
    inline void SetIsAutoPredictor(bool value) { m_isAutoPredictorHasBeenSet = true; m_isAutoPredictor = value; }
    inline PredictorSummary& WithIsAutoPredictor(bool value) { SetIsAutoPredictor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the reference predictor used if the predictor was retrained or
     * upgraded.</p>
     */
    inline const ReferencePredictorSummary& GetReferencePredictorSummary() const{ return m_referencePredictorSummary; }
    inline bool ReferencePredictorSummaryHasBeenSet() const { return m_referencePredictorSummaryHasBeenSet; }
    inline void SetReferencePredictorSummary(const ReferencePredictorSummary& value) { m_referencePredictorSummaryHasBeenSet = true; m_referencePredictorSummary = value; }
    inline void SetReferencePredictorSummary(ReferencePredictorSummary&& value) { m_referencePredictorSummaryHasBeenSet = true; m_referencePredictorSummary = std::move(value); }
    inline PredictorSummary& WithReferencePredictorSummary(const ReferencePredictorSummary& value) { SetReferencePredictorSummary(value); return *this;}
    inline PredictorSummary& WithReferencePredictorSummary(ReferencePredictorSummary&& value) { SetReferencePredictorSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the predictor. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>CREATE_STOPPING</code>,
     * <code>CREATE_STOPPED</code> </p> </li> </ul>  <p>The <code>Status</code>
     * of the predictor must be <code>ACTIVE</code> before you can use the predictor to
     * create a forecast.</p> 
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline PredictorSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline PredictorSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline PredictorSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
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
    inline PredictorSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline PredictorSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline PredictorSummary& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the model training task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline PredictorSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline PredictorSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
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
    inline PredictorSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline PredictorSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_predictorArn;
    bool m_predictorArnHasBeenSet = false;

    Aws::String m_predictorName;
    bool m_predictorNameHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    bool m_isAutoPredictor;
    bool m_isAutoPredictorHasBeenSet = false;

    ReferencePredictorSummary m_referencePredictorSummary;
    bool m_referencePredictorSummaryHasBeenSet = false;

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

/**
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
    AWS_FORECASTSERVICE_API PredictorSummary() = default;
    AWS_FORECASTSERVICE_API PredictorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API PredictorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the predictor.</p>
     */
    inline const Aws::String& GetPredictorArn() const { return m_predictorArn; }
    inline bool PredictorArnHasBeenSet() const { return m_predictorArnHasBeenSet; }
    template<typename PredictorArnT = Aws::String>
    void SetPredictorArn(PredictorArnT&& value) { m_predictorArnHasBeenSet = true; m_predictorArn = std::forward<PredictorArnT>(value); }
    template<typename PredictorArnT = Aws::String>
    PredictorSummary& WithPredictorArn(PredictorArnT&& value) { SetPredictorArn(std::forward<PredictorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the predictor.</p>
     */
    inline const Aws::String& GetPredictorName() const { return m_predictorName; }
    inline bool PredictorNameHasBeenSet() const { return m_predictorNameHasBeenSet; }
    template<typename PredictorNameT = Aws::String>
    void SetPredictorName(PredictorNameT&& value) { m_predictorNameHasBeenSet = true; m_predictorName = std::forward<PredictorNameT>(value); }
    template<typename PredictorNameT = Aws::String>
    PredictorSummary& WithPredictorName(PredictorNameT&& value) { SetPredictorName(std::forward<PredictorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that contains the data
     * used to train the predictor.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const { return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    template<typename DatasetGroupArnT = Aws::String>
    void SetDatasetGroupArn(DatasetGroupArnT&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::forward<DatasetGroupArnT>(value); }
    template<typename DatasetGroupArnT = Aws::String>
    PredictorSummary& WithDatasetGroupArn(DatasetGroupArnT&& value) { SetDatasetGroupArn(std::forward<DatasetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether AutoPredictor was used to create the predictor.</p>
     */
    inline bool GetIsAutoPredictor() const { return m_isAutoPredictor; }
    inline bool IsAutoPredictorHasBeenSet() const { return m_isAutoPredictorHasBeenSet; }
    inline void SetIsAutoPredictor(bool value) { m_isAutoPredictorHasBeenSet = true; m_isAutoPredictor = value; }
    inline PredictorSummary& WithIsAutoPredictor(bool value) { SetIsAutoPredictor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the reference predictor used if the predictor was retrained or
     * upgraded.</p>
     */
    inline const ReferencePredictorSummary& GetReferencePredictorSummary() const { return m_referencePredictorSummary; }
    inline bool ReferencePredictorSummaryHasBeenSet() const { return m_referencePredictorSummaryHasBeenSet; }
    template<typename ReferencePredictorSummaryT = ReferencePredictorSummary>
    void SetReferencePredictorSummary(ReferencePredictorSummaryT&& value) { m_referencePredictorSummaryHasBeenSet = true; m_referencePredictorSummary = std::forward<ReferencePredictorSummaryT>(value); }
    template<typename ReferencePredictorSummaryT = ReferencePredictorSummary>
    PredictorSummary& WithReferencePredictorSummary(ReferencePredictorSummaryT&& value) { SetReferencePredictorSummary(std::forward<ReferencePredictorSummaryT>(value)); return *this;}
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
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    PredictorSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    PredictorSummary& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the model training task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    PredictorSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    PredictorSummary& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_predictorArn;
    bool m_predictorArnHasBeenSet = false;

    Aws::String m_predictorName;
    bool m_predictorNameHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    bool m_isAutoPredictor{false};
    bool m_isAutoPredictorHasBeenSet = false;

    ReferencePredictorSummary m_referencePredictorSummary;
    bool m_referencePredictorSummaryHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/DataConfig.h>
#include <aws/forecast/model/EncryptionConfig.h>
#include <aws/forecast/model/ReferencePredictorSummary.h>
#include <aws/core/utils/DateTime.h>
#include <aws/forecast/model/OptimizationMetric.h>
#include <aws/forecast/model/ExplainabilityInfo.h>
#include <aws/forecast/model/MonitorInfo.h>
#include <aws/forecast/model/TimeAlignmentBoundary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ForecastService
{
namespace Model
{
  class DescribeAutoPredictorResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribeAutoPredictorResult();
    AWS_FORECASTSERVICE_API DescribeAutoPredictorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeAutoPredictorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the predictor</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor</p>
     */
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor</p>
     */
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor</p>
     */
    inline void SetPredictorArn(const char* value) { m_predictorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor</p>
     */
    inline DescribeAutoPredictorResult& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor</p>
     */
    inline DescribeAutoPredictorResult& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor</p>
     */
    inline DescribeAutoPredictorResult& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}


    /**
     * <p>The name of the predictor.</p>
     */
    inline const Aws::String& GetPredictorName() const{ return m_predictorName; }

    /**
     * <p>The name of the predictor.</p>
     */
    inline void SetPredictorName(const Aws::String& value) { m_predictorName = value; }

    /**
     * <p>The name of the predictor.</p>
     */
    inline void SetPredictorName(Aws::String&& value) { m_predictorName = std::move(value); }

    /**
     * <p>The name of the predictor.</p>
     */
    inline void SetPredictorName(const char* value) { m_predictorName.assign(value); }

    /**
     * <p>The name of the predictor.</p>
     */
    inline DescribeAutoPredictorResult& WithPredictorName(const Aws::String& value) { SetPredictorName(value); return *this;}

    /**
     * <p>The name of the predictor.</p>
     */
    inline DescribeAutoPredictorResult& WithPredictorName(Aws::String&& value) { SetPredictorName(std::move(value)); return *this;}

    /**
     * <p>The name of the predictor.</p>
     */
    inline DescribeAutoPredictorResult& WithPredictorName(const char* value) { SetPredictorName(value); return *this;}


    /**
     * <p>The number of time-steps that the model predicts. The forecast horizon is
     * also called the prediction length.</p>
     */
    inline int GetForecastHorizon() const{ return m_forecastHorizon; }

    /**
     * <p>The number of time-steps that the model predicts. The forecast horizon is
     * also called the prediction length.</p>
     */
    inline void SetForecastHorizon(int value) { m_forecastHorizon = value; }

    /**
     * <p>The number of time-steps that the model predicts. The forecast horizon is
     * also called the prediction length.</p>
     */
    inline DescribeAutoPredictorResult& WithForecastHorizon(int value) { SetForecastHorizon(value); return *this;}


    /**
     * <p>The forecast types used during predictor training. Default value is
     * ["0.1","0.5","0.9"].</p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastTypes() const{ return m_forecastTypes; }

    /**
     * <p>The forecast types used during predictor training. Default value is
     * ["0.1","0.5","0.9"].</p>
     */
    inline void SetForecastTypes(const Aws::Vector<Aws::String>& value) { m_forecastTypes = value; }

    /**
     * <p>The forecast types used during predictor training. Default value is
     * ["0.1","0.5","0.9"].</p>
     */
    inline void SetForecastTypes(Aws::Vector<Aws::String>&& value) { m_forecastTypes = std::move(value); }

    /**
     * <p>The forecast types used during predictor training. Default value is
     * ["0.1","0.5","0.9"].</p>
     */
    inline DescribeAutoPredictorResult& WithForecastTypes(const Aws::Vector<Aws::String>& value) { SetForecastTypes(value); return *this;}

    /**
     * <p>The forecast types used during predictor training. Default value is
     * ["0.1","0.5","0.9"].</p>
     */
    inline DescribeAutoPredictorResult& WithForecastTypes(Aws::Vector<Aws::String>&& value) { SetForecastTypes(std::move(value)); return *this;}

    /**
     * <p>The forecast types used during predictor training. Default value is
     * ["0.1","0.5","0.9"].</p>
     */
    inline DescribeAutoPredictorResult& AddForecastTypes(const Aws::String& value) { m_forecastTypes.push_back(value); return *this; }

    /**
     * <p>The forecast types used during predictor training. Default value is
     * ["0.1","0.5","0.9"].</p>
     */
    inline DescribeAutoPredictorResult& AddForecastTypes(Aws::String&& value) { m_forecastTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The forecast types used during predictor training. Default value is
     * ["0.1","0.5","0.9"].</p>
     */
    inline DescribeAutoPredictorResult& AddForecastTypes(const char* value) { m_forecastTypes.push_back(value); return *this; }


    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     */
    inline const Aws::String& GetForecastFrequency() const{ return m_forecastFrequency; }

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     */
    inline void SetForecastFrequency(const Aws::String& value) { m_forecastFrequency = value; }

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     */
    inline void SetForecastFrequency(Aws::String&& value) { m_forecastFrequency = std::move(value); }

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     */
    inline void SetForecastFrequency(const char* value) { m_forecastFrequency.assign(value); }

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     */
    inline DescribeAutoPredictorResult& WithForecastFrequency(const Aws::String& value) { SetForecastFrequency(value); return *this;}

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     */
    inline DescribeAutoPredictorResult& WithForecastFrequency(Aws::String&& value) { SetForecastFrequency(std::move(value)); return *this;}

    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are Y
     * (Year), M (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15
     * minutes), 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For
     * example, "Y" indicates every year and "5min" indicates every five minutes.</p>
     */
    inline DescribeAutoPredictorResult& WithForecastFrequency(const char* value) { SetForecastFrequency(value); return *this;}


    /**
     * <p>An array of dimension (field) names that specify the attributes used to group
     * your time series.</p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastDimensions() const{ return m_forecastDimensions; }

    /**
     * <p>An array of dimension (field) names that specify the attributes used to group
     * your time series.</p>
     */
    inline void SetForecastDimensions(const Aws::Vector<Aws::String>& value) { m_forecastDimensions = value; }

    /**
     * <p>An array of dimension (field) names that specify the attributes used to group
     * your time series.</p>
     */
    inline void SetForecastDimensions(Aws::Vector<Aws::String>&& value) { m_forecastDimensions = std::move(value); }

    /**
     * <p>An array of dimension (field) names that specify the attributes used to group
     * your time series.</p>
     */
    inline DescribeAutoPredictorResult& WithForecastDimensions(const Aws::Vector<Aws::String>& value) { SetForecastDimensions(value); return *this;}

    /**
     * <p>An array of dimension (field) names that specify the attributes used to group
     * your time series.</p>
     */
    inline DescribeAutoPredictorResult& WithForecastDimensions(Aws::Vector<Aws::String>&& value) { SetForecastDimensions(std::move(value)); return *this;}

    /**
     * <p>An array of dimension (field) names that specify the attributes used to group
     * your time series.</p>
     */
    inline DescribeAutoPredictorResult& AddForecastDimensions(const Aws::String& value) { m_forecastDimensions.push_back(value); return *this; }

    /**
     * <p>An array of dimension (field) names that specify the attributes used to group
     * your time series.</p>
     */
    inline DescribeAutoPredictorResult& AddForecastDimensions(Aws::String&& value) { m_forecastDimensions.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of dimension (field) names that specify the attributes used to group
     * your time series.</p>
     */
    inline DescribeAutoPredictorResult& AddForecastDimensions(const char* value) { m_forecastDimensions.push_back(value); return *this; }


    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatasetImportJobArns() const{ return m_datasetImportJobArns; }

    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline void SetDatasetImportJobArns(const Aws::Vector<Aws::String>& value) { m_datasetImportJobArns = value; }

    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline void SetDatasetImportJobArns(Aws::Vector<Aws::String>&& value) { m_datasetImportJobArns = std::move(value); }

    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline DescribeAutoPredictorResult& WithDatasetImportJobArns(const Aws::Vector<Aws::String>& value) { SetDatasetImportJobArns(value); return *this;}

    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline DescribeAutoPredictorResult& WithDatasetImportJobArns(Aws::Vector<Aws::String>&& value) { SetDatasetImportJobArns(std::move(value)); return *this;}

    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline DescribeAutoPredictorResult& AddDatasetImportJobArns(const Aws::String& value) { m_datasetImportJobArns.push_back(value); return *this; }

    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline DescribeAutoPredictorResult& AddDatasetImportJobArns(Aws::String&& value) { m_datasetImportJobArns.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of the ARNs of the dataset import jobs used to import training data
     * for the predictor.</p>
     */
    inline DescribeAutoPredictorResult& AddDatasetImportJobArns(const char* value) { m_datasetImportJobArns.push_back(value); return *this; }


    /**
     * <p>The data configuration for your dataset group and any additional
     * datasets.</p>
     */
    inline const DataConfig& GetDataConfig() const{ return m_dataConfig; }

    /**
     * <p>The data configuration for your dataset group and any additional
     * datasets.</p>
     */
    inline void SetDataConfig(const DataConfig& value) { m_dataConfig = value; }

    /**
     * <p>The data configuration for your dataset group and any additional
     * datasets.</p>
     */
    inline void SetDataConfig(DataConfig&& value) { m_dataConfig = std::move(value); }

    /**
     * <p>The data configuration for your dataset group and any additional
     * datasets.</p>
     */
    inline DescribeAutoPredictorResult& WithDataConfig(const DataConfig& value) { SetDataConfig(value); return *this;}

    /**
     * <p>The data configuration for your dataset group and any additional
     * datasets.</p>
     */
    inline DescribeAutoPredictorResult& WithDataConfig(DataConfig&& value) { SetDataConfig(std::move(value)); return *this;}


    
    inline const EncryptionConfig& GetEncryptionConfig() const{ return m_encryptionConfig; }

    
    inline void SetEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfig = value; }

    
    inline void SetEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfig = std::move(value); }

    
    inline DescribeAutoPredictorResult& WithEncryptionConfig(const EncryptionConfig& value) { SetEncryptionConfig(value); return *this;}

    
    inline DescribeAutoPredictorResult& WithEncryptionConfig(EncryptionConfig&& value) { SetEncryptionConfig(std::move(value)); return *this;}


    /**
     * <p>The ARN and state of the reference predictor. This parameter is only valid
     * for retrained or upgraded predictors.</p>
     */
    inline const ReferencePredictorSummary& GetReferencePredictorSummary() const{ return m_referencePredictorSummary; }

    /**
     * <p>The ARN and state of the reference predictor. This parameter is only valid
     * for retrained or upgraded predictors.</p>
     */
    inline void SetReferencePredictorSummary(const ReferencePredictorSummary& value) { m_referencePredictorSummary = value; }

    /**
     * <p>The ARN and state of the reference predictor. This parameter is only valid
     * for retrained or upgraded predictors.</p>
     */
    inline void SetReferencePredictorSummary(ReferencePredictorSummary&& value) { m_referencePredictorSummary = std::move(value); }

    /**
     * <p>The ARN and state of the reference predictor. This parameter is only valid
     * for retrained or upgraded predictors.</p>
     */
    inline DescribeAutoPredictorResult& WithReferencePredictorSummary(const ReferencePredictorSummary& value) { SetReferencePredictorSummary(value); return *this;}

    /**
     * <p>The ARN and state of the reference predictor. This parameter is only valid
     * for retrained or upgraded predictors.</p>
     */
    inline DescribeAutoPredictorResult& WithReferencePredictorSummary(ReferencePredictorSummary&& value) { SetReferencePredictorSummary(std::move(value)); return *this;}


    /**
     * <p>The estimated time remaining in minutes for the predictor training job to
     * complete.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const{ return m_estimatedTimeRemainingInMinutes; }

    /**
     * <p>The estimated time remaining in minutes for the predictor training job to
     * complete.</p>
     */
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutes = value; }

    /**
     * <p>The estimated time remaining in minutes for the predictor training job to
     * complete.</p>
     */
    inline DescribeAutoPredictorResult& WithEstimatedTimeRemainingInMinutes(long long value) { SetEstimatedTimeRemainingInMinutes(value); return *this;}


    /**
     * <p>The status of the predictor. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the predictor. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the predictor. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the predictor. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the predictor. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline DescribeAutoPredictorResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the predictor. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline DescribeAutoPredictorResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the predictor. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline DescribeAutoPredictorResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>In the event of an error, a message detailing the cause of the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>In the event of an error, a message detailing the cause of the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>In the event of an error, a message detailing the cause of the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>In the event of an error, a message detailing the cause of the error.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>In the event of an error, a message detailing the cause of the error.</p>
     */
    inline DescribeAutoPredictorResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>In the event of an error, a message detailing the cause of the error.</p>
     */
    inline DescribeAutoPredictorResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>In the event of an error, a message detailing the cause of the error.</p>
     */
    inline DescribeAutoPredictorResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The timestamp of the CreateAutoPredictor request.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp of the CreateAutoPredictor request.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The timestamp of the CreateAutoPredictor request.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The timestamp of the CreateAutoPredictor request.</p>
     */
    inline DescribeAutoPredictorResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp of the CreateAutoPredictor request.</p>
     */
    inline DescribeAutoPredictorResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline DescribeAutoPredictorResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline DescribeAutoPredictorResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}


    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline const OptimizationMetric& GetOptimizationMetric() const{ return m_optimizationMetric; }

    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline void SetOptimizationMetric(const OptimizationMetric& value) { m_optimizationMetric = value; }

    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline void SetOptimizationMetric(OptimizationMetric&& value) { m_optimizationMetric = std::move(value); }

    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline DescribeAutoPredictorResult& WithOptimizationMetric(const OptimizationMetric& value) { SetOptimizationMetric(value); return *this;}

    /**
     * <p>The accuracy metric used to optimize the predictor.</p>
     */
    inline DescribeAutoPredictorResult& WithOptimizationMetric(OptimizationMetric&& value) { SetOptimizationMetric(std::move(value)); return *this;}


    /**
     * <p>Provides the status and ARN of the Predictor Explainability.</p>
     */
    inline const ExplainabilityInfo& GetExplainabilityInfo() const{ return m_explainabilityInfo; }

    /**
     * <p>Provides the status and ARN of the Predictor Explainability.</p>
     */
    inline void SetExplainabilityInfo(const ExplainabilityInfo& value) { m_explainabilityInfo = value; }

    /**
     * <p>Provides the status and ARN of the Predictor Explainability.</p>
     */
    inline void SetExplainabilityInfo(ExplainabilityInfo&& value) { m_explainabilityInfo = std::move(value); }

    /**
     * <p>Provides the status and ARN of the Predictor Explainability.</p>
     */
    inline DescribeAutoPredictorResult& WithExplainabilityInfo(const ExplainabilityInfo& value) { SetExplainabilityInfo(value); return *this;}

    /**
     * <p>Provides the status and ARN of the Predictor Explainability.</p>
     */
    inline DescribeAutoPredictorResult& WithExplainabilityInfo(ExplainabilityInfo&& value) { SetExplainabilityInfo(std::move(value)); return *this;}


    /**
     * <p>A object with the Amazon Resource Name (ARN) and status of the monitor
     * resource.</p>
     */
    inline const MonitorInfo& GetMonitorInfo() const{ return m_monitorInfo; }

    /**
     * <p>A object with the Amazon Resource Name (ARN) and status of the monitor
     * resource.</p>
     */
    inline void SetMonitorInfo(const MonitorInfo& value) { m_monitorInfo = value; }

    /**
     * <p>A object with the Amazon Resource Name (ARN) and status of the monitor
     * resource.</p>
     */
    inline void SetMonitorInfo(MonitorInfo&& value) { m_monitorInfo = std::move(value); }

    /**
     * <p>A object with the Amazon Resource Name (ARN) and status of the monitor
     * resource.</p>
     */
    inline DescribeAutoPredictorResult& WithMonitorInfo(const MonitorInfo& value) { SetMonitorInfo(value); return *this;}

    /**
     * <p>A object with the Amazon Resource Name (ARN) and status of the monitor
     * resource.</p>
     */
    inline DescribeAutoPredictorResult& WithMonitorInfo(MonitorInfo&& value) { SetMonitorInfo(std::move(value)); return *this;}


    /**
     * <p>The time boundary Forecast uses when aggregating data.</p>
     */
    inline const TimeAlignmentBoundary& GetTimeAlignmentBoundary() const{ return m_timeAlignmentBoundary; }

    /**
     * <p>The time boundary Forecast uses when aggregating data.</p>
     */
    inline void SetTimeAlignmentBoundary(const TimeAlignmentBoundary& value) { m_timeAlignmentBoundary = value; }

    /**
     * <p>The time boundary Forecast uses when aggregating data.</p>
     */
    inline void SetTimeAlignmentBoundary(TimeAlignmentBoundary&& value) { m_timeAlignmentBoundary = std::move(value); }

    /**
     * <p>The time boundary Forecast uses when aggregating data.</p>
     */
    inline DescribeAutoPredictorResult& WithTimeAlignmentBoundary(const TimeAlignmentBoundary& value) { SetTimeAlignmentBoundary(value); return *this;}

    /**
     * <p>The time boundary Forecast uses when aggregating data.</p>
     */
    inline DescribeAutoPredictorResult& WithTimeAlignmentBoundary(TimeAlignmentBoundary&& value) { SetTimeAlignmentBoundary(std::move(value)); return *this;}

  private:

    Aws::String m_predictorArn;

    Aws::String m_predictorName;

    int m_forecastHorizon;

    Aws::Vector<Aws::String> m_forecastTypes;

    Aws::String m_forecastFrequency;

    Aws::Vector<Aws::String> m_forecastDimensions;

    Aws::Vector<Aws::String> m_datasetImportJobArns;

    DataConfig m_dataConfig;

    EncryptionConfig m_encryptionConfig;

    ReferencePredictorSummary m_referencePredictorSummary;

    long long m_estimatedTimeRemainingInMinutes;

    Aws::String m_status;

    Aws::String m_message;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;

    OptimizationMetric m_optimizationMetric;

    ExplainabilityInfo m_explainabilityInfo;

    MonitorInfo m_monitorInfo;

    TimeAlignmentBoundary m_timeAlignmentBoundary;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws

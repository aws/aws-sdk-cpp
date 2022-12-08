/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/Model.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/TransformJob.h>
#include <aws/sagemaker/model/ModelDashboardModelCard.h>
#include <aws/sagemaker/model/ModelDashboardEndpoint.h>
#include <aws/sagemaker/model/ModelDashboardMonitoringSchedule.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A model displayed in the Amazon SageMaker Model Dashboard.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelDashboardModel">AWS
   * API Reference</a></p>
   */
  class ModelDashboardModel
  {
  public:
    AWS_SAGEMAKER_API ModelDashboardModel();
    AWS_SAGEMAKER_API ModelDashboardModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelDashboardModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A model displayed in the Model Dashboard.</p>
     */
    inline const Model& GetModel() const{ return m_model; }

    /**
     * <p>A model displayed in the Model Dashboard.</p>
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * <p>A model displayed in the Model Dashboard.</p>
     */
    inline void SetModel(const Model& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>A model displayed in the Model Dashboard.</p>
     */
    inline void SetModel(Model&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * <p>A model displayed in the Model Dashboard.</p>
     */
    inline ModelDashboardModel& WithModel(const Model& value) { SetModel(value); return *this;}

    /**
     * <p>A model displayed in the Model Dashboard.</p>
     */
    inline ModelDashboardModel& WithModel(Model&& value) { SetModel(std::move(value)); return *this;}


    /**
     * <p>The endpoints that host a model.</p>
     */
    inline const Aws::Vector<ModelDashboardEndpoint>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>The endpoints that host a model.</p>
     */
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    /**
     * <p>The endpoints that host a model.</p>
     */
    inline void SetEndpoints(const Aws::Vector<ModelDashboardEndpoint>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * <p>The endpoints that host a model.</p>
     */
    inline void SetEndpoints(Aws::Vector<ModelDashboardEndpoint>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * <p>The endpoints that host a model.</p>
     */
    inline ModelDashboardModel& WithEndpoints(const Aws::Vector<ModelDashboardEndpoint>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>The endpoints that host a model.</p>
     */
    inline ModelDashboardModel& WithEndpoints(Aws::Vector<ModelDashboardEndpoint>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>The endpoints that host a model.</p>
     */
    inline ModelDashboardModel& AddEndpoints(const ModelDashboardEndpoint& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }

    /**
     * <p>The endpoints that host a model.</p>
     */
    inline ModelDashboardModel& AddEndpoints(ModelDashboardEndpoint&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }


    
    inline const TransformJob& GetLastBatchTransformJob() const{ return m_lastBatchTransformJob; }

    
    inline bool LastBatchTransformJobHasBeenSet() const { return m_lastBatchTransformJobHasBeenSet; }

    
    inline void SetLastBatchTransformJob(const TransformJob& value) { m_lastBatchTransformJobHasBeenSet = true; m_lastBatchTransformJob = value; }

    
    inline void SetLastBatchTransformJob(TransformJob&& value) { m_lastBatchTransformJobHasBeenSet = true; m_lastBatchTransformJob = std::move(value); }

    
    inline ModelDashboardModel& WithLastBatchTransformJob(const TransformJob& value) { SetLastBatchTransformJob(value); return *this;}

    
    inline ModelDashboardModel& WithLastBatchTransformJob(TransformJob&& value) { SetLastBatchTransformJob(std::move(value)); return *this;}


    /**
     * <p>The monitoring schedules for a model.</p>
     */
    inline const Aws::Vector<ModelDashboardMonitoringSchedule>& GetMonitoringSchedules() const{ return m_monitoringSchedules; }

    /**
     * <p>The monitoring schedules for a model.</p>
     */
    inline bool MonitoringSchedulesHasBeenSet() const { return m_monitoringSchedulesHasBeenSet; }

    /**
     * <p>The monitoring schedules for a model.</p>
     */
    inline void SetMonitoringSchedules(const Aws::Vector<ModelDashboardMonitoringSchedule>& value) { m_monitoringSchedulesHasBeenSet = true; m_monitoringSchedules = value; }

    /**
     * <p>The monitoring schedules for a model.</p>
     */
    inline void SetMonitoringSchedules(Aws::Vector<ModelDashboardMonitoringSchedule>&& value) { m_monitoringSchedulesHasBeenSet = true; m_monitoringSchedules = std::move(value); }

    /**
     * <p>The monitoring schedules for a model.</p>
     */
    inline ModelDashboardModel& WithMonitoringSchedules(const Aws::Vector<ModelDashboardMonitoringSchedule>& value) { SetMonitoringSchedules(value); return *this;}

    /**
     * <p>The monitoring schedules for a model.</p>
     */
    inline ModelDashboardModel& WithMonitoringSchedules(Aws::Vector<ModelDashboardMonitoringSchedule>&& value) { SetMonitoringSchedules(std::move(value)); return *this;}

    /**
     * <p>The monitoring schedules for a model.</p>
     */
    inline ModelDashboardModel& AddMonitoringSchedules(const ModelDashboardMonitoringSchedule& value) { m_monitoringSchedulesHasBeenSet = true; m_monitoringSchedules.push_back(value); return *this; }

    /**
     * <p>The monitoring schedules for a model.</p>
     */
    inline ModelDashboardModel& AddMonitoringSchedules(ModelDashboardMonitoringSchedule&& value) { m_monitoringSchedulesHasBeenSet = true; m_monitoringSchedules.push_back(std::move(value)); return *this; }


    /**
     * <p>The model card for a model.</p>
     */
    inline const ModelDashboardModelCard& GetModelCard() const{ return m_modelCard; }

    /**
     * <p>The model card for a model.</p>
     */
    inline bool ModelCardHasBeenSet() const { return m_modelCardHasBeenSet; }

    /**
     * <p>The model card for a model.</p>
     */
    inline void SetModelCard(const ModelDashboardModelCard& value) { m_modelCardHasBeenSet = true; m_modelCard = value; }

    /**
     * <p>The model card for a model.</p>
     */
    inline void SetModelCard(ModelDashboardModelCard&& value) { m_modelCardHasBeenSet = true; m_modelCard = std::move(value); }

    /**
     * <p>The model card for a model.</p>
     */
    inline ModelDashboardModel& WithModelCard(const ModelDashboardModelCard& value) { SetModelCard(value); return *this;}

    /**
     * <p>The model card for a model.</p>
     */
    inline ModelDashboardModel& WithModelCard(ModelDashboardModelCard&& value) { SetModelCard(std::move(value)); return *this;}

  private:

    Model m_model;
    bool m_modelHasBeenSet = false;

    Aws::Vector<ModelDashboardEndpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    TransformJob m_lastBatchTransformJob;
    bool m_lastBatchTransformJobHasBeenSet = false;

    Aws::Vector<ModelDashboardMonitoringSchedule> m_monitoringSchedules;
    bool m_monitoringSchedulesHasBeenSet = false;

    ModelDashboardModelCard m_modelCard;
    bool m_modelCardHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

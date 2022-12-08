/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringConstraintsResource.h>
#include <aws/sagemaker/model/MonitoringStatisticsResource.h>
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
   * <p>Configuration for monitoring constraints and monitoring statistics. These
   * baseline resources are compared against the results of the current job from the
   * series of jobs scheduled to collect data periodically.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DataQualityBaselineConfig">AWS
   * API Reference</a></p>
   */
  class DataQualityBaselineConfig
  {
  public:
    AWS_SAGEMAKER_API DataQualityBaselineConfig();
    AWS_SAGEMAKER_API DataQualityBaselineConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DataQualityBaselineConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the job that performs baselining for the data quality monitoring
     * job.</p>
     */
    inline const Aws::String& GetBaseliningJobName() const{ return m_baseliningJobName; }

    /**
     * <p>The name of the job that performs baselining for the data quality monitoring
     * job.</p>
     */
    inline bool BaseliningJobNameHasBeenSet() const { return m_baseliningJobNameHasBeenSet; }

    /**
     * <p>The name of the job that performs baselining for the data quality monitoring
     * job.</p>
     */
    inline void SetBaseliningJobName(const Aws::String& value) { m_baseliningJobNameHasBeenSet = true; m_baseliningJobName = value; }

    /**
     * <p>The name of the job that performs baselining for the data quality monitoring
     * job.</p>
     */
    inline void SetBaseliningJobName(Aws::String&& value) { m_baseliningJobNameHasBeenSet = true; m_baseliningJobName = std::move(value); }

    /**
     * <p>The name of the job that performs baselining for the data quality monitoring
     * job.</p>
     */
    inline void SetBaseliningJobName(const char* value) { m_baseliningJobNameHasBeenSet = true; m_baseliningJobName.assign(value); }

    /**
     * <p>The name of the job that performs baselining for the data quality monitoring
     * job.</p>
     */
    inline DataQualityBaselineConfig& WithBaseliningJobName(const Aws::String& value) { SetBaseliningJobName(value); return *this;}

    /**
     * <p>The name of the job that performs baselining for the data quality monitoring
     * job.</p>
     */
    inline DataQualityBaselineConfig& WithBaseliningJobName(Aws::String&& value) { SetBaseliningJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job that performs baselining for the data quality monitoring
     * job.</p>
     */
    inline DataQualityBaselineConfig& WithBaseliningJobName(const char* value) { SetBaseliningJobName(value); return *this;}


    
    inline const MonitoringConstraintsResource& GetConstraintsResource() const{ return m_constraintsResource; }

    
    inline bool ConstraintsResourceHasBeenSet() const { return m_constraintsResourceHasBeenSet; }

    
    inline void SetConstraintsResource(const MonitoringConstraintsResource& value) { m_constraintsResourceHasBeenSet = true; m_constraintsResource = value; }

    
    inline void SetConstraintsResource(MonitoringConstraintsResource&& value) { m_constraintsResourceHasBeenSet = true; m_constraintsResource = std::move(value); }

    
    inline DataQualityBaselineConfig& WithConstraintsResource(const MonitoringConstraintsResource& value) { SetConstraintsResource(value); return *this;}

    
    inline DataQualityBaselineConfig& WithConstraintsResource(MonitoringConstraintsResource&& value) { SetConstraintsResource(std::move(value)); return *this;}


    
    inline const MonitoringStatisticsResource& GetStatisticsResource() const{ return m_statisticsResource; }

    
    inline bool StatisticsResourceHasBeenSet() const { return m_statisticsResourceHasBeenSet; }

    
    inline void SetStatisticsResource(const MonitoringStatisticsResource& value) { m_statisticsResourceHasBeenSet = true; m_statisticsResource = value; }

    
    inline void SetStatisticsResource(MonitoringStatisticsResource&& value) { m_statisticsResourceHasBeenSet = true; m_statisticsResource = std::move(value); }

    
    inline DataQualityBaselineConfig& WithStatisticsResource(const MonitoringStatisticsResource& value) { SetStatisticsResource(value); return *this;}

    
    inline DataQualityBaselineConfig& WithStatisticsResource(MonitoringStatisticsResource&& value) { SetStatisticsResource(std::move(value)); return *this;}

  private:

    Aws::String m_baseliningJobName;
    bool m_baseliningJobNameHasBeenSet = false;

    MonitoringConstraintsResource m_constraintsResource;
    bool m_constraintsResourceHasBeenSet = false;

    MonitoringStatisticsResource m_statisticsResource;
    bool m_statisticsResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringBaselineConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API MonitoringBaselineConfig
  {
  public:
    MonitoringBaselineConfig();
    MonitoringBaselineConfig(Aws::Utils::Json::JsonView jsonValue);
    MonitoringBaselineConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The baseline constraint file in Amazon S3 that the current monitoring job
     * should validated against.</p>
     */
    inline const MonitoringConstraintsResource& GetConstraintsResource() const{ return m_constraintsResource; }

    /**
     * <p>The baseline constraint file in Amazon S3 that the current monitoring job
     * should validated against.</p>
     */
    inline bool ConstraintsResourceHasBeenSet() const { return m_constraintsResourceHasBeenSet; }

    /**
     * <p>The baseline constraint file in Amazon S3 that the current monitoring job
     * should validated against.</p>
     */
    inline void SetConstraintsResource(const MonitoringConstraintsResource& value) { m_constraintsResourceHasBeenSet = true; m_constraintsResource = value; }

    /**
     * <p>The baseline constraint file in Amazon S3 that the current monitoring job
     * should validated against.</p>
     */
    inline void SetConstraintsResource(MonitoringConstraintsResource&& value) { m_constraintsResourceHasBeenSet = true; m_constraintsResource = std::move(value); }

    /**
     * <p>The baseline constraint file in Amazon S3 that the current monitoring job
     * should validated against.</p>
     */
    inline MonitoringBaselineConfig& WithConstraintsResource(const MonitoringConstraintsResource& value) { SetConstraintsResource(value); return *this;}

    /**
     * <p>The baseline constraint file in Amazon S3 that the current monitoring job
     * should validated against.</p>
     */
    inline MonitoringBaselineConfig& WithConstraintsResource(MonitoringConstraintsResource&& value) { SetConstraintsResource(std::move(value)); return *this;}


    /**
     * <p>The baseline statistics file in Amazon S3 that the current monitoring job
     * should be validated against.</p>
     */
    inline const MonitoringStatisticsResource& GetStatisticsResource() const{ return m_statisticsResource; }

    /**
     * <p>The baseline statistics file in Amazon S3 that the current monitoring job
     * should be validated against.</p>
     */
    inline bool StatisticsResourceHasBeenSet() const { return m_statisticsResourceHasBeenSet; }

    /**
     * <p>The baseline statistics file in Amazon S3 that the current monitoring job
     * should be validated against.</p>
     */
    inline void SetStatisticsResource(const MonitoringStatisticsResource& value) { m_statisticsResourceHasBeenSet = true; m_statisticsResource = value; }

    /**
     * <p>The baseline statistics file in Amazon S3 that the current monitoring job
     * should be validated against.</p>
     */
    inline void SetStatisticsResource(MonitoringStatisticsResource&& value) { m_statisticsResourceHasBeenSet = true; m_statisticsResource = std::move(value); }

    /**
     * <p>The baseline statistics file in Amazon S3 that the current monitoring job
     * should be validated against.</p>
     */
    inline MonitoringBaselineConfig& WithStatisticsResource(const MonitoringStatisticsResource& value) { SetStatisticsResource(value); return *this;}

    /**
     * <p>The baseline statistics file in Amazon S3 that the current monitoring job
     * should be validated against.</p>
     */
    inline MonitoringBaselineConfig& WithStatisticsResource(MonitoringStatisticsResource&& value) { SetStatisticsResource(std::move(value)); return *this;}

  private:

    MonitoringConstraintsResource m_constraintsResource;
    bool m_constraintsResourceHasBeenSet;

    MonitoringStatisticsResource m_statisticsResource;
    bool m_statisticsResourceHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

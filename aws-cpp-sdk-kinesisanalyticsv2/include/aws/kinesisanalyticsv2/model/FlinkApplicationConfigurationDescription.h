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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/CheckpointConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/MonitoringConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/ParallelismConfigurationDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes configuration parameters for a Java-based Amazon Kinesis Data
   * Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/FlinkApplicationConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API FlinkApplicationConfigurationDescription
  {
  public:
    FlinkApplicationConfigurationDescription();
    FlinkApplicationConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    FlinkApplicationConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance.</p>
     */
    inline const CheckpointConfigurationDescription& GetCheckpointConfigurationDescription() const{ return m_checkpointConfigurationDescription; }

    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance.</p>
     */
    inline bool CheckpointConfigurationDescriptionHasBeenSet() const { return m_checkpointConfigurationDescriptionHasBeenSet; }

    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance.</p>
     */
    inline void SetCheckpointConfigurationDescription(const CheckpointConfigurationDescription& value) { m_checkpointConfigurationDescriptionHasBeenSet = true; m_checkpointConfigurationDescription = value; }

    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance.</p>
     */
    inline void SetCheckpointConfigurationDescription(CheckpointConfigurationDescription&& value) { m_checkpointConfigurationDescriptionHasBeenSet = true; m_checkpointConfigurationDescription = std::move(value); }

    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance.</p>
     */
    inline FlinkApplicationConfigurationDescription& WithCheckpointConfigurationDescription(const CheckpointConfigurationDescription& value) { SetCheckpointConfigurationDescription(value); return *this;}

    /**
     * <p>Describes an application's checkpointing configuration. Checkpointing is the
     * process of persisting application state for fault tolerance.</p>
     */
    inline FlinkApplicationConfigurationDescription& WithCheckpointConfigurationDescription(CheckpointConfigurationDescription&& value) { SetCheckpointConfigurationDescription(std::move(value)); return *this;}


    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline const MonitoringConfigurationDescription& GetMonitoringConfigurationDescription() const{ return m_monitoringConfigurationDescription; }

    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline bool MonitoringConfigurationDescriptionHasBeenSet() const { return m_monitoringConfigurationDescriptionHasBeenSet; }

    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline void SetMonitoringConfigurationDescription(const MonitoringConfigurationDescription& value) { m_monitoringConfigurationDescriptionHasBeenSet = true; m_monitoringConfigurationDescription = value; }

    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline void SetMonitoringConfigurationDescription(MonitoringConfigurationDescription&& value) { m_monitoringConfigurationDescriptionHasBeenSet = true; m_monitoringConfigurationDescription = std::move(value); }

    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline FlinkApplicationConfigurationDescription& WithMonitoringConfigurationDescription(const MonitoringConfigurationDescription& value) { SetMonitoringConfigurationDescription(value); return *this;}

    /**
     * <p>Describes configuration parameters for Amazon CloudWatch logging for an
     * application.</p>
     */
    inline FlinkApplicationConfigurationDescription& WithMonitoringConfigurationDescription(MonitoringConfigurationDescription&& value) { SetMonitoringConfigurationDescription(std::move(value)); return *this;}


    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline const ParallelismConfigurationDescription& GetParallelismConfigurationDescription() const{ return m_parallelismConfigurationDescription; }

    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline bool ParallelismConfigurationDescriptionHasBeenSet() const { return m_parallelismConfigurationDescriptionHasBeenSet; }

    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline void SetParallelismConfigurationDescription(const ParallelismConfigurationDescription& value) { m_parallelismConfigurationDescriptionHasBeenSet = true; m_parallelismConfigurationDescription = value; }

    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline void SetParallelismConfigurationDescription(ParallelismConfigurationDescription&& value) { m_parallelismConfigurationDescriptionHasBeenSet = true; m_parallelismConfigurationDescription = std::move(value); }

    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline FlinkApplicationConfigurationDescription& WithParallelismConfigurationDescription(const ParallelismConfigurationDescription& value) { SetParallelismConfigurationDescription(value); return *this;}

    /**
     * <p>Describes parameters for how an application executes multiple tasks
     * simultaneously.</p>
     */
    inline FlinkApplicationConfigurationDescription& WithParallelismConfigurationDescription(ParallelismConfigurationDescription&& value) { SetParallelismConfigurationDescription(std::move(value)); return *this;}


    /**
     * <p>The job plan for an application. For more information about the job plan, see
     * <a
     * href="https://ci.apache.org/projects/flink/flink-docs-stable/internals/job_scheduling.html">Jobs
     * and Scheduling</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
     * Documentation</a>. To retrieve the job plan for the application, use the
     * <a>DescribeApplicationRequest$IncludeAdditionalDetails</a> parameter of the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline const Aws::String& GetJobPlanDescription() const{ return m_jobPlanDescription; }

    /**
     * <p>The job plan for an application. For more information about the job plan, see
     * <a
     * href="https://ci.apache.org/projects/flink/flink-docs-stable/internals/job_scheduling.html">Jobs
     * and Scheduling</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
     * Documentation</a>. To retrieve the job plan for the application, use the
     * <a>DescribeApplicationRequest$IncludeAdditionalDetails</a> parameter of the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline bool JobPlanDescriptionHasBeenSet() const { return m_jobPlanDescriptionHasBeenSet; }

    /**
     * <p>The job plan for an application. For more information about the job plan, see
     * <a
     * href="https://ci.apache.org/projects/flink/flink-docs-stable/internals/job_scheduling.html">Jobs
     * and Scheduling</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
     * Documentation</a>. To retrieve the job plan for the application, use the
     * <a>DescribeApplicationRequest$IncludeAdditionalDetails</a> parameter of the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline void SetJobPlanDescription(const Aws::String& value) { m_jobPlanDescriptionHasBeenSet = true; m_jobPlanDescription = value; }

    /**
     * <p>The job plan for an application. For more information about the job plan, see
     * <a
     * href="https://ci.apache.org/projects/flink/flink-docs-stable/internals/job_scheduling.html">Jobs
     * and Scheduling</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
     * Documentation</a>. To retrieve the job plan for the application, use the
     * <a>DescribeApplicationRequest$IncludeAdditionalDetails</a> parameter of the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline void SetJobPlanDescription(Aws::String&& value) { m_jobPlanDescriptionHasBeenSet = true; m_jobPlanDescription = std::move(value); }

    /**
     * <p>The job plan for an application. For more information about the job plan, see
     * <a
     * href="https://ci.apache.org/projects/flink/flink-docs-stable/internals/job_scheduling.html">Jobs
     * and Scheduling</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
     * Documentation</a>. To retrieve the job plan for the application, use the
     * <a>DescribeApplicationRequest$IncludeAdditionalDetails</a> parameter of the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline void SetJobPlanDescription(const char* value) { m_jobPlanDescriptionHasBeenSet = true; m_jobPlanDescription.assign(value); }

    /**
     * <p>The job plan for an application. For more information about the job plan, see
     * <a
     * href="https://ci.apache.org/projects/flink/flink-docs-stable/internals/job_scheduling.html">Jobs
     * and Scheduling</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
     * Documentation</a>. To retrieve the job plan for the application, use the
     * <a>DescribeApplicationRequest$IncludeAdditionalDetails</a> parameter of the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline FlinkApplicationConfigurationDescription& WithJobPlanDescription(const Aws::String& value) { SetJobPlanDescription(value); return *this;}

    /**
     * <p>The job plan for an application. For more information about the job plan, see
     * <a
     * href="https://ci.apache.org/projects/flink/flink-docs-stable/internals/job_scheduling.html">Jobs
     * and Scheduling</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
     * Documentation</a>. To retrieve the job plan for the application, use the
     * <a>DescribeApplicationRequest$IncludeAdditionalDetails</a> parameter of the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline FlinkApplicationConfigurationDescription& WithJobPlanDescription(Aws::String&& value) { SetJobPlanDescription(std::move(value)); return *this;}

    /**
     * <p>The job plan for an application. For more information about the job plan, see
     * <a
     * href="https://ci.apache.org/projects/flink/flink-docs-stable/internals/job_scheduling.html">Jobs
     * and Scheduling</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.6/">Apache Flink
     * Documentation</a>. To retrieve the job plan for the application, use the
     * <a>DescribeApplicationRequest$IncludeAdditionalDetails</a> parameter of the
     * <a>DescribeApplication</a> operation.</p>
     */
    inline FlinkApplicationConfigurationDescription& WithJobPlanDescription(const char* value) { SetJobPlanDescription(value); return *this;}

  private:

    CheckpointConfigurationDescription m_checkpointConfigurationDescription;
    bool m_checkpointConfigurationDescriptionHasBeenSet;

    MonitoringConfigurationDescription m_monitoringConfigurationDescription;
    bool m_monitoringConfigurationDescriptionHasBeenSet;

    ParallelismConfigurationDescription m_parallelismConfigurationDescription;
    bool m_parallelismConfigurationDescriptionHasBeenSet;

    Aws::String m_jobPlanDescription;
    bool m_jobPlanDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

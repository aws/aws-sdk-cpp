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
#include <aws/kinesisanalyticsv2/model/ConfigurationType.h>
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
   * <p>Describes checkpointing parameters for a Java-based Amazon Kinesis Data
   * Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CheckpointConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API CheckpointConfigurationDescription
  {
  public:
    CheckpointConfigurationDescription();
    CheckpointConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    CheckpointConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether the application uses the default checkpointing behavior in
     * Kinesis Data Analytics.</p>
     */
    inline const ConfigurationType& GetConfigurationType() const{ return m_configurationType; }

    /**
     * <p>Describes whether the application uses the default checkpointing behavior in
     * Kinesis Data Analytics.</p>
     */
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }

    /**
     * <p>Describes whether the application uses the default checkpointing behavior in
     * Kinesis Data Analytics.</p>
     */
    inline void SetConfigurationType(const ConfigurationType& value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }

    /**
     * <p>Describes whether the application uses the default checkpointing behavior in
     * Kinesis Data Analytics.</p>
     */
    inline void SetConfigurationType(ConfigurationType&& value) { m_configurationTypeHasBeenSet = true; m_configurationType = std::move(value); }

    /**
     * <p>Describes whether the application uses the default checkpointing behavior in
     * Kinesis Data Analytics.</p>
     */
    inline CheckpointConfigurationDescription& WithConfigurationType(const ConfigurationType& value) { SetConfigurationType(value); return *this;}

    /**
     * <p>Describes whether the application uses the default checkpointing behavior in
     * Kinesis Data Analytics.</p>
     */
    inline CheckpointConfigurationDescription& WithConfigurationType(ConfigurationType&& value) { SetConfigurationType(std::move(value)); return *this;}


    /**
     * <p>Describes whether checkpointing is enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline bool GetCheckpointingEnabled() const{ return m_checkpointingEnabled; }

    /**
     * <p>Describes whether checkpointing is enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline bool CheckpointingEnabledHasBeenSet() const { return m_checkpointingEnabledHasBeenSet; }

    /**
     * <p>Describes whether checkpointing is enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetCheckpointingEnabled(bool value) { m_checkpointingEnabledHasBeenSet = true; m_checkpointingEnabled = value; }

    /**
     * <p>Describes whether checkpointing is enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline CheckpointConfigurationDescription& WithCheckpointingEnabled(bool value) { SetCheckpointingEnabled(value); return *this;}


    /**
     * <p>Describes the interval in milliseconds between checkpoint operations.</p>
     */
    inline long long GetCheckpointInterval() const{ return m_checkpointInterval; }

    /**
     * <p>Describes the interval in milliseconds between checkpoint operations.</p>
     */
    inline bool CheckpointIntervalHasBeenSet() const { return m_checkpointIntervalHasBeenSet; }

    /**
     * <p>Describes the interval in milliseconds between checkpoint operations.</p>
     */
    inline void SetCheckpointInterval(long long value) { m_checkpointIntervalHasBeenSet = true; m_checkpointInterval = value; }

    /**
     * <p>Describes the interval in milliseconds between checkpoint operations.</p>
     */
    inline CheckpointConfigurationDescription& WithCheckpointInterval(long long value) { SetCheckpointInterval(value); return *this;}


    /**
     * <p>Describes the minimum time in milliseconds after a checkpoint operation
     * completes that a new checkpoint operation can start.</p>
     */
    inline long long GetMinPauseBetweenCheckpoints() const{ return m_minPauseBetweenCheckpoints; }

    /**
     * <p>Describes the minimum time in milliseconds after a checkpoint operation
     * completes that a new checkpoint operation can start.</p>
     */
    inline bool MinPauseBetweenCheckpointsHasBeenSet() const { return m_minPauseBetweenCheckpointsHasBeenSet; }

    /**
     * <p>Describes the minimum time in milliseconds after a checkpoint operation
     * completes that a new checkpoint operation can start.</p>
     */
    inline void SetMinPauseBetweenCheckpoints(long long value) { m_minPauseBetweenCheckpointsHasBeenSet = true; m_minPauseBetweenCheckpoints = value; }

    /**
     * <p>Describes the minimum time in milliseconds after a checkpoint operation
     * completes that a new checkpoint operation can start.</p>
     */
    inline CheckpointConfigurationDescription& WithMinPauseBetweenCheckpoints(long long value) { SetMinPauseBetweenCheckpoints(value); return *this;}

  private:

    ConfigurationType m_configurationType;
    bool m_configurationTypeHasBeenSet;

    bool m_checkpointingEnabled;
    bool m_checkpointingEnabledHasBeenSet;

    long long m_checkpointInterval;
    bool m_checkpointIntervalHasBeenSet;

    long long m_minPauseBetweenCheckpoints;
    bool m_minPauseBetweenCheckpointsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

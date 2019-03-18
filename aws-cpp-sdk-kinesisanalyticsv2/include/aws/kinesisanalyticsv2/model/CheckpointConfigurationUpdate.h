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
   * <p>Describes updates to the checkpointing parameters for a Java-based Amazon
   * Kinesis Data Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CheckpointConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API CheckpointConfigurationUpdate
  {
  public:
    CheckpointConfigurationUpdate();
    CheckpointConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    CheckpointConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes updates to whether the application uses the default checkpointing
     * behavior of Kinesis Data Analytics.</p>
     */
    inline const ConfigurationType& GetConfigurationTypeUpdate() const{ return m_configurationTypeUpdate; }

    /**
     * <p>Describes updates to whether the application uses the default checkpointing
     * behavior of Kinesis Data Analytics.</p>
     */
    inline bool ConfigurationTypeUpdateHasBeenSet() const { return m_configurationTypeUpdateHasBeenSet; }

    /**
     * <p>Describes updates to whether the application uses the default checkpointing
     * behavior of Kinesis Data Analytics.</p>
     */
    inline void SetConfigurationTypeUpdate(const ConfigurationType& value) { m_configurationTypeUpdateHasBeenSet = true; m_configurationTypeUpdate = value; }

    /**
     * <p>Describes updates to whether the application uses the default checkpointing
     * behavior of Kinesis Data Analytics.</p>
     */
    inline void SetConfigurationTypeUpdate(ConfigurationType&& value) { m_configurationTypeUpdateHasBeenSet = true; m_configurationTypeUpdate = std::move(value); }

    /**
     * <p>Describes updates to whether the application uses the default checkpointing
     * behavior of Kinesis Data Analytics.</p>
     */
    inline CheckpointConfigurationUpdate& WithConfigurationTypeUpdate(const ConfigurationType& value) { SetConfigurationTypeUpdate(value); return *this;}

    /**
     * <p>Describes updates to whether the application uses the default checkpointing
     * behavior of Kinesis Data Analytics.</p>
     */
    inline CheckpointConfigurationUpdate& WithConfigurationTypeUpdate(ConfigurationType&& value) { SetConfigurationTypeUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to whether checkpointing is enabled for an application.</p>
     */
    inline bool GetCheckpointingEnabledUpdate() const{ return m_checkpointingEnabledUpdate; }

    /**
     * <p>Describes updates to whether checkpointing is enabled for an application.</p>
     */
    inline bool CheckpointingEnabledUpdateHasBeenSet() const { return m_checkpointingEnabledUpdateHasBeenSet; }

    /**
     * <p>Describes updates to whether checkpointing is enabled for an application.</p>
     */
    inline void SetCheckpointingEnabledUpdate(bool value) { m_checkpointingEnabledUpdateHasBeenSet = true; m_checkpointingEnabledUpdate = value; }

    /**
     * <p>Describes updates to whether checkpointing is enabled for an application.</p>
     */
    inline CheckpointConfigurationUpdate& WithCheckpointingEnabledUpdate(bool value) { SetCheckpointingEnabledUpdate(value); return *this;}


    /**
     * <p>Describes updates to the interval in milliseconds between checkpoint
     * operations.</p>
     */
    inline long long GetCheckpointIntervalUpdate() const{ return m_checkpointIntervalUpdate; }

    /**
     * <p>Describes updates to the interval in milliseconds between checkpoint
     * operations.</p>
     */
    inline bool CheckpointIntervalUpdateHasBeenSet() const { return m_checkpointIntervalUpdateHasBeenSet; }

    /**
     * <p>Describes updates to the interval in milliseconds between checkpoint
     * operations.</p>
     */
    inline void SetCheckpointIntervalUpdate(long long value) { m_checkpointIntervalUpdateHasBeenSet = true; m_checkpointIntervalUpdate = value; }

    /**
     * <p>Describes updates to the interval in milliseconds between checkpoint
     * operations.</p>
     */
    inline CheckpointConfigurationUpdate& WithCheckpointIntervalUpdate(long long value) { SetCheckpointIntervalUpdate(value); return *this;}


    /**
     * <p>Describes updates to the minimum time in milliseconds after a checkpoint
     * operation completes that a new checkpoint operation can start.</p>
     */
    inline long long GetMinPauseBetweenCheckpointsUpdate() const{ return m_minPauseBetweenCheckpointsUpdate; }

    /**
     * <p>Describes updates to the minimum time in milliseconds after a checkpoint
     * operation completes that a new checkpoint operation can start.</p>
     */
    inline bool MinPauseBetweenCheckpointsUpdateHasBeenSet() const { return m_minPauseBetweenCheckpointsUpdateHasBeenSet; }

    /**
     * <p>Describes updates to the minimum time in milliseconds after a checkpoint
     * operation completes that a new checkpoint operation can start.</p>
     */
    inline void SetMinPauseBetweenCheckpointsUpdate(long long value) { m_minPauseBetweenCheckpointsUpdateHasBeenSet = true; m_minPauseBetweenCheckpointsUpdate = value; }

    /**
     * <p>Describes updates to the minimum time in milliseconds after a checkpoint
     * operation completes that a new checkpoint operation can start.</p>
     */
    inline CheckpointConfigurationUpdate& WithMinPauseBetweenCheckpointsUpdate(long long value) { SetMinPauseBetweenCheckpointsUpdate(value); return *this;}

  private:

    ConfigurationType m_configurationTypeUpdate;
    bool m_configurationTypeUpdateHasBeenSet;

    bool m_checkpointingEnabledUpdate;
    bool m_checkpointingEnabledUpdateHasBeenSet;

    long long m_checkpointIntervalUpdate;
    bool m_checkpointIntervalUpdateHasBeenSet;

    long long m_minPauseBetweenCheckpointsUpdate;
    bool m_minPauseBetweenCheckpointsUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

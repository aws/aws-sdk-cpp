/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes checkpointing parameters for a Flink-based Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CheckpointConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class CheckpointConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API CheckpointConfigurationDescription();
    AWS_KINESISANALYTICSV2_API CheckpointConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CheckpointConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether the application uses the default checkpointing behavior in
     * Kinesis Data Analytics. </p>  <p>If this value is set to
     * <code>DEFAULT</code>, the application will use the following values, even if
     * they are set to other values using APIs or application code:</p> <ul> <li> <p>
     * <b>CheckpointingEnabled:</b> true</p> </li> <li> <p> <b>CheckpointInterval:</b>
     * 60000</p> </li> <li> <p> <b>MinPauseBetweenCheckpoints:</b> 5000</p> </li> </ul>
     * 
     */
    inline const ConfigurationType& GetConfigurationType() const{ return m_configurationType; }

    /**
     * <p>Describes whether the application uses the default checkpointing behavior in
     * Kinesis Data Analytics. </p>  <p>If this value is set to
     * <code>DEFAULT</code>, the application will use the following values, even if
     * they are set to other values using APIs or application code:</p> <ul> <li> <p>
     * <b>CheckpointingEnabled:</b> true</p> </li> <li> <p> <b>CheckpointInterval:</b>
     * 60000</p> </li> <li> <p> <b>MinPauseBetweenCheckpoints:</b> 5000</p> </li> </ul>
     * 
     */
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }

    /**
     * <p>Describes whether the application uses the default checkpointing behavior in
     * Kinesis Data Analytics. </p>  <p>If this value is set to
     * <code>DEFAULT</code>, the application will use the following values, even if
     * they are set to other values using APIs or application code:</p> <ul> <li> <p>
     * <b>CheckpointingEnabled:</b> true</p> </li> <li> <p> <b>CheckpointInterval:</b>
     * 60000</p> </li> <li> <p> <b>MinPauseBetweenCheckpoints:</b> 5000</p> </li> </ul>
     * 
     */
    inline void SetConfigurationType(const ConfigurationType& value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }

    /**
     * <p>Describes whether the application uses the default checkpointing behavior in
     * Kinesis Data Analytics. </p>  <p>If this value is set to
     * <code>DEFAULT</code>, the application will use the following values, even if
     * they are set to other values using APIs or application code:</p> <ul> <li> <p>
     * <b>CheckpointingEnabled:</b> true</p> </li> <li> <p> <b>CheckpointInterval:</b>
     * 60000</p> </li> <li> <p> <b>MinPauseBetweenCheckpoints:</b> 5000</p> </li> </ul>
     * 
     */
    inline void SetConfigurationType(ConfigurationType&& value) { m_configurationTypeHasBeenSet = true; m_configurationType = std::move(value); }

    /**
     * <p>Describes whether the application uses the default checkpointing behavior in
     * Kinesis Data Analytics. </p>  <p>If this value is set to
     * <code>DEFAULT</code>, the application will use the following values, even if
     * they are set to other values using APIs or application code:</p> <ul> <li> <p>
     * <b>CheckpointingEnabled:</b> true</p> </li> <li> <p> <b>CheckpointInterval:</b>
     * 60000</p> </li> <li> <p> <b>MinPauseBetweenCheckpoints:</b> 5000</p> </li> </ul>
     * 
     */
    inline CheckpointConfigurationDescription& WithConfigurationType(const ConfigurationType& value) { SetConfigurationType(value); return *this;}

    /**
     * <p>Describes whether the application uses the default checkpointing behavior in
     * Kinesis Data Analytics. </p>  <p>If this value is set to
     * <code>DEFAULT</code>, the application will use the following values, even if
     * they are set to other values using APIs or application code:</p> <ul> <li> <p>
     * <b>CheckpointingEnabled:</b> true</p> </li> <li> <p> <b>CheckpointInterval:</b>
     * 60000</p> </li> <li> <p> <b>MinPauseBetweenCheckpoints:</b> 5000</p> </li> </ul>
     * 
     */
    inline CheckpointConfigurationDescription& WithConfigurationType(ConfigurationType&& value) { SetConfigurationType(std::move(value)); return *this;}


    /**
     * <p>Describes whether checkpointing is enabled for a Flink-based Kinesis Data
     * Analytics application.</p>  <p>If
     * <code>CheckpointConfiguration.ConfigurationType</code> is <code>DEFAULT</code>,
     * the application will use a <code>CheckpointingEnabled</code> value of
     * <code>true</code>, even if this value is set to another value using this API or
     * in application code.</p> 
     */
    inline bool GetCheckpointingEnabled() const{ return m_checkpointingEnabled; }

    /**
     * <p>Describes whether checkpointing is enabled for a Flink-based Kinesis Data
     * Analytics application.</p>  <p>If
     * <code>CheckpointConfiguration.ConfigurationType</code> is <code>DEFAULT</code>,
     * the application will use a <code>CheckpointingEnabled</code> value of
     * <code>true</code>, even if this value is set to another value using this API or
     * in application code.</p> 
     */
    inline bool CheckpointingEnabledHasBeenSet() const { return m_checkpointingEnabledHasBeenSet; }

    /**
     * <p>Describes whether checkpointing is enabled for a Flink-based Kinesis Data
     * Analytics application.</p>  <p>If
     * <code>CheckpointConfiguration.ConfigurationType</code> is <code>DEFAULT</code>,
     * the application will use a <code>CheckpointingEnabled</code> value of
     * <code>true</code>, even if this value is set to another value using this API or
     * in application code.</p> 
     */
    inline void SetCheckpointingEnabled(bool value) { m_checkpointingEnabledHasBeenSet = true; m_checkpointingEnabled = value; }

    /**
     * <p>Describes whether checkpointing is enabled for a Flink-based Kinesis Data
     * Analytics application.</p>  <p>If
     * <code>CheckpointConfiguration.ConfigurationType</code> is <code>DEFAULT</code>,
     * the application will use a <code>CheckpointingEnabled</code> value of
     * <code>true</code>, even if this value is set to another value using this API or
     * in application code.</p> 
     */
    inline CheckpointConfigurationDescription& WithCheckpointingEnabled(bool value) { SetCheckpointingEnabled(value); return *this;}


    /**
     * <p>Describes the interval in milliseconds between checkpoint operations. </p>
     *  <p>If <code>CheckpointConfiguration.ConfigurationType</code> is
     * <code>DEFAULT</code>, the application will use a <code>CheckpointInterval</code>
     * value of 60000, even if this value is set to another value using this API or in
     * application code.</p> 
     */
    inline long long GetCheckpointInterval() const{ return m_checkpointInterval; }

    /**
     * <p>Describes the interval in milliseconds between checkpoint operations. </p>
     *  <p>If <code>CheckpointConfiguration.ConfigurationType</code> is
     * <code>DEFAULT</code>, the application will use a <code>CheckpointInterval</code>
     * value of 60000, even if this value is set to another value using this API or in
     * application code.</p> 
     */
    inline bool CheckpointIntervalHasBeenSet() const { return m_checkpointIntervalHasBeenSet; }

    /**
     * <p>Describes the interval in milliseconds between checkpoint operations. </p>
     *  <p>If <code>CheckpointConfiguration.ConfigurationType</code> is
     * <code>DEFAULT</code>, the application will use a <code>CheckpointInterval</code>
     * value of 60000, even if this value is set to another value using this API or in
     * application code.</p> 
     */
    inline void SetCheckpointInterval(long long value) { m_checkpointIntervalHasBeenSet = true; m_checkpointInterval = value; }

    /**
     * <p>Describes the interval in milliseconds between checkpoint operations. </p>
     *  <p>If <code>CheckpointConfiguration.ConfigurationType</code> is
     * <code>DEFAULT</code>, the application will use a <code>CheckpointInterval</code>
     * value of 60000, even if this value is set to another value using this API or in
     * application code.</p> 
     */
    inline CheckpointConfigurationDescription& WithCheckpointInterval(long long value) { SetCheckpointInterval(value); return *this;}


    /**
     * <p>Describes the minimum time in milliseconds after a checkpoint operation
     * completes that a new checkpoint operation can start. </p>  <p>If
     * <code>CheckpointConfiguration.ConfigurationType</code> is <code>DEFAULT</code>,
     * the application will use a <code>MinPauseBetweenCheckpoints</code> value of
     * 5000, even if this value is set using this API or in application code.</p>
     * 
     */
    inline long long GetMinPauseBetweenCheckpoints() const{ return m_minPauseBetweenCheckpoints; }

    /**
     * <p>Describes the minimum time in milliseconds after a checkpoint operation
     * completes that a new checkpoint operation can start. </p>  <p>If
     * <code>CheckpointConfiguration.ConfigurationType</code> is <code>DEFAULT</code>,
     * the application will use a <code>MinPauseBetweenCheckpoints</code> value of
     * 5000, even if this value is set using this API or in application code.</p>
     * 
     */
    inline bool MinPauseBetweenCheckpointsHasBeenSet() const { return m_minPauseBetweenCheckpointsHasBeenSet; }

    /**
     * <p>Describes the minimum time in milliseconds after a checkpoint operation
     * completes that a new checkpoint operation can start. </p>  <p>If
     * <code>CheckpointConfiguration.ConfigurationType</code> is <code>DEFAULT</code>,
     * the application will use a <code>MinPauseBetweenCheckpoints</code> value of
     * 5000, even if this value is set using this API or in application code.</p>
     * 
     */
    inline void SetMinPauseBetweenCheckpoints(long long value) { m_minPauseBetweenCheckpointsHasBeenSet = true; m_minPauseBetweenCheckpoints = value; }

    /**
     * <p>Describes the minimum time in milliseconds after a checkpoint operation
     * completes that a new checkpoint operation can start. </p>  <p>If
     * <code>CheckpointConfiguration.ConfigurationType</code> is <code>DEFAULT</code>,
     * the application will use a <code>MinPauseBetweenCheckpoints</code> value of
     * 5000, even if this value is set using this API or in application code.</p>
     * 
     */
    inline CheckpointConfigurationDescription& WithMinPauseBetweenCheckpoints(long long value) { SetMinPauseBetweenCheckpoints(value); return *this;}

  private:

    ConfigurationType m_configurationType;
    bool m_configurationTypeHasBeenSet = false;

    bool m_checkpointingEnabled;
    bool m_checkpointingEnabledHasBeenSet = false;

    long long m_checkpointInterval;
    bool m_checkpointIntervalHasBeenSet = false;

    long long m_minPauseBetweenCheckpoints;
    bool m_minPauseBetweenCheckpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

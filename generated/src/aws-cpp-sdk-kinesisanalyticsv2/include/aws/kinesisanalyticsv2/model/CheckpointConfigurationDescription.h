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
   * <p>Describes checkpointing parameters for a Managed Service for Apache Flink
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CheckpointConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class CheckpointConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API CheckpointConfigurationDescription() = default;
    AWS_KINESISANALYTICSV2_API CheckpointConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CheckpointConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes whether the application uses the default checkpointing behavior in
     * Managed Service for Apache Flink. </p>  <p>If this value is set to
     * <code>DEFAULT</code>, the application will use the following values, even if
     * they are set to other values using APIs or application code:</p> <ul> <li> <p>
     * <b>CheckpointingEnabled:</b> true</p> </li> <li> <p> <b>CheckpointInterval:</b>
     * 60000</p> </li> <li> <p> <b>MinPauseBetweenCheckpoints:</b> 5000</p> </li> </ul>
     * 
     */
    inline ConfigurationType GetConfigurationType() const { return m_configurationType; }
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }
    inline void SetConfigurationType(ConfigurationType value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }
    inline CheckpointConfigurationDescription& WithConfigurationType(ConfigurationType value) { SetConfigurationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether checkpointing is enabled for a Managed Service for Apache
     * Flink application.</p>  <p>If
     * <code>CheckpointConfiguration.ConfigurationType</code> is <code>DEFAULT</code>,
     * the application will use a <code>CheckpointingEnabled</code> value of
     * <code>true</code>, even if this value is set to another value using this API or
     * in application code.</p> 
     */
    inline bool GetCheckpointingEnabled() const { return m_checkpointingEnabled; }
    inline bool CheckpointingEnabledHasBeenSet() const { return m_checkpointingEnabledHasBeenSet; }
    inline void SetCheckpointingEnabled(bool value) { m_checkpointingEnabledHasBeenSet = true; m_checkpointingEnabled = value; }
    inline CheckpointConfigurationDescription& WithCheckpointingEnabled(bool value) { SetCheckpointingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the interval in milliseconds between checkpoint operations. </p>
     *  <p>If <code>CheckpointConfiguration.ConfigurationType</code> is
     * <code>DEFAULT</code>, the application will use a <code>CheckpointInterval</code>
     * value of 60000, even if this value is set to another value using this API or in
     * application code.</p> 
     */
    inline long long GetCheckpointInterval() const { return m_checkpointInterval; }
    inline bool CheckpointIntervalHasBeenSet() const { return m_checkpointIntervalHasBeenSet; }
    inline void SetCheckpointInterval(long long value) { m_checkpointIntervalHasBeenSet = true; m_checkpointInterval = value; }
    inline CheckpointConfigurationDescription& WithCheckpointInterval(long long value) { SetCheckpointInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the minimum time in milliseconds after a checkpoint operation
     * completes that a new checkpoint operation can start. </p>  <p>If
     * <code>CheckpointConfiguration.ConfigurationType</code> is <code>DEFAULT</code>,
     * the application will use a <code>MinPauseBetweenCheckpoints</code> value of
     * 5000, even if this value is set using this API or in application code.</p>
     * 
     */
    inline long long GetMinPauseBetweenCheckpoints() const { return m_minPauseBetweenCheckpoints; }
    inline bool MinPauseBetweenCheckpointsHasBeenSet() const { return m_minPauseBetweenCheckpointsHasBeenSet; }
    inline void SetMinPauseBetweenCheckpoints(long long value) { m_minPauseBetweenCheckpointsHasBeenSet = true; m_minPauseBetweenCheckpoints = value; }
    inline CheckpointConfigurationDescription& WithMinPauseBetweenCheckpoints(long long value) { SetMinPauseBetweenCheckpoints(value); return *this;}
    ///@}
  private:

    ConfigurationType m_configurationType{ConfigurationType::NOT_SET};
    bool m_configurationTypeHasBeenSet = false;

    bool m_checkpointingEnabled{false};
    bool m_checkpointingEnabledHasBeenSet = false;

    long long m_checkpointInterval{0};
    bool m_checkpointIntervalHasBeenSet = false;

    long long m_minPauseBetweenCheckpoints{0};
    bool m_minPauseBetweenCheckpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

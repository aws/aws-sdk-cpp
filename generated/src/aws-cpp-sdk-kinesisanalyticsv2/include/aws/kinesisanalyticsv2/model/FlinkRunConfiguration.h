/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

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
   * <p>Describes the starting parameters for a Managed Service for Apache Flink
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/FlinkRunConfiguration">AWS
   * API Reference</a></p>
   */
  class FlinkRunConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API FlinkRunConfiguration() = default;
    AWS_KINESISANALYTICSV2_API FlinkRunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API FlinkRunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When restoring from a snapshot, specifies whether the runtime is allowed to
     * skip a state that cannot be mapped to the new program. This will happen if the
     * program is updated between snapshots to remove stateful parameters, and state
     * data in the snapshot no longer corresponds to valid application data. For more
     * information, see <a
     * href="https://nightlies.apache.org/flink/flink-docs-release-1.20/docs/ops/state/savepoints/#allowing-non-restored-state">
     * Allowing Non-Restored State</a> in the <a
     * href="https://nightlies.apache.org/flink/flink-docs-release-1.20/">Apache Flink
     * documentation</a>.</p>  <p>This value defaults to <code>false</code>. If
     * you update your application without specifying this parameter,
     * <code>AllowNonRestoredState</code> will be set to <code>false</code>, even if it
     * was previously set to <code>true</code>.</p> 
     */
    inline bool GetAllowNonRestoredState() const { return m_allowNonRestoredState; }
    inline bool AllowNonRestoredStateHasBeenSet() const { return m_allowNonRestoredStateHasBeenSet; }
    inline void SetAllowNonRestoredState(bool value) { m_allowNonRestoredStateHasBeenSet = true; m_allowNonRestoredState = value; }
    inline FlinkRunConfiguration& WithAllowNonRestoredState(bool value) { SetAllowNonRestoredState(value); return *this;}
    ///@}
  private:

    bool m_allowNonRestoredState{false};
    bool m_allowNonRestoredStateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

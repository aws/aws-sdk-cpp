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
   * <p>Describes the starting parameters for an Apache Flink-based Kinesis Data
   * Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/FlinkRunConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API FlinkRunConfiguration
  {
  public:
    FlinkRunConfiguration();
    FlinkRunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    FlinkRunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When restoring from a savepoint, specifies whether the runtime is allowed to
     * skip a state that cannot be mapped to the new program. This will happen if the
     * program is updated between savepoints to remove stateful parameters, and state
     * data in the savepoint no longer corresponds to valid application data. For more
     * information, see <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.8/ops/state/savepoints.html#allowing-non-restored-state">
     * Allowing Non-Restored State</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.8/">Apache Flink
     * documentation</a>.</p>
     */
    inline bool GetAllowNonRestoredState() const{ return m_allowNonRestoredState; }

    /**
     * <p>When restoring from a savepoint, specifies whether the runtime is allowed to
     * skip a state that cannot be mapped to the new program. This will happen if the
     * program is updated between savepoints to remove stateful parameters, and state
     * data in the savepoint no longer corresponds to valid application data. For more
     * information, see <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.8/ops/state/savepoints.html#allowing-non-restored-state">
     * Allowing Non-Restored State</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.8/">Apache Flink
     * documentation</a>.</p>
     */
    inline bool AllowNonRestoredStateHasBeenSet() const { return m_allowNonRestoredStateHasBeenSet; }

    /**
     * <p>When restoring from a savepoint, specifies whether the runtime is allowed to
     * skip a state that cannot be mapped to the new program. This will happen if the
     * program is updated between savepoints to remove stateful parameters, and state
     * data in the savepoint no longer corresponds to valid application data. For more
     * information, see <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.8/ops/state/savepoints.html#allowing-non-restored-state">
     * Allowing Non-Restored State</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.8/">Apache Flink
     * documentation</a>.</p>
     */
    inline void SetAllowNonRestoredState(bool value) { m_allowNonRestoredStateHasBeenSet = true; m_allowNonRestoredState = value; }

    /**
     * <p>When restoring from a savepoint, specifies whether the runtime is allowed to
     * skip a state that cannot be mapped to the new program. This will happen if the
     * program is updated between savepoints to remove stateful parameters, and state
     * data in the savepoint no longer corresponds to valid application data. For more
     * information, see <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.8/ops/state/savepoints.html#allowing-non-restored-state">
     * Allowing Non-Restored State</a> in the <a
     * href="https://ci.apache.org/projects/flink/flink-docs-release-1.8/">Apache Flink
     * documentation</a>.</p>
     */
    inline FlinkRunConfiguration& WithAllowNonRestoredState(bool value) { SetAllowNonRestoredState(value); return *this;}

  private:

    bool m_allowNonRestoredState;
    bool m_allowNonRestoredStateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

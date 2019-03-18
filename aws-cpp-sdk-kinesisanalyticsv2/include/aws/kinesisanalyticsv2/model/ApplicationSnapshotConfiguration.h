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
   * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
   * Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationSnapshotConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API ApplicationSnapshotConfiguration
  {
  public:
    ApplicationSnapshotConfiguration();
    ApplicationSnapshotConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ApplicationSnapshotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline bool GetSnapshotsEnabled() const{ return m_snapshotsEnabled; }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline bool SnapshotsEnabledHasBeenSet() const { return m_snapshotsEnabledHasBeenSet; }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline void SetSnapshotsEnabled(bool value) { m_snapshotsEnabledHasBeenSet = true; m_snapshotsEnabled = value; }

    /**
     * <p>Describes whether snapshots are enabled for a Java-based Kinesis Data
     * Analytics application.</p>
     */
    inline ApplicationSnapshotConfiguration& WithSnapshotsEnabled(bool value) { SetSnapshotsEnabled(value); return *this;}

  private:

    bool m_snapshotsEnabled;
    bool m_snapshotsEnabledHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

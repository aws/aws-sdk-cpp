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
   * <p>Describes updates to whether snapshots are enabled for a Java-based Kinesis
   * Data Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationSnapshotConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API ApplicationSnapshotConfigurationUpdate
  {
  public:
    ApplicationSnapshotConfigurationUpdate();
    ApplicationSnapshotConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    ApplicationSnapshotConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes updates to whether snapshots are enabled for a Java-based Kinesis
     * Data Analytics application.</p>
     */
    inline bool GetSnapshotsEnabledUpdate() const{ return m_snapshotsEnabledUpdate; }

    /**
     * <p>Describes updates to whether snapshots are enabled for a Java-based Kinesis
     * Data Analytics application.</p>
     */
    inline bool SnapshotsEnabledUpdateHasBeenSet() const { return m_snapshotsEnabledUpdateHasBeenSet; }

    /**
     * <p>Describes updates to whether snapshots are enabled for a Java-based Kinesis
     * Data Analytics application.</p>
     */
    inline void SetSnapshotsEnabledUpdate(bool value) { m_snapshotsEnabledUpdateHasBeenSet = true; m_snapshotsEnabledUpdate = value; }

    /**
     * <p>Describes updates to whether snapshots are enabled for a Java-based Kinesis
     * Data Analytics application.</p>
     */
    inline ApplicationSnapshotConfigurationUpdate& WithSnapshotsEnabledUpdate(bool value) { SetSnapshotsEnabledUpdate(value); return *this;}

  private:

    bool m_snapshotsEnabledUpdate;
    bool m_snapshotsEnabledUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws

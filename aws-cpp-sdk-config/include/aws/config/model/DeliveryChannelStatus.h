/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigExportDeliveryInfo.h>
#include <aws/config/model/ConfigStreamDeliveryInfo.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The status of a specified delivery channel.</p> <p>Valid values:
   * <code>Success</code> | <code>Failure</code> </p>
   */
  class AWS_CONFIGSERVICE_API DeliveryChannelStatus
  {
  public:
    DeliveryChannelStatus();
    DeliveryChannelStatus(const Aws::Utils::Json::JsonValue& jsonValue);
    DeliveryChannelStatus& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the delivery channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the delivery channel.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the delivery channel.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the delivery channel.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the delivery channel.</p>
     */
    inline DeliveryChannelStatus& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the delivery channel.</p>
     */
    inline DeliveryChannelStatus& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the delivery channel.</p>
     */
    inline DeliveryChannelStatus& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A list containing the status of the delivery of the snapshot to the specified
     * Amazon S3 bucket.</p>
     */
    inline const ConfigExportDeliveryInfo& GetConfigSnapshotDeliveryInfo() const{ return m_configSnapshotDeliveryInfo; }

    /**
     * <p>A list containing the status of the delivery of the snapshot to the specified
     * Amazon S3 bucket.</p>
     */
    inline void SetConfigSnapshotDeliveryInfo(const ConfigExportDeliveryInfo& value) { m_configSnapshotDeliveryInfoHasBeenSet = true; m_configSnapshotDeliveryInfo = value; }

    /**
     * <p>A list containing the status of the delivery of the snapshot to the specified
     * Amazon S3 bucket.</p>
     */
    inline void SetConfigSnapshotDeliveryInfo(ConfigExportDeliveryInfo&& value) { m_configSnapshotDeliveryInfoHasBeenSet = true; m_configSnapshotDeliveryInfo = value; }

    /**
     * <p>A list containing the status of the delivery of the snapshot to the specified
     * Amazon S3 bucket.</p>
     */
    inline DeliveryChannelStatus& WithConfigSnapshotDeliveryInfo(const ConfigExportDeliveryInfo& value) { SetConfigSnapshotDeliveryInfo(value); return *this;}

    /**
     * <p>A list containing the status of the delivery of the snapshot to the specified
     * Amazon S3 bucket.</p>
     */
    inline DeliveryChannelStatus& WithConfigSnapshotDeliveryInfo(ConfigExportDeliveryInfo&& value) { SetConfigSnapshotDeliveryInfo(value); return *this;}

    /**
     * <p>A list that contains the status of the delivery of the configuration history
     * to the specified Amazon S3 bucket.</p>
     */
    inline const ConfigExportDeliveryInfo& GetConfigHistoryDeliveryInfo() const{ return m_configHistoryDeliveryInfo; }

    /**
     * <p>A list that contains the status of the delivery of the configuration history
     * to the specified Amazon S3 bucket.</p>
     */
    inline void SetConfigHistoryDeliveryInfo(const ConfigExportDeliveryInfo& value) { m_configHistoryDeliveryInfoHasBeenSet = true; m_configHistoryDeliveryInfo = value; }

    /**
     * <p>A list that contains the status of the delivery of the configuration history
     * to the specified Amazon S3 bucket.</p>
     */
    inline void SetConfigHistoryDeliveryInfo(ConfigExportDeliveryInfo&& value) { m_configHistoryDeliveryInfoHasBeenSet = true; m_configHistoryDeliveryInfo = value; }

    /**
     * <p>A list that contains the status of the delivery of the configuration history
     * to the specified Amazon S3 bucket.</p>
     */
    inline DeliveryChannelStatus& WithConfigHistoryDeliveryInfo(const ConfigExportDeliveryInfo& value) { SetConfigHistoryDeliveryInfo(value); return *this;}

    /**
     * <p>A list that contains the status of the delivery of the configuration history
     * to the specified Amazon S3 bucket.</p>
     */
    inline DeliveryChannelStatus& WithConfigHistoryDeliveryInfo(ConfigExportDeliveryInfo&& value) { SetConfigHistoryDeliveryInfo(value); return *this;}

    /**
     * <p>A list containing the status of the delivery of the configuration stream
     * notification to the specified Amazon SNS topic.</p>
     */
    inline const ConfigStreamDeliveryInfo& GetConfigStreamDeliveryInfo() const{ return m_configStreamDeliveryInfo; }

    /**
     * <p>A list containing the status of the delivery of the configuration stream
     * notification to the specified Amazon SNS topic.</p>
     */
    inline void SetConfigStreamDeliveryInfo(const ConfigStreamDeliveryInfo& value) { m_configStreamDeliveryInfoHasBeenSet = true; m_configStreamDeliveryInfo = value; }

    /**
     * <p>A list containing the status of the delivery of the configuration stream
     * notification to the specified Amazon SNS topic.</p>
     */
    inline void SetConfigStreamDeliveryInfo(ConfigStreamDeliveryInfo&& value) { m_configStreamDeliveryInfoHasBeenSet = true; m_configStreamDeliveryInfo = value; }

    /**
     * <p>A list containing the status of the delivery of the configuration stream
     * notification to the specified Amazon SNS topic.</p>
     */
    inline DeliveryChannelStatus& WithConfigStreamDeliveryInfo(const ConfigStreamDeliveryInfo& value) { SetConfigStreamDeliveryInfo(value); return *this;}

    /**
     * <p>A list containing the status of the delivery of the configuration stream
     * notification to the specified Amazon SNS topic.</p>
     */
    inline DeliveryChannelStatus& WithConfigStreamDeliveryInfo(ConfigStreamDeliveryInfo&& value) { SetConfigStreamDeliveryInfo(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    ConfigExportDeliveryInfo m_configSnapshotDeliveryInfo;
    bool m_configSnapshotDeliveryInfoHasBeenSet;
    ConfigExportDeliveryInfo m_configHistoryDeliveryInfo;
    bool m_configHistoryDeliveryInfoHasBeenSet;
    ConfigStreamDeliveryInfo m_configStreamDeliveryInfo;
    bool m_configStreamDeliveryInfoHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

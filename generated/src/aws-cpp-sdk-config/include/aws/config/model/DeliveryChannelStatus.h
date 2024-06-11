/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigExportDeliveryInfo.h>
#include <aws/config/model/ConfigStreamDeliveryInfo.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The status of a specified delivery channel.</p> <p>Valid values:
   * <code>Success</code> | <code>Failure</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeliveryChannelStatus">AWS
   * API Reference</a></p>
   */
  class DeliveryChannelStatus
  {
  public:
    AWS_CONFIGSERVICE_API DeliveryChannelStatus();
    AWS_CONFIGSERVICE_API DeliveryChannelStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API DeliveryChannelStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the delivery channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DeliveryChannelStatus& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeliveryChannelStatus& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeliveryChannelStatus& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list containing the status of the delivery of the snapshot to the specified
     * Amazon S3 bucket.</p>
     */
    inline const ConfigExportDeliveryInfo& GetConfigSnapshotDeliveryInfo() const{ return m_configSnapshotDeliveryInfo; }
    inline bool ConfigSnapshotDeliveryInfoHasBeenSet() const { return m_configSnapshotDeliveryInfoHasBeenSet; }
    inline void SetConfigSnapshotDeliveryInfo(const ConfigExportDeliveryInfo& value) { m_configSnapshotDeliveryInfoHasBeenSet = true; m_configSnapshotDeliveryInfo = value; }
    inline void SetConfigSnapshotDeliveryInfo(ConfigExportDeliveryInfo&& value) { m_configSnapshotDeliveryInfoHasBeenSet = true; m_configSnapshotDeliveryInfo = std::move(value); }
    inline DeliveryChannelStatus& WithConfigSnapshotDeliveryInfo(const ConfigExportDeliveryInfo& value) { SetConfigSnapshotDeliveryInfo(value); return *this;}
    inline DeliveryChannelStatus& WithConfigSnapshotDeliveryInfo(ConfigExportDeliveryInfo&& value) { SetConfigSnapshotDeliveryInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that contains the status of the delivery of the configuration history
     * to the specified Amazon S3 bucket.</p>
     */
    inline const ConfigExportDeliveryInfo& GetConfigHistoryDeliveryInfo() const{ return m_configHistoryDeliveryInfo; }
    inline bool ConfigHistoryDeliveryInfoHasBeenSet() const { return m_configHistoryDeliveryInfoHasBeenSet; }
    inline void SetConfigHistoryDeliveryInfo(const ConfigExportDeliveryInfo& value) { m_configHistoryDeliveryInfoHasBeenSet = true; m_configHistoryDeliveryInfo = value; }
    inline void SetConfigHistoryDeliveryInfo(ConfigExportDeliveryInfo&& value) { m_configHistoryDeliveryInfoHasBeenSet = true; m_configHistoryDeliveryInfo = std::move(value); }
    inline DeliveryChannelStatus& WithConfigHistoryDeliveryInfo(const ConfigExportDeliveryInfo& value) { SetConfigHistoryDeliveryInfo(value); return *this;}
    inline DeliveryChannelStatus& WithConfigHistoryDeliveryInfo(ConfigExportDeliveryInfo&& value) { SetConfigHistoryDeliveryInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list containing the status of the delivery of the configuration stream
     * notification to the specified Amazon SNS topic.</p>
     */
    inline const ConfigStreamDeliveryInfo& GetConfigStreamDeliveryInfo() const{ return m_configStreamDeliveryInfo; }
    inline bool ConfigStreamDeliveryInfoHasBeenSet() const { return m_configStreamDeliveryInfoHasBeenSet; }
    inline void SetConfigStreamDeliveryInfo(const ConfigStreamDeliveryInfo& value) { m_configStreamDeliveryInfoHasBeenSet = true; m_configStreamDeliveryInfo = value; }
    inline void SetConfigStreamDeliveryInfo(ConfigStreamDeliveryInfo&& value) { m_configStreamDeliveryInfoHasBeenSet = true; m_configStreamDeliveryInfo = std::move(value); }
    inline DeliveryChannelStatus& WithConfigStreamDeliveryInfo(const ConfigStreamDeliveryInfo& value) { SetConfigStreamDeliveryInfo(value); return *this;}
    inline DeliveryChannelStatus& WithConfigStreamDeliveryInfo(ConfigStreamDeliveryInfo&& value) { SetConfigStreamDeliveryInfo(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ConfigExportDeliveryInfo m_configSnapshotDeliveryInfo;
    bool m_configSnapshotDeliveryInfoHasBeenSet = false;

    ConfigExportDeliveryInfo m_configHistoryDeliveryInfo;
    bool m_configHistoryDeliveryInfoHasBeenSet = false;

    ConfigStreamDeliveryInfo m_configStreamDeliveryInfo;
    bool m_configStreamDeliveryInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

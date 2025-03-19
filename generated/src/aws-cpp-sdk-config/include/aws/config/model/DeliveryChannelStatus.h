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
    AWS_CONFIGSERVICE_API DeliveryChannelStatus() = default;
    AWS_CONFIGSERVICE_API DeliveryChannelStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API DeliveryChannelStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the delivery channel.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DeliveryChannelStatus& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list containing the status of the delivery of the snapshot to the specified
     * Amazon S3 bucket.</p>
     */
    inline const ConfigExportDeliveryInfo& GetConfigSnapshotDeliveryInfo() const { return m_configSnapshotDeliveryInfo; }
    inline bool ConfigSnapshotDeliveryInfoHasBeenSet() const { return m_configSnapshotDeliveryInfoHasBeenSet; }
    template<typename ConfigSnapshotDeliveryInfoT = ConfigExportDeliveryInfo>
    void SetConfigSnapshotDeliveryInfo(ConfigSnapshotDeliveryInfoT&& value) { m_configSnapshotDeliveryInfoHasBeenSet = true; m_configSnapshotDeliveryInfo = std::forward<ConfigSnapshotDeliveryInfoT>(value); }
    template<typename ConfigSnapshotDeliveryInfoT = ConfigExportDeliveryInfo>
    DeliveryChannelStatus& WithConfigSnapshotDeliveryInfo(ConfigSnapshotDeliveryInfoT&& value) { SetConfigSnapshotDeliveryInfo(std::forward<ConfigSnapshotDeliveryInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that contains the status of the delivery of the configuration history
     * to the specified Amazon S3 bucket.</p>
     */
    inline const ConfigExportDeliveryInfo& GetConfigHistoryDeliveryInfo() const { return m_configHistoryDeliveryInfo; }
    inline bool ConfigHistoryDeliveryInfoHasBeenSet() const { return m_configHistoryDeliveryInfoHasBeenSet; }
    template<typename ConfigHistoryDeliveryInfoT = ConfigExportDeliveryInfo>
    void SetConfigHistoryDeliveryInfo(ConfigHistoryDeliveryInfoT&& value) { m_configHistoryDeliveryInfoHasBeenSet = true; m_configHistoryDeliveryInfo = std::forward<ConfigHistoryDeliveryInfoT>(value); }
    template<typename ConfigHistoryDeliveryInfoT = ConfigExportDeliveryInfo>
    DeliveryChannelStatus& WithConfigHistoryDeliveryInfo(ConfigHistoryDeliveryInfoT&& value) { SetConfigHistoryDeliveryInfo(std::forward<ConfigHistoryDeliveryInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list containing the status of the delivery of the configuration stream
     * notification to the specified Amazon SNS topic.</p>
     */
    inline const ConfigStreamDeliveryInfo& GetConfigStreamDeliveryInfo() const { return m_configStreamDeliveryInfo; }
    inline bool ConfigStreamDeliveryInfoHasBeenSet() const { return m_configStreamDeliveryInfoHasBeenSet; }
    template<typename ConfigStreamDeliveryInfoT = ConfigStreamDeliveryInfo>
    void SetConfigStreamDeliveryInfo(ConfigStreamDeliveryInfoT&& value) { m_configStreamDeliveryInfoHasBeenSet = true; m_configStreamDeliveryInfo = std::forward<ConfigStreamDeliveryInfoT>(value); }
    template<typename ConfigStreamDeliveryInfoT = ConfigStreamDeliveryInfo>
    DeliveryChannelStatus& WithConfigStreamDeliveryInfo(ConfigStreamDeliveryInfoT&& value) { SetConfigStreamDeliveryInfo(std::forward<ConfigStreamDeliveryInfoT>(value)); return *this;}
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

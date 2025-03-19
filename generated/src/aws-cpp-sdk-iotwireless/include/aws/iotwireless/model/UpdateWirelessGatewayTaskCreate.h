/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/LoRaWANUpdateGatewayTaskCreate.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>UpdateWirelessGatewayTaskCreate object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessGatewayTaskCreate">AWS
   * API Reference</a></p>
   */
  class UpdateWirelessGatewayTaskCreate
  {
  public:
    AWS_IOTWIRELESS_API UpdateWirelessGatewayTaskCreate() = default;
    AWS_IOTWIRELESS_API UpdateWirelessGatewayTaskCreate(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API UpdateWirelessGatewayTaskCreate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The link to the S3 bucket.</p>
     */
    inline const Aws::String& GetUpdateDataSource() const { return m_updateDataSource; }
    inline bool UpdateDataSourceHasBeenSet() const { return m_updateDataSourceHasBeenSet; }
    template<typename UpdateDataSourceT = Aws::String>
    void SetUpdateDataSource(UpdateDataSourceT&& value) { m_updateDataSourceHasBeenSet = true; m_updateDataSource = std::forward<UpdateDataSourceT>(value); }
    template<typename UpdateDataSourceT = Aws::String>
    UpdateWirelessGatewayTaskCreate& WithUpdateDataSource(UpdateDataSourceT&& value) { SetUpdateDataSource(std::forward<UpdateDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role used to read data from the S3 bucket.</p>
     */
    inline const Aws::String& GetUpdateDataRole() const { return m_updateDataRole; }
    inline bool UpdateDataRoleHasBeenSet() const { return m_updateDataRoleHasBeenSet; }
    template<typename UpdateDataRoleT = Aws::String>
    void SetUpdateDataRole(UpdateDataRoleT&& value) { m_updateDataRoleHasBeenSet = true; m_updateDataRole = std::forward<UpdateDataRoleT>(value); }
    template<typename UpdateDataRoleT = Aws::String>
    UpdateWirelessGatewayTaskCreate& WithUpdateDataRole(UpdateDataRoleT&& value) { SetUpdateDataRole(std::forward<UpdateDataRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties that relate to the LoRaWAN wireless gateway.</p>
     */
    inline const LoRaWANUpdateGatewayTaskCreate& GetLoRaWAN() const { return m_loRaWAN; }
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }
    template<typename LoRaWANT = LoRaWANUpdateGatewayTaskCreate>
    void SetLoRaWAN(LoRaWANT&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::forward<LoRaWANT>(value); }
    template<typename LoRaWANT = LoRaWANUpdateGatewayTaskCreate>
    UpdateWirelessGatewayTaskCreate& WithLoRaWAN(LoRaWANT&& value) { SetLoRaWAN(std::forward<LoRaWANT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_updateDataSource;
    bool m_updateDataSourceHasBeenSet = false;

    Aws::String m_updateDataRole;
    bool m_updateDataRoleHasBeenSet = false;

    LoRaWANUpdateGatewayTaskCreate m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

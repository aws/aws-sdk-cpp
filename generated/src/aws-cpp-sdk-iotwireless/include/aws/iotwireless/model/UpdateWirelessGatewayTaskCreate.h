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
    AWS_IOTWIRELESS_API UpdateWirelessGatewayTaskCreate();
    AWS_IOTWIRELESS_API UpdateWirelessGatewayTaskCreate(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API UpdateWirelessGatewayTaskCreate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The link to the S3 bucket.</p>
     */
    inline const Aws::String& GetUpdateDataSource() const{ return m_updateDataSource; }

    /**
     * <p>The link to the S3 bucket.</p>
     */
    inline bool UpdateDataSourceHasBeenSet() const { return m_updateDataSourceHasBeenSet; }

    /**
     * <p>The link to the S3 bucket.</p>
     */
    inline void SetUpdateDataSource(const Aws::String& value) { m_updateDataSourceHasBeenSet = true; m_updateDataSource = value; }

    /**
     * <p>The link to the S3 bucket.</p>
     */
    inline void SetUpdateDataSource(Aws::String&& value) { m_updateDataSourceHasBeenSet = true; m_updateDataSource = std::move(value); }

    /**
     * <p>The link to the S3 bucket.</p>
     */
    inline void SetUpdateDataSource(const char* value) { m_updateDataSourceHasBeenSet = true; m_updateDataSource.assign(value); }

    /**
     * <p>The link to the S3 bucket.</p>
     */
    inline UpdateWirelessGatewayTaskCreate& WithUpdateDataSource(const Aws::String& value) { SetUpdateDataSource(value); return *this;}

    /**
     * <p>The link to the S3 bucket.</p>
     */
    inline UpdateWirelessGatewayTaskCreate& WithUpdateDataSource(Aws::String&& value) { SetUpdateDataSource(std::move(value)); return *this;}

    /**
     * <p>The link to the S3 bucket.</p>
     */
    inline UpdateWirelessGatewayTaskCreate& WithUpdateDataSource(const char* value) { SetUpdateDataSource(value); return *this;}


    /**
     * <p>The IAM role used to read data from the S3 bucket.</p>
     */
    inline const Aws::String& GetUpdateDataRole() const{ return m_updateDataRole; }

    /**
     * <p>The IAM role used to read data from the S3 bucket.</p>
     */
    inline bool UpdateDataRoleHasBeenSet() const { return m_updateDataRoleHasBeenSet; }

    /**
     * <p>The IAM role used to read data from the S3 bucket.</p>
     */
    inline void SetUpdateDataRole(const Aws::String& value) { m_updateDataRoleHasBeenSet = true; m_updateDataRole = value; }

    /**
     * <p>The IAM role used to read data from the S3 bucket.</p>
     */
    inline void SetUpdateDataRole(Aws::String&& value) { m_updateDataRoleHasBeenSet = true; m_updateDataRole = std::move(value); }

    /**
     * <p>The IAM role used to read data from the S3 bucket.</p>
     */
    inline void SetUpdateDataRole(const char* value) { m_updateDataRoleHasBeenSet = true; m_updateDataRole.assign(value); }

    /**
     * <p>The IAM role used to read data from the S3 bucket.</p>
     */
    inline UpdateWirelessGatewayTaskCreate& WithUpdateDataRole(const Aws::String& value) { SetUpdateDataRole(value); return *this;}

    /**
     * <p>The IAM role used to read data from the S3 bucket.</p>
     */
    inline UpdateWirelessGatewayTaskCreate& WithUpdateDataRole(Aws::String&& value) { SetUpdateDataRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role used to read data from the S3 bucket.</p>
     */
    inline UpdateWirelessGatewayTaskCreate& WithUpdateDataRole(const char* value) { SetUpdateDataRole(value); return *this;}


    /**
     * <p>The properties that relate to the LoRaWAN wireless gateway.</p>
     */
    inline const LoRaWANUpdateGatewayTaskCreate& GetLoRaWAN() const{ return m_loRaWAN; }

    /**
     * <p>The properties that relate to the LoRaWAN wireless gateway.</p>
     */
    inline bool LoRaWANHasBeenSet() const { return m_loRaWANHasBeenSet; }

    /**
     * <p>The properties that relate to the LoRaWAN wireless gateway.</p>
     */
    inline void SetLoRaWAN(const LoRaWANUpdateGatewayTaskCreate& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = value; }

    /**
     * <p>The properties that relate to the LoRaWAN wireless gateway.</p>
     */
    inline void SetLoRaWAN(LoRaWANUpdateGatewayTaskCreate&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::move(value); }

    /**
     * <p>The properties that relate to the LoRaWAN wireless gateway.</p>
     */
    inline UpdateWirelessGatewayTaskCreate& WithLoRaWAN(const LoRaWANUpdateGatewayTaskCreate& value) { SetLoRaWAN(value); return *this;}

    /**
     * <p>The properties that relate to the LoRaWAN wireless gateway.</p>
     */
    inline UpdateWirelessGatewayTaskCreate& WithLoRaWAN(LoRaWANUpdateGatewayTaskCreate&& value) { SetLoRaWAN(std::move(value)); return *this;}

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

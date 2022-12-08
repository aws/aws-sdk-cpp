/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/WirelessDeviceIdType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class GetWirelessDeviceRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWirelessDevice"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the wireless device to get.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the wireless device to get.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the wireless device to get.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the wireless device to get.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the wireless device to get.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the wireless device to get.</p>
     */
    inline GetWirelessDeviceRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the wireless device to get.</p>
     */
    inline GetWirelessDeviceRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the wireless device to get.</p>
     */
    inline GetWirelessDeviceRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The type of identifier used in <code>identifier</code>.</p>
     */
    inline const WirelessDeviceIdType& GetIdentifierType() const{ return m_identifierType; }

    /**
     * <p>The type of identifier used in <code>identifier</code>.</p>
     */
    inline bool IdentifierTypeHasBeenSet() const { return m_identifierTypeHasBeenSet; }

    /**
     * <p>The type of identifier used in <code>identifier</code>.</p>
     */
    inline void SetIdentifierType(const WirelessDeviceIdType& value) { m_identifierTypeHasBeenSet = true; m_identifierType = value; }

    /**
     * <p>The type of identifier used in <code>identifier</code>.</p>
     */
    inline void SetIdentifierType(WirelessDeviceIdType&& value) { m_identifierTypeHasBeenSet = true; m_identifierType = std::move(value); }

    /**
     * <p>The type of identifier used in <code>identifier</code>.</p>
     */
    inline GetWirelessDeviceRequest& WithIdentifierType(const WirelessDeviceIdType& value) { SetIdentifierType(value); return *this;}

    /**
     * <p>The type of identifier used in <code>identifier</code>.</p>
     */
    inline GetWirelessDeviceRequest& WithIdentifierType(WirelessDeviceIdType&& value) { SetIdentifierType(std::move(value)); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    WirelessDeviceIdType m_identifierType;
    bool m_identifierTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

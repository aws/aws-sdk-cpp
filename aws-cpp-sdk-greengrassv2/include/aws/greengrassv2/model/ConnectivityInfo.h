/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about an endpoint and port where client devices can
   * connect to an MQTT broker on a Greengrass core device.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ConnectivityInfo">AWS
   * API Reference</a></p>
   */
  class ConnectivityInfo
  {
  public:
    AWS_GREENGRASSV2_API ConnectivityInfo();
    AWS_GREENGRASSV2_API ConnectivityInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API ConnectivityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An ID for the connectivity information.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>An ID for the connectivity information.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>An ID for the connectivity information.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>An ID for the connectivity information.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>An ID for the connectivity information.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>An ID for the connectivity information.</p>
     */
    inline ConnectivityInfo& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>An ID for the connectivity information.</p>
     */
    inline ConnectivityInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>An ID for the connectivity information.</p>
     */
    inline ConnectivityInfo& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The IP address or DNS address where client devices can connect to an MQTT
     * broker on the Greengrass core device.</p>
     */
    inline const Aws::String& GetHostAddress() const{ return m_hostAddress; }

    /**
     * <p>The IP address or DNS address where client devices can connect to an MQTT
     * broker on the Greengrass core device.</p>
     */
    inline bool HostAddressHasBeenSet() const { return m_hostAddressHasBeenSet; }

    /**
     * <p>The IP address or DNS address where client devices can connect to an MQTT
     * broker on the Greengrass core device.</p>
     */
    inline void SetHostAddress(const Aws::String& value) { m_hostAddressHasBeenSet = true; m_hostAddress = value; }

    /**
     * <p>The IP address or DNS address where client devices can connect to an MQTT
     * broker on the Greengrass core device.</p>
     */
    inline void SetHostAddress(Aws::String&& value) { m_hostAddressHasBeenSet = true; m_hostAddress = std::move(value); }

    /**
     * <p>The IP address or DNS address where client devices can connect to an MQTT
     * broker on the Greengrass core device.</p>
     */
    inline void SetHostAddress(const char* value) { m_hostAddressHasBeenSet = true; m_hostAddress.assign(value); }

    /**
     * <p>The IP address or DNS address where client devices can connect to an MQTT
     * broker on the Greengrass core device.</p>
     */
    inline ConnectivityInfo& WithHostAddress(const Aws::String& value) { SetHostAddress(value); return *this;}

    /**
     * <p>The IP address or DNS address where client devices can connect to an MQTT
     * broker on the Greengrass core device.</p>
     */
    inline ConnectivityInfo& WithHostAddress(Aws::String&& value) { SetHostAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address or DNS address where client devices can connect to an MQTT
     * broker on the Greengrass core device.</p>
     */
    inline ConnectivityInfo& WithHostAddress(const char* value) { SetHostAddress(value); return *this;}


    /**
     * <p>The port where the MQTT broker operates on the core device. This port is
     * typically 8883, which is the default port for the MQTT broker component that
     * runs on core devices.</p>
     */
    inline int GetPortNumber() const{ return m_portNumber; }

    /**
     * <p>The port where the MQTT broker operates on the core device. This port is
     * typically 8883, which is the default port for the MQTT broker component that
     * runs on core devices.</p>
     */
    inline bool PortNumberHasBeenSet() const { return m_portNumberHasBeenSet; }

    /**
     * <p>The port where the MQTT broker operates on the core device. This port is
     * typically 8883, which is the default port for the MQTT broker component that
     * runs on core devices.</p>
     */
    inline void SetPortNumber(int value) { m_portNumberHasBeenSet = true; m_portNumber = value; }

    /**
     * <p>The port where the MQTT broker operates on the core device. This port is
     * typically 8883, which is the default port for the MQTT broker component that
     * runs on core devices.</p>
     */
    inline ConnectivityInfo& WithPortNumber(int value) { SetPortNumber(value); return *this;}


    /**
     * <p>Additional metadata to provide to client devices that connect to this core
     * device.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Additional metadata to provide to client devices that connect to this core
     * device.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>Additional metadata to provide to client devices that connect to this core
     * device.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>Additional metadata to provide to client devices that connect to this core
     * device.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>Additional metadata to provide to client devices that connect to this core
     * device.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>Additional metadata to provide to client devices that connect to this core
     * device.</p>
     */
    inline ConnectivityInfo& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>Additional metadata to provide to client devices that connect to this core
     * device.</p>
     */
    inline ConnectivityInfo& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>Additional metadata to provide to client devices that connect to this core
     * device.</p>
     */
    inline ConnectivityInfo& WithMetadata(const char* value) { SetMetadata(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_hostAddress;
    bool m_hostAddressHasBeenSet = false;

    int m_portNumber;
    bool m_portNumberHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws

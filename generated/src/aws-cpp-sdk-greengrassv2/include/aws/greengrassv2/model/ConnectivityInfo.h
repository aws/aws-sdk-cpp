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
    AWS_GREENGRASSV2_API ConnectivityInfo() = default;
    AWS_GREENGRASSV2_API ConnectivityInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API ConnectivityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An ID for the connectivity information.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ConnectivityInfo& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address or DNS address where client devices can connect to an MQTT
     * broker on the Greengrass core device.</p>
     */
    inline const Aws::String& GetHostAddress() const { return m_hostAddress; }
    inline bool HostAddressHasBeenSet() const { return m_hostAddressHasBeenSet; }
    template<typename HostAddressT = Aws::String>
    void SetHostAddress(HostAddressT&& value) { m_hostAddressHasBeenSet = true; m_hostAddress = std::forward<HostAddressT>(value); }
    template<typename HostAddressT = Aws::String>
    ConnectivityInfo& WithHostAddress(HostAddressT&& value) { SetHostAddress(std::forward<HostAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port where the MQTT broker operates on the core device. This port is
     * typically 8883, which is the default port for the MQTT broker component that
     * runs on core devices.</p>
     */
    inline int GetPortNumber() const { return m_portNumber; }
    inline bool PortNumberHasBeenSet() const { return m_portNumberHasBeenSet; }
    inline void SetPortNumber(int value) { m_portNumberHasBeenSet = true; m_portNumber = value; }
    inline ConnectivityInfo& WithPortNumber(int value) { SetPortNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional metadata to provide to client devices that connect to this core
     * device.</p>
     */
    inline const Aws::String& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::String>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::String>
    ConnectivityInfo& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_hostAddress;
    bool m_hostAddressHasBeenSet = false;

    int m_portNumber{0};
    bool m_portNumberHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws

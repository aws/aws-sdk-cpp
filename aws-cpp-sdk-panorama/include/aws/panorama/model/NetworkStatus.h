/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/EthernetStatus.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>The network status of a device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NetworkStatus">AWS
   * API Reference</a></p>
   */
  class AWS_PANORAMA_API NetworkStatus
  {
  public:
    NetworkStatus();
    NetworkStatus(Aws::Utils::Json::JsonView jsonValue);
    NetworkStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of Ethernet port 0.</p>
     */
    inline const EthernetStatus& GetEthernet0Status() const{ return m_ethernet0Status; }

    /**
     * <p>The status of Ethernet port 0.</p>
     */
    inline bool Ethernet0StatusHasBeenSet() const { return m_ethernet0StatusHasBeenSet; }

    /**
     * <p>The status of Ethernet port 0.</p>
     */
    inline void SetEthernet0Status(const EthernetStatus& value) { m_ethernet0StatusHasBeenSet = true; m_ethernet0Status = value; }

    /**
     * <p>The status of Ethernet port 0.</p>
     */
    inline void SetEthernet0Status(EthernetStatus&& value) { m_ethernet0StatusHasBeenSet = true; m_ethernet0Status = std::move(value); }

    /**
     * <p>The status of Ethernet port 0.</p>
     */
    inline NetworkStatus& WithEthernet0Status(const EthernetStatus& value) { SetEthernet0Status(value); return *this;}

    /**
     * <p>The status of Ethernet port 0.</p>
     */
    inline NetworkStatus& WithEthernet0Status(EthernetStatus&& value) { SetEthernet0Status(std::move(value)); return *this;}


    /**
     * <p>The status of Ethernet port 1.</p>
     */
    inline const EthernetStatus& GetEthernet1Status() const{ return m_ethernet1Status; }

    /**
     * <p>The status of Ethernet port 1.</p>
     */
    inline bool Ethernet1StatusHasBeenSet() const { return m_ethernet1StatusHasBeenSet; }

    /**
     * <p>The status of Ethernet port 1.</p>
     */
    inline void SetEthernet1Status(const EthernetStatus& value) { m_ethernet1StatusHasBeenSet = true; m_ethernet1Status = value; }

    /**
     * <p>The status of Ethernet port 1.</p>
     */
    inline void SetEthernet1Status(EthernetStatus&& value) { m_ethernet1StatusHasBeenSet = true; m_ethernet1Status = std::move(value); }

    /**
     * <p>The status of Ethernet port 1.</p>
     */
    inline NetworkStatus& WithEthernet1Status(const EthernetStatus& value) { SetEthernet1Status(value); return *this;}

    /**
     * <p>The status of Ethernet port 1.</p>
     */
    inline NetworkStatus& WithEthernet1Status(EthernetStatus&& value) { SetEthernet1Status(std::move(value)); return *this;}

  private:

    EthernetStatus m_ethernet0Status;
    bool m_ethernet0StatusHasBeenSet;

    EthernetStatus m_ethernet1Status;
    bool m_ethernet1StatusHasBeenSet;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

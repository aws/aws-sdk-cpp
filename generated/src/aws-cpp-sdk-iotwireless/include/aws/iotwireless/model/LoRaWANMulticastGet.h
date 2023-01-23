/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SupportedRfRegion.h>
#include <aws/iotwireless/model/DlClass.h>
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
   * <p>The LoRaWAN information that is to be returned from getting multicast group
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANMulticastGet">AWS
   * API Reference</a></p>
   */
  class LoRaWANMulticastGet
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANMulticastGet();
    AWS_IOTWIRELESS_API LoRaWANMulticastGet(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANMulticastGet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const SupportedRfRegion& GetRfRegion() const{ return m_rfRegion; }

    
    inline bool RfRegionHasBeenSet() const { return m_rfRegionHasBeenSet; }

    
    inline void SetRfRegion(const SupportedRfRegion& value) { m_rfRegionHasBeenSet = true; m_rfRegion = value; }

    
    inline void SetRfRegion(SupportedRfRegion&& value) { m_rfRegionHasBeenSet = true; m_rfRegion = std::move(value); }

    
    inline LoRaWANMulticastGet& WithRfRegion(const SupportedRfRegion& value) { SetRfRegion(value); return *this;}

    
    inline LoRaWANMulticastGet& WithRfRegion(SupportedRfRegion&& value) { SetRfRegion(std::move(value)); return *this;}


    
    inline const DlClass& GetDlClass() const{ return m_dlClass; }

    
    inline bool DlClassHasBeenSet() const { return m_dlClassHasBeenSet; }

    
    inline void SetDlClass(const DlClass& value) { m_dlClassHasBeenSet = true; m_dlClass = value; }

    
    inline void SetDlClass(DlClass&& value) { m_dlClassHasBeenSet = true; m_dlClass = std::move(value); }

    
    inline LoRaWANMulticastGet& WithDlClass(const DlClass& value) { SetDlClass(value); return *this;}

    
    inline LoRaWANMulticastGet& WithDlClass(DlClass&& value) { SetDlClass(std::move(value)); return *this;}


    
    inline int GetNumberOfDevicesRequested() const{ return m_numberOfDevicesRequested; }

    
    inline bool NumberOfDevicesRequestedHasBeenSet() const { return m_numberOfDevicesRequestedHasBeenSet; }

    
    inline void SetNumberOfDevicesRequested(int value) { m_numberOfDevicesRequestedHasBeenSet = true; m_numberOfDevicesRequested = value; }

    
    inline LoRaWANMulticastGet& WithNumberOfDevicesRequested(int value) { SetNumberOfDevicesRequested(value); return *this;}


    
    inline int GetNumberOfDevicesInGroup() const{ return m_numberOfDevicesInGroup; }

    
    inline bool NumberOfDevicesInGroupHasBeenSet() const { return m_numberOfDevicesInGroupHasBeenSet; }

    
    inline void SetNumberOfDevicesInGroup(int value) { m_numberOfDevicesInGroupHasBeenSet = true; m_numberOfDevicesInGroup = value; }

    
    inline LoRaWANMulticastGet& WithNumberOfDevicesInGroup(int value) { SetNumberOfDevicesInGroup(value); return *this;}

  private:

    SupportedRfRegion m_rfRegion;
    bool m_rfRegionHasBeenSet = false;

    DlClass m_dlClass;
    bool m_dlClassHasBeenSet = false;

    int m_numberOfDevicesRequested;
    bool m_numberOfDevicesRequestedHasBeenSet = false;

    int m_numberOfDevicesInGroup;
    bool m_numberOfDevicesInGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

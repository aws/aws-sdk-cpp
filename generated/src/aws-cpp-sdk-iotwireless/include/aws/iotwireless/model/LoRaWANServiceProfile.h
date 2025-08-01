/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

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
   * <p>LoRaWANServiceProfile object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANServiceProfile">AWS
   * API Reference</a></p>
   */
  class LoRaWANServiceProfile
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANServiceProfile() = default;
    AWS_IOTWIRELESS_API LoRaWANServiceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANServiceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AddGWMetaData value.</p>
     */
    inline bool GetAddGwMetadata() const { return m_addGwMetadata; }
    inline bool AddGwMetadataHasBeenSet() const { return m_addGwMetadataHasBeenSet; }
    inline void SetAddGwMetadata(bool value) { m_addGwMetadataHasBeenSet = true; m_addGwMetadata = value; }
    inline LoRaWANServiceProfile& WithAddGwMetadata(bool value) { SetAddGwMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DrMin value.</p>
     */
    inline int GetDrMin() const { return m_drMin; }
    inline bool DrMinHasBeenSet() const { return m_drMinHasBeenSet; }
    inline void SetDrMin(int value) { m_drMinHasBeenSet = true; m_drMin = value; }
    inline LoRaWANServiceProfile& WithDrMin(int value) { SetDrMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DrMax value.</p>
     */
    inline int GetDrMax() const { return m_drMax; }
    inline bool DrMaxHasBeenSet() const { return m_drMaxHasBeenSet; }
    inline void SetDrMax(int value) { m_drMaxHasBeenSet = true; m_drMax = value; }
    inline LoRaWANServiceProfile& WithDrMax(int value) { SetDrMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PRAllowed value that describes whether passive roaming is allowed.</p>
     */
    inline bool GetPrAllowed() const { return m_prAllowed; }
    inline bool PrAllowedHasBeenSet() const { return m_prAllowedHasBeenSet; }
    inline void SetPrAllowed(bool value) { m_prAllowedHasBeenSet = true; m_prAllowed = value; }
    inline LoRaWANServiceProfile& WithPrAllowed(bool value) { SetPrAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RAAllowed value that describes whether roaming activation is allowed.</p>
     */
    inline bool GetRaAllowed() const { return m_raAllowed; }
    inline bool RaAllowedHasBeenSet() const { return m_raAllowedHasBeenSet; }
    inline void SetRaAllowed(bool value) { m_raAllowedHasBeenSet = true; m_raAllowed = value; }
    inline LoRaWANServiceProfile& WithRaAllowed(bool value) { SetRaAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Transmit Power Index minimum.</p> <p>Default: <code>0</code> </p>
     */
    inline int GetTxPowerIndexMin() const { return m_txPowerIndexMin; }
    inline bool TxPowerIndexMinHasBeenSet() const { return m_txPowerIndexMinHasBeenSet; }
    inline void SetTxPowerIndexMin(int value) { m_txPowerIndexMinHasBeenSet = true; m_txPowerIndexMin = value; }
    inline LoRaWANServiceProfile& WithTxPowerIndexMin(int value) { SetTxPowerIndexMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Transmit Power Index maximum.</p> <p>Default: <code>15</code> </p>
     */
    inline int GetTxPowerIndexMax() const { return m_txPowerIndexMax; }
    inline bool TxPowerIndexMaxHasBeenSet() const { return m_txPowerIndexMaxHasBeenSet; }
    inline void SetTxPowerIndexMax(int value) { m_txPowerIndexMaxHasBeenSet = true; m_txPowerIndexMax = value; }
    inline LoRaWANServiceProfile& WithTxPowerIndexMax(int value) { SetTxPowerIndexMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of transmissions.</p> <p>Default: <code>0</code> </p>
     */
    inline int GetNbTransMin() const { return m_nbTransMin; }
    inline bool NbTransMinHasBeenSet() const { return m_nbTransMinHasBeenSet; }
    inline void SetNbTransMin(int value) { m_nbTransMinHasBeenSet = true; m_nbTransMin = value; }
    inline LoRaWANServiceProfile& WithNbTransMin(int value) { SetNbTransMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of transmissions.</p> <p>Default: <code>3</code> </p>
     */
    inline int GetNbTransMax() const { return m_nbTransMax; }
    inline bool NbTransMaxHasBeenSet() const { return m_nbTransMaxHasBeenSet; }
    inline void SetNbTransMax(int value) { m_nbTransMaxHasBeenSet = true; m_nbTransMax = value; }
    inline LoRaWANServiceProfile& WithNbTransMax(int value) { SetNbTransMax(value); return *this;}
    ///@}
  private:

    bool m_addGwMetadata{false};
    bool m_addGwMetadataHasBeenSet = false;

    int m_drMin{0};
    bool m_drMinHasBeenSet = false;

    int m_drMax{0};
    bool m_drMaxHasBeenSet = false;

    bool m_prAllowed{false};
    bool m_prAllowedHasBeenSet = false;

    bool m_raAllowed{false};
    bool m_raAllowedHasBeenSet = false;

    int m_txPowerIndexMin{0};
    bool m_txPowerIndexMinHasBeenSet = false;

    int m_txPowerIndexMax{0};
    bool m_txPowerIndexMaxHasBeenSet = false;

    int m_nbTransMin{0};
    bool m_nbTransMinHasBeenSet = false;

    int m_nbTransMax{0};
    bool m_nbTransMaxHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

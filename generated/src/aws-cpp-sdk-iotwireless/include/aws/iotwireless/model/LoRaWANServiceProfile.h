﻿/**
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
    AWS_IOTWIRELESS_API LoRaWANServiceProfile();
    AWS_IOTWIRELESS_API LoRaWANServiceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANServiceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AddGWMetaData value.</p>
     */
    inline bool GetAddGwMetadata() const{ return m_addGwMetadata; }

    /**
     * <p>The AddGWMetaData value.</p>
     */
    inline bool AddGwMetadataHasBeenSet() const { return m_addGwMetadataHasBeenSet; }

    /**
     * <p>The AddGWMetaData value.</p>
     */
    inline void SetAddGwMetadata(bool value) { m_addGwMetadataHasBeenSet = true; m_addGwMetadata = value; }

    /**
     * <p>The AddGWMetaData value.</p>
     */
    inline LoRaWANServiceProfile& WithAddGwMetadata(bool value) { SetAddGwMetadata(value); return *this;}


    /**
     * <p>The DrMin value.</p>
     */
    inline int GetDrMin() const{ return m_drMin; }

    /**
     * <p>The DrMin value.</p>
     */
    inline bool DrMinHasBeenSet() const { return m_drMinHasBeenSet; }

    /**
     * <p>The DrMin value.</p>
     */
    inline void SetDrMin(int value) { m_drMinHasBeenSet = true; m_drMin = value; }

    /**
     * <p>The DrMin value.</p>
     */
    inline LoRaWANServiceProfile& WithDrMin(int value) { SetDrMin(value); return *this;}


    /**
     * <p>The DrMax value.</p>
     */
    inline int GetDrMax() const{ return m_drMax; }

    /**
     * <p>The DrMax value.</p>
     */
    inline bool DrMaxHasBeenSet() const { return m_drMaxHasBeenSet; }

    /**
     * <p>The DrMax value.</p>
     */
    inline void SetDrMax(int value) { m_drMaxHasBeenSet = true; m_drMax = value; }

    /**
     * <p>The DrMax value.</p>
     */
    inline LoRaWANServiceProfile& WithDrMax(int value) { SetDrMax(value); return *this;}


    /**
     * <p>The PRAllowed value that describes whether passive roaming is allowed.</p>
     */
    inline bool GetPrAllowed() const{ return m_prAllowed; }

    /**
     * <p>The PRAllowed value that describes whether passive roaming is allowed.</p>
     */
    inline bool PrAllowedHasBeenSet() const { return m_prAllowedHasBeenSet; }

    /**
     * <p>The PRAllowed value that describes whether passive roaming is allowed.</p>
     */
    inline void SetPrAllowed(bool value) { m_prAllowedHasBeenSet = true; m_prAllowed = value; }

    /**
     * <p>The PRAllowed value that describes whether passive roaming is allowed.</p>
     */
    inline LoRaWANServiceProfile& WithPrAllowed(bool value) { SetPrAllowed(value); return *this;}


    /**
     * <p>The RAAllowed value that describes whether roaming activation is allowed.</p>
     */
    inline bool GetRaAllowed() const{ return m_raAllowed; }

    /**
     * <p>The RAAllowed value that describes whether roaming activation is allowed.</p>
     */
    inline bool RaAllowedHasBeenSet() const { return m_raAllowedHasBeenSet; }

    /**
     * <p>The RAAllowed value that describes whether roaming activation is allowed.</p>
     */
    inline void SetRaAllowed(bool value) { m_raAllowedHasBeenSet = true; m_raAllowed = value; }

    /**
     * <p>The RAAllowed value that describes whether roaming activation is allowed.</p>
     */
    inline LoRaWANServiceProfile& WithRaAllowed(bool value) { SetRaAllowed(value); return *this;}

  private:

    bool m_addGwMetadata;
    bool m_addGwMetadataHasBeenSet = false;

    int m_drMin;
    bool m_drMinHasBeenSet = false;

    int m_drMax;
    bool m_drMaxHasBeenSet = false;

    bool m_prAllowed;
    bool m_prAllowedHasBeenSet = false;

    bool m_raAllowed;
    bool m_raAllowedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

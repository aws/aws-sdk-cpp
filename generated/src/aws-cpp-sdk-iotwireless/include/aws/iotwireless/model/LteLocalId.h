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
   * <p>LTE local identification (local ID) information.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LteLocalId">AWS
   * API Reference</a></p>
   */
  class LteLocalId
  {
  public:
    AWS_IOTWIRELESS_API LteLocalId();
    AWS_IOTWIRELESS_API LteLocalId(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LteLocalId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Physical cell ID.</p>
     */
    inline int GetPci() const{ return m_pci; }

    /**
     * <p>Physical cell ID.</p>
     */
    inline bool PciHasBeenSet() const { return m_pciHasBeenSet; }

    /**
     * <p>Physical cell ID.</p>
     */
    inline void SetPci(int value) { m_pciHasBeenSet = true; m_pci = value; }

    /**
     * <p>Physical cell ID.</p>
     */
    inline LteLocalId& WithPci(int value) { SetPci(value); return *this;}


    /**
     * <p>Evolved universal terrestrial radio access (E-UTRA) absolute radio frequency
     * channel number (FCN).</p>
     */
    inline int GetEarfcn() const{ return m_earfcn; }

    /**
     * <p>Evolved universal terrestrial radio access (E-UTRA) absolute radio frequency
     * channel number (FCN).</p>
     */
    inline bool EarfcnHasBeenSet() const { return m_earfcnHasBeenSet; }

    /**
     * <p>Evolved universal terrestrial radio access (E-UTRA) absolute radio frequency
     * channel number (FCN).</p>
     */
    inline void SetEarfcn(int value) { m_earfcnHasBeenSet = true; m_earfcn = value; }

    /**
     * <p>Evolved universal terrestrial radio access (E-UTRA) absolute radio frequency
     * channel number (FCN).</p>
     */
    inline LteLocalId& WithEarfcn(int value) { SetEarfcn(value); return *this;}

  private:

    int m_pci;
    bool m_pciHasBeenSet = false;

    int m_earfcn;
    bool m_earfcnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

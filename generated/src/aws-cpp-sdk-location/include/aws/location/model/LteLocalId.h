/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>

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
namespace LocationService
{
namespace Model
{

  /**
   * <p>LTE local identification information (local ID).</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/LteLocalId">AWS
   * API Reference</a></p>
   */
  class LteLocalId
  {
  public:
    AWS_LOCATIONSERVICE_API LteLocalId() = default;
    AWS_LOCATIONSERVICE_API LteLocalId(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API LteLocalId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>E-UTRA (Evolved Universal Terrestrial Radio Access) absolute radio frequency
     * channel number (EARFCN).</p>
     */
    inline int GetEarfcn() const { return m_earfcn; }
    inline bool EarfcnHasBeenSet() const { return m_earfcnHasBeenSet; }
    inline void SetEarfcn(int value) { m_earfcnHasBeenSet = true; m_earfcn = value; }
    inline LteLocalId& WithEarfcn(int value) { SetEarfcn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Physical Cell ID (PCI).</p>
     */
    inline int GetPci() const { return m_pci; }
    inline bool PciHasBeenSet() const { return m_pciHasBeenSet; }
    inline void SetPci(int value) { m_pciHasBeenSet = true; m_pci = value; }
    inline LteLocalId& WithPci(int value) { SetPci(value); return *this;}
    ///@}
  private:

    int m_earfcn{0};
    bool m_earfcnHasBeenSet = false;

    int m_pci{0};
    bool m_pciHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws

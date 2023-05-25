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
   * <p>TD-SCDMA local identification (local Id) information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TdscdmaLocalId">AWS
   * API Reference</a></p>
   */
  class TdscdmaLocalId
  {
  public:
    AWS_IOTWIRELESS_API TdscdmaLocalId();
    AWS_IOTWIRELESS_API TdscdmaLocalId(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API TdscdmaLocalId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>TD-SCDMA UTRA (Universal Terrestrial Radio Access Network) absolute RF
     * channel number (UARFCN).</p>
     */
    inline int GetUarfcn() const{ return m_uarfcn; }

    /**
     * <p>TD-SCDMA UTRA (Universal Terrestrial Radio Access Network) absolute RF
     * channel number (UARFCN).</p>
     */
    inline bool UarfcnHasBeenSet() const { return m_uarfcnHasBeenSet; }

    /**
     * <p>TD-SCDMA UTRA (Universal Terrestrial Radio Access Network) absolute RF
     * channel number (UARFCN).</p>
     */
    inline void SetUarfcn(int value) { m_uarfcnHasBeenSet = true; m_uarfcn = value; }

    /**
     * <p>TD-SCDMA UTRA (Universal Terrestrial Radio Access Network) absolute RF
     * channel number (UARFCN).</p>
     */
    inline TdscdmaLocalId& WithUarfcn(int value) { SetUarfcn(value); return *this;}


    /**
     * <p>Cell parameters for TD-SCDMA.</p>
     */
    inline int GetCellParams() const{ return m_cellParams; }

    /**
     * <p>Cell parameters for TD-SCDMA.</p>
     */
    inline bool CellParamsHasBeenSet() const { return m_cellParamsHasBeenSet; }

    /**
     * <p>Cell parameters for TD-SCDMA.</p>
     */
    inline void SetCellParams(int value) { m_cellParamsHasBeenSet = true; m_cellParams = value; }

    /**
     * <p>Cell parameters for TD-SCDMA.</p>
     */
    inline TdscdmaLocalId& WithCellParams(int value) { SetCellParams(value); return *this;}

  private:

    int m_uarfcn;
    bool m_uarfcnHasBeenSet = false;

    int m_cellParams;
    bool m_cellParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

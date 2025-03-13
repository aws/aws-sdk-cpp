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
    AWS_IOTWIRELESS_API TdscdmaLocalId() = default;
    AWS_IOTWIRELESS_API TdscdmaLocalId(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API TdscdmaLocalId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>TD-SCDMA UTRA (Universal Terrestrial Radio Access Network) absolute RF
     * channel number (UARFCN).</p>
     */
    inline int GetUarfcn() const { return m_uarfcn; }
    inline bool UarfcnHasBeenSet() const { return m_uarfcnHasBeenSet; }
    inline void SetUarfcn(int value) { m_uarfcnHasBeenSet = true; m_uarfcn = value; }
    inline TdscdmaLocalId& WithUarfcn(int value) { SetUarfcn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cell parameters for TD-SCDMA.</p>
     */
    inline int GetCellParams() const { return m_cellParams; }
    inline bool CellParamsHasBeenSet() const { return m_cellParamsHasBeenSet; }
    inline void SetCellParams(int value) { m_cellParamsHasBeenSet = true; m_cellParams = value; }
    inline TdscdmaLocalId& WithCellParams(int value) { SetCellParams(value); return *this;}
    ///@}
  private:

    int m_uarfcn{0};
    bool m_uarfcnHasBeenSet = false;

    int m_cellParams{0};
    bool m_cellParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

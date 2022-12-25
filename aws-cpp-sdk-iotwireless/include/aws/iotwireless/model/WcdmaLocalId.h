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
   * <p>WCDMA local identification (local ID) information.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/WcdmaLocalId">AWS
   * API Reference</a></p>
   */
  class WcdmaLocalId
  {
  public:
    AWS_IOTWIRELESS_API WcdmaLocalId();
    AWS_IOTWIRELESS_API WcdmaLocalId(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WcdmaLocalId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>WCDMA UTRA Absolute RF Channel Number downlink.</p>
     */
    inline int GetUarfcndl() const{ return m_uarfcndl; }

    /**
     * <p>WCDMA UTRA Absolute RF Channel Number downlink.</p>
     */
    inline bool UarfcndlHasBeenSet() const { return m_uarfcndlHasBeenSet; }

    /**
     * <p>WCDMA UTRA Absolute RF Channel Number downlink.</p>
     */
    inline void SetUarfcndl(int value) { m_uarfcndlHasBeenSet = true; m_uarfcndl = value; }

    /**
     * <p>WCDMA UTRA Absolute RF Channel Number downlink.</p>
     */
    inline WcdmaLocalId& WithUarfcndl(int value) { SetUarfcndl(value); return *this;}


    /**
     * <p>Primary Scrambling Code.</p>
     */
    inline int GetPsc() const{ return m_psc; }

    /**
     * <p>Primary Scrambling Code.</p>
     */
    inline bool PscHasBeenSet() const { return m_pscHasBeenSet; }

    /**
     * <p>Primary Scrambling Code.</p>
     */
    inline void SetPsc(int value) { m_pscHasBeenSet = true; m_psc = value; }

    /**
     * <p>Primary Scrambling Code.</p>
     */
    inline WcdmaLocalId& WithPsc(int value) { SetPsc(value); return *this;}

  private:

    int m_uarfcndl;
    bool m_uarfcndlHasBeenSet = false;

    int m_psc;
    bool m_pscHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

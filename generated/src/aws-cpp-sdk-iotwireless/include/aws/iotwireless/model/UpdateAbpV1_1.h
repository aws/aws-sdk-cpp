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
   * <p>ABP device object for LoRaWAN specification v1.1</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateAbpV1_1">AWS
   * API Reference</a></p>
   */
  class UpdateAbpV1_1
  {
  public:
    AWS_IOTWIRELESS_API UpdateAbpV1_1();
    AWS_IOTWIRELESS_API UpdateAbpV1_1(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API UpdateAbpV1_1& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The FCnt init value.</p>
     */
    inline int GetFCntStart() const{ return m_fCntStart; }

    /**
     * <p>The FCnt init value.</p>
     */
    inline bool FCntStartHasBeenSet() const { return m_fCntStartHasBeenSet; }

    /**
     * <p>The FCnt init value.</p>
     */
    inline void SetFCntStart(int value) { m_fCntStartHasBeenSet = true; m_fCntStart = value; }

    /**
     * <p>The FCnt init value.</p>
     */
    inline UpdateAbpV1_1& WithFCntStart(int value) { SetFCntStart(value); return *this;}

  private:

    int m_fCntStart;
    bool m_fCntStartHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

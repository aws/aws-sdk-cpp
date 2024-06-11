/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about a single controller area network (CAN) signal and the
   * messages it receives and transmits.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CanSignal">AWS
   * API Reference</a></p>
   */
  class CanSignal
  {
  public:
    AWS_IOTFLEETWISE_API CanSignal();
    AWS_IOTFLEETWISE_API CanSignal(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CanSignal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the message.</p>
     */
    inline int GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(int value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline CanSignal& WithMessageId(int value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the byte ordering of a CAN message is big-endian.</p>
     */
    inline bool GetIsBigEndian() const{ return m_isBigEndian; }
    inline bool IsBigEndianHasBeenSet() const { return m_isBigEndianHasBeenSet; }
    inline void SetIsBigEndian(bool value) { m_isBigEndianHasBeenSet = true; m_isBigEndian = value; }
    inline CanSignal& WithIsBigEndian(bool value) { SetIsBigEndian(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the message data is specified as a signed value.</p>
     */
    inline bool GetIsSigned() const{ return m_isSigned; }
    inline bool IsSignedHasBeenSet() const { return m_isSignedHasBeenSet; }
    inline void SetIsSigned(bool value) { m_isSignedHasBeenSet = true; m_isSigned = value; }
    inline CanSignal& WithIsSigned(bool value) { SetIsSigned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the beginning of the CAN signal. This should always be the least
     * significant bit (LSB).</p> <p>This value might be different from the value in a
     * DBC file. For little endian signals, <code>startBit</code> is the same value as
     * in the DBC file. For big endian signals in a DBC file, the start bit is the most
     * significant bit (MSB). You will have to calculate the LSB instead and pass it as
     * the <code>startBit</code>.</p>
     */
    inline int GetStartBit() const{ return m_startBit; }
    inline bool StartBitHasBeenSet() const { return m_startBitHasBeenSet; }
    inline void SetStartBit(int value) { m_startBitHasBeenSet = true; m_startBit = value; }
    inline CanSignal& WithStartBit(int value) { SetStartBit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offset used to calculate the signal value. Combined with factor, the
     * calculation is <code>value = raw_value * factor + offset</code>.</p>
     */
    inline double GetOffset() const{ return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    inline void SetOffset(double value) { m_offsetHasBeenSet = true; m_offset = value; }
    inline CanSignal& WithOffset(double value) { SetOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A multiplier used to decode the CAN message.</p>
     */
    inline double GetFactor() const{ return m_factor; }
    inline bool FactorHasBeenSet() const { return m_factorHasBeenSet; }
    inline void SetFactor(double value) { m_factorHasBeenSet = true; m_factor = value; }
    inline CanSignal& WithFactor(double value) { SetFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How many bytes of data are in the message.</p>
     */
    inline int GetLength() const{ return m_length; }
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }
    inline void SetLength(int value) { m_lengthHasBeenSet = true; m_length = value; }
    inline CanSignal& WithLength(int value) { SetLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the signal.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CanSignal& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CanSignal& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CanSignal& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    int m_messageId;
    bool m_messageIdHasBeenSet = false;

    bool m_isBigEndian;
    bool m_isBigEndianHasBeenSet = false;

    bool m_isSigned;
    bool m_isSignedHasBeenSet = false;

    int m_startBit;
    bool m_startBitHasBeenSet = false;

    double m_offset;
    bool m_offsetHasBeenSet = false;

    double m_factor;
    bool m_factorHasBeenSet = false;

    int m_length;
    bool m_lengthHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws

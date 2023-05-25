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


    /**
     * <p>The ID of the message.</p>
     */
    inline int GetMessageId() const{ return m_messageId; }

    /**
     * <p>The ID of the message.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The ID of the message.</p>
     */
    inline void SetMessageId(int value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The ID of the message.</p>
     */
    inline CanSignal& WithMessageId(int value) { SetMessageId(value); return *this;}


    /**
     * <p>Whether the byte ordering of a CAN message is big-endian.</p>
     */
    inline bool GetIsBigEndian() const{ return m_isBigEndian; }

    /**
     * <p>Whether the byte ordering of a CAN message is big-endian.</p>
     */
    inline bool IsBigEndianHasBeenSet() const { return m_isBigEndianHasBeenSet; }

    /**
     * <p>Whether the byte ordering of a CAN message is big-endian.</p>
     */
    inline void SetIsBigEndian(bool value) { m_isBigEndianHasBeenSet = true; m_isBigEndian = value; }

    /**
     * <p>Whether the byte ordering of a CAN message is big-endian.</p>
     */
    inline CanSignal& WithIsBigEndian(bool value) { SetIsBigEndian(value); return *this;}


    /**
     * <p>Whether the message data is specified as a signed value.</p>
     */
    inline bool GetIsSigned() const{ return m_isSigned; }

    /**
     * <p>Whether the message data is specified as a signed value.</p>
     */
    inline bool IsSignedHasBeenSet() const { return m_isSignedHasBeenSet; }

    /**
     * <p>Whether the message data is specified as a signed value.</p>
     */
    inline void SetIsSigned(bool value) { m_isSignedHasBeenSet = true; m_isSigned = value; }

    /**
     * <p>Whether the message data is specified as a signed value.</p>
     */
    inline CanSignal& WithIsSigned(bool value) { SetIsSigned(value); return *this;}


    /**
     * <p>Indicates the beginning of the CAN message.</p>
     */
    inline int GetStartBit() const{ return m_startBit; }

    /**
     * <p>Indicates the beginning of the CAN message.</p>
     */
    inline bool StartBitHasBeenSet() const { return m_startBitHasBeenSet; }

    /**
     * <p>Indicates the beginning of the CAN message.</p>
     */
    inline void SetStartBit(int value) { m_startBitHasBeenSet = true; m_startBit = value; }

    /**
     * <p>Indicates the beginning of the CAN message.</p>
     */
    inline CanSignal& WithStartBit(int value) { SetStartBit(value); return *this;}


    /**
     * <p>Indicates where data appears in the CAN message.</p>
     */
    inline double GetOffset() const{ return m_offset; }

    /**
     * <p>Indicates where data appears in the CAN message.</p>
     */
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }

    /**
     * <p>Indicates where data appears in the CAN message.</p>
     */
    inline void SetOffset(double value) { m_offsetHasBeenSet = true; m_offset = value; }

    /**
     * <p>Indicates where data appears in the CAN message.</p>
     */
    inline CanSignal& WithOffset(double value) { SetOffset(value); return *this;}


    /**
     * <p>A multiplier used to decode the CAN message.</p>
     */
    inline double GetFactor() const{ return m_factor; }

    /**
     * <p>A multiplier used to decode the CAN message.</p>
     */
    inline bool FactorHasBeenSet() const { return m_factorHasBeenSet; }

    /**
     * <p>A multiplier used to decode the CAN message.</p>
     */
    inline void SetFactor(double value) { m_factorHasBeenSet = true; m_factor = value; }

    /**
     * <p>A multiplier used to decode the CAN message.</p>
     */
    inline CanSignal& WithFactor(double value) { SetFactor(value); return *this;}


    /**
     * <p>How many bytes of data are in the message.</p>
     */
    inline int GetLength() const{ return m_length; }

    /**
     * <p>How many bytes of data are in the message.</p>
     */
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }

    /**
     * <p>How many bytes of data are in the message.</p>
     */
    inline void SetLength(int value) { m_lengthHasBeenSet = true; m_length = value; }

    /**
     * <p>How many bytes of data are in the message.</p>
     */
    inline CanSignal& WithLength(int value) { SetLength(value); return *this;}


    /**
     * <p>The name of the signal.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the signal.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the signal.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the signal.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the signal.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the signal.</p>
     */
    inline CanSignal& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the signal.</p>
     */
    inline CanSignal& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the signal.</p>
     */
    inline CanSignal& WithName(const char* value) { SetName(value); return *this;}

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

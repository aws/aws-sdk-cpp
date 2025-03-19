/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/SignalValueType.h>
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
   * <p>Information about signal messages using the on-board diagnostics (OBD) II
   * protocol in a vehicle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ObdSignal">AWS
   * API Reference</a></p>
   */
  class ObdSignal
  {
  public:
    AWS_IOTFLEETWISE_API ObdSignal() = default;
    AWS_IOTFLEETWISE_API ObdSignal(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API ObdSignal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The length of the requested data.</p>
     */
    inline int GetPidResponseLength() const { return m_pidResponseLength; }
    inline bool PidResponseLengthHasBeenSet() const { return m_pidResponseLengthHasBeenSet; }
    inline void SetPidResponseLength(int value) { m_pidResponseLengthHasBeenSet = true; m_pidResponseLength = value; }
    inline ObdSignal& WithPidResponseLength(int value) { SetPidResponseLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of operation (diagnostic service) in a message.</p>
     */
    inline int GetServiceMode() const { return m_serviceMode; }
    inline bool ServiceModeHasBeenSet() const { return m_serviceModeHasBeenSet; }
    inline void SetServiceMode(int value) { m_serviceModeHasBeenSet = true; m_serviceMode = value; }
    inline ObdSignal& WithServiceMode(int value) { SetServiceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The diagnostic code used to request data from a vehicle for this signal.</p>
     */
    inline int GetPid() const { return m_pid; }
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }
    inline ObdSignal& WithPid(int value) { SetPid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A multiplier used to decode the message.</p>
     */
    inline double GetScaling() const { return m_scaling; }
    inline bool ScalingHasBeenSet() const { return m_scalingHasBeenSet; }
    inline void SetScaling(double value) { m_scalingHasBeenSet = true; m_scaling = value; }
    inline ObdSignal& WithScaling(double value) { SetScaling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offset used to calculate the signal value. Combined with scaling, the
     * calculation is <code>value = raw_value * scaling + offset</code>.</p>
     */
    inline double GetOffset() const { return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    inline void SetOffset(double value) { m_offsetHasBeenSet = true; m_offset = value; }
    inline ObdSignal& WithOffset(double value) { SetOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the beginning of the message.</p>
     */
    inline int GetStartByte() const { return m_startByte; }
    inline bool StartByteHasBeenSet() const { return m_startByteHasBeenSet; }
    inline void SetStartByte(int value) { m_startByteHasBeenSet = true; m_startByte = value; }
    inline ObdSignal& WithStartByte(int value) { SetStartByte(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of a message.</p>
     */
    inline int GetByteLength() const { return m_byteLength; }
    inline bool ByteLengthHasBeenSet() const { return m_byteLengthHasBeenSet; }
    inline void SetByteLength(int value) { m_byteLengthHasBeenSet = true; m_byteLength = value; }
    inline ObdSignal& WithByteLength(int value) { SetByteLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of positions to shift bits in the message.</p>
     */
    inline int GetBitRightShift() const { return m_bitRightShift; }
    inline bool BitRightShiftHasBeenSet() const { return m_bitRightShiftHasBeenSet; }
    inline void SetBitRightShift(int value) { m_bitRightShiftHasBeenSet = true; m_bitRightShift = value; }
    inline ObdSignal& WithBitRightShift(int value) { SetBitRightShift(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bits to mask in a message.</p>
     */
    inline int GetBitMaskLength() const { return m_bitMaskLength; }
    inline bool BitMaskLengthHasBeenSet() const { return m_bitMaskLengthHasBeenSet; }
    inline void SetBitMaskLength(int value) { m_bitMaskLengthHasBeenSet = true; m_bitMaskLength = value; }
    inline ObdSignal& WithBitMaskLength(int value) { SetBitMaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the message is signed (<code>true</code>) or not
     * (<code>false</code>). If it's signed, the message can represent both positive
     * and negative numbers. The <code>isSigned</code> parameter only applies to the
     * <code>INTEGER</code> raw signal type, and it doesn't affect the
     * <code>FLOATING_POINT</code> raw signal type. The default value is
     * <code>false</code>.</p>
     */
    inline bool GetIsSigned() const { return m_isSigned; }
    inline bool IsSignedHasBeenSet() const { return m_isSignedHasBeenSet; }
    inline void SetIsSigned(bool value) { m_isSignedHasBeenSet = true; m_isSigned = value; }
    inline ObdSignal& WithIsSigned(bool value) { SetIsSigned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value type of the signal. The default value is <code>INTEGER</code>.</p>
     */
    inline SignalValueType GetSignalValueType() const { return m_signalValueType; }
    inline bool SignalValueTypeHasBeenSet() const { return m_signalValueTypeHasBeenSet; }
    inline void SetSignalValueType(SignalValueType value) { m_signalValueTypeHasBeenSet = true; m_signalValueType = value; }
    inline ObdSignal& WithSignalValueType(SignalValueType value) { SetSignalValueType(value); return *this;}
    ///@}
  private:

    int m_pidResponseLength{0};
    bool m_pidResponseLengthHasBeenSet = false;

    int m_serviceMode{0};
    bool m_serviceModeHasBeenSet = false;

    int m_pid{0};
    bool m_pidHasBeenSet = false;

    double m_scaling{0.0};
    bool m_scalingHasBeenSet = false;

    double m_offset{0.0};
    bool m_offsetHasBeenSet = false;

    int m_startByte{0};
    bool m_startByteHasBeenSet = false;

    int m_byteLength{0};
    bool m_byteLengthHasBeenSet = false;

    int m_bitRightShift{0};
    bool m_bitRightShiftHasBeenSet = false;

    int m_bitMaskLength{0};
    bool m_bitMaskLengthHasBeenSet = false;

    bool m_isSigned{false};
    bool m_isSignedHasBeenSet = false;

    SignalValueType m_signalValueType{SignalValueType::NOT_SET};
    bool m_signalValueTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws

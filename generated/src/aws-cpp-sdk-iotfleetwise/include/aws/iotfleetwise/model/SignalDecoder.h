/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/SignalDecoderType.h>
#include <aws/iotfleetwise/model/CanSignal.h>
#include <aws/iotfleetwise/model/ObdSignal.h>
#include <aws/iotfleetwise/model/MessageSignal.h>
#include <aws/iotfleetwise/model/CustomDecodingSignal.h>
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
   * <p>Information about a signal decoder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/SignalDecoder">AWS
   * API Reference</a></p>
   */
  class SignalDecoder
  {
  public:
    AWS_IOTFLEETWISE_API SignalDecoder();
    AWS_IOTFLEETWISE_API SignalDecoder(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API SignalDecoder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified name of a signal decoder as defined in a vehicle
     * model.</p>
     */
    inline const Aws::String& GetFullyQualifiedName() const{ return m_fullyQualifiedName; }
    inline bool FullyQualifiedNameHasBeenSet() const { return m_fullyQualifiedNameHasBeenSet; }
    inline void SetFullyQualifiedName(const Aws::String& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = value; }
    inline void SetFullyQualifiedName(Aws::String&& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = std::move(value); }
    inline void SetFullyQualifiedName(const char* value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName.assign(value); }
    inline SignalDecoder& WithFullyQualifiedName(const Aws::String& value) { SetFullyQualifiedName(value); return *this;}
    inline SignalDecoder& WithFullyQualifiedName(Aws::String&& value) { SetFullyQualifiedName(std::move(value)); return *this;}
    inline SignalDecoder& WithFullyQualifiedName(const char* value) { SetFullyQualifiedName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network protocol for the vehicle. For example, <code>CAN_SIGNAL</code>
     * specifies a protocol that defines how data is communicated between electronic
     * control units (ECUs). <code>OBD_SIGNAL</code> specifies a protocol that defines
     * how self-diagnostic data is communicated between ECUs.</p>
     */
    inline const SignalDecoderType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SignalDecoderType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SignalDecoderType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SignalDecoder& WithType(const SignalDecoderType& value) { SetType(value); return *this;}
    inline SignalDecoder& WithType(SignalDecoderType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a network interface that specifies what network protocol a vehicle
     * follows.</p>
     */
    inline const Aws::String& GetInterfaceId() const{ return m_interfaceId; }
    inline bool InterfaceIdHasBeenSet() const { return m_interfaceIdHasBeenSet; }
    inline void SetInterfaceId(const Aws::String& value) { m_interfaceIdHasBeenSet = true; m_interfaceId = value; }
    inline void SetInterfaceId(Aws::String&& value) { m_interfaceIdHasBeenSet = true; m_interfaceId = std::move(value); }
    inline void SetInterfaceId(const char* value) { m_interfaceIdHasBeenSet = true; m_interfaceId.assign(value); }
    inline SignalDecoder& WithInterfaceId(const Aws::String& value) { SetInterfaceId(value); return *this;}
    inline SignalDecoder& WithInterfaceId(Aws::String&& value) { SetInterfaceId(std::move(value)); return *this;}
    inline SignalDecoder& WithInterfaceId(const char* value) { SetInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about signal decoder using the Controller Area Network (CAN)
     * protocol.</p>
     */
    inline const CanSignal& GetCanSignal() const{ return m_canSignal; }
    inline bool CanSignalHasBeenSet() const { return m_canSignalHasBeenSet; }
    inline void SetCanSignal(const CanSignal& value) { m_canSignalHasBeenSet = true; m_canSignal = value; }
    inline void SetCanSignal(CanSignal&& value) { m_canSignalHasBeenSet = true; m_canSignal = std::move(value); }
    inline SignalDecoder& WithCanSignal(const CanSignal& value) { SetCanSignal(value); return *this;}
    inline SignalDecoder& WithCanSignal(CanSignal&& value) { SetCanSignal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about signal decoder using the on-board diagnostic (OBD) II
     * protocol.</p>
     */
    inline const ObdSignal& GetObdSignal() const{ return m_obdSignal; }
    inline bool ObdSignalHasBeenSet() const { return m_obdSignalHasBeenSet; }
    inline void SetObdSignal(const ObdSignal& value) { m_obdSignalHasBeenSet = true; m_obdSignal = value; }
    inline void SetObdSignal(ObdSignal&& value) { m_obdSignalHasBeenSet = true; m_obdSignal = std::move(value); }
    inline SignalDecoder& WithObdSignal(const ObdSignal& value) { SetObdSignal(value); return *this;}
    inline SignalDecoder& WithObdSignal(ObdSignal&& value) { SetObdSignal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decoding information for a specific message which supports higher order
     * data types. </p>
     */
    inline const MessageSignal& GetMessageSignal() const{ return m_messageSignal; }
    inline bool MessageSignalHasBeenSet() const { return m_messageSignalHasBeenSet; }
    inline void SetMessageSignal(const MessageSignal& value) { m_messageSignalHasBeenSet = true; m_messageSignal = value; }
    inline void SetMessageSignal(MessageSignal&& value) { m_messageSignalHasBeenSet = true; m_messageSignal = std::move(value); }
    inline SignalDecoder& WithMessageSignal(const MessageSignal& value) { SetMessageSignal(value); return *this;}
    inline SignalDecoder& WithMessageSignal(MessageSignal&& value) { SetMessageSignal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a <a
     * href="https://docs.aws.amazon.com/iot-fleetwise/latest/APIReference/API_CustomDecodingSignal.html">custom
     * signal decoder</a>.</p>  <p>Access to certain Amazon Web Services IoT
     * FleetWise features is currently gated. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleetwise-regions.html">Amazon
     * Web Services Region and feature availability</a> in the <i>Amazon Web Services
     * IoT FleetWise Developer Guide</i>.</p> 
     */
    inline const CustomDecodingSignal& GetCustomDecodingSignal() const{ return m_customDecodingSignal; }
    inline bool CustomDecodingSignalHasBeenSet() const { return m_customDecodingSignalHasBeenSet; }
    inline void SetCustomDecodingSignal(const CustomDecodingSignal& value) { m_customDecodingSignalHasBeenSet = true; m_customDecodingSignal = value; }
    inline void SetCustomDecodingSignal(CustomDecodingSignal&& value) { m_customDecodingSignalHasBeenSet = true; m_customDecodingSignal = std::move(value); }
    inline SignalDecoder& WithCustomDecodingSignal(const CustomDecodingSignal& value) { SetCustomDecodingSignal(value); return *this;}
    inline SignalDecoder& WithCustomDecodingSignal(CustomDecodingSignal&& value) { SetCustomDecodingSignal(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fullyQualifiedName;
    bool m_fullyQualifiedNameHasBeenSet = false;

    SignalDecoderType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_interfaceId;
    bool m_interfaceIdHasBeenSet = false;

    CanSignal m_canSignal;
    bool m_canSignalHasBeenSet = false;

    ObdSignal m_obdSignal;
    bool m_obdSignalHasBeenSet = false;

    MessageSignal m_messageSignal;
    bool m_messageSignalHasBeenSet = false;

    CustomDecodingSignal m_customDecodingSignal;
    bool m_customDecodingSignalHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws

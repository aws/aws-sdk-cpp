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
    AWS_IOTFLEETWISE_API SignalDecoder() = default;
    AWS_IOTFLEETWISE_API SignalDecoder(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API SignalDecoder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified name of a signal decoder as defined in a vehicle
     * model.</p>
     */
    inline const Aws::String& GetFullyQualifiedName() const { return m_fullyQualifiedName; }
    inline bool FullyQualifiedNameHasBeenSet() const { return m_fullyQualifiedNameHasBeenSet; }
    template<typename FullyQualifiedNameT = Aws::String>
    void SetFullyQualifiedName(FullyQualifiedNameT&& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = std::forward<FullyQualifiedNameT>(value); }
    template<typename FullyQualifiedNameT = Aws::String>
    SignalDecoder& WithFullyQualifiedName(FullyQualifiedNameT&& value) { SetFullyQualifiedName(std::forward<FullyQualifiedNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network protocol for the vehicle. For example, <code>CAN_SIGNAL</code>
     * specifies a protocol that defines how data is communicated between electronic
     * control units (ECUs). <code>OBD_SIGNAL</code> specifies a protocol that defines
     * how self-diagnostic data is communicated between ECUs.</p>
     */
    inline SignalDecoderType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SignalDecoderType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SignalDecoder& WithType(SignalDecoderType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a network interface that specifies what network protocol a vehicle
     * follows.</p>
     */
    inline const Aws::String& GetInterfaceId() const { return m_interfaceId; }
    inline bool InterfaceIdHasBeenSet() const { return m_interfaceIdHasBeenSet; }
    template<typename InterfaceIdT = Aws::String>
    void SetInterfaceId(InterfaceIdT&& value) { m_interfaceIdHasBeenSet = true; m_interfaceId = std::forward<InterfaceIdT>(value); }
    template<typename InterfaceIdT = Aws::String>
    SignalDecoder& WithInterfaceId(InterfaceIdT&& value) { SetInterfaceId(std::forward<InterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about signal decoder using the Controller Area Network (CAN)
     * protocol.</p>
     */
    inline const CanSignal& GetCanSignal() const { return m_canSignal; }
    inline bool CanSignalHasBeenSet() const { return m_canSignalHasBeenSet; }
    template<typename CanSignalT = CanSignal>
    void SetCanSignal(CanSignalT&& value) { m_canSignalHasBeenSet = true; m_canSignal = std::forward<CanSignalT>(value); }
    template<typename CanSignalT = CanSignal>
    SignalDecoder& WithCanSignal(CanSignalT&& value) { SetCanSignal(std::forward<CanSignalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about signal decoder using the on-board diagnostic (OBD) II
     * protocol.</p>
     */
    inline const ObdSignal& GetObdSignal() const { return m_obdSignal; }
    inline bool ObdSignalHasBeenSet() const { return m_obdSignalHasBeenSet; }
    template<typename ObdSignalT = ObdSignal>
    void SetObdSignal(ObdSignalT&& value) { m_obdSignalHasBeenSet = true; m_obdSignal = std::forward<ObdSignalT>(value); }
    template<typename ObdSignalT = ObdSignal>
    SignalDecoder& WithObdSignal(ObdSignalT&& value) { SetObdSignal(std::forward<ObdSignalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decoding information for a specific message which supports higher order
     * data types. </p>
     */
    inline const MessageSignal& GetMessageSignal() const { return m_messageSignal; }
    inline bool MessageSignalHasBeenSet() const { return m_messageSignalHasBeenSet; }
    template<typename MessageSignalT = MessageSignal>
    void SetMessageSignal(MessageSignalT&& value) { m_messageSignalHasBeenSet = true; m_messageSignal = std::forward<MessageSignalT>(value); }
    template<typename MessageSignalT = MessageSignal>
    SignalDecoder& WithMessageSignal(MessageSignalT&& value) { SetMessageSignal(std::forward<MessageSignalT>(value)); return *this;}
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
    inline const CustomDecodingSignal& GetCustomDecodingSignal() const { return m_customDecodingSignal; }
    inline bool CustomDecodingSignalHasBeenSet() const { return m_customDecodingSignalHasBeenSet; }
    template<typename CustomDecodingSignalT = CustomDecodingSignal>
    void SetCustomDecodingSignal(CustomDecodingSignalT&& value) { m_customDecodingSignalHasBeenSet = true; m_customDecodingSignal = std::forward<CustomDecodingSignalT>(value); }
    template<typename CustomDecodingSignalT = CustomDecodingSignal>
    SignalDecoder& WithCustomDecodingSignal(CustomDecodingSignalT&& value) { SetCustomDecodingSignal(std::forward<CustomDecodingSignalT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fullyQualifiedName;
    bool m_fullyQualifiedNameHasBeenSet = false;

    SignalDecoderType m_type{SignalDecoderType::NOT_SET};
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

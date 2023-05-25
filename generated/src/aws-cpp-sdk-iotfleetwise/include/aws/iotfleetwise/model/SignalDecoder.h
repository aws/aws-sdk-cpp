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


    /**
     * <p>The fully qualified name of a signal decoder as defined in a vehicle
     * model.</p>
     */
    inline const Aws::String& GetFullyQualifiedName() const{ return m_fullyQualifiedName; }

    /**
     * <p>The fully qualified name of a signal decoder as defined in a vehicle
     * model.</p>
     */
    inline bool FullyQualifiedNameHasBeenSet() const { return m_fullyQualifiedNameHasBeenSet; }

    /**
     * <p>The fully qualified name of a signal decoder as defined in a vehicle
     * model.</p>
     */
    inline void SetFullyQualifiedName(const Aws::String& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = value; }

    /**
     * <p>The fully qualified name of a signal decoder as defined in a vehicle
     * model.</p>
     */
    inline void SetFullyQualifiedName(Aws::String&& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = std::move(value); }

    /**
     * <p>The fully qualified name of a signal decoder as defined in a vehicle
     * model.</p>
     */
    inline void SetFullyQualifiedName(const char* value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName.assign(value); }

    /**
     * <p>The fully qualified name of a signal decoder as defined in a vehicle
     * model.</p>
     */
    inline SignalDecoder& WithFullyQualifiedName(const Aws::String& value) { SetFullyQualifiedName(value); return *this;}

    /**
     * <p>The fully qualified name of a signal decoder as defined in a vehicle
     * model.</p>
     */
    inline SignalDecoder& WithFullyQualifiedName(Aws::String&& value) { SetFullyQualifiedName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name of a signal decoder as defined in a vehicle
     * model.</p>
     */
    inline SignalDecoder& WithFullyQualifiedName(const char* value) { SetFullyQualifiedName(value); return *this;}


    /**
     * <p>The network protocol for the vehicle. For example, <code>CAN_SIGNAL</code>
     * specifies a protocol that defines how data is communicated between electronic
     * control units (ECUs). <code>OBD_SIGNAL</code> specifies a protocol that defines
     * how self-diagnostic data is communicated between ECUs.</p>
     */
    inline const SignalDecoderType& GetType() const{ return m_type; }

    /**
     * <p>The network protocol for the vehicle. For example, <code>CAN_SIGNAL</code>
     * specifies a protocol that defines how data is communicated between electronic
     * control units (ECUs). <code>OBD_SIGNAL</code> specifies a protocol that defines
     * how self-diagnostic data is communicated between ECUs.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The network protocol for the vehicle. For example, <code>CAN_SIGNAL</code>
     * specifies a protocol that defines how data is communicated between electronic
     * control units (ECUs). <code>OBD_SIGNAL</code> specifies a protocol that defines
     * how self-diagnostic data is communicated between ECUs.</p>
     */
    inline void SetType(const SignalDecoderType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The network protocol for the vehicle. For example, <code>CAN_SIGNAL</code>
     * specifies a protocol that defines how data is communicated between electronic
     * control units (ECUs). <code>OBD_SIGNAL</code> specifies a protocol that defines
     * how self-diagnostic data is communicated between ECUs.</p>
     */
    inline void SetType(SignalDecoderType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The network protocol for the vehicle. For example, <code>CAN_SIGNAL</code>
     * specifies a protocol that defines how data is communicated between electronic
     * control units (ECUs). <code>OBD_SIGNAL</code> specifies a protocol that defines
     * how self-diagnostic data is communicated between ECUs.</p>
     */
    inline SignalDecoder& WithType(const SignalDecoderType& value) { SetType(value); return *this;}

    /**
     * <p>The network protocol for the vehicle. For example, <code>CAN_SIGNAL</code>
     * specifies a protocol that defines how data is communicated between electronic
     * control units (ECUs). <code>OBD_SIGNAL</code> specifies a protocol that defines
     * how self-diagnostic data is communicated between ECUs.</p>
     */
    inline SignalDecoder& WithType(SignalDecoderType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ID of a network interface that specifies what network protocol a vehicle
     * follows.</p>
     */
    inline const Aws::String& GetInterfaceId() const{ return m_interfaceId; }

    /**
     * <p>The ID of a network interface that specifies what network protocol a vehicle
     * follows.</p>
     */
    inline bool InterfaceIdHasBeenSet() const { return m_interfaceIdHasBeenSet; }

    /**
     * <p>The ID of a network interface that specifies what network protocol a vehicle
     * follows.</p>
     */
    inline void SetInterfaceId(const Aws::String& value) { m_interfaceIdHasBeenSet = true; m_interfaceId = value; }

    /**
     * <p>The ID of a network interface that specifies what network protocol a vehicle
     * follows.</p>
     */
    inline void SetInterfaceId(Aws::String&& value) { m_interfaceIdHasBeenSet = true; m_interfaceId = std::move(value); }

    /**
     * <p>The ID of a network interface that specifies what network protocol a vehicle
     * follows.</p>
     */
    inline void SetInterfaceId(const char* value) { m_interfaceIdHasBeenSet = true; m_interfaceId.assign(value); }

    /**
     * <p>The ID of a network interface that specifies what network protocol a vehicle
     * follows.</p>
     */
    inline SignalDecoder& WithInterfaceId(const Aws::String& value) { SetInterfaceId(value); return *this;}

    /**
     * <p>The ID of a network interface that specifies what network protocol a vehicle
     * follows.</p>
     */
    inline SignalDecoder& WithInterfaceId(Aws::String&& value) { SetInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of a network interface that specifies what network protocol a vehicle
     * follows.</p>
     */
    inline SignalDecoder& WithInterfaceId(const char* value) { SetInterfaceId(value); return *this;}


    /**
     * <p>Information about signal decoder using the Controller Area Network (CAN)
     * protocol.</p>
     */
    inline const CanSignal& GetCanSignal() const{ return m_canSignal; }

    /**
     * <p>Information about signal decoder using the Controller Area Network (CAN)
     * protocol.</p>
     */
    inline bool CanSignalHasBeenSet() const { return m_canSignalHasBeenSet; }

    /**
     * <p>Information about signal decoder using the Controller Area Network (CAN)
     * protocol.</p>
     */
    inline void SetCanSignal(const CanSignal& value) { m_canSignalHasBeenSet = true; m_canSignal = value; }

    /**
     * <p>Information about signal decoder using the Controller Area Network (CAN)
     * protocol.</p>
     */
    inline void SetCanSignal(CanSignal&& value) { m_canSignalHasBeenSet = true; m_canSignal = std::move(value); }

    /**
     * <p>Information about signal decoder using the Controller Area Network (CAN)
     * protocol.</p>
     */
    inline SignalDecoder& WithCanSignal(const CanSignal& value) { SetCanSignal(value); return *this;}

    /**
     * <p>Information about signal decoder using the Controller Area Network (CAN)
     * protocol.</p>
     */
    inline SignalDecoder& WithCanSignal(CanSignal&& value) { SetCanSignal(std::move(value)); return *this;}


    /**
     * <p>Information about signal decoder using the On-board diagnostic (OBD) II
     * protocol.</p>
     */
    inline const ObdSignal& GetObdSignal() const{ return m_obdSignal; }

    /**
     * <p>Information about signal decoder using the On-board diagnostic (OBD) II
     * protocol.</p>
     */
    inline bool ObdSignalHasBeenSet() const { return m_obdSignalHasBeenSet; }

    /**
     * <p>Information about signal decoder using the On-board diagnostic (OBD) II
     * protocol.</p>
     */
    inline void SetObdSignal(const ObdSignal& value) { m_obdSignalHasBeenSet = true; m_obdSignal = value; }

    /**
     * <p>Information about signal decoder using the On-board diagnostic (OBD) II
     * protocol.</p>
     */
    inline void SetObdSignal(ObdSignal&& value) { m_obdSignalHasBeenSet = true; m_obdSignal = std::move(value); }

    /**
     * <p>Information about signal decoder using the On-board diagnostic (OBD) II
     * protocol.</p>
     */
    inline SignalDecoder& WithObdSignal(const ObdSignal& value) { SetObdSignal(value); return *this;}

    /**
     * <p>Information about signal decoder using the On-board diagnostic (OBD) II
     * protocol.</p>
     */
    inline SignalDecoder& WithObdSignal(ObdSignal&& value) { SetObdSignal(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws

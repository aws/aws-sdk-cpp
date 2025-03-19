/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/VehicleMiddlewareProtocol.h>
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
   * <p>The vehicle middleware defined as a type of network interface. Examples of
   * vehicle middleware include <code>ROS2</code> and
   * <code>SOME/IP</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/VehicleMiddleware">AWS
   * API Reference</a></p>
   */
  class VehicleMiddleware
  {
  public:
    AWS_IOTFLEETWISE_API VehicleMiddleware() = default;
    AWS_IOTFLEETWISE_API VehicleMiddleware(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API VehicleMiddleware& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the vehicle middleware. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    VehicleMiddleware& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol name of the vehicle middleware. </p>
     */
    inline VehicleMiddlewareProtocol GetProtocolName() const { return m_protocolName; }
    inline bool ProtocolNameHasBeenSet() const { return m_protocolNameHasBeenSet; }
    inline void SetProtocolName(VehicleMiddlewareProtocol value) { m_protocolNameHasBeenSet = true; m_protocolName = value; }
    inline VehicleMiddleware& WithProtocolName(VehicleMiddlewareProtocol value) { SetProtocolName(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VehicleMiddlewareProtocol m_protocolName{VehicleMiddlewareProtocol::NOT_SET};
    bool m_protocolNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws

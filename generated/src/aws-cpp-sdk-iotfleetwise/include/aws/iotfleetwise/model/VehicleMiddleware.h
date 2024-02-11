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
    AWS_IOTFLEETWISE_API VehicleMiddleware();
    AWS_IOTFLEETWISE_API VehicleMiddleware(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API VehicleMiddleware& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the vehicle middleware. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the vehicle middleware. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the vehicle middleware. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the vehicle middleware. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the vehicle middleware. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the vehicle middleware. </p>
     */
    inline VehicleMiddleware& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the vehicle middleware. </p>
     */
    inline VehicleMiddleware& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the vehicle middleware. </p>
     */
    inline VehicleMiddleware& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The protocol name of the vehicle middleware. </p>
     */
    inline const VehicleMiddlewareProtocol& GetProtocolName() const{ return m_protocolName; }

    /**
     * <p>The protocol name of the vehicle middleware. </p>
     */
    inline bool ProtocolNameHasBeenSet() const { return m_protocolNameHasBeenSet; }

    /**
     * <p>The protocol name of the vehicle middleware. </p>
     */
    inline void SetProtocolName(const VehicleMiddlewareProtocol& value) { m_protocolNameHasBeenSet = true; m_protocolName = value; }

    /**
     * <p>The protocol name of the vehicle middleware. </p>
     */
    inline void SetProtocolName(VehicleMiddlewareProtocol&& value) { m_protocolNameHasBeenSet = true; m_protocolName = std::move(value); }

    /**
     * <p>The protocol name of the vehicle middleware. </p>
     */
    inline VehicleMiddleware& WithProtocolName(const VehicleMiddlewareProtocol& value) { SetProtocolName(value); return *this;}

    /**
     * <p>The protocol name of the vehicle middleware. </p>
     */
    inline VehicleMiddleware& WithProtocolName(VehicleMiddlewareProtocol&& value) { SetProtocolName(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VehicleMiddlewareProtocol m_protocolName;
    bool m_protocolNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws

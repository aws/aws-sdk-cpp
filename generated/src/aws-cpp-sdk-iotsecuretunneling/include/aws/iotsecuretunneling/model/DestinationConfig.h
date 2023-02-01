/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoTSecureTunneling
{
namespace Model
{

  /**
   * <p>The destination configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/DestinationConfig">AWS
   * API Reference</a></p>
   */
  class DestinationConfig
  {
  public:
    AWS_IOTSECURETUNNELING_API DestinationConfig();
    AWS_IOTSECURETUNNELING_API DestinationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSECURETUNNELING_API DestinationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSECURETUNNELING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the IoT thing to which you want to connect.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the IoT thing to which you want to connect.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the IoT thing to which you want to connect.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the IoT thing to which you want to connect.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the IoT thing to which you want to connect.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the IoT thing to which you want to connect.</p>
     */
    inline DestinationConfig& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the IoT thing to which you want to connect.</p>
     */
    inline DestinationConfig& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the IoT thing to which you want to connect.</p>
     */
    inline DestinationConfig& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>A list of service names that identify the target application. The IoT client
     * running on the destination device reads this value and uses it to look up a port
     * or an IP address and a port. The IoT client instantiates the local proxy, which
     * uses this information to connect to the destination application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServices() const{ return m_services; }

    /**
     * <p>A list of service names that identify the target application. The IoT client
     * running on the destination device reads this value and uses it to look up a port
     * or an IP address and a port. The IoT client instantiates the local proxy, which
     * uses this information to connect to the destination application.</p>
     */
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }

    /**
     * <p>A list of service names that identify the target application. The IoT client
     * running on the destination device reads this value and uses it to look up a port
     * or an IP address and a port. The IoT client instantiates the local proxy, which
     * uses this information to connect to the destination application.</p>
     */
    inline void SetServices(const Aws::Vector<Aws::String>& value) { m_servicesHasBeenSet = true; m_services = value; }

    /**
     * <p>A list of service names that identify the target application. The IoT client
     * running on the destination device reads this value and uses it to look up a port
     * or an IP address and a port. The IoT client instantiates the local proxy, which
     * uses this information to connect to the destination application.</p>
     */
    inline void SetServices(Aws::Vector<Aws::String>&& value) { m_servicesHasBeenSet = true; m_services = std::move(value); }

    /**
     * <p>A list of service names that identify the target application. The IoT client
     * running on the destination device reads this value and uses it to look up a port
     * or an IP address and a port. The IoT client instantiates the local proxy, which
     * uses this information to connect to the destination application.</p>
     */
    inline DestinationConfig& WithServices(const Aws::Vector<Aws::String>& value) { SetServices(value); return *this;}

    /**
     * <p>A list of service names that identify the target application. The IoT client
     * running on the destination device reads this value and uses it to look up a port
     * or an IP address and a port. The IoT client instantiates the local proxy, which
     * uses this information to connect to the destination application.</p>
     */
    inline DestinationConfig& WithServices(Aws::Vector<Aws::String>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>A list of service names that identify the target application. The IoT client
     * running on the destination device reads this value and uses it to look up a port
     * or an IP address and a port. The IoT client instantiates the local proxy, which
     * uses this information to connect to the destination application.</p>
     */
    inline DestinationConfig& AddServices(const Aws::String& value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }

    /**
     * <p>A list of service names that identify the target application. The IoT client
     * running on the destination device reads this value and uses it to look up a port
     * or an IP address and a port. The IoT client instantiates the local proxy, which
     * uses this information to connect to the destination application.</p>
     */
    inline DestinationConfig& AddServices(Aws::String&& value) { m_servicesHasBeenSet = true; m_services.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of service names that identify the target application. The IoT client
     * running on the destination device reads this value and uses it to look up a port
     * or an IP address and a port. The IoT client instantiates the local proxy, which
     * uses this information to connect to the destination application.</p>
     */
    inline DestinationConfig& AddServices(const char* value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_services;
    bool m_servicesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws

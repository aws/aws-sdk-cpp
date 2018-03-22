/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>Details of the service registry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceRegistry">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API ServiceRegistry
  {
  public:
    ServiceRegistry();
    ServiceRegistry(const Aws::Utils::Json::JsonValue& jsonValue);
    ServiceRegistry& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Service Registry. The currently
     * supported service registry is Amazon Route 53 Auto Naming Service. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_autonaming_Service.html">Service</a>.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Service Registry. The currently
     * supported service registry is Amazon Route 53 Auto Naming Service. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_autonaming_Service.html">Service</a>.</p>
     */
    inline void SetRegistryArn(const Aws::String& value) { m_registryArnHasBeenSet = true; m_registryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Service Registry. The currently
     * supported service registry is Amazon Route 53 Auto Naming Service. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_autonaming_Service.html">Service</a>.</p>
     */
    inline void SetRegistryArn(Aws::String&& value) { m_registryArnHasBeenSet = true; m_registryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Service Registry. The currently
     * supported service registry is Amazon Route 53 Auto Naming Service. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_autonaming_Service.html">Service</a>.</p>
     */
    inline void SetRegistryArn(const char* value) { m_registryArnHasBeenSet = true; m_registryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Service Registry. The currently
     * supported service registry is Amazon Route 53 Auto Naming Service. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_autonaming_Service.html">Service</a>.</p>
     */
    inline ServiceRegistry& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Service Registry. The currently
     * supported service registry is Amazon Route 53 Auto Naming Service. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_autonaming_Service.html">Service</a>.</p>
     */
    inline ServiceRegistry& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Service Registry. The currently
     * supported service registry is Amazon Route 53 Auto Naming Service. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_autonaming_Service.html">Service</a>.</p>
     */
    inline ServiceRegistry& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}


    /**
     * <p>The port value used if your Service Discovery service specified an SRV
     * record.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port value used if your Service Discovery service specified an SRV
     * record.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port value used if your Service Discovery service specified an SRV
     * record.</p>
     */
    inline ServiceRegistry& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_registryArn;
    bool m_registryArnHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws

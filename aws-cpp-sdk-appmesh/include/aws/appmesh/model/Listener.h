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
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/HealthCheckPolicy.h>
#include <aws/appmesh/model/PortMapping.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object representing a listener for a virtual node.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/Listener">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API Listener
  {
  public:
    Listener();
    Listener(Aws::Utils::Json::JsonView jsonValue);
    Listener& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The health check information for the listener.</p>
     */
    inline const HealthCheckPolicy& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>The health check information for the listener.</p>
     */
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }

    /**
     * <p>The health check information for the listener.</p>
     */
    inline void SetHealthCheck(const HealthCheckPolicy& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }

    /**
     * <p>The health check information for the listener.</p>
     */
    inline void SetHealthCheck(HealthCheckPolicy&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }

    /**
     * <p>The health check information for the listener.</p>
     */
    inline Listener& WithHealthCheck(const HealthCheckPolicy& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>The health check information for the listener.</p>
     */
    inline Listener& WithHealthCheck(HealthCheckPolicy&& value) { SetHealthCheck(std::move(value)); return *this;}


    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline const PortMapping& GetPortMapping() const{ return m_portMapping; }

    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline bool PortMappingHasBeenSet() const { return m_portMappingHasBeenSet; }

    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline void SetPortMapping(const PortMapping& value) { m_portMappingHasBeenSet = true; m_portMapping = value; }

    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline void SetPortMapping(PortMapping&& value) { m_portMappingHasBeenSet = true; m_portMapping = std::move(value); }

    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline Listener& WithPortMapping(const PortMapping& value) { SetPortMapping(value); return *this;}

    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline Listener& WithPortMapping(PortMapping&& value) { SetPortMapping(std::move(value)); return *this;}

  private:

    HealthCheckPolicy m_healthCheck;
    bool m_healthCheckHasBeenSet;

    PortMapping m_portMapping;
    bool m_portMappingHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

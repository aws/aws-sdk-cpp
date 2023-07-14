﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ContainerServiceHealthCheckConfig.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the settings of a public endpoint for an Amazon Lightsail container
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/EndpointRequest">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API EndpointRequest
  {
  public:
    EndpointRequest();
    EndpointRequest(Aws::Utils::Json::JsonView jsonValue);
    EndpointRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the container for the endpoint.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The name of the container for the endpoint.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The name of the container for the endpoint.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name of the container for the endpoint.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The name of the container for the endpoint.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The name of the container for the endpoint.</p>
     */
    inline EndpointRequest& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The name of the container for the endpoint.</p>
     */
    inline EndpointRequest& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The name of the container for the endpoint.</p>
     */
    inline EndpointRequest& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The port of the container to which traffic is forwarded to.</p>
     */
    inline int GetContainerPort() const{ return m_containerPort; }

    /**
     * <p>The port of the container to which traffic is forwarded to.</p>
     */
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }

    /**
     * <p>The port of the container to which traffic is forwarded to.</p>
     */
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }

    /**
     * <p>The port of the container to which traffic is forwarded to.</p>
     */
    inline EndpointRequest& WithContainerPort(int value) { SetContainerPort(value); return *this;}


    /**
     * <p>An object that describes the health check configuration of the container.</p>
     */
    inline const ContainerServiceHealthCheckConfig& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>An object that describes the health check configuration of the container.</p>
     */
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }

    /**
     * <p>An object that describes the health check configuration of the container.</p>
     */
    inline void SetHealthCheck(const ContainerServiceHealthCheckConfig& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }

    /**
     * <p>An object that describes the health check configuration of the container.</p>
     */
    inline void SetHealthCheck(ContainerServiceHealthCheckConfig&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }

    /**
     * <p>An object that describes the health check configuration of the container.</p>
     */
    inline EndpointRequest& WithHealthCheck(const ContainerServiceHealthCheckConfig& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>An object that describes the health check configuration of the container.</p>
     */
    inline EndpointRequest& WithHealthCheck(ContainerServiceHealthCheckConfig&& value) { SetHealthCheck(std::move(value)); return *this;}

  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet;

    int m_containerPort;
    bool m_containerPortHasBeenSet;

    ContainerServiceHealthCheckConfig m_healthCheck;
    bool m_healthCheckHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws

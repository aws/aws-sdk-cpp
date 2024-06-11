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
  class EndpointRequest
  {
  public:
    AWS_LIGHTSAIL_API EndpointRequest();
    AWS_LIGHTSAIL_API EndpointRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API EndpointRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the container for the endpoint.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }
    inline EndpointRequest& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}
    inline EndpointRequest& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}
    inline EndpointRequest& WithContainerName(const char* value) { SetContainerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port of the container to which traffic is forwarded to.</p>
     */
    inline int GetContainerPort() const{ return m_containerPort; }
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }
    inline EndpointRequest& WithContainerPort(int value) { SetContainerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the health check configuration of the container.</p>
     */
    inline const ContainerServiceHealthCheckConfig& GetHealthCheck() const{ return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    inline void SetHealthCheck(const ContainerServiceHealthCheckConfig& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }
    inline void SetHealthCheck(ContainerServiceHealthCheckConfig&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }
    inline EndpointRequest& WithHealthCheck(const ContainerServiceHealthCheckConfig& value) { SetHealthCheck(value); return *this;}
    inline EndpointRequest& WithHealthCheck(ContainerServiceHealthCheckConfig&& value) { SetHealthCheck(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    int m_containerPort;
    bool m_containerPortHasBeenSet = false;

    ContainerServiceHealthCheckConfig m_healthCheck;
    bool m_healthCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws

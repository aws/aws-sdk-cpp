/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/BackendDefaults.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/Logging.h>
#include <aws/appmesh/model/ServiceDiscovery.h>
#include <aws/appmesh/model/Backend.h>
#include <aws/appmesh/model/Listener.h>
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
   * <p>An object that represents the specification of a virtual node.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualNodeSpec">AWS
   * API Reference</a></p>
   */
  class VirtualNodeSpec
  {
  public:
    AWS_APPMESH_API VirtualNodeSpec();
    AWS_APPMESH_API VirtualNodeSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualNodeSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to an object that represents the defaults for backends.</p>
     */
    inline const BackendDefaults& GetBackendDefaults() const{ return m_backendDefaults; }
    inline bool BackendDefaultsHasBeenSet() const { return m_backendDefaultsHasBeenSet; }
    inline void SetBackendDefaults(const BackendDefaults& value) { m_backendDefaultsHasBeenSet = true; m_backendDefaults = value; }
    inline void SetBackendDefaults(BackendDefaults&& value) { m_backendDefaultsHasBeenSet = true; m_backendDefaults = std::move(value); }
    inline VirtualNodeSpec& WithBackendDefaults(const BackendDefaults& value) { SetBackendDefaults(value); return *this;}
    inline VirtualNodeSpec& WithBackendDefaults(BackendDefaults&& value) { SetBackendDefaults(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The backends that the virtual node is expected to send outbound traffic
     * to.</p>
     */
    inline const Aws::Vector<Backend>& GetBackends() const{ return m_backends; }
    inline bool BackendsHasBeenSet() const { return m_backendsHasBeenSet; }
    inline void SetBackends(const Aws::Vector<Backend>& value) { m_backendsHasBeenSet = true; m_backends = value; }
    inline void SetBackends(Aws::Vector<Backend>&& value) { m_backendsHasBeenSet = true; m_backends = std::move(value); }
    inline VirtualNodeSpec& WithBackends(const Aws::Vector<Backend>& value) { SetBackends(value); return *this;}
    inline VirtualNodeSpec& WithBackends(Aws::Vector<Backend>&& value) { SetBackends(std::move(value)); return *this;}
    inline VirtualNodeSpec& AddBackends(const Backend& value) { m_backendsHasBeenSet = true; m_backends.push_back(value); return *this; }
    inline VirtualNodeSpec& AddBackends(Backend&& value) { m_backendsHasBeenSet = true; m_backends.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The listener that the virtual node is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline const Aws::Vector<Listener>& GetListeners() const{ return m_listeners; }
    inline bool ListenersHasBeenSet() const { return m_listenersHasBeenSet; }
    inline void SetListeners(const Aws::Vector<Listener>& value) { m_listenersHasBeenSet = true; m_listeners = value; }
    inline void SetListeners(Aws::Vector<Listener>&& value) { m_listenersHasBeenSet = true; m_listeners = std::move(value); }
    inline VirtualNodeSpec& WithListeners(const Aws::Vector<Listener>& value) { SetListeners(value); return *this;}
    inline VirtualNodeSpec& WithListeners(Aws::Vector<Listener>&& value) { SetListeners(std::move(value)); return *this;}
    inline VirtualNodeSpec& AddListeners(const Listener& value) { m_listenersHasBeenSet = true; m_listeners.push_back(value); return *this; }
    inline VirtualNodeSpec& AddListeners(Listener&& value) { m_listenersHasBeenSet = true; m_listeners.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The inbound and outbound access logging information for the virtual node.</p>
     */
    inline const Logging& GetLogging() const{ return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    inline void SetLogging(const Logging& value) { m_loggingHasBeenSet = true; m_logging = value; }
    inline void SetLogging(Logging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }
    inline VirtualNodeSpec& WithLogging(const Logging& value) { SetLogging(value); return *this;}
    inline VirtualNodeSpec& WithLogging(Logging&& value) { SetLogging(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service discovery information for the virtual node. If your virtual node
     * does not expect ingress traffic, you can omit this parameter. If you specify a
     * <code>listener</code>, then you must specify service discovery information.</p>
     */
    inline const ServiceDiscovery& GetServiceDiscovery() const{ return m_serviceDiscovery; }
    inline bool ServiceDiscoveryHasBeenSet() const { return m_serviceDiscoveryHasBeenSet; }
    inline void SetServiceDiscovery(const ServiceDiscovery& value) { m_serviceDiscoveryHasBeenSet = true; m_serviceDiscovery = value; }
    inline void SetServiceDiscovery(ServiceDiscovery&& value) { m_serviceDiscoveryHasBeenSet = true; m_serviceDiscovery = std::move(value); }
    inline VirtualNodeSpec& WithServiceDiscovery(const ServiceDiscovery& value) { SetServiceDiscovery(value); return *this;}
    inline VirtualNodeSpec& WithServiceDiscovery(ServiceDiscovery&& value) { SetServiceDiscovery(std::move(value)); return *this;}
    ///@}
  private:

    BackendDefaults m_backendDefaults;
    bool m_backendDefaultsHasBeenSet = false;

    Aws::Vector<Backend> m_backends;
    bool m_backendsHasBeenSet = false;

    Aws::Vector<Listener> m_listeners;
    bool m_listenersHasBeenSet = false;

    Logging m_logging;
    bool m_loggingHasBeenSet = false;

    ServiceDiscovery m_serviceDiscovery;
    bool m_serviceDiscoveryHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

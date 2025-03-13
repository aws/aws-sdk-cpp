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
    AWS_APPMESH_API VirtualNodeSpec() = default;
    AWS_APPMESH_API VirtualNodeSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualNodeSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to an object that represents the defaults for backends.</p>
     */
    inline const BackendDefaults& GetBackendDefaults() const { return m_backendDefaults; }
    inline bool BackendDefaultsHasBeenSet() const { return m_backendDefaultsHasBeenSet; }
    template<typename BackendDefaultsT = BackendDefaults>
    void SetBackendDefaults(BackendDefaultsT&& value) { m_backendDefaultsHasBeenSet = true; m_backendDefaults = std::forward<BackendDefaultsT>(value); }
    template<typename BackendDefaultsT = BackendDefaults>
    VirtualNodeSpec& WithBackendDefaults(BackendDefaultsT&& value) { SetBackendDefaults(std::forward<BackendDefaultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The backends that the virtual node is expected to send outbound traffic
     * to.</p>
     */
    inline const Aws::Vector<Backend>& GetBackends() const { return m_backends; }
    inline bool BackendsHasBeenSet() const { return m_backendsHasBeenSet; }
    template<typename BackendsT = Aws::Vector<Backend>>
    void SetBackends(BackendsT&& value) { m_backendsHasBeenSet = true; m_backends = std::forward<BackendsT>(value); }
    template<typename BackendsT = Aws::Vector<Backend>>
    VirtualNodeSpec& WithBackends(BackendsT&& value) { SetBackends(std::forward<BackendsT>(value)); return *this;}
    template<typename BackendsT = Backend>
    VirtualNodeSpec& AddBackends(BackendsT&& value) { m_backendsHasBeenSet = true; m_backends.emplace_back(std::forward<BackendsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The listener that the virtual node is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline const Aws::Vector<Listener>& GetListeners() const { return m_listeners; }
    inline bool ListenersHasBeenSet() const { return m_listenersHasBeenSet; }
    template<typename ListenersT = Aws::Vector<Listener>>
    void SetListeners(ListenersT&& value) { m_listenersHasBeenSet = true; m_listeners = std::forward<ListenersT>(value); }
    template<typename ListenersT = Aws::Vector<Listener>>
    VirtualNodeSpec& WithListeners(ListenersT&& value) { SetListeners(std::forward<ListenersT>(value)); return *this;}
    template<typename ListenersT = Listener>
    VirtualNodeSpec& AddListeners(ListenersT&& value) { m_listenersHasBeenSet = true; m_listeners.emplace_back(std::forward<ListenersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The inbound and outbound access logging information for the virtual node.</p>
     */
    inline const Logging& GetLogging() const { return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    template<typename LoggingT = Logging>
    void SetLogging(LoggingT&& value) { m_loggingHasBeenSet = true; m_logging = std::forward<LoggingT>(value); }
    template<typename LoggingT = Logging>
    VirtualNodeSpec& WithLogging(LoggingT&& value) { SetLogging(std::forward<LoggingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service discovery information for the virtual node. If your virtual node
     * does not expect ingress traffic, you can omit this parameter. If you specify a
     * <code>listener</code>, then you must specify service discovery information.</p>
     */
    inline const ServiceDiscovery& GetServiceDiscovery() const { return m_serviceDiscovery; }
    inline bool ServiceDiscoveryHasBeenSet() const { return m_serviceDiscoveryHasBeenSet; }
    template<typename ServiceDiscoveryT = ServiceDiscovery>
    void SetServiceDiscovery(ServiceDiscoveryT&& value) { m_serviceDiscoveryHasBeenSet = true; m_serviceDiscovery = std::forward<ServiceDiscoveryT>(value); }
    template<typename ServiceDiscoveryT = ServiceDiscovery>
    VirtualNodeSpec& WithServiceDiscovery(ServiceDiscoveryT&& value) { SetServiceDiscovery(std::forward<ServiceDiscoveryT>(value)); return *this;}
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

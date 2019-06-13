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
   * <p>An object representing the specification of a virtual node.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualNodeSpec">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API VirtualNodeSpec
  {
  public:
    VirtualNodeSpec();
    VirtualNodeSpec(Aws::Utils::Json::JsonView jsonValue);
    VirtualNodeSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The backends that the virtual node is expected to send outbound traffic
     * to.</p>
     */
    inline const Aws::Vector<Backend>& GetBackends() const{ return m_backends; }

    /**
     * <p>The backends that the virtual node is expected to send outbound traffic
     * to.</p>
     */
    inline bool BackendsHasBeenSet() const { return m_backendsHasBeenSet; }

    /**
     * <p>The backends that the virtual node is expected to send outbound traffic
     * to.</p>
     */
    inline void SetBackends(const Aws::Vector<Backend>& value) { m_backendsHasBeenSet = true; m_backends = value; }

    /**
     * <p>The backends that the virtual node is expected to send outbound traffic
     * to.</p>
     */
    inline void SetBackends(Aws::Vector<Backend>&& value) { m_backendsHasBeenSet = true; m_backends = std::move(value); }

    /**
     * <p>The backends that the virtual node is expected to send outbound traffic
     * to.</p>
     */
    inline VirtualNodeSpec& WithBackends(const Aws::Vector<Backend>& value) { SetBackends(value); return *this;}

    /**
     * <p>The backends that the virtual node is expected to send outbound traffic
     * to.</p>
     */
    inline VirtualNodeSpec& WithBackends(Aws::Vector<Backend>&& value) { SetBackends(std::move(value)); return *this;}

    /**
     * <p>The backends that the virtual node is expected to send outbound traffic
     * to.</p>
     */
    inline VirtualNodeSpec& AddBackends(const Backend& value) { m_backendsHasBeenSet = true; m_backends.push_back(value); return *this; }

    /**
     * <p>The backends that the virtual node is expected to send outbound traffic
     * to.</p>
     */
    inline VirtualNodeSpec& AddBackends(Backend&& value) { m_backendsHasBeenSet = true; m_backends.push_back(std::move(value)); return *this; }


    /**
     * <p>The listeners that the virtual node is expected to receive inbound traffic
     * from.
         Currently only one listener is supported per virtual node.</p>
     */
    inline const Aws::Vector<Listener>& GetListeners() const{ return m_listeners; }

    /**
     * <p>The listeners that the virtual node is expected to receive inbound traffic
     * from.
         Currently only one listener is supported per virtual node.</p>
     */
    inline bool ListenersHasBeenSet() const { return m_listenersHasBeenSet; }

    /**
     * <p>The listeners that the virtual node is expected to receive inbound traffic
     * from.
         Currently only one listener is supported per virtual node.</p>
     */
    inline void SetListeners(const Aws::Vector<Listener>& value) { m_listenersHasBeenSet = true; m_listeners = value; }

    /**
     * <p>The listeners that the virtual node is expected to receive inbound traffic
     * from.
         Currently only one listener is supported per virtual node.</p>
     */
    inline void SetListeners(Aws::Vector<Listener>&& value) { m_listenersHasBeenSet = true; m_listeners = std::move(value); }

    /**
     * <p>The listeners that the virtual node is expected to receive inbound traffic
     * from.
         Currently only one listener is supported per virtual node.</p>
     */
    inline VirtualNodeSpec& WithListeners(const Aws::Vector<Listener>& value) { SetListeners(value); return *this;}

    /**
     * <p>The listeners that the virtual node is expected to receive inbound traffic
     * from.
         Currently only one listener is supported per virtual node.</p>
     */
    inline VirtualNodeSpec& WithListeners(Aws::Vector<Listener>&& value) { SetListeners(std::move(value)); return *this;}

    /**
     * <p>The listeners that the virtual node is expected to receive inbound traffic
     * from.
         Currently only one listener is supported per virtual node.</p>
     */
    inline VirtualNodeSpec& AddListeners(const Listener& value) { m_listenersHasBeenSet = true; m_listeners.push_back(value); return *this; }

    /**
     * <p>The listeners that the virtual node is expected to receive inbound traffic
     * from.
         Currently only one listener is supported per virtual node.</p>
     */
    inline VirtualNodeSpec& AddListeners(Listener&& value) { m_listenersHasBeenSet = true; m_listeners.push_back(std::move(value)); return *this; }


    /**
     * <p>The inbound and outbound access logging information for the virtual node.</p>
     */
    inline const Logging& GetLogging() const{ return m_logging; }

    /**
     * <p>The inbound and outbound access logging information for the virtual node.</p>
     */
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }

    /**
     * <p>The inbound and outbound access logging information for the virtual node.</p>
     */
    inline void SetLogging(const Logging& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * <p>The inbound and outbound access logging information for the virtual node.</p>
     */
    inline void SetLogging(Logging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }

    /**
     * <p>The inbound and outbound access logging information for the virtual node.</p>
     */
    inline VirtualNodeSpec& WithLogging(const Logging& value) { SetLogging(value); return *this;}

    /**
     * <p>The inbound and outbound access logging information for the virtual node.</p>
     */
    inline VirtualNodeSpec& WithLogging(Logging&& value) { SetLogging(std::move(value)); return *this;}


    /**
     * <p>The service discovery information for the virtual node. If your virtual node
     * does not
         expect ingress traffic, you can omit this parameter.</p>
     */
    inline const ServiceDiscovery& GetServiceDiscovery() const{ return m_serviceDiscovery; }

    /**
     * <p>The service discovery information for the virtual node. If your virtual node
     * does not
         expect ingress traffic, you can omit this parameter.</p>
     */
    inline bool ServiceDiscoveryHasBeenSet() const { return m_serviceDiscoveryHasBeenSet; }

    /**
     * <p>The service discovery information for the virtual node. If your virtual node
     * does not
         expect ingress traffic, you can omit this parameter.</p>
     */
    inline void SetServiceDiscovery(const ServiceDiscovery& value) { m_serviceDiscoveryHasBeenSet = true; m_serviceDiscovery = value; }

    /**
     * <p>The service discovery information for the virtual node. If your virtual node
     * does not
         expect ingress traffic, you can omit this parameter.</p>
     */
    inline void SetServiceDiscovery(ServiceDiscovery&& value) { m_serviceDiscoveryHasBeenSet = true; m_serviceDiscovery = std::move(value); }

    /**
     * <p>The service discovery information for the virtual node. If your virtual node
     * does not
         expect ingress traffic, you can omit this parameter.</p>
     */
    inline VirtualNodeSpec& WithServiceDiscovery(const ServiceDiscovery& value) { SetServiceDiscovery(value); return *this;}

    /**
     * <p>The service discovery information for the virtual node. If your virtual node
     * does not
         expect ingress traffic, you can omit this parameter.</p>
     */
    inline VirtualNodeSpec& WithServiceDiscovery(ServiceDiscovery&& value) { SetServiceDiscovery(std::move(value)); return *this;}

  private:

    Aws::Vector<Backend> m_backends;
    bool m_backendsHasBeenSet;

    Aws::Vector<Listener> m_listeners;
    bool m_listenersHasBeenSet;

    Logging m_logging;
    bool m_loggingHasBeenSet;

    ServiceDiscovery m_serviceDiscovery;
    bool m_serviceDiscoveryHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

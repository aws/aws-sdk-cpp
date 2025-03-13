/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayBackendDefaults.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/VirtualGatewayLogging.h>
#include <aws/appmesh/model/VirtualGatewayListener.h>
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
   * <p>An object that represents the specification of a service mesh
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewaySpec">AWS
   * API Reference</a></p>
   */
  class VirtualGatewaySpec
  {
  public:
    AWS_APPMESH_API VirtualGatewaySpec() = default;
    AWS_APPMESH_API VirtualGatewaySpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewaySpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to an object that represents the defaults for backends.</p>
     */
    inline const VirtualGatewayBackendDefaults& GetBackendDefaults() const { return m_backendDefaults; }
    inline bool BackendDefaultsHasBeenSet() const { return m_backendDefaultsHasBeenSet; }
    template<typename BackendDefaultsT = VirtualGatewayBackendDefaults>
    void SetBackendDefaults(BackendDefaultsT&& value) { m_backendDefaultsHasBeenSet = true; m_backendDefaults = std::forward<BackendDefaultsT>(value); }
    template<typename BackendDefaultsT = VirtualGatewayBackendDefaults>
    VirtualGatewaySpec& WithBackendDefaults(BackendDefaultsT&& value) { SetBackendDefaults(std::forward<BackendDefaultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listeners that the mesh endpoint is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline const Aws::Vector<VirtualGatewayListener>& GetListeners() const { return m_listeners; }
    inline bool ListenersHasBeenSet() const { return m_listenersHasBeenSet; }
    template<typename ListenersT = Aws::Vector<VirtualGatewayListener>>
    void SetListeners(ListenersT&& value) { m_listenersHasBeenSet = true; m_listeners = std::forward<ListenersT>(value); }
    template<typename ListenersT = Aws::Vector<VirtualGatewayListener>>
    VirtualGatewaySpec& WithListeners(ListenersT&& value) { SetListeners(std::forward<ListenersT>(value)); return *this;}
    template<typename ListenersT = VirtualGatewayListener>
    VirtualGatewaySpec& AddListeners(ListenersT&& value) { m_listenersHasBeenSet = true; m_listeners.emplace_back(std::forward<ListenersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const VirtualGatewayLogging& GetLogging() const { return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    template<typename LoggingT = VirtualGatewayLogging>
    void SetLogging(LoggingT&& value) { m_loggingHasBeenSet = true; m_logging = std::forward<LoggingT>(value); }
    template<typename LoggingT = VirtualGatewayLogging>
    VirtualGatewaySpec& WithLogging(LoggingT&& value) { SetLogging(std::forward<LoggingT>(value)); return *this;}
    ///@}
  private:

    VirtualGatewayBackendDefaults m_backendDefaults;
    bool m_backendDefaultsHasBeenSet = false;

    Aws::Vector<VirtualGatewayListener> m_listeners;
    bool m_listenersHasBeenSet = false;

    VirtualGatewayLogging m_logging;
    bool m_loggingHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

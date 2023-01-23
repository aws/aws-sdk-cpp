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
    AWS_APPMESH_API VirtualGatewaySpec();
    AWS_APPMESH_API VirtualGatewaySpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewaySpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents the defaults for backends.</p>
     */
    inline const VirtualGatewayBackendDefaults& GetBackendDefaults() const{ return m_backendDefaults; }

    /**
     * <p>A reference to an object that represents the defaults for backends.</p>
     */
    inline bool BackendDefaultsHasBeenSet() const { return m_backendDefaultsHasBeenSet; }

    /**
     * <p>A reference to an object that represents the defaults for backends.</p>
     */
    inline void SetBackendDefaults(const VirtualGatewayBackendDefaults& value) { m_backendDefaultsHasBeenSet = true; m_backendDefaults = value; }

    /**
     * <p>A reference to an object that represents the defaults for backends.</p>
     */
    inline void SetBackendDefaults(VirtualGatewayBackendDefaults&& value) { m_backendDefaultsHasBeenSet = true; m_backendDefaults = std::move(value); }

    /**
     * <p>A reference to an object that represents the defaults for backends.</p>
     */
    inline VirtualGatewaySpec& WithBackendDefaults(const VirtualGatewayBackendDefaults& value) { SetBackendDefaults(value); return *this;}

    /**
     * <p>A reference to an object that represents the defaults for backends.</p>
     */
    inline VirtualGatewaySpec& WithBackendDefaults(VirtualGatewayBackendDefaults&& value) { SetBackendDefaults(std::move(value)); return *this;}


    /**
     * <p>The listeners that the mesh endpoint is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline const Aws::Vector<VirtualGatewayListener>& GetListeners() const{ return m_listeners; }

    /**
     * <p>The listeners that the mesh endpoint is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline bool ListenersHasBeenSet() const { return m_listenersHasBeenSet; }

    /**
     * <p>The listeners that the mesh endpoint is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline void SetListeners(const Aws::Vector<VirtualGatewayListener>& value) { m_listenersHasBeenSet = true; m_listeners = value; }

    /**
     * <p>The listeners that the mesh endpoint is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline void SetListeners(Aws::Vector<VirtualGatewayListener>&& value) { m_listenersHasBeenSet = true; m_listeners = std::move(value); }

    /**
     * <p>The listeners that the mesh endpoint is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline VirtualGatewaySpec& WithListeners(const Aws::Vector<VirtualGatewayListener>& value) { SetListeners(value); return *this;}

    /**
     * <p>The listeners that the mesh endpoint is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline VirtualGatewaySpec& WithListeners(Aws::Vector<VirtualGatewayListener>&& value) { SetListeners(std::move(value)); return *this;}

    /**
     * <p>The listeners that the mesh endpoint is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline VirtualGatewaySpec& AddListeners(const VirtualGatewayListener& value) { m_listenersHasBeenSet = true; m_listeners.push_back(value); return *this; }

    /**
     * <p>The listeners that the mesh endpoint is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline VirtualGatewaySpec& AddListeners(VirtualGatewayListener&& value) { m_listenersHasBeenSet = true; m_listeners.push_back(std::move(value)); return *this; }


    
    inline const VirtualGatewayLogging& GetLogging() const{ return m_logging; }

    
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }

    
    inline void SetLogging(const VirtualGatewayLogging& value) { m_loggingHasBeenSet = true; m_logging = value; }

    
    inline void SetLogging(VirtualGatewayLogging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }

    
    inline VirtualGatewaySpec& WithLogging(const VirtualGatewayLogging& value) { SetLogging(value); return *this;}

    
    inline VirtualGatewaySpec& WithLogging(VirtualGatewayLogging&& value) { SetLogging(std::move(value)); return *this;}

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

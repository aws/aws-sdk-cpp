/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/VirtualRouterListener.h>
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
   * <p>An object that represents the specification of a virtual
   * router.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualRouterSpec">AWS
   * API Reference</a></p>
   */
  class VirtualRouterSpec
  {
  public:
    AWS_APPMESH_API VirtualRouterSpec();
    AWS_APPMESH_API VirtualRouterSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualRouterSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The listeners that the virtual router is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline const Aws::Vector<VirtualRouterListener>& GetListeners() const{ return m_listeners; }

    /**
     * <p>The listeners that the virtual router is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline bool ListenersHasBeenSet() const { return m_listenersHasBeenSet; }

    /**
     * <p>The listeners that the virtual router is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline void SetListeners(const Aws::Vector<VirtualRouterListener>& value) { m_listenersHasBeenSet = true; m_listeners = value; }

    /**
     * <p>The listeners that the virtual router is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline void SetListeners(Aws::Vector<VirtualRouterListener>&& value) { m_listenersHasBeenSet = true; m_listeners = std::move(value); }

    /**
     * <p>The listeners that the virtual router is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline VirtualRouterSpec& WithListeners(const Aws::Vector<VirtualRouterListener>& value) { SetListeners(value); return *this;}

    /**
     * <p>The listeners that the virtual router is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline VirtualRouterSpec& WithListeners(Aws::Vector<VirtualRouterListener>&& value) { SetListeners(std::move(value)); return *this;}

    /**
     * <p>The listeners that the virtual router is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline VirtualRouterSpec& AddListeners(const VirtualRouterListener& value) { m_listenersHasBeenSet = true; m_listeners.push_back(value); return *this; }

    /**
     * <p>The listeners that the virtual router is expected to receive inbound traffic
     * from. You can specify one listener.</p>
     */
    inline VirtualRouterSpec& AddListeners(VirtualRouterListener&& value) { m_listenersHasBeenSet = true; m_listeners.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<VirtualRouterListener> m_listeners;
    bool m_listenersHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

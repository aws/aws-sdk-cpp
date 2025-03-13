/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object that represents a virtual node service provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualRouterServiceProvider">AWS
   * API Reference</a></p>
   */
  class VirtualRouterServiceProvider
  {
  public:
    AWS_APPMESH_API VirtualRouterServiceProvider() = default;
    AWS_APPMESH_API VirtualRouterServiceProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualRouterServiceProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the virtual router that is acting as a service provider.</p>
     */
    inline const Aws::String& GetVirtualRouterName() const { return m_virtualRouterName; }
    inline bool VirtualRouterNameHasBeenSet() const { return m_virtualRouterNameHasBeenSet; }
    template<typename VirtualRouterNameT = Aws::String>
    void SetVirtualRouterName(VirtualRouterNameT&& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = std::forward<VirtualRouterNameT>(value); }
    template<typename VirtualRouterNameT = Aws::String>
    VirtualRouterServiceProvider& WithVirtualRouterName(VirtualRouterNameT&& value) { SetVirtualRouterName(std::forward<VirtualRouterNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_virtualRouterName;
    bool m_virtualRouterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

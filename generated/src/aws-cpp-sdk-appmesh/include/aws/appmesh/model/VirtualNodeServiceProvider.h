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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualNodeServiceProvider">AWS
   * API Reference</a></p>
   */
  class VirtualNodeServiceProvider
  {
  public:
    AWS_APPMESH_API VirtualNodeServiceProvider() = default;
    AWS_APPMESH_API VirtualNodeServiceProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualNodeServiceProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the virtual node that is acting as a service provider.</p>
     */
    inline const Aws::String& GetVirtualNodeName() const { return m_virtualNodeName; }
    inline bool VirtualNodeNameHasBeenSet() const { return m_virtualNodeNameHasBeenSet; }
    template<typename VirtualNodeNameT = Aws::String>
    void SetVirtualNodeName(VirtualNodeNameT&& value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName = std::forward<VirtualNodeNameT>(value); }
    template<typename VirtualNodeNameT = Aws::String>
    VirtualNodeServiceProvider& WithVirtualNodeName(VirtualNodeNameT&& value) { SetVirtualNodeName(std::forward<VirtualNodeNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_virtualNodeName;
    bool m_virtualNodeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

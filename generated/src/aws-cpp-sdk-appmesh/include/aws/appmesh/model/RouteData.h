/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/ResourceMetadata.h>
#include <aws/appmesh/model/RouteSpec.h>
#include <aws/appmesh/model/RouteStatus.h>
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
   * <p>An object that represents a route returned by a describe
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/RouteData">AWS
   * API Reference</a></p>
   */
  class RouteData
  {
  public:
    AWS_APPMESH_API RouteData() = default;
    AWS_APPMESH_API RouteData(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API RouteData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the service mesh that the route resides in.</p>
     */
    inline const Aws::String& GetMeshName() const { return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    template<typename MeshNameT = Aws::String>
    void SetMeshName(MeshNameT&& value) { m_meshNameHasBeenSet = true; m_meshName = std::forward<MeshNameT>(value); }
    template<typename MeshNameT = Aws::String>
    RouteData& WithMeshName(MeshNameT&& value) { SetMeshName(std::forward<MeshNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated metadata for the route.</p>
     */
    inline const ResourceMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = ResourceMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = ResourceMetadata>
    RouteData& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the route.</p>
     */
    inline const Aws::String& GetRouteName() const { return m_routeName; }
    inline bool RouteNameHasBeenSet() const { return m_routeNameHasBeenSet; }
    template<typename RouteNameT = Aws::String>
    void SetRouteName(RouteNameT&& value) { m_routeNameHasBeenSet = true; m_routeName = std::forward<RouteNameT>(value); }
    template<typename RouteNameT = Aws::String>
    RouteData& WithRouteName(RouteNameT&& value) { SetRouteName(std::forward<RouteNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specifications of the route.</p>
     */
    inline const RouteSpec& GetSpec() const { return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    template<typename SpecT = RouteSpec>
    void SetSpec(SpecT&& value) { m_specHasBeenSet = true; m_spec = std::forward<SpecT>(value); }
    template<typename SpecT = RouteSpec>
    RouteData& WithSpec(SpecT&& value) { SetSpec(std::forward<SpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the route.</p>
     */
    inline const RouteStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = RouteStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = RouteStatus>
    RouteData& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual router that the route is associated with.</p>
     */
    inline const Aws::String& GetVirtualRouterName() const { return m_virtualRouterName; }
    inline bool VirtualRouterNameHasBeenSet() const { return m_virtualRouterNameHasBeenSet; }
    template<typename VirtualRouterNameT = Aws::String>
    void SetVirtualRouterName(VirtualRouterNameT&& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = std::forward<VirtualRouterNameT>(value); }
    template<typename VirtualRouterNameT = Aws::String>
    RouteData& WithVirtualRouterName(VirtualRouterNameT&& value) { SetVirtualRouterName(std::forward<VirtualRouterNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    ResourceMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_routeName;
    bool m_routeNameHasBeenSet = false;

    RouteSpec m_spec;
    bool m_specHasBeenSet = false;

    RouteStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_virtualRouterName;
    bool m_virtualRouterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

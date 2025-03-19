/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/ResourceMetadata.h>
#include <aws/appmesh/model/GatewayRouteSpec.h>
#include <aws/appmesh/model/GatewayRouteStatus.h>
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
   * <p>An object that represents a gateway route returned by a describe
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GatewayRouteData">AWS
   * API Reference</a></p>
   */
  class GatewayRouteData
  {
  public:
    AWS_APPMESH_API GatewayRouteData() = default;
    AWS_APPMESH_API GatewayRouteData(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GatewayRouteData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the gateway route.</p>
     */
    inline const Aws::String& GetGatewayRouteName() const { return m_gatewayRouteName; }
    inline bool GatewayRouteNameHasBeenSet() const { return m_gatewayRouteNameHasBeenSet; }
    template<typename GatewayRouteNameT = Aws::String>
    void SetGatewayRouteName(GatewayRouteNameT&& value) { m_gatewayRouteNameHasBeenSet = true; m_gatewayRouteName = std::forward<GatewayRouteNameT>(value); }
    template<typename GatewayRouteNameT = Aws::String>
    GatewayRouteData& WithGatewayRouteName(GatewayRouteNameT&& value) { SetGatewayRouteName(std::forward<GatewayRouteNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service mesh that the resource resides in. </p>
     */
    inline const Aws::String& GetMeshName() const { return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    template<typename MeshNameT = Aws::String>
    void SetMeshName(MeshNameT&& value) { m_meshNameHasBeenSet = true; m_meshName = std::forward<MeshNameT>(value); }
    template<typename MeshNameT = Aws::String>
    GatewayRouteData& WithMeshName(MeshNameT&& value) { SetMeshName(std::forward<MeshNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = ResourceMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = ResourceMetadata>
    GatewayRouteData& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specifications of the gateway route.</p>
     */
    inline const GatewayRouteSpec& GetSpec() const { return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    template<typename SpecT = GatewayRouteSpec>
    void SetSpec(SpecT&& value) { m_specHasBeenSet = true; m_spec = std::forward<SpecT>(value); }
    template<typename SpecT = GatewayRouteSpec>
    GatewayRouteData& WithSpec(SpecT&& value) { SetSpec(std::forward<SpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the gateway route.</p>
     */
    inline const GatewayRouteStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = GatewayRouteStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = GatewayRouteStatus>
    GatewayRouteData& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual gateway that the gateway route is associated with.</p>
     */
    inline const Aws::String& GetVirtualGatewayName() const { return m_virtualGatewayName; }
    inline bool VirtualGatewayNameHasBeenSet() const { return m_virtualGatewayNameHasBeenSet; }
    template<typename VirtualGatewayNameT = Aws::String>
    void SetVirtualGatewayName(VirtualGatewayNameT&& value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName = std::forward<VirtualGatewayNameT>(value); }
    template<typename VirtualGatewayNameT = Aws::String>
    GatewayRouteData& WithVirtualGatewayName(VirtualGatewayNameT&& value) { SetVirtualGatewayName(std::forward<VirtualGatewayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayRouteName;
    bool m_gatewayRouteNameHasBeenSet = false;

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    ResourceMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    GatewayRouteSpec m_spec;
    bool m_specHasBeenSet = false;

    GatewayRouteStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_virtualGatewayName;
    bool m_virtualGatewayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

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
    AWS_APPMESH_API GatewayRouteData();
    AWS_APPMESH_API GatewayRouteData(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GatewayRouteData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the gateway route.</p>
     */
    inline const Aws::String& GetGatewayRouteName() const{ return m_gatewayRouteName; }

    /**
     * <p>The name of the gateway route.</p>
     */
    inline bool GatewayRouteNameHasBeenSet() const { return m_gatewayRouteNameHasBeenSet; }

    /**
     * <p>The name of the gateway route.</p>
     */
    inline void SetGatewayRouteName(const Aws::String& value) { m_gatewayRouteNameHasBeenSet = true; m_gatewayRouteName = value; }

    /**
     * <p>The name of the gateway route.</p>
     */
    inline void SetGatewayRouteName(Aws::String&& value) { m_gatewayRouteNameHasBeenSet = true; m_gatewayRouteName = std::move(value); }

    /**
     * <p>The name of the gateway route.</p>
     */
    inline void SetGatewayRouteName(const char* value) { m_gatewayRouteNameHasBeenSet = true; m_gatewayRouteName.assign(value); }

    /**
     * <p>The name of the gateway route.</p>
     */
    inline GatewayRouteData& WithGatewayRouteName(const Aws::String& value) { SetGatewayRouteName(value); return *this;}

    /**
     * <p>The name of the gateway route.</p>
     */
    inline GatewayRouteData& WithGatewayRouteName(Aws::String&& value) { SetGatewayRouteName(std::move(value)); return *this;}

    /**
     * <p>The name of the gateway route.</p>
     */
    inline GatewayRouteData& WithGatewayRouteName(const char* value) { SetGatewayRouteName(value); return *this;}


    /**
     * <p>The name of the service mesh that the resource resides in. </p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh that the resource resides in. </p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh that the resource resides in. </p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh that the resource resides in. </p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh that the resource resides in. </p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh that the resource resides in. </p>
     */
    inline GatewayRouteData& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh that the resource resides in. </p>
     */
    inline GatewayRouteData& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh that the resource resides in. </p>
     */
    inline GatewayRouteData& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    
    inline const ResourceMetadata& GetMetadata() const{ return m_metadata; }

    
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    
    inline void SetMetadata(const ResourceMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    
    inline void SetMetadata(ResourceMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    
    inline GatewayRouteData& WithMetadata(const ResourceMetadata& value) { SetMetadata(value); return *this;}

    
    inline GatewayRouteData& WithMetadata(ResourceMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>The specifications of the gateway route.</p>
     */
    inline const GatewayRouteSpec& GetSpec() const{ return m_spec; }

    /**
     * <p>The specifications of the gateway route.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The specifications of the gateway route.</p>
     */
    inline void SetSpec(const GatewayRouteSpec& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The specifications of the gateway route.</p>
     */
    inline void SetSpec(GatewayRouteSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The specifications of the gateway route.</p>
     */
    inline GatewayRouteData& WithSpec(const GatewayRouteSpec& value) { SetSpec(value); return *this;}

    /**
     * <p>The specifications of the gateway route.</p>
     */
    inline GatewayRouteData& WithSpec(GatewayRouteSpec&& value) { SetSpec(std::move(value)); return *this;}


    /**
     * <p>The status of the gateway route.</p>
     */
    inline const GatewayRouteStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the gateway route.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the gateway route.</p>
     */
    inline void SetStatus(const GatewayRouteStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the gateway route.</p>
     */
    inline void SetStatus(GatewayRouteStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the gateway route.</p>
     */
    inline GatewayRouteData& WithStatus(const GatewayRouteStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the gateway route.</p>
     */
    inline GatewayRouteData& WithStatus(GatewayRouteStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The virtual gateway that the gateway route is associated with.</p>
     */
    inline const Aws::String& GetVirtualGatewayName() const{ return m_virtualGatewayName; }

    /**
     * <p>The virtual gateway that the gateway route is associated with.</p>
     */
    inline bool VirtualGatewayNameHasBeenSet() const { return m_virtualGatewayNameHasBeenSet; }

    /**
     * <p>The virtual gateway that the gateway route is associated with.</p>
     */
    inline void SetVirtualGatewayName(const Aws::String& value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName = value; }

    /**
     * <p>The virtual gateway that the gateway route is associated with.</p>
     */
    inline void SetVirtualGatewayName(Aws::String&& value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName = std::move(value); }

    /**
     * <p>The virtual gateway that the gateway route is associated with.</p>
     */
    inline void SetVirtualGatewayName(const char* value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName.assign(value); }

    /**
     * <p>The virtual gateway that the gateway route is associated with.</p>
     */
    inline GatewayRouteData& WithVirtualGatewayName(const Aws::String& value) { SetVirtualGatewayName(value); return *this;}

    /**
     * <p>The virtual gateway that the gateway route is associated with.</p>
     */
    inline GatewayRouteData& WithVirtualGatewayName(Aws::String&& value) { SetVirtualGatewayName(std::move(value)); return *this;}

    /**
     * <p>The virtual gateway that the gateway route is associated with.</p>
     */
    inline GatewayRouteData& WithVirtualGatewayName(const char* value) { SetVirtualGatewayName(value); return *this;}

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

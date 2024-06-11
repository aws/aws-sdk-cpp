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
    AWS_APPMESH_API RouteData();
    AWS_APPMESH_API RouteData(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API RouteData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the service mesh that the route resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }
    inline RouteData& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}
    inline RouteData& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}
    inline RouteData& WithMeshName(const char* value) { SetMeshName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated metadata for the route.</p>
     */
    inline const ResourceMetadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const ResourceMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(ResourceMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline RouteData& WithMetadata(const ResourceMetadata& value) { SetMetadata(value); return *this;}
    inline RouteData& WithMetadata(ResourceMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the route.</p>
     */
    inline const Aws::String& GetRouteName() const{ return m_routeName; }
    inline bool RouteNameHasBeenSet() const { return m_routeNameHasBeenSet; }
    inline void SetRouteName(const Aws::String& value) { m_routeNameHasBeenSet = true; m_routeName = value; }
    inline void SetRouteName(Aws::String&& value) { m_routeNameHasBeenSet = true; m_routeName = std::move(value); }
    inline void SetRouteName(const char* value) { m_routeNameHasBeenSet = true; m_routeName.assign(value); }
    inline RouteData& WithRouteName(const Aws::String& value) { SetRouteName(value); return *this;}
    inline RouteData& WithRouteName(Aws::String&& value) { SetRouteName(std::move(value)); return *this;}
    inline RouteData& WithRouteName(const char* value) { SetRouteName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specifications of the route.</p>
     */
    inline const RouteSpec& GetSpec() const{ return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    inline void SetSpec(const RouteSpec& value) { m_specHasBeenSet = true; m_spec = value; }
    inline void SetSpec(RouteSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }
    inline RouteData& WithSpec(const RouteSpec& value) { SetSpec(value); return *this;}
    inline RouteData& WithSpec(RouteSpec&& value) { SetSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the route.</p>
     */
    inline const RouteStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RouteStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RouteStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RouteData& WithStatus(const RouteStatus& value) { SetStatus(value); return *this;}
    inline RouteData& WithStatus(RouteStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual router that the route is associated with.</p>
     */
    inline const Aws::String& GetVirtualRouterName() const{ return m_virtualRouterName; }
    inline bool VirtualRouterNameHasBeenSet() const { return m_virtualRouterNameHasBeenSet; }
    inline void SetVirtualRouterName(const Aws::String& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = value; }
    inline void SetVirtualRouterName(Aws::String&& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = std::move(value); }
    inline void SetVirtualRouterName(const char* value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName.assign(value); }
    inline RouteData& WithVirtualRouterName(const Aws::String& value) { SetVirtualRouterName(value); return *this;}
    inline RouteData& WithVirtualRouterName(Aws::String&& value) { SetVirtualRouterName(std::move(value)); return *this;}
    inline RouteData& WithVirtualRouterName(const char* value) { SetVirtualRouterName(value); return *this;}
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

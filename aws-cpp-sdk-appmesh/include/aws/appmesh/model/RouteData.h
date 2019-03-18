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
   * <p>An object representing a route returned by a describe
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/RouteData">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API RouteData
  {
  public:
    RouteData();
    RouteData(Aws::Utils::Json::JsonView jsonValue);
    RouteData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the service mesh that the route resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh that the route resides in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh that the route resides in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh that the route resides in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh that the route resides in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh that the route resides in.</p>
     */
    inline RouteData& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh that the route resides in.</p>
     */
    inline RouteData& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh that the route resides in.</p>
     */
    inline RouteData& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The associated metadata for the route.</p>
     */
    inline const ResourceMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The associated metadata for the route.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The associated metadata for the route.</p>
     */
    inline void SetMetadata(const ResourceMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The associated metadata for the route.</p>
     */
    inline void SetMetadata(ResourceMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The associated metadata for the route.</p>
     */
    inline RouteData& WithMetadata(const ResourceMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The associated metadata for the route.</p>
     */
    inline RouteData& WithMetadata(ResourceMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>The name of the route.</p>
     */
    inline const Aws::String& GetRouteName() const{ return m_routeName; }

    /**
     * <p>The name of the route.</p>
     */
    inline bool RouteNameHasBeenSet() const { return m_routeNameHasBeenSet; }

    /**
     * <p>The name of the route.</p>
     */
    inline void SetRouteName(const Aws::String& value) { m_routeNameHasBeenSet = true; m_routeName = value; }

    /**
     * <p>The name of the route.</p>
     */
    inline void SetRouteName(Aws::String&& value) { m_routeNameHasBeenSet = true; m_routeName = std::move(value); }

    /**
     * <p>The name of the route.</p>
     */
    inline void SetRouteName(const char* value) { m_routeNameHasBeenSet = true; m_routeName.assign(value); }

    /**
     * <p>The name of the route.</p>
     */
    inline RouteData& WithRouteName(const Aws::String& value) { SetRouteName(value); return *this;}

    /**
     * <p>The name of the route.</p>
     */
    inline RouteData& WithRouteName(Aws::String&& value) { SetRouteName(std::move(value)); return *this;}

    /**
     * <p>The name of the route.</p>
     */
    inline RouteData& WithRouteName(const char* value) { SetRouteName(value); return *this;}


    /**
     * <p>The specifications of the route.</p>
     */
    inline const RouteSpec& GetSpec() const{ return m_spec; }

    /**
     * <p>The specifications of the route.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The specifications of the route.</p>
     */
    inline void SetSpec(const RouteSpec& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The specifications of the route.</p>
     */
    inline void SetSpec(RouteSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The specifications of the route.</p>
     */
    inline RouteData& WithSpec(const RouteSpec& value) { SetSpec(value); return *this;}

    /**
     * <p>The specifications of the route.</p>
     */
    inline RouteData& WithSpec(RouteSpec&& value) { SetSpec(std::move(value)); return *this;}


    /**
     * <p>The status of the route.</p>
     */
    inline const RouteStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the route.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the route.</p>
     */
    inline void SetStatus(const RouteStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the route.</p>
     */
    inline void SetStatus(RouteStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the route.</p>
     */
    inline RouteData& WithStatus(const RouteStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the route.</p>
     */
    inline RouteData& WithStatus(RouteStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The virtual router that the route is associated with.</p>
     */
    inline const Aws::String& GetVirtualRouterName() const{ return m_virtualRouterName; }

    /**
     * <p>The virtual router that the route is associated with.</p>
     */
    inline bool VirtualRouterNameHasBeenSet() const { return m_virtualRouterNameHasBeenSet; }

    /**
     * <p>The virtual router that the route is associated with.</p>
     */
    inline void SetVirtualRouterName(const Aws::String& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = value; }

    /**
     * <p>The virtual router that the route is associated with.</p>
     */
    inline void SetVirtualRouterName(Aws::String&& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = std::move(value); }

    /**
     * <p>The virtual router that the route is associated with.</p>
     */
    inline void SetVirtualRouterName(const char* value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName.assign(value); }

    /**
     * <p>The virtual router that the route is associated with.</p>
     */
    inline RouteData& WithVirtualRouterName(const Aws::String& value) { SetVirtualRouterName(value); return *this;}

    /**
     * <p>The virtual router that the route is associated with.</p>
     */
    inline RouteData& WithVirtualRouterName(Aws::String&& value) { SetVirtualRouterName(std::move(value)); return *this;}

    /**
     * <p>The virtual router that the route is associated with.</p>
     */
    inline RouteData& WithVirtualRouterName(const char* value) { SetVirtualRouterName(value); return *this;}

  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet;

    ResourceMetadata m_metadata;
    bool m_metadataHasBeenSet;

    Aws::String m_routeName;
    bool m_routeNameHasBeenSet;

    RouteSpec m_spec;
    bool m_specHasBeenSet;

    RouteStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_virtualRouterName;
    bool m_virtualRouterNameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

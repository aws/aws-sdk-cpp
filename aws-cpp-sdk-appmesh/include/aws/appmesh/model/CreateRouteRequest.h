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
#include <aws/appmesh/AppMeshRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/RouteSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/TagRef.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AppMesh
{
namespace Model
{

  /**
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateRouteInput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API CreateRouteRequest : public AppMeshRequest
  {
  public:
    CreateRouteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoute"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the
request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the
request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the
request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the
request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the
request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the
request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline CreateRouteRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the
request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline CreateRouteRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the
request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline CreateRouteRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name of the service mesh to create the route in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh to create the route in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh to create the route in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh to create the route in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh to create the route in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh to create the route in.</p>
     */
    inline CreateRouteRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh to create the route in.</p>
     */
    inline CreateRouteRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh to create the route in.</p>
     */
    inline CreateRouteRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The name to use for the route.</p>
     */
    inline const Aws::String& GetRouteName() const{ return m_routeName; }

    /**
     * <p>The name to use for the route.</p>
     */
    inline bool RouteNameHasBeenSet() const { return m_routeNameHasBeenSet; }

    /**
     * <p>The name to use for the route.</p>
     */
    inline void SetRouteName(const Aws::String& value) { m_routeNameHasBeenSet = true; m_routeName = value; }

    /**
     * <p>The name to use for the route.</p>
     */
    inline void SetRouteName(Aws::String&& value) { m_routeNameHasBeenSet = true; m_routeName = std::move(value); }

    /**
     * <p>The name to use for the route.</p>
     */
    inline void SetRouteName(const char* value) { m_routeNameHasBeenSet = true; m_routeName.assign(value); }

    /**
     * <p>The name to use for the route.</p>
     */
    inline CreateRouteRequest& WithRouteName(const Aws::String& value) { SetRouteName(value); return *this;}

    /**
     * <p>The name to use for the route.</p>
     */
    inline CreateRouteRequest& WithRouteName(Aws::String&& value) { SetRouteName(std::move(value)); return *this;}

    /**
     * <p>The name to use for the route.</p>
     */
    inline CreateRouteRequest& WithRouteName(const char* value) { SetRouteName(value); return *this;}


    /**
     * <p>The route specification to apply.</p>
     */
    inline const RouteSpec& GetSpec() const{ return m_spec; }

    /**
     * <p>The route specification to apply.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The route specification to apply.</p>
     */
    inline void SetSpec(const RouteSpec& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The route specification to apply.</p>
     */
    inline void SetSpec(RouteSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The route specification to apply.</p>
     */
    inline CreateRouteRequest& WithSpec(const RouteSpec& value) { SetSpec(value); return *this;}

    /**
     * <p>The route specification to apply.</p>
     */
    inline CreateRouteRequest& WithSpec(RouteSpec&& value) { SetSpec(std::move(value)); return *this;}


    /**
     * <p>Optional metadata that you can apply to the route to assist with
     * categorization and
         organization. Each tag consists of a key and an
     * optional value, both of which you define.
         Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<TagRef>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata that you can apply to the route to assist with
     * categorization and
         organization. Each tag consists of a key and an
     * optional value, both of which you define.
         Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata that you can apply to the route to assist with
     * categorization and
         organization. Each tag consists of a key and an
     * optional value, both of which you define.
         Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<TagRef>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata that you can apply to the route to assist with
     * categorization and
         organization. Each tag consists of a key and an
     * optional value, both of which you define.
         Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<TagRef>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata that you can apply to the route to assist with
     * categorization and
         organization. Each tag consists of a key and an
     * optional value, both of which you define.
         Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline CreateRouteRequest& WithTags(const Aws::Vector<TagRef>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata that you can apply to the route to assist with
     * categorization and
         organization. Each tag consists of a key and an
     * optional value, both of which you define.
         Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline CreateRouteRequest& WithTags(Aws::Vector<TagRef>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata that you can apply to the route to assist with
     * categorization and
         organization. Each tag consists of a key and an
     * optional value, both of which you define.
         Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline CreateRouteRequest& AddTags(const TagRef& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Optional metadata that you can apply to the route to assist with
     * categorization and
         organization. Each tag consists of a key and an
     * optional value, both of which you define.
         Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline CreateRouteRequest& AddTags(TagRef&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the virtual router in which to create the route.</p>
     */
    inline const Aws::String& GetVirtualRouterName() const{ return m_virtualRouterName; }

    /**
     * <p>The name of the virtual router in which to create the route.</p>
     */
    inline bool VirtualRouterNameHasBeenSet() const { return m_virtualRouterNameHasBeenSet; }

    /**
     * <p>The name of the virtual router in which to create the route.</p>
     */
    inline void SetVirtualRouterName(const Aws::String& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = value; }

    /**
     * <p>The name of the virtual router in which to create the route.</p>
     */
    inline void SetVirtualRouterName(Aws::String&& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = std::move(value); }

    /**
     * <p>The name of the virtual router in which to create the route.</p>
     */
    inline void SetVirtualRouterName(const char* value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName.assign(value); }

    /**
     * <p>The name of the virtual router in which to create the route.</p>
     */
    inline CreateRouteRequest& WithVirtualRouterName(const Aws::String& value) { SetVirtualRouterName(value); return *this;}

    /**
     * <p>The name of the virtual router in which to create the route.</p>
     */
    inline CreateRouteRequest& WithVirtualRouterName(Aws::String&& value) { SetVirtualRouterName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual router in which to create the route.</p>
     */
    inline CreateRouteRequest& WithVirtualRouterName(const char* value) { SetVirtualRouterName(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet;

    Aws::String m_routeName;
    bool m_routeNameHasBeenSet;

    RouteSpec m_spec;
    bool m_specHasBeenSet;

    Aws::Vector<TagRef> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_virtualRouterName;
    bool m_virtualRouterNameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

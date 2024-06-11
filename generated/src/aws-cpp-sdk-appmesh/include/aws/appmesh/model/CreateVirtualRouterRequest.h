﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/VirtualRouterSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/TagRef.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppMesh
{
namespace Model
{

  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualRouterInput">AWS
   * API Reference</a></p>
   */
  class CreateVirtualRouterRequest : public AppMeshRequest
  {
  public:
    AWS_APPMESH_API CreateVirtualRouterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVirtualRouter"; }

    AWS_APPMESH_API Aws::String SerializePayload() const override;

    AWS_APPMESH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateVirtualRouterRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateVirtualRouterRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateVirtualRouterRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service mesh to create the virtual router in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }
    inline CreateVirtualRouterRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}
    inline CreateVirtualRouterRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}
    inline CreateVirtualRouterRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline const Aws::String& GetMeshOwner() const{ return m_meshOwner; }
    inline bool MeshOwnerHasBeenSet() const { return m_meshOwnerHasBeenSet; }
    inline void SetMeshOwner(const Aws::String& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = value; }
    inline void SetMeshOwner(Aws::String&& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = std::move(value); }
    inline void SetMeshOwner(const char* value) { m_meshOwnerHasBeenSet = true; m_meshOwner.assign(value); }
    inline CreateVirtualRouterRequest& WithMeshOwner(const Aws::String& value) { SetMeshOwner(value); return *this;}
    inline CreateVirtualRouterRequest& WithMeshOwner(Aws::String&& value) { SetMeshOwner(std::move(value)); return *this;}
    inline CreateVirtualRouterRequest& WithMeshOwner(const char* value) { SetMeshOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual router specification to apply.</p>
     */
    inline const VirtualRouterSpec& GetSpec() const{ return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    inline void SetSpec(const VirtualRouterSpec& value) { m_specHasBeenSet = true; m_spec = value; }
    inline void SetSpec(VirtualRouterSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }
    inline CreateVirtualRouterRequest& WithSpec(const VirtualRouterSpec& value) { SetSpec(value); return *this;}
    inline CreateVirtualRouterRequest& WithSpec(VirtualRouterSpec&& value) { SetSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you can apply to the virtual router to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<TagRef>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<TagRef>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<TagRef>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateVirtualRouterRequest& WithTags(const Aws::Vector<TagRef>& value) { SetTags(value); return *this;}
    inline CreateVirtualRouterRequest& WithTags(Aws::Vector<TagRef>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateVirtualRouterRequest& AddTags(const TagRef& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateVirtualRouterRequest& AddTags(TagRef&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name to use for the virtual router.</p>
     */
    inline const Aws::String& GetVirtualRouterName() const{ return m_virtualRouterName; }
    inline bool VirtualRouterNameHasBeenSet() const { return m_virtualRouterNameHasBeenSet; }
    inline void SetVirtualRouterName(const Aws::String& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = value; }
    inline void SetVirtualRouterName(Aws::String&& value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName = std::move(value); }
    inline void SetVirtualRouterName(const char* value) { m_virtualRouterNameHasBeenSet = true; m_virtualRouterName.assign(value); }
    inline CreateVirtualRouterRequest& WithVirtualRouterName(const Aws::String& value) { SetVirtualRouterName(value); return *this;}
    inline CreateVirtualRouterRequest& WithVirtualRouterName(Aws::String&& value) { SetVirtualRouterName(std::move(value)); return *this;}
    inline CreateVirtualRouterRequest& WithVirtualRouterName(const char* value) { SetVirtualRouterName(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet = false;

    VirtualRouterSpec m_spec;
    bool m_specHasBeenSet = false;

    Aws::Vector<TagRef> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_virtualRouterName;
    bool m_virtualRouterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

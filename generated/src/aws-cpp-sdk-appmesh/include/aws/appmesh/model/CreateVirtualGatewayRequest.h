/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/VirtualGatewaySpec.h>
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
   */
  class CreateVirtualGatewayRequest : public AppMeshRequest
  {
  public:
    AWS_APPMESH_API CreateVirtualGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVirtualGateway"; }

    AWS_APPMESH_API Aws::String SerializePayload() const override;

    AWS_APPMESH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline CreateVirtualGatewayRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline CreateVirtualGatewayRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline CreateVirtualGatewayRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name of the service mesh to create the virtual gateway in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh to create the virtual gateway in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh to create the virtual gateway in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh to create the virtual gateway in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh to create the virtual gateway in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh to create the virtual gateway in.</p>
     */
    inline CreateVirtualGatewayRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh to create the virtual gateway in.</p>
     */
    inline CreateVirtualGatewayRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh to create the virtual gateway in.</p>
     */
    inline CreateVirtualGatewayRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline const Aws::String& GetMeshOwner() const{ return m_meshOwner; }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline bool MeshOwnerHasBeenSet() const { return m_meshOwnerHasBeenSet; }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(const Aws::String& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = value; }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(Aws::String&& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = std::move(value); }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(const char* value) { m_meshOwnerHasBeenSet = true; m_meshOwner.assign(value); }

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline CreateVirtualGatewayRequest& WithMeshOwner(const Aws::String& value) { SetMeshOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline CreateVirtualGatewayRequest& WithMeshOwner(Aws::String&& value) { SetMeshOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services IAM account ID of the service mesh owner. If the
     * account ID is not your own, then the account that you specify must share the
     * mesh with your account before you can create the resource in the service mesh.
     * For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline CreateVirtualGatewayRequest& WithMeshOwner(const char* value) { SetMeshOwner(value); return *this;}


    /**
     * <p>The virtual gateway specification to apply.</p>
     */
    inline const VirtualGatewaySpec& GetSpec() const{ return m_spec; }

    /**
     * <p>The virtual gateway specification to apply.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The virtual gateway specification to apply.</p>
     */
    inline void SetSpec(const VirtualGatewaySpec& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The virtual gateway specification to apply.</p>
     */
    inline void SetSpec(VirtualGatewaySpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The virtual gateway specification to apply.</p>
     */
    inline CreateVirtualGatewayRequest& WithSpec(const VirtualGatewaySpec& value) { SetSpec(value); return *this;}

    /**
     * <p>The virtual gateway specification to apply.</p>
     */
    inline CreateVirtualGatewayRequest& WithSpec(VirtualGatewaySpec&& value) { SetSpec(std::move(value)); return *this;}


    /**
     * <p>Optional metadata that you can apply to the virtual gateway to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<TagRef>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata that you can apply to the virtual gateway to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata that you can apply to the virtual gateway to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<TagRef>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata that you can apply to the virtual gateway to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<TagRef>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata that you can apply to the virtual gateway to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateVirtualGatewayRequest& WithTags(const Aws::Vector<TagRef>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata that you can apply to the virtual gateway to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateVirtualGatewayRequest& WithTags(Aws::Vector<TagRef>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata that you can apply to the virtual gateway to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateVirtualGatewayRequest& AddTags(const TagRef& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Optional metadata that you can apply to the virtual gateway to assist with
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateVirtualGatewayRequest& AddTags(TagRef&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name to use for the virtual gateway.</p>
     */
    inline const Aws::String& GetVirtualGatewayName() const{ return m_virtualGatewayName; }

    /**
     * <p>The name to use for the virtual gateway.</p>
     */
    inline bool VirtualGatewayNameHasBeenSet() const { return m_virtualGatewayNameHasBeenSet; }

    /**
     * <p>The name to use for the virtual gateway.</p>
     */
    inline void SetVirtualGatewayName(const Aws::String& value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName = value; }

    /**
     * <p>The name to use for the virtual gateway.</p>
     */
    inline void SetVirtualGatewayName(Aws::String&& value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName = std::move(value); }

    /**
     * <p>The name to use for the virtual gateway.</p>
     */
    inline void SetVirtualGatewayName(const char* value) { m_virtualGatewayNameHasBeenSet = true; m_virtualGatewayName.assign(value); }

    /**
     * <p>The name to use for the virtual gateway.</p>
     */
    inline CreateVirtualGatewayRequest& WithVirtualGatewayName(const Aws::String& value) { SetVirtualGatewayName(value); return *this;}

    /**
     * <p>The name to use for the virtual gateway.</p>
     */
    inline CreateVirtualGatewayRequest& WithVirtualGatewayName(Aws::String&& value) { SetVirtualGatewayName(std::move(value)); return *this;}

    /**
     * <p>The name to use for the virtual gateway.</p>
     */
    inline CreateVirtualGatewayRequest& WithVirtualGatewayName(const char* value) { SetVirtualGatewayName(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet = false;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet = false;

    VirtualGatewaySpec m_spec;
    bool m_specHasBeenSet = false;

    Aws::Vector<TagRef> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_virtualGatewayName;
    bool m_virtualGatewayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

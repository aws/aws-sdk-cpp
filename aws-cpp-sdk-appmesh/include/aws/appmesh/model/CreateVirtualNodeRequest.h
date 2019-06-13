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
#include <aws/appmesh/model/VirtualNodeSpec.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualNodeInput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API CreateVirtualNodeRequest : public AppMeshRequest
  {
  public:
    CreateVirtualNodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVirtualNode"; }

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
    inline CreateVirtualNodeRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the
request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline CreateVirtualNodeRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the
request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline CreateVirtualNodeRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name of the service mesh to create the virtual node in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh to create the virtual node in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh to create the virtual node in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh to create the virtual node in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh to create the virtual node in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh to create the virtual node in.</p>
     */
    inline CreateVirtualNodeRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh to create the virtual node in.</p>
     */
    inline CreateVirtualNodeRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh to create the virtual node in.</p>
     */
    inline CreateVirtualNodeRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The virtual node specification to apply.</p>
     */
    inline const VirtualNodeSpec& GetSpec() const{ return m_spec; }

    /**
     * <p>The virtual node specification to apply.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The virtual node specification to apply.</p>
     */
    inline void SetSpec(const VirtualNodeSpec& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The virtual node specification to apply.</p>
     */
    inline void SetSpec(VirtualNodeSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The virtual node specification to apply.</p>
     */
    inline CreateVirtualNodeRequest& WithSpec(const VirtualNodeSpec& value) { SetSpec(value); return *this;}

    /**
     * <p>The virtual node specification to apply.</p>
     */
    inline CreateVirtualNodeRequest& WithSpec(VirtualNodeSpec&& value) { SetSpec(std::move(value)); return *this;}


    /**
     * <p>Optional metadata that you can apply to the virtual node to assist with
     * categorization
         and organization. Each tag consists of a key and an
     * optional value, both of which you
         define. Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<TagRef>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata that you can apply to the virtual node to assist with
     * categorization
         and organization. Each tag consists of a key and an
     * optional value, both of which you
         define. Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata that you can apply to the virtual node to assist with
     * categorization
         and organization. Each tag consists of a key and an
     * optional value, both of which you
         define. Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<TagRef>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata that you can apply to the virtual node to assist with
     * categorization
         and organization. Each tag consists of a key and an
     * optional value, both of which you
         define. Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<TagRef>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata that you can apply to the virtual node to assist with
     * categorization
         and organization. Each tag consists of a key and an
     * optional value, both of which you
         define. Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline CreateVirtualNodeRequest& WithTags(const Aws::Vector<TagRef>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata that you can apply to the virtual node to assist with
     * categorization
         and organization. Each tag consists of a key and an
     * optional value, both of which you
         define. Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline CreateVirtualNodeRequest& WithTags(Aws::Vector<TagRef>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata that you can apply to the virtual node to assist with
     * categorization
         and organization. Each tag consists of a key and an
     * optional value, both of which you
         define. Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline CreateVirtualNodeRequest& AddTags(const TagRef& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Optional metadata that you can apply to the virtual node to assist with
     * categorization
         and organization. Each tag consists of a key and an
     * optional value, both of which you
         define. Tag keys can have a maximum
     * character length of 128 characters, and tag values can have
            a
     * maximum length of 256 characters.</p>
     */
    inline CreateVirtualNodeRequest& AddTags(TagRef&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name to use for the virtual node.</p>
     */
    inline const Aws::String& GetVirtualNodeName() const{ return m_virtualNodeName; }

    /**
     * <p>The name to use for the virtual node.</p>
     */
    inline bool VirtualNodeNameHasBeenSet() const { return m_virtualNodeNameHasBeenSet; }

    /**
     * <p>The name to use for the virtual node.</p>
     */
    inline void SetVirtualNodeName(const Aws::String& value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName = value; }

    /**
     * <p>The name to use for the virtual node.</p>
     */
    inline void SetVirtualNodeName(Aws::String&& value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName = std::move(value); }

    /**
     * <p>The name to use for the virtual node.</p>
     */
    inline void SetVirtualNodeName(const char* value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName.assign(value); }

    /**
     * <p>The name to use for the virtual node.</p>
     */
    inline CreateVirtualNodeRequest& WithVirtualNodeName(const Aws::String& value) { SetVirtualNodeName(value); return *this;}

    /**
     * <p>The name to use for the virtual node.</p>
     */
    inline CreateVirtualNodeRequest& WithVirtualNodeName(Aws::String&& value) { SetVirtualNodeName(std::move(value)); return *this;}

    /**
     * <p>The name to use for the virtual node.</p>
     */
    inline CreateVirtualNodeRequest& WithVirtualNodeName(const char* value) { SetVirtualNodeName(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet;

    VirtualNodeSpec m_spec;
    bool m_specHasBeenSet;

    Aws::Vector<TagRef> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_virtualNodeName;
    bool m_virtualNodeNameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

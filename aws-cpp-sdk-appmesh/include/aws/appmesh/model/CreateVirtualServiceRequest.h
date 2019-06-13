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
#include <aws/appmesh/model/VirtualServiceSpec.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/CreateVirtualServiceInput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API CreateVirtualServiceRequest : public AppMeshRequest
  {
  public:
    CreateVirtualServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVirtualService"; }

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
    inline CreateVirtualServiceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the
request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline CreateVirtualServiceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the
request. Up to 36 letters, numbers, hyphens, and underscores are
     * allowed.</p>
     */
    inline CreateVirtualServiceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name of the service mesh to create the virtual service in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh to create the virtual service in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh to create the virtual service in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh to create the virtual service in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh to create the virtual service in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh to create the virtual service in.</p>
     */
    inline CreateVirtualServiceRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh to create the virtual service in.</p>
     */
    inline CreateVirtualServiceRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh to create the virtual service in.</p>
     */
    inline CreateVirtualServiceRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The virtual service specification to apply.</p>
     */
    inline const VirtualServiceSpec& GetSpec() const{ return m_spec; }

    /**
     * <p>The virtual service specification to apply.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The virtual service specification to apply.</p>
     */
    inline void SetSpec(const VirtualServiceSpec& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The virtual service specification to apply.</p>
     */
    inline void SetSpec(VirtualServiceSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The virtual service specification to apply.</p>
     */
    inline CreateVirtualServiceRequest& WithSpec(const VirtualServiceSpec& value) { SetSpec(value); return *this;}

    /**
     * <p>The virtual service specification to apply.</p>
     */
    inline CreateVirtualServiceRequest& WithSpec(VirtualServiceSpec&& value) { SetSpec(std::move(value)); return *this;}


    /**
     * <p>Optional metadata that you can apply to the virtual service to assist with
  
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of
         which you define. Tag keys can have a maximum character
     * length of 128 characters, and tag values can have
            a maximum length
     * of 256 characters.</p>
     */
    inline const Aws::Vector<TagRef>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata that you can apply to the virtual service to assist with
  
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of
         which you define. Tag keys can have a maximum character
     * length of 128 characters, and tag values can have
            a maximum length
     * of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata that you can apply to the virtual service to assist with
  
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of
         which you define. Tag keys can have a maximum character
     * length of 128 characters, and tag values can have
            a maximum length
     * of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<TagRef>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata that you can apply to the virtual service to assist with
  
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of
         which you define. Tag keys can have a maximum character
     * length of 128 characters, and tag values can have
            a maximum length
     * of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<TagRef>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata that you can apply to the virtual service to assist with
  
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of
         which you define. Tag keys can have a maximum character
     * length of 128 characters, and tag values can have
            a maximum length
     * of 256 characters.</p>
     */
    inline CreateVirtualServiceRequest& WithTags(const Aws::Vector<TagRef>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata that you can apply to the virtual service to assist with
  
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of
         which you define. Tag keys can have a maximum character
     * length of 128 characters, and tag values can have
            a maximum length
     * of 256 characters.</p>
     */
    inline CreateVirtualServiceRequest& WithTags(Aws::Vector<TagRef>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata that you can apply to the virtual service to assist with
  
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of
         which you define. Tag keys can have a maximum character
     * length of 128 characters, and tag values can have
            a maximum length
     * of 256 characters.</p>
     */
    inline CreateVirtualServiceRequest& AddTags(const TagRef& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Optional metadata that you can apply to the virtual service to assist with
  
     * categorization and organization. Each tag consists of a key and an optional
     * value, both of
         which you define. Tag keys can have a maximum character
     * length of 128 characters, and tag values can have
            a maximum length
     * of 256 characters.</p>
     */
    inline CreateVirtualServiceRequest& AddTags(TagRef&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name to use for the virtual service.</p>
     */
    inline const Aws::String& GetVirtualServiceName() const{ return m_virtualServiceName; }

    /**
     * <p>The name to use for the virtual service.</p>
     */
    inline bool VirtualServiceNameHasBeenSet() const { return m_virtualServiceNameHasBeenSet; }

    /**
     * <p>The name to use for the virtual service.</p>
     */
    inline void SetVirtualServiceName(const Aws::String& value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName = value; }

    /**
     * <p>The name to use for the virtual service.</p>
     */
    inline void SetVirtualServiceName(Aws::String&& value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName = std::move(value); }

    /**
     * <p>The name to use for the virtual service.</p>
     */
    inline void SetVirtualServiceName(const char* value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName.assign(value); }

    /**
     * <p>The name to use for the virtual service.</p>
     */
    inline CreateVirtualServiceRequest& WithVirtualServiceName(const Aws::String& value) { SetVirtualServiceName(value); return *this;}

    /**
     * <p>The name to use for the virtual service.</p>
     */
    inline CreateVirtualServiceRequest& WithVirtualServiceName(Aws::String&& value) { SetVirtualServiceName(std::move(value)); return *this;}

    /**
     * <p>The name to use for the virtual service.</p>
     */
    inline CreateVirtualServiceRequest& WithVirtualServiceName(const char* value) { SetVirtualServiceName(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet;

    VirtualServiceSpec m_spec;
    bool m_specHasBeenSet;

    Aws::Vector<TagRef> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_virtualServiceName;
    bool m_virtualServiceNameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws

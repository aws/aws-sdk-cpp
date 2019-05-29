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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/ssm/model/ResourceTypeForTagging.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API AddTagsToResourceRequest : public SSMRequest
  {
  public:
    AddTagsToResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTagsToResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the type of resource you are tagging.</p> <note> <p>The
     * ManagedInstance type for this API action is for on-premises managed instances.
     * You must specify the name of the managed instance in the following format:
     * mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> </note>
     */
    inline const ResourceTypeForTagging& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Specifies the type of resource you are tagging.</p> <note> <p>The
     * ManagedInstance type for this API action is for on-premises managed instances.
     * You must specify the name of the managed instance in the following format:
     * mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> </note>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Specifies the type of resource you are tagging.</p> <note> <p>The
     * ManagedInstance type for this API action is for on-premises managed instances.
     * You must specify the name of the managed instance in the following format:
     * mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> </note>
     */
    inline void SetResourceType(const ResourceTypeForTagging& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Specifies the type of resource you are tagging.</p> <note> <p>The
     * ManagedInstance type for this API action is for on-premises managed instances.
     * You must specify the name of the managed instance in the following format:
     * mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> </note>
     */
    inline void SetResourceType(ResourceTypeForTagging&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Specifies the type of resource you are tagging.</p> <note> <p>The
     * ManagedInstance type for this API action is for on-premises managed instances.
     * You must specify the name of the managed instance in the following format:
     * mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> </note>
     */
    inline AddTagsToResourceRequest& WithResourceType(const ResourceTypeForTagging& value) { SetResourceType(value); return *this;}

    /**
     * <p>Specifies the type of resource you are tagging.</p> <note> <p>The
     * ManagedInstance type for this API action is for on-premises managed instances.
     * You must specify the name of the managed instance in the following format:
     * mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> </note>
     */
    inline AddTagsToResourceRequest& WithResourceType(ResourceTypeForTagging&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The resource ID you want to tag.</p> <p>Use the ID of the resource. Here are
     * some examples:</p> <p>ManagedInstance: mi-012345abcde</p> <p>MaintenanceWindow:
     * mw-012345abcde</p> <p>PatchBaseline: pb-012345abcde</p> <p>For the Document and
     * Parameter values, use the name of the resource.</p> <note> <p>The
     * ManagedInstance type for this API action is only for on-premises managed
     * instances. You must specify the name of the managed instance in the following
     * format: mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> </note>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource ID you want to tag.</p> <p>Use the ID of the resource. Here are
     * some examples:</p> <p>ManagedInstance: mi-012345abcde</p> <p>MaintenanceWindow:
     * mw-012345abcde</p> <p>PatchBaseline: pb-012345abcde</p> <p>For the Document and
     * Parameter values, use the name of the resource.</p> <note> <p>The
     * ManagedInstance type for this API action is only for on-premises managed
     * instances. You must specify the name of the managed instance in the following
     * format: mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> </note>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The resource ID you want to tag.</p> <p>Use the ID of the resource. Here are
     * some examples:</p> <p>ManagedInstance: mi-012345abcde</p> <p>MaintenanceWindow:
     * mw-012345abcde</p> <p>PatchBaseline: pb-012345abcde</p> <p>For the Document and
     * Parameter values, use the name of the resource.</p> <note> <p>The
     * ManagedInstance type for this API action is only for on-premises managed
     * instances. You must specify the name of the managed instance in the following
     * format: mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> </note>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource ID you want to tag.</p> <p>Use the ID of the resource. Here are
     * some examples:</p> <p>ManagedInstance: mi-012345abcde</p> <p>MaintenanceWindow:
     * mw-012345abcde</p> <p>PatchBaseline: pb-012345abcde</p> <p>For the Document and
     * Parameter values, use the name of the resource.</p> <note> <p>The
     * ManagedInstance type for this API action is only for on-premises managed
     * instances. You must specify the name of the managed instance in the following
     * format: mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> </note>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource ID you want to tag.</p> <p>Use the ID of the resource. Here are
     * some examples:</p> <p>ManagedInstance: mi-012345abcde</p> <p>MaintenanceWindow:
     * mw-012345abcde</p> <p>PatchBaseline: pb-012345abcde</p> <p>For the Document and
     * Parameter values, use the name of the resource.</p> <note> <p>The
     * ManagedInstance type for this API action is only for on-premises managed
     * instances. You must specify the name of the managed instance in the following
     * format: mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> </note>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource ID you want to tag.</p> <p>Use the ID of the resource. Here are
     * some examples:</p> <p>ManagedInstance: mi-012345abcde</p> <p>MaintenanceWindow:
     * mw-012345abcde</p> <p>PatchBaseline: pb-012345abcde</p> <p>For the Document and
     * Parameter values, use the name of the resource.</p> <note> <p>The
     * ManagedInstance type for this API action is only for on-premises managed
     * instances. You must specify the name of the managed instance in the following
     * format: mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> </note>
     */
    inline AddTagsToResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource ID you want to tag.</p> <p>Use the ID of the resource. Here are
     * some examples:</p> <p>ManagedInstance: mi-012345abcde</p> <p>MaintenanceWindow:
     * mw-012345abcde</p> <p>PatchBaseline: pb-012345abcde</p> <p>For the Document and
     * Parameter values, use the name of the resource.</p> <note> <p>The
     * ManagedInstance type for this API action is only for on-premises managed
     * instances. You must specify the name of the managed instance in the following
     * format: mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> </note>
     */
    inline AddTagsToResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource ID you want to tag.</p> <p>Use the ID of the resource. Here are
     * some examples:</p> <p>ManagedInstance: mi-012345abcde</p> <p>MaintenanceWindow:
     * mw-012345abcde</p> <p>PatchBaseline: pb-012345abcde</p> <p>For the Document and
     * Parameter values, use the name of the resource.</p> <note> <p>The
     * ManagedInstance type for this API action is only for on-premises managed
     * instances. You must specify the name of the managed instance in the following
     * format: mi-ID_number. For example, mi-1a2b3c4d5e6f.</p> </note>
     */
    inline AddTagsToResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p> One or more tags. The value parameter is required, but if you don't want the
     * tag to have a value, specify the parameter with no value, and we set the value
     * to an empty string. </p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> One or more tags. The value parameter is required, but if you don't want the
     * tag to have a value, specify the parameter with no value, and we set the value
     * to an empty string. </p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> One or more tags. The value parameter is required, but if you don't want the
     * tag to have a value, specify the parameter with no value, and we set the value
     * to an empty string. </p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> One or more tags. The value parameter is required, but if you don't want the
     * tag to have a value, specify the parameter with no value, and we set the value
     * to an empty string. </p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> One or more tags. The value parameter is required, but if you don't want the
     * tag to have a value, specify the parameter with no value, and we set the value
     * to an empty string. </p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline AddTagsToResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> One or more tags. The value parameter is required, but if you don't want the
     * tag to have a value, specify the parameter with no value, and we set the value
     * to an empty string. </p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline AddTagsToResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> One or more tags. The value parameter is required, but if you don't want the
     * tag to have a value, specify the parameter with no value, and we set the value
     * to an empty string. </p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline AddTagsToResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> One or more tags. The value parameter is required, but if you don't want the
     * tag to have a value, specify the parameter with no value, and we set the value
     * to an empty string. </p> <important> <p>Do not enter personally identifiable
     * information in this field.</p> </important>
     */
    inline AddTagsToResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    ResourceTypeForTagging m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

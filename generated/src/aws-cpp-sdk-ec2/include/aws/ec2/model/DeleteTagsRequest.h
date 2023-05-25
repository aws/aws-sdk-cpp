/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DeleteTagsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTags"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DeleteTagsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The IDs of the resources, separated by spaces.</p> <p>Constraints: Up to 1000
     * resource IDs. We recommend breaking up this request into smaller batches.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

    /**
     * <p>The IDs of the resources, separated by spaces.</p> <p>Constraints: Up to 1000
     * resource IDs. We recommend breaking up this request into smaller batches.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>The IDs of the resources, separated by spaces.</p> <p>Constraints: Up to 1000
     * resource IDs. We recommend breaking up this request into smaller batches.</p>
     */
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The IDs of the resources, separated by spaces.</p> <p>Constraints: Up to 1000
     * resource IDs. We recommend breaking up this request into smaller batches.</p>
     */
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>The IDs of the resources, separated by spaces.</p> <p>Constraints: Up to 1000
     * resource IDs. We recommend breaking up this request into smaller batches.</p>
     */
    inline DeleteTagsRequest& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <p>The IDs of the resources, separated by spaces.</p> <p>Constraints: Up to 1000
     * resource IDs. We recommend breaking up this request into smaller batches.</p>
     */
    inline DeleteTagsRequest& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>The IDs of the resources, separated by spaces.</p> <p>Constraints: Up to 1000
     * resource IDs. We recommend breaking up this request into smaller batches.</p>
     */
    inline DeleteTagsRequest& AddResources(const Aws::String& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>The IDs of the resources, separated by spaces.</p> <p>Constraints: Up to 1000
     * resource IDs. We recommend breaking up this request into smaller batches.</p>
     */
    inline DeleteTagsRequest& AddResources(Aws::String&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the resources, separated by spaces.</p> <p>Constraints: Up to 1000
     * resource IDs. We recommend breaking up this request into smaller batches.</p>
     */
    inline DeleteTagsRequest& AddResources(const char* value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }


    /**
     * <p>The tags to delete. Specify a tag key and an optional tag value to delete
     * specific tags. If you specify a tag key without a tag value, we delete any tag
     * with this key regardless of its value. If you specify a tag key with an empty
     * string as the tag value, we delete the tag only if its value is an empty
     * string.</p> <p>If you omit this parameter, we delete all user-defined tags for
     * the specified resources. We do not delete Amazon Web Services-generated tags
     * (tags that have the <code>aws:</code> prefix).</p> <p>Constraints: Up to 1000
     * tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to delete. Specify a tag key and an optional tag value to delete
     * specific tags. If you specify a tag key without a tag value, we delete any tag
     * with this key regardless of its value. If you specify a tag key with an empty
     * string as the tag value, we delete the tag only if its value is an empty
     * string.</p> <p>If you omit this parameter, we delete all user-defined tags for
     * the specified resources. We do not delete Amazon Web Services-generated tags
     * (tags that have the <code>aws:</code> prefix).</p> <p>Constraints: Up to 1000
     * tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to delete. Specify a tag key and an optional tag value to delete
     * specific tags. If you specify a tag key without a tag value, we delete any tag
     * with this key regardless of its value. If you specify a tag key with an empty
     * string as the tag value, we delete the tag only if its value is an empty
     * string.</p> <p>If you omit this parameter, we delete all user-defined tags for
     * the specified resources. We do not delete Amazon Web Services-generated tags
     * (tags that have the <code>aws:</code> prefix).</p> <p>Constraints: Up to 1000
     * tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to delete. Specify a tag key and an optional tag value to delete
     * specific tags. If you specify a tag key without a tag value, we delete any tag
     * with this key regardless of its value. If you specify a tag key with an empty
     * string as the tag value, we delete the tag only if its value is an empty
     * string.</p> <p>If you omit this parameter, we delete all user-defined tags for
     * the specified resources. We do not delete Amazon Web Services-generated tags
     * (tags that have the <code>aws:</code> prefix).</p> <p>Constraints: Up to 1000
     * tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to delete. Specify a tag key and an optional tag value to delete
     * specific tags. If you specify a tag key without a tag value, we delete any tag
     * with this key regardless of its value. If you specify a tag key with an empty
     * string as the tag value, we delete the tag only if its value is an empty
     * string.</p> <p>If you omit this parameter, we delete all user-defined tags for
     * the specified resources. We do not delete Amazon Web Services-generated tags
     * (tags that have the <code>aws:</code> prefix).</p> <p>Constraints: Up to 1000
     * tags.</p>
     */
    inline DeleteTagsRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to delete. Specify a tag key and an optional tag value to delete
     * specific tags. If you specify a tag key without a tag value, we delete any tag
     * with this key regardless of its value. If you specify a tag key with an empty
     * string as the tag value, we delete the tag only if its value is an empty
     * string.</p> <p>If you omit this parameter, we delete all user-defined tags for
     * the specified resources. We do not delete Amazon Web Services-generated tags
     * (tags that have the <code>aws:</code> prefix).</p> <p>Constraints: Up to 1000
     * tags.</p>
     */
    inline DeleteTagsRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to delete. Specify a tag key and an optional tag value to delete
     * specific tags. If you specify a tag key without a tag value, we delete any tag
     * with this key regardless of its value. If you specify a tag key with an empty
     * string as the tag value, we delete the tag only if its value is an empty
     * string.</p> <p>If you omit this parameter, we delete all user-defined tags for
     * the specified resources. We do not delete Amazon Web Services-generated tags
     * (tags that have the <code>aws:</code> prefix).</p> <p>Constraints: Up to 1000
     * tags.</p>
     */
    inline DeleteTagsRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to delete. Specify a tag key and an optional tag value to delete
     * specific tags. If you specify a tag key without a tag value, we delete any tag
     * with this key regardless of its value. If you specify a tag key with an empty
     * string as the tag value, we delete the tag only if its value is an empty
     * string.</p> <p>If you omit this parameter, we delete all user-defined tags for
     * the specified resources. We do not delete Amazon Web Services-generated tags
     * (tags that have the <code>aws:</code> prefix).</p> <p>Constraints: Up to 1000
     * tags.</p>
     */
    inline DeleteTagsRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

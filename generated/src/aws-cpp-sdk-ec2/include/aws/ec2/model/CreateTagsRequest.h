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
  class CreateTagsRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTags"; }

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
    inline CreateTagsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


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
    inline CreateTagsRequest& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <p>The IDs of the resources, separated by spaces.</p> <p>Constraints: Up to 1000
     * resource IDs. We recommend breaking up this request into smaller batches.</p>
     */
    inline CreateTagsRequest& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>The IDs of the resources, separated by spaces.</p> <p>Constraints: Up to 1000
     * resource IDs. We recommend breaking up this request into smaller batches.</p>
     */
    inline CreateTagsRequest& AddResources(const Aws::String& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>The IDs of the resources, separated by spaces.</p> <p>Constraints: Up to 1000
     * resource IDs. We recommend breaking up this request into smaller batches.</p>
     */
    inline CreateTagsRequest& AddResources(Aws::String&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the resources, separated by spaces.</p> <p>Constraints: Up to 1000
     * resource IDs. We recommend breaking up this request into smaller batches.</p>
     */
    inline CreateTagsRequest& AddResources(const char* value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }


    /**
     * <p>The tags. The <code>value</code> parameter is required, but if you don't want
     * the tag to have a value, specify the parameter with no value, and we set the
     * value to an empty string.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags. The <code>value</code> parameter is required, but if you don't want
     * the tag to have a value, specify the parameter with no value, and we set the
     * value to an empty string.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags. The <code>value</code> parameter is required, but if you don't want
     * the tag to have a value, specify the parameter with no value, and we set the
     * value to an empty string.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags. The <code>value</code> parameter is required, but if you don't want
     * the tag to have a value, specify the parameter with no value, and we set the
     * value to an empty string.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags. The <code>value</code> parameter is required, but if you don't want
     * the tag to have a value, specify the parameter with no value, and we set the
     * value to an empty string.</p>
     */
    inline CreateTagsRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags. The <code>value</code> parameter is required, but if you don't want
     * the tag to have a value, specify the parameter with no value, and we set the
     * value to an empty string.</p>
     */
    inline CreateTagsRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags. The <code>value</code> parameter is required, but if you don't want
     * the tag to have a value, specify the parameter with no value, and we set the
     * value to an empty string.</p>
     */
    inline CreateTagsRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags. The <code>value</code> parameter is required, but if you don't want
     * the tag to have a value, specify the parameter with no value, and we set the
     * value to an empty string.</p>
     */
    inline CreateTagsRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

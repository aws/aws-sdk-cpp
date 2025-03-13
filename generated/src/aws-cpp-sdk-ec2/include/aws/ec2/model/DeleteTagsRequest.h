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
    AWS_EC2_API DeleteTagsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTags"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DeleteTagsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the resources, separated by spaces.</p> <p>Constraints: Up to 1000
     * resource IDs. We recommend breaking up this request into smaller batches.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    DeleteTagsRequest& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Aws::String>
    DeleteTagsRequest& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
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
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DeleteTagsRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DeleteTagsRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

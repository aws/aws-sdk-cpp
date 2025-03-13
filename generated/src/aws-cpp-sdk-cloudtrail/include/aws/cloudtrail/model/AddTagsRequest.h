/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Specifies the tags to add to a trail, event data store, dashboard, or
   * channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/AddTagsRequest">AWS
   * API Reference</a></p>
   */
  class AddTagsRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API AddTagsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTags"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ARN of the trail, event data store, dashboard, or channel to
     * which one or more tags will be added.</p> <p>The format of a trail ARN is:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p> <p>The
     * format of an event data store ARN is:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:eventdatastore/EXAMPLE-f852-4e8f-8bd1-bcf6cEXAMPLE</code>
     * </p> <p>The format of a dashboard ARN is:
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:dashboard/exampleDash</code>
     * </p> <p>The format of a channel ARN is:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/01234567890</code> </p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    AddTagsRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of tags, up to a limit of 50</p>
     */
    inline const Aws::Vector<Tag>& GetTagsList() const { return m_tagsList; }
    inline bool TagsListHasBeenSet() const { return m_tagsListHasBeenSet; }
    template<typename TagsListT = Aws::Vector<Tag>>
    void SetTagsList(TagsListT&& value) { m_tagsListHasBeenSet = true; m_tagsList = std::forward<TagsListT>(value); }
    template<typename TagsListT = Aws::Vector<Tag>>
    AddTagsRequest& WithTagsList(TagsListT&& value) { SetTagsList(std::forward<TagsListT>(value)); return *this;}
    template<typename TagsListT = Tag>
    AddTagsRequest& AddTagsList(TagsListT&& value) { m_tagsListHasBeenSet = true; m_tagsList.emplace_back(std::forward<TagsListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<Tag> m_tagsList;
    bool m_tagsListHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

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
   * <p>Specifies the tags to add to a trail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/AddTagsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API AddTagsRequest : public CloudTrailRequest
  {
  public:
    AddTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTags"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ARN of the trail to which one or more tags will be added. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Specifies the ARN of the trail to which one or more tags will be added. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Specifies the ARN of the trail to which one or more tags will be added. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Specifies the ARN of the trail to which one or more tags will be added. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Specifies the ARN of the trail to which one or more tags will be added. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Specifies the ARN of the trail to which one or more tags will be added. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline AddTagsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies the ARN of the trail to which one or more tags will be added. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline AddTagsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the trail to which one or more tags will be added. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline AddTagsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Contains a list of CloudTrail tags, up to a limit of 50</p>
     */
    inline const Aws::Vector<Tag>& GetTagsList() const{ return m_tagsList; }

    /**
     * <p>Contains a list of CloudTrail tags, up to a limit of 50</p>
     */
    inline bool TagsListHasBeenSet() const { return m_tagsListHasBeenSet; }

    /**
     * <p>Contains a list of CloudTrail tags, up to a limit of 50</p>
     */
    inline void SetTagsList(const Aws::Vector<Tag>& value) { m_tagsListHasBeenSet = true; m_tagsList = value; }

    /**
     * <p>Contains a list of CloudTrail tags, up to a limit of 50</p>
     */
    inline void SetTagsList(Aws::Vector<Tag>&& value) { m_tagsListHasBeenSet = true; m_tagsList = std::move(value); }

    /**
     * <p>Contains a list of CloudTrail tags, up to a limit of 50</p>
     */
    inline AddTagsRequest& WithTagsList(const Aws::Vector<Tag>& value) { SetTagsList(value); return *this;}

    /**
     * <p>Contains a list of CloudTrail tags, up to a limit of 50</p>
     */
    inline AddTagsRequest& WithTagsList(Aws::Vector<Tag>&& value) { SetTagsList(std::move(value)); return *this;}

    /**
     * <p>Contains a list of CloudTrail tags, up to a limit of 50</p>
     */
    inline AddTagsRequest& AddTagsList(const Tag& value) { m_tagsListHasBeenSet = true; m_tagsList.push_back(value); return *this; }

    /**
     * <p>Contains a list of CloudTrail tags, up to a limit of 50</p>
     */
    inline AddTagsRequest& AddTagsList(Tag&& value) { m_tagsListHasBeenSet = true; m_tagsList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::Vector<Tag> m_tagsList;
    bool m_tagsListHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

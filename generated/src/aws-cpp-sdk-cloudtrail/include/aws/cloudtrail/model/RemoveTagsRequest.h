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
   * <p>Specifies the tags to remove from a trail or event data store.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/RemoveTagsRequest">AWS
   * API Reference</a></p>
   */
  class RemoveTagsRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API RemoveTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTags"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ARN of the trail or event data store from which tags should be
     * removed.</p> <p> Example trail ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     * <p>Example event data store ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:12345678910:eventdatastore/EXAMPLE-f852-4e8f-8bd1-bcf6cEXAMPLE</code>
     * </p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Specifies the ARN of the trail or event data store from which tags should be
     * removed.</p> <p> Example trail ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     * <p>Example event data store ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:12345678910:eventdatastore/EXAMPLE-f852-4e8f-8bd1-bcf6cEXAMPLE</code>
     * </p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Specifies the ARN of the trail or event data store from which tags should be
     * removed.</p> <p> Example trail ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     * <p>Example event data store ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:12345678910:eventdatastore/EXAMPLE-f852-4e8f-8bd1-bcf6cEXAMPLE</code>
     * </p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Specifies the ARN of the trail or event data store from which tags should be
     * removed.</p> <p> Example trail ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     * <p>Example event data store ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:12345678910:eventdatastore/EXAMPLE-f852-4e8f-8bd1-bcf6cEXAMPLE</code>
     * </p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Specifies the ARN of the trail or event data store from which tags should be
     * removed.</p> <p> Example trail ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     * <p>Example event data store ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:12345678910:eventdatastore/EXAMPLE-f852-4e8f-8bd1-bcf6cEXAMPLE</code>
     * </p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Specifies the ARN of the trail or event data store from which tags should be
     * removed.</p> <p> Example trail ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     * <p>Example event data store ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:12345678910:eventdatastore/EXAMPLE-f852-4e8f-8bd1-bcf6cEXAMPLE</code>
     * </p>
     */
    inline RemoveTagsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies the ARN of the trail or event data store from which tags should be
     * removed.</p> <p> Example trail ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     * <p>Example event data store ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:12345678910:eventdatastore/EXAMPLE-f852-4e8f-8bd1-bcf6cEXAMPLE</code>
     * </p>
     */
    inline RemoveTagsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the trail or event data store from which tags should be
     * removed.</p> <p> Example trail ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     * <p>Example event data store ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:12345678910:eventdatastore/EXAMPLE-f852-4e8f-8bd1-bcf6cEXAMPLE</code>
     * </p>
     */
    inline RemoveTagsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Specifies a list of tags to be removed.</p>
     */
    inline const Aws::Vector<Tag>& GetTagsList() const{ return m_tagsList; }

    /**
     * <p>Specifies a list of tags to be removed.</p>
     */
    inline bool TagsListHasBeenSet() const { return m_tagsListHasBeenSet; }

    /**
     * <p>Specifies a list of tags to be removed.</p>
     */
    inline void SetTagsList(const Aws::Vector<Tag>& value) { m_tagsListHasBeenSet = true; m_tagsList = value; }

    /**
     * <p>Specifies a list of tags to be removed.</p>
     */
    inline void SetTagsList(Aws::Vector<Tag>&& value) { m_tagsListHasBeenSet = true; m_tagsList = std::move(value); }

    /**
     * <p>Specifies a list of tags to be removed.</p>
     */
    inline RemoveTagsRequest& WithTagsList(const Aws::Vector<Tag>& value) { SetTagsList(value); return *this;}

    /**
     * <p>Specifies a list of tags to be removed.</p>
     */
    inline RemoveTagsRequest& WithTagsList(Aws::Vector<Tag>&& value) { SetTagsList(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of tags to be removed.</p>
     */
    inline RemoveTagsRequest& AddTagsList(const Tag& value) { m_tagsListHasBeenSet = true; m_tagsList.push_back(value); return *this; }

    /**
     * <p>Specifies a list of tags to be removed.</p>
     */
    inline RemoveTagsRequest& AddTagsList(Tag&& value) { m_tagsListHasBeenSet = true; m_tagsList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<Tag> m_tagsList;
    bool m_tagsListHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

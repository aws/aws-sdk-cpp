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
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class AWS_CLOUDHSMV2_API UntagResourceRequest : public CloudHSMV2Request
  {
  public:
    UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are removing. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are removing. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are removing. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are removing. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are removing. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are removing. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline UntagResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are removing. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline UntagResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier (ID) for the cluster whose tags you are removing. To
     * find the cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline UntagResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>A list of one or more tag keys for the tags that you are removing. Specify
     * only the tag keys, not the tag values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeyList() const{ return m_tagKeyList; }

    /**
     * <p>A list of one or more tag keys for the tags that you are removing. Specify
     * only the tag keys, not the tag values.</p>
     */
    inline bool TagKeyListHasBeenSet() const { return m_tagKeyListHasBeenSet; }

    /**
     * <p>A list of one or more tag keys for the tags that you are removing. Specify
     * only the tag keys, not the tag values.</p>
     */
    inline void SetTagKeyList(const Aws::Vector<Aws::String>& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList = value; }

    /**
     * <p>A list of one or more tag keys for the tags that you are removing. Specify
     * only the tag keys, not the tag values.</p>
     */
    inline void SetTagKeyList(Aws::Vector<Aws::String>&& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList = std::move(value); }

    /**
     * <p>A list of one or more tag keys for the tags that you are removing. Specify
     * only the tag keys, not the tag values.</p>
     */
    inline UntagResourceRequest& WithTagKeyList(const Aws::Vector<Aws::String>& value) { SetTagKeyList(value); return *this;}

    /**
     * <p>A list of one or more tag keys for the tags that you are removing. Specify
     * only the tag keys, not the tag values.</p>
     */
    inline UntagResourceRequest& WithTagKeyList(Aws::Vector<Aws::String>&& value) { SetTagKeyList(std::move(value)); return *this;}

    /**
     * <p>A list of one or more tag keys for the tags that you are removing. Specify
     * only the tag keys, not the tag values.</p>
     */
    inline UntagResourceRequest& AddTagKeyList(const Aws::String& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.push_back(value); return *this; }

    /**
     * <p>A list of one or more tag keys for the tags that you are removing. Specify
     * only the tag keys, not the tag values.</p>
     */
    inline UntagResourceRequest& AddTagKeyList(Aws::String&& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of one or more tag keys for the tags that you are removing. Specify
     * only the tag keys, not the tag values.</p>
     */
    inline UntagResourceRequest& AddTagKeyList(const char* value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.push_back(value); return *this; }

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeyList;
    bool m_tagKeyListHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws

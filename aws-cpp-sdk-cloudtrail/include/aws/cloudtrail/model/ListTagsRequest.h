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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Specifies a list of trail tags to return.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTagsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API ListTagsRequest : public CloudTrailRequest
  {
  public:
    ListTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTags"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies a list of trail ARNs whose tags will be listed. The list has a
     * limit of 20 ARNs. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIdList() const{ return m_resourceIdList; }

    /**
     * <p>Specifies a list of trail ARNs whose tags will be listed. The list has a
     * limit of 20 ARNs. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline bool ResourceIdListHasBeenSet() const { return m_resourceIdListHasBeenSet; }

    /**
     * <p>Specifies a list of trail ARNs whose tags will be listed. The list has a
     * limit of 20 ARNs. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetResourceIdList(const Aws::Vector<Aws::String>& value) { m_resourceIdListHasBeenSet = true; m_resourceIdList = value; }

    /**
     * <p>Specifies a list of trail ARNs whose tags will be listed. The list has a
     * limit of 20 ARNs. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetResourceIdList(Aws::Vector<Aws::String>&& value) { m_resourceIdListHasBeenSet = true; m_resourceIdList = std::move(value); }

    /**
     * <p>Specifies a list of trail ARNs whose tags will be listed. The list has a
     * limit of 20 ARNs. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline ListTagsRequest& WithResourceIdList(const Aws::Vector<Aws::String>& value) { SetResourceIdList(value); return *this;}

    /**
     * <p>Specifies a list of trail ARNs whose tags will be listed. The list has a
     * limit of 20 ARNs. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline ListTagsRequest& WithResourceIdList(Aws::Vector<Aws::String>&& value) { SetResourceIdList(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of trail ARNs whose tags will be listed. The list has a
     * limit of 20 ARNs. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline ListTagsRequest& AddResourceIdList(const Aws::String& value) { m_resourceIdListHasBeenSet = true; m_resourceIdList.push_back(value); return *this; }

    /**
     * <p>Specifies a list of trail ARNs whose tags will be listed. The list has a
     * limit of 20 ARNs. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline ListTagsRequest& AddResourceIdList(Aws::String&& value) { m_resourceIdListHasBeenSet = true; m_resourceIdList.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of trail ARNs whose tags will be listed. The list has a
     * limit of 20 ARNs. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline ListTagsRequest& AddResourceIdList(const char* value) { m_resourceIdListHasBeenSet = true; m_resourceIdList.push_back(value); return *this; }


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListTagsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListTagsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListTagsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_resourceIdList;
    bool m_resourceIdListHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

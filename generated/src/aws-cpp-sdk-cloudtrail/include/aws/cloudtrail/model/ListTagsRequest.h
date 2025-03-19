/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Specifies a list of tags to return.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTagsRequest">AWS
   * API Reference</a></p>
   */
  class ListTagsRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API ListTagsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTags"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies a list of trail, event data store, dashboard, or channel ARNs whose
     * tags will be listed. The list has a limit of 20 ARNs.</p> <p> Example trail ARN
     * format: <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>
     * </p> <p>Example event data store ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:eventdatastore/EXAMPLE-f852-4e8f-8bd1-bcf6cEXAMPLE</code>
     * </p> <p>Example dashboard ARN format:
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:dashboard/exampleDash</code>
     * </p> <p>Example channel ARN format:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/01234567890</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIdList() const { return m_resourceIdList; }
    inline bool ResourceIdListHasBeenSet() const { return m_resourceIdListHasBeenSet; }
    template<typename ResourceIdListT = Aws::Vector<Aws::String>>
    void SetResourceIdList(ResourceIdListT&& value) { m_resourceIdListHasBeenSet = true; m_resourceIdList = std::forward<ResourceIdListT>(value); }
    template<typename ResourceIdListT = Aws::Vector<Aws::String>>
    ListTagsRequest& WithResourceIdList(ResourceIdListT&& value) { SetResourceIdList(std::forward<ResourceIdListT>(value)); return *this;}
    template<typename ResourceIdListT = Aws::String>
    ListTagsRequest& AddResourceIdList(ResourceIdListT&& value) { m_resourceIdListHasBeenSet = true; m_resourceIdList.emplace_back(std::forward<ResourceIdListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTagsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceIdList;
    bool m_resourceIdListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

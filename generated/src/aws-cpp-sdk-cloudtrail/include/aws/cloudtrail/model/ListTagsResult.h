/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/ResourceTag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudTrail
{
namespace Model
{
  /**
   * <p>Returns the objects or data listed below if successful. Otherwise, returns an
   * error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListTagsResponse">AWS
   * API Reference</a></p>
   */
  class ListTagsResult
  {
  public:
    AWS_CLOUDTRAIL_API ListTagsResult() = default;
    AWS_CLOUDTRAIL_API ListTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of resource tags.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTagList() const { return m_resourceTagList; }
    template<typename ResourceTagListT = Aws::Vector<ResourceTag>>
    void SetResourceTagList(ResourceTagListT&& value) { m_resourceTagListHasBeenSet = true; m_resourceTagList = std::forward<ResourceTagListT>(value); }
    template<typename ResourceTagListT = Aws::Vector<ResourceTag>>
    ListTagsResult& WithResourceTagList(ResourceTagListT&& value) { SetResourceTagList(std::forward<ResourceTagListT>(value)); return *this;}
    template<typename ResourceTagListT = ResourceTag>
    ListTagsResult& AddResourceTagList(ResourceTagListT&& value) { m_resourceTagListHasBeenSet = true; m_resourceTagList.emplace_back(std::forward<ResourceTagListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTagsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTagsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceTag> m_resourceTagList;
    bool m_resourceTagListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

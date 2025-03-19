/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/ResourceInfo.h>
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
namespace LakeFormation
{
namespace Model
{
  class ListResourcesResult
  {
  public:
    AWS_LAKEFORMATION_API ListResourcesResult() = default;
    AWS_LAKEFORMATION_API ListResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A summary of the data lake resources.</p>
     */
    inline const Aws::Vector<ResourceInfo>& GetResourceInfoList() const { return m_resourceInfoList; }
    template<typename ResourceInfoListT = Aws::Vector<ResourceInfo>>
    void SetResourceInfoList(ResourceInfoListT&& value) { m_resourceInfoListHasBeenSet = true; m_resourceInfoList = std::forward<ResourceInfoListT>(value); }
    template<typename ResourceInfoListT = Aws::Vector<ResourceInfo>>
    ListResourcesResult& WithResourceInfoList(ResourceInfoListT&& value) { SetResourceInfoList(std::forward<ResourceInfoListT>(value)); return *this;}
    template<typename ResourceInfoListT = ResourceInfo>
    ListResourcesResult& AddResourceInfoList(ResourceInfoListT&& value) { m_resourceInfoListHasBeenSet = true; m_resourceInfoList.emplace_back(std::forward<ResourceInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is not the first call to retrieve these
     * resources.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceInfo> m_resourceInfoList;
    bool m_resourceInfoListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

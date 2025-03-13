/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ResourceCount.h>
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
namespace ConfigService
{
namespace Model
{
  class GetDiscoveredResourceCountsResult
  {
  public:
    AWS_CONFIGSERVICE_API GetDiscoveredResourceCountsResult() = default;
    AWS_CONFIGSERVICE_API GetDiscoveredResourceCountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetDiscoveredResourceCountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The total number of resources that Config is recording in the region for your
     * account. If you specify resource types in the request, Config returns only the
     * total number of resources for those resource types.</p> <p class="title">
     * <b>Example</b> </p> <ol> <li> <p>Config is recording three resource types in the
     * US East (Ohio) Region for your account: 25 EC2 instances, 20 IAM users, and 15
     * S3 buckets, for a total of 60 resources.</p> </li> <li> <p>You make a call to
     * the <code>GetDiscoveredResourceCounts</code> action and specify the resource
     * type, <code>"AWS::EC2::Instances"</code>, in the request.</p> </li> <li>
     * <p>Config returns 25 for <code>totalDiscoveredResources</code>.</p> </li> </ol>
     */
    inline long long GetTotalDiscoveredResources() const { return m_totalDiscoveredResources; }
    inline void SetTotalDiscoveredResources(long long value) { m_totalDiscoveredResourcesHasBeenSet = true; m_totalDiscoveredResources = value; }
    inline GetDiscoveredResourceCountsResult& WithTotalDiscoveredResources(long long value) { SetTotalDiscoveredResources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of <code>ResourceCount</code> objects. Each object is listed in
     * descending order by the number of resources.</p>
     */
    inline const Aws::Vector<ResourceCount>& GetResourceCounts() const { return m_resourceCounts; }
    template<typename ResourceCountsT = Aws::Vector<ResourceCount>>
    void SetResourceCounts(ResourceCountsT&& value) { m_resourceCountsHasBeenSet = true; m_resourceCounts = std::forward<ResourceCountsT>(value); }
    template<typename ResourceCountsT = Aws::Vector<ResourceCount>>
    GetDiscoveredResourceCountsResult& WithResourceCounts(ResourceCountsT&& value) { SetResourceCounts(std::forward<ResourceCountsT>(value)); return *this;}
    template<typename ResourceCountsT = ResourceCount>
    GetDiscoveredResourceCountsResult& AddResourceCounts(ResourceCountsT&& value) { m_resourceCountsHasBeenSet = true; m_resourceCounts.emplace_back(std::forward<ResourceCountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetDiscoveredResourceCountsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDiscoveredResourceCountsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    long long m_totalDiscoveredResources{0};
    bool m_totalDiscoveredResourcesHasBeenSet = false;

    Aws::Vector<ResourceCount> m_resourceCounts;
    bool m_resourceCountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

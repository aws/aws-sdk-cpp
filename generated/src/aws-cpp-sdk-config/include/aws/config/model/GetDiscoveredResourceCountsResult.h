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
    AWS_CONFIGSERVICE_API GetDiscoveredResourceCountsResult();
    AWS_CONFIGSERVICE_API GetDiscoveredResourceCountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetDiscoveredResourceCountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline long long GetTotalDiscoveredResources() const{ return m_totalDiscoveredResources; }

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
    inline void SetTotalDiscoveredResources(long long value) { m_totalDiscoveredResources = value; }

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
    inline GetDiscoveredResourceCountsResult& WithTotalDiscoveredResources(long long value) { SetTotalDiscoveredResources(value); return *this;}


    /**
     * <p>The list of <code>ResourceCount</code> objects. Each object is listed in
     * descending order by the number of resources.</p>
     */
    inline const Aws::Vector<ResourceCount>& GetResourceCounts() const{ return m_resourceCounts; }

    /**
     * <p>The list of <code>ResourceCount</code> objects. Each object is listed in
     * descending order by the number of resources.</p>
     */
    inline void SetResourceCounts(const Aws::Vector<ResourceCount>& value) { m_resourceCounts = value; }

    /**
     * <p>The list of <code>ResourceCount</code> objects. Each object is listed in
     * descending order by the number of resources.</p>
     */
    inline void SetResourceCounts(Aws::Vector<ResourceCount>&& value) { m_resourceCounts = std::move(value); }

    /**
     * <p>The list of <code>ResourceCount</code> objects. Each object is listed in
     * descending order by the number of resources.</p>
     */
    inline GetDiscoveredResourceCountsResult& WithResourceCounts(const Aws::Vector<ResourceCount>& value) { SetResourceCounts(value); return *this;}

    /**
     * <p>The list of <code>ResourceCount</code> objects. Each object is listed in
     * descending order by the number of resources.</p>
     */
    inline GetDiscoveredResourceCountsResult& WithResourceCounts(Aws::Vector<ResourceCount>&& value) { SetResourceCounts(std::move(value)); return *this;}

    /**
     * <p>The list of <code>ResourceCount</code> objects. Each object is listed in
     * descending order by the number of resources.</p>
     */
    inline GetDiscoveredResourceCountsResult& AddResourceCounts(const ResourceCount& value) { m_resourceCounts.push_back(value); return *this; }

    /**
     * <p>The list of <code>ResourceCount</code> objects. Each object is listed in
     * descending order by the number of resources.</p>
     */
    inline GetDiscoveredResourceCountsResult& AddResourceCounts(ResourceCount&& value) { m_resourceCounts.push_back(std::move(value)); return *this; }


    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline GetDiscoveredResourceCountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline GetDiscoveredResourceCountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline GetDiscoveredResourceCountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    long long m_totalDiscoveredResources;

    Aws::Vector<ResourceCount> m_resourceCounts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

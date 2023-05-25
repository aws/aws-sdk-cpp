/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/ResourcePolicy.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class DescribeResourcePoliciesResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeResourcePoliciesResult();
    AWS_CLOUDWATCHLOGS_API DescribeResourcePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeResourcePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The resource policies that exist in this account.</p>
     */
    inline const Aws::Vector<ResourcePolicy>& GetResourcePolicies() const{ return m_resourcePolicies; }

    /**
     * <p>The resource policies that exist in this account.</p>
     */
    inline void SetResourcePolicies(const Aws::Vector<ResourcePolicy>& value) { m_resourcePolicies = value; }

    /**
     * <p>The resource policies that exist in this account.</p>
     */
    inline void SetResourcePolicies(Aws::Vector<ResourcePolicy>&& value) { m_resourcePolicies = std::move(value); }

    /**
     * <p>The resource policies that exist in this account.</p>
     */
    inline DescribeResourcePoliciesResult& WithResourcePolicies(const Aws::Vector<ResourcePolicy>& value) { SetResourcePolicies(value); return *this;}

    /**
     * <p>The resource policies that exist in this account.</p>
     */
    inline DescribeResourcePoliciesResult& WithResourcePolicies(Aws::Vector<ResourcePolicy>&& value) { SetResourcePolicies(std::move(value)); return *this;}

    /**
     * <p>The resource policies that exist in this account.</p>
     */
    inline DescribeResourcePoliciesResult& AddResourcePolicies(const ResourcePolicy& value) { m_resourcePolicies.push_back(value); return *this; }

    /**
     * <p>The resource policies that exist in this account.</p>
     */
    inline DescribeResourcePoliciesResult& AddResourcePolicies(ResourcePolicy&& value) { m_resourcePolicies.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeResourcePoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeResourcePoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeResourcePoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeResourcePoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeResourcePoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeResourcePoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ResourcePolicy> m_resourcePolicies;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

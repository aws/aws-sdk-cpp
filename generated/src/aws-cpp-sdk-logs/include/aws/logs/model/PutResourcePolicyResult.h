/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/ResourcePolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class PutResourcePolicyResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutResourcePolicyResult();
    AWS_CLOUDWATCHLOGS_API PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The new policy.</p>
     */
    inline const ResourcePolicy& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p>The new policy.</p>
     */
    inline void SetResourcePolicy(const ResourcePolicy& value) { m_resourcePolicy = value; }

    /**
     * <p>The new policy.</p>
     */
    inline void SetResourcePolicy(ResourcePolicy&& value) { m_resourcePolicy = std::move(value); }

    /**
     * <p>The new policy.</p>
     */
    inline PutResourcePolicyResult& WithResourcePolicy(const ResourcePolicy& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>The new policy.</p>
     */
    inline PutResourcePolicyResult& WithResourcePolicy(ResourcePolicy&& value) { SetResourcePolicy(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutResourcePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutResourcePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutResourcePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResourcePolicy m_resourcePolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

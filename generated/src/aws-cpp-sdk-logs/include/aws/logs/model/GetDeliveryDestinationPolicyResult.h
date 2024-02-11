/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/Policy.h>
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
  class GetDeliveryDestinationPolicyResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetDeliveryDestinationPolicyResult();
    AWS_CLOUDWATCHLOGS_API GetDeliveryDestinationPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetDeliveryDestinationPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The IAM policy for this delivery destination.</p>
     */
    inline const Policy& GetPolicy() const{ return m_policy; }

    /**
     * <p>The IAM policy for this delivery destination.</p>
     */
    inline void SetPolicy(const Policy& value) { m_policy = value; }

    /**
     * <p>The IAM policy for this delivery destination.</p>
     */
    inline void SetPolicy(Policy&& value) { m_policy = std::move(value); }

    /**
     * <p>The IAM policy for this delivery destination.</p>
     */
    inline GetDeliveryDestinationPolicyResult& WithPolicy(const Policy& value) { SetPolicy(value); return *this;}

    /**
     * <p>The IAM policy for this delivery destination.</p>
     */
    inline GetDeliveryDestinationPolicyResult& WithPolicy(Policy&& value) { SetPolicy(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDeliveryDestinationPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDeliveryDestinationPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDeliveryDestinationPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Policy m_policy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

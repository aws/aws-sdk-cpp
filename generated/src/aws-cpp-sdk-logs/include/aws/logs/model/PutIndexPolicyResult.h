/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/IndexPolicy.h>
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
  class PutIndexPolicyResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutIndexPolicyResult();
    AWS_CLOUDWATCHLOGS_API PutIndexPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API PutIndexPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The index policy that you just created or updated.</p>
     */
    inline const IndexPolicy& GetIndexPolicy() const{ return m_indexPolicy; }
    inline void SetIndexPolicy(const IndexPolicy& value) { m_indexPolicy = value; }
    inline void SetIndexPolicy(IndexPolicy&& value) { m_indexPolicy = std::move(value); }
    inline PutIndexPolicyResult& WithIndexPolicy(const IndexPolicy& value) { SetIndexPolicy(value); return *this;}
    inline PutIndexPolicyResult& WithIndexPolicy(IndexPolicy&& value) { SetIndexPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutIndexPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutIndexPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutIndexPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IndexPolicy m_indexPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

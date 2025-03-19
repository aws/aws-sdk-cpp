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
    AWS_CLOUDWATCHLOGS_API PutIndexPolicyResult() = default;
    AWS_CLOUDWATCHLOGS_API PutIndexPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API PutIndexPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The index policy that you just created or updated.</p>
     */
    inline const IndexPolicy& GetIndexPolicy() const { return m_indexPolicy; }
    template<typename IndexPolicyT = IndexPolicy>
    void SetIndexPolicy(IndexPolicyT&& value) { m_indexPolicyHasBeenSet = true; m_indexPolicy = std::forward<IndexPolicyT>(value); }
    template<typename IndexPolicyT = IndexPolicy>
    PutIndexPolicyResult& WithIndexPolicy(IndexPolicyT&& value) { SetIndexPolicy(std::forward<IndexPolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutIndexPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IndexPolicy m_indexPolicy;
    bool m_indexPolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

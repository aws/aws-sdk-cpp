/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
  class PutQueryDefinitionResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutQueryDefinitionResult() = default;
    AWS_CLOUDWATCHLOGS_API PutQueryDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API PutQueryDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the query definition.</p>
     */
    inline const Aws::String& GetQueryDefinitionId() const { return m_queryDefinitionId; }
    template<typename QueryDefinitionIdT = Aws::String>
    void SetQueryDefinitionId(QueryDefinitionIdT&& value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId = std::forward<QueryDefinitionIdT>(value); }
    template<typename QueryDefinitionIdT = Aws::String>
    PutQueryDefinitionResult& WithQueryDefinitionId(QueryDefinitionIdT&& value) { SetQueryDefinitionId(std::forward<QueryDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutQueryDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryDefinitionId;
    bool m_queryDefinitionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

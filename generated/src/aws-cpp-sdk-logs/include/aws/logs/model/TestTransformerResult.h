/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/TransformedLogRecord.h>
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
  class TestTransformerResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API TestTransformerResult() = default;
    AWS_CLOUDWATCHLOGS_API TestTransformerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API TestTransformerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array where each member of the array includes both the original version
     * and the transformed version of one of the log events that you input.</p>
     */
    inline const Aws::Vector<TransformedLogRecord>& GetTransformedLogs() const { return m_transformedLogs; }
    template<typename TransformedLogsT = Aws::Vector<TransformedLogRecord>>
    void SetTransformedLogs(TransformedLogsT&& value) { m_transformedLogsHasBeenSet = true; m_transformedLogs = std::forward<TransformedLogsT>(value); }
    template<typename TransformedLogsT = Aws::Vector<TransformedLogRecord>>
    TestTransformerResult& WithTransformedLogs(TransformedLogsT&& value) { SetTransformedLogs(std::forward<TransformedLogsT>(value)); return *this;}
    template<typename TransformedLogsT = TransformedLogRecord>
    TestTransformerResult& AddTransformedLogs(TransformedLogsT&& value) { m_transformedLogsHasBeenSet = true; m_transformedLogs.emplace_back(std::forward<TransformedLogsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestTransformerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransformedLogRecord> m_transformedLogs;
    bool m_transformedLogsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

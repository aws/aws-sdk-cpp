/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetLogRecordResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetLogRecordResult() = default;
    AWS_CLOUDWATCHLOGS_API GetLogRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetLogRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested log event, as a JSON string.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLogRecord() const { return m_logRecord; }
    template<typename LogRecordT = Aws::Map<Aws::String, Aws::String>>
    void SetLogRecord(LogRecordT&& value) { m_logRecordHasBeenSet = true; m_logRecord = std::forward<LogRecordT>(value); }
    template<typename LogRecordT = Aws::Map<Aws::String, Aws::String>>
    GetLogRecordResult& WithLogRecord(LogRecordT&& value) { SetLogRecord(std::forward<LogRecordT>(value)); return *this;}
    template<typename LogRecordKeyT = Aws::String, typename LogRecordValueT = Aws::String>
    GetLogRecordResult& AddLogRecord(LogRecordKeyT&& key, LogRecordValueT&& value) {
      m_logRecordHasBeenSet = true; m_logRecord.emplace(std::forward<LogRecordKeyT>(key), std::forward<LogRecordValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLogRecordResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_logRecord;
    bool m_logRecordHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

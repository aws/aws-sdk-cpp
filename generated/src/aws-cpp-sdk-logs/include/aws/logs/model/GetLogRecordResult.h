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
    AWS_CLOUDWATCHLOGS_API GetLogRecordResult();
    AWS_CLOUDWATCHLOGS_API GetLogRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetLogRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested log event, as a JSON string.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLogRecord() const{ return m_logRecord; }

    /**
     * <p>The requested log event, as a JSON string.</p>
     */
    inline void SetLogRecord(const Aws::Map<Aws::String, Aws::String>& value) { m_logRecord = value; }

    /**
     * <p>The requested log event, as a JSON string.</p>
     */
    inline void SetLogRecord(Aws::Map<Aws::String, Aws::String>&& value) { m_logRecord = std::move(value); }

    /**
     * <p>The requested log event, as a JSON string.</p>
     */
    inline GetLogRecordResult& WithLogRecord(const Aws::Map<Aws::String, Aws::String>& value) { SetLogRecord(value); return *this;}

    /**
     * <p>The requested log event, as a JSON string.</p>
     */
    inline GetLogRecordResult& WithLogRecord(Aws::Map<Aws::String, Aws::String>&& value) { SetLogRecord(std::move(value)); return *this;}

    /**
     * <p>The requested log event, as a JSON string.</p>
     */
    inline GetLogRecordResult& AddLogRecord(const Aws::String& key, const Aws::String& value) { m_logRecord.emplace(key, value); return *this; }

    /**
     * <p>The requested log event, as a JSON string.</p>
     */
    inline GetLogRecordResult& AddLogRecord(Aws::String&& key, const Aws::String& value) { m_logRecord.emplace(std::move(key), value); return *this; }

    /**
     * <p>The requested log event, as a JSON string.</p>
     */
    inline GetLogRecordResult& AddLogRecord(const Aws::String& key, Aws::String&& value) { m_logRecord.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The requested log event, as a JSON string.</p>
     */
    inline GetLogRecordResult& AddLogRecord(Aws::String&& key, Aws::String&& value) { m_logRecord.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The requested log event, as a JSON string.</p>
     */
    inline GetLogRecordResult& AddLogRecord(const char* key, Aws::String&& value) { m_logRecord.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The requested log event, as a JSON string.</p>
     */
    inline GetLogRecordResult& AddLogRecord(Aws::String&& key, const char* value) { m_logRecord.emplace(std::move(key), value); return *this; }

    /**
     * <p>The requested log event, as a JSON string.</p>
     */
    inline GetLogRecordResult& AddLogRecord(const char* key, const char* value) { m_logRecord.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLogRecordResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLogRecordResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLogRecordResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_logRecord;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

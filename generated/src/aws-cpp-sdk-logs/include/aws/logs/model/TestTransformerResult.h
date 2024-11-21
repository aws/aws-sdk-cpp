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
    AWS_CLOUDWATCHLOGS_API TestTransformerResult();
    AWS_CLOUDWATCHLOGS_API TestTransformerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API TestTransformerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array where each member of the array includes both the original version
     * and the transformed version of one of the log events that you input.</p>
     */
    inline const Aws::Vector<TransformedLogRecord>& GetTransformedLogs() const{ return m_transformedLogs; }
    inline void SetTransformedLogs(const Aws::Vector<TransformedLogRecord>& value) { m_transformedLogs = value; }
    inline void SetTransformedLogs(Aws::Vector<TransformedLogRecord>&& value) { m_transformedLogs = std::move(value); }
    inline TestTransformerResult& WithTransformedLogs(const Aws::Vector<TransformedLogRecord>& value) { SetTransformedLogs(value); return *this;}
    inline TestTransformerResult& WithTransformedLogs(Aws::Vector<TransformedLogRecord>&& value) { SetTransformedLogs(std::move(value)); return *this;}
    inline TestTransformerResult& AddTransformedLogs(const TransformedLogRecord& value) { m_transformedLogs.push_back(value); return *this; }
    inline TestTransformerResult& AddTransformedLogs(TransformedLogRecord&& value) { m_transformedLogs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TestTransformerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TestTransformerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TestTransformerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TransformedLogRecord> m_transformedLogs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

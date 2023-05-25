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
  class StopQueryResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API StopQueryResult();
    AWS_CLOUDWATCHLOGS_API StopQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API StopQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This is true if the query was stopped by the <code>StopQuery</code>
     * operation.</p>
     */
    inline bool GetSuccess() const{ return m_success; }

    /**
     * <p>This is true if the query was stopped by the <code>StopQuery</code>
     * operation.</p>
     */
    inline void SetSuccess(bool value) { m_success = value; }

    /**
     * <p>This is true if the query was stopped by the <code>StopQuery</code>
     * operation.</p>
     */
    inline StopQueryResult& WithSuccess(bool value) { SetSuccess(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StopQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StopQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StopQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_success;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

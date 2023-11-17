/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/internetmonitor/model/QueryStatus.h>
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
namespace InternetMonitor
{
namespace Model
{
  class GetQueryStatusResult
  {
  public:
    AWS_INTERNETMONITOR_API GetQueryStatusResult();
    AWS_INTERNETMONITOR_API GetQueryStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API GetQueryStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status for a query.</p>
     */
    inline const QueryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status for a query.</p>
     */
    inline void SetStatus(const QueryStatus& value) { m_status = value; }

    /**
     * <p>The current status for a query.</p>
     */
    inline void SetStatus(QueryStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status for a query.</p>
     */
    inline GetQueryStatusResult& WithStatus(const QueryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status for a query.</p>
     */
    inline GetQueryStatusResult& WithStatus(QueryStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetQueryStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetQueryStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetQueryStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    QueryStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/Insights.h>
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
namespace AuditManager
{
namespace Model
{
  class GetInsightsResult
  {
  public:
    AWS_AUDITMANAGER_API GetInsightsResult();
    AWS_AUDITMANAGER_API GetInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The analytics data that the <code>GetInsights</code> API returned. </p>
     */
    inline const Insights& GetInsights() const{ return m_insights; }

    /**
     * <p>The analytics data that the <code>GetInsights</code> API returned. </p>
     */
    inline void SetInsights(const Insights& value) { m_insights = value; }

    /**
     * <p>The analytics data that the <code>GetInsights</code> API returned. </p>
     */
    inline void SetInsights(Insights&& value) { m_insights = std::move(value); }

    /**
     * <p>The analytics data that the <code>GetInsights</code> API returned. </p>
     */
    inline GetInsightsResult& WithInsights(const Insights& value) { SetInsights(value); return *this;}

    /**
     * <p>The analytics data that the <code>GetInsights</code> API returned. </p>
     */
    inline GetInsightsResult& WithInsights(Insights&& value) { SetInsights(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetInsightsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetInsightsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetInsightsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Insights m_insights;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws

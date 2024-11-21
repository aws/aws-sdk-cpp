/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
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
namespace CloudTrail
{
namespace Model
{
  class StartDashboardRefreshResult
  {
  public:
    AWS_CLOUDTRAIL_API StartDashboardRefreshResult();
    AWS_CLOUDTRAIL_API StartDashboardRefreshResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API StartDashboardRefreshResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The refresh ID for the dashboard. </p>
     */
    inline const Aws::String& GetRefreshId() const{ return m_refreshId; }
    inline void SetRefreshId(const Aws::String& value) { m_refreshId = value; }
    inline void SetRefreshId(Aws::String&& value) { m_refreshId = std::move(value); }
    inline void SetRefreshId(const char* value) { m_refreshId.assign(value); }
    inline StartDashboardRefreshResult& WithRefreshId(const Aws::String& value) { SetRefreshId(value); return *this;}
    inline StartDashboardRefreshResult& WithRefreshId(Aws::String&& value) { SetRefreshId(std::move(value)); return *this;}
    inline StartDashboardRefreshResult& WithRefreshId(const char* value) { SetRefreshId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartDashboardRefreshResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartDashboardRefreshResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartDashboardRefreshResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_refreshId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

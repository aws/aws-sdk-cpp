/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/DashboardDetail.h>
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
  class ListDashboardsResult
  {
  public:
    AWS_CLOUDTRAIL_API ListDashboardsResult();
    AWS_CLOUDTRAIL_API ListDashboardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListDashboardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Contains information about dashboards in the account, in the current Region
     * that match the applied filters. </p>
     */
    inline const Aws::Vector<DashboardDetail>& GetDashboards() const{ return m_dashboards; }
    inline void SetDashboards(const Aws::Vector<DashboardDetail>& value) { m_dashboards = value; }
    inline void SetDashboards(Aws::Vector<DashboardDetail>&& value) { m_dashboards = std::move(value); }
    inline ListDashboardsResult& WithDashboards(const Aws::Vector<DashboardDetail>& value) { SetDashboards(value); return *this;}
    inline ListDashboardsResult& WithDashboards(Aws::Vector<DashboardDetail>&& value) { SetDashboards(std::move(value)); return *this;}
    inline ListDashboardsResult& AddDashboards(const DashboardDetail& value) { m_dashboards.push_back(value); return *this; }
    inline ListDashboardsResult& AddDashboards(DashboardDetail&& value) { m_dashboards.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token you can use to get the next page of dashboard results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDashboardsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDashboardsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDashboardsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDashboardsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDashboardsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDashboardsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DashboardDetail> m_dashboards;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

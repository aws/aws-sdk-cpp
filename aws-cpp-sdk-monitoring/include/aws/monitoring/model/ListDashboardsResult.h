/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/DashboardEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{
  class ListDashboardsResult
  {
  public:
    AWS_CLOUDWATCH_API ListDashboardsResult();
    AWS_CLOUDWATCH_API ListDashboardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API ListDashboardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The list of matching dashboards.</p>
     */
    inline const Aws::Vector<DashboardEntry>& GetDashboardEntries() const{ return m_dashboardEntries; }

    /**
     * <p>The list of matching dashboards.</p>
     */
    inline void SetDashboardEntries(const Aws::Vector<DashboardEntry>& value) { m_dashboardEntries = value; }

    /**
     * <p>The list of matching dashboards.</p>
     */
    inline void SetDashboardEntries(Aws::Vector<DashboardEntry>&& value) { m_dashboardEntries = std::move(value); }

    /**
     * <p>The list of matching dashboards.</p>
     */
    inline ListDashboardsResult& WithDashboardEntries(const Aws::Vector<DashboardEntry>& value) { SetDashboardEntries(value); return *this;}

    /**
     * <p>The list of matching dashboards.</p>
     */
    inline ListDashboardsResult& WithDashboardEntries(Aws::Vector<DashboardEntry>&& value) { SetDashboardEntries(std::move(value)); return *this;}

    /**
     * <p>The list of matching dashboards.</p>
     */
    inline ListDashboardsResult& AddDashboardEntries(const DashboardEntry& value) { m_dashboardEntries.push_back(value); return *this; }

    /**
     * <p>The list of matching dashboards.</p>
     */
    inline ListDashboardsResult& AddDashboardEntries(DashboardEntry&& value) { m_dashboardEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline ListDashboardsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline ListDashboardsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline ListDashboardsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListDashboardsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListDashboardsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DashboardEntry> m_dashboardEntries;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

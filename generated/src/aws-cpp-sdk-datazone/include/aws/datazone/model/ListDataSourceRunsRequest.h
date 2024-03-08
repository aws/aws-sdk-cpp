/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DataSourceRunStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class ListDataSourceRunsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListDataSourceRunsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataSourceRuns"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the data source.</p>
     */
    inline const Aws::String& GetDataSourceIdentifier() const{ return m_dataSourceIdentifier; }

    /**
     * <p>The identifier of the data source.</p>
     */
    inline bool DataSourceIdentifierHasBeenSet() const { return m_dataSourceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the data source.</p>
     */
    inline void SetDataSourceIdentifier(const Aws::String& value) { m_dataSourceIdentifierHasBeenSet = true; m_dataSourceIdentifier = value; }

    /**
     * <p>The identifier of the data source.</p>
     */
    inline void SetDataSourceIdentifier(Aws::String&& value) { m_dataSourceIdentifierHasBeenSet = true; m_dataSourceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the data source.</p>
     */
    inline void SetDataSourceIdentifier(const char* value) { m_dataSourceIdentifierHasBeenSet = true; m_dataSourceIdentifier.assign(value); }

    /**
     * <p>The identifier of the data source.</p>
     */
    inline ListDataSourceRunsRequest& WithDataSourceIdentifier(const Aws::String& value) { SetDataSourceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the data source.</p>
     */
    inline ListDataSourceRunsRequest& WithDataSourceIdentifier(Aws::String&& value) { SetDataSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source.</p>
     */
    inline ListDataSourceRunsRequest& WithDataSourceIdentifier(const char* value) { SetDataSourceIdentifier(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which to invoke the
     * <code>ListDataSourceRuns</code> action.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which to invoke the
     * <code>ListDataSourceRuns</code> action.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which to invoke the
     * <code>ListDataSourceRuns</code> action.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which to invoke the
     * <code>ListDataSourceRuns</code> action.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which to invoke the
     * <code>ListDataSourceRuns</code> action.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which to invoke the
     * <code>ListDataSourceRuns</code> action.</p>
     */
    inline ListDataSourceRunsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which to invoke the
     * <code>ListDataSourceRuns</code> action.</p>
     */
    inline ListDataSourceRunsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which to invoke the
     * <code>ListDataSourceRuns</code> action.</p>
     */
    inline ListDataSourceRunsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The maximum number of runs to return in a single call to
     * <code>ListDataSourceRuns</code>. When the number of runs to be listed is greater
     * than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListDataSourceRuns</code> to list the next set of runs.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of runs to return in a single call to
     * <code>ListDataSourceRuns</code>. When the number of runs to be listed is greater
     * than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListDataSourceRuns</code> to list the next set of runs.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of runs to return in a single call to
     * <code>ListDataSourceRuns</code>. When the number of runs to be listed is greater
     * than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListDataSourceRuns</code> to list the next set of runs.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of runs to return in a single call to
     * <code>ListDataSourceRuns</code>. When the number of runs to be listed is greater
     * than the value of <code>MaxResults</code>, the response contains a
     * <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListDataSourceRuns</code> to list the next set of runs.</p>
     */
    inline ListDataSourceRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>When the number of runs is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of runs, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRuns</code> to list the next set of runs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of runs is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of runs, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRuns</code> to list the next set of runs.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When the number of runs is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of runs, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRuns</code> to list the next set of runs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When the number of runs is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of runs, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRuns</code> to list the next set of runs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When the number of runs is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of runs, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRuns</code> to list the next set of runs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When the number of runs is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of runs, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRuns</code> to list the next set of runs.</p>
     */
    inline ListDataSourceRunsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of runs is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of runs, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRuns</code> to list the next set of runs.</p>
     */
    inline ListDataSourceRunsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of runs is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of runs, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRuns</code> to list the next set of runs.</p>
     */
    inline ListDataSourceRunsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The status of the data source.</p>
     */
    inline const DataSourceRunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the data source.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the data source.</p>
     */
    inline void SetStatus(const DataSourceRunStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the data source.</p>
     */
    inline void SetStatus(DataSourceRunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the data source.</p>
     */
    inline ListDataSourceRunsRequest& WithStatus(const DataSourceRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data source.</p>
     */
    inline ListDataSourceRunsRequest& WithStatus(DataSourceRunStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_dataSourceIdentifier;
    bool m_dataSourceIdentifierHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    DataSourceRunStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

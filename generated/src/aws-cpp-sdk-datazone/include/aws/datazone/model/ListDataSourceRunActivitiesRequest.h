/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DataAssetActivityStatus.h>
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
  class ListDataSourceRunActivitiesRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListDataSourceRunActivitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataSourceRunActivities"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the Amazon DataZone domain in which to list data source run
     * activities.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which to list data source run
     * activities.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which to list data source run
     * activities.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which to list data source run
     * activities.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which to list data source run
     * activities.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which to list data source run
     * activities.</p>
     */
    inline ListDataSourceRunActivitiesRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which to list data source run
     * activities.</p>
     */
    inline ListDataSourceRunActivitiesRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which to list data source run
     * activities.</p>
     */
    inline ListDataSourceRunActivitiesRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The identifier of the data source run.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline ListDataSourceRunActivitiesRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline ListDataSourceRunActivitiesRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline ListDataSourceRunActivitiesRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The maximum number of activities to return in a single call to
     * <code>ListDataSourceRunActivities</code>. When the number of activities to be
     * listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListDataSourceRunActivities</code> to list the next set of activities.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of activities to return in a single call to
     * <code>ListDataSourceRunActivities</code>. When the number of activities to be
     * listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListDataSourceRunActivities</code> to list the next set of activities.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of activities to return in a single call to
     * <code>ListDataSourceRunActivities</code>. When the number of activities to be
     * listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListDataSourceRunActivities</code> to list the next set of activities.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of activities to return in a single call to
     * <code>ListDataSourceRunActivities</code>. When the number of activities to be
     * listed is greater than the value of <code>MaxResults</code>, the response
     * contains a <code>NextToken</code> value that you can use in a subsequent call to
     * <code>ListDataSourceRunActivities</code> to list the next set of activities.</p>
     */
    inline ListDataSourceRunActivitiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>When the number of activities is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of activities, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRunActivities</code> to list the next set of activities.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of activities is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of activities, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRunActivities</code> to list the next set of activities.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When the number of activities is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of activities, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRunActivities</code> to list the next set of activities.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When the number of activities is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of activities, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRunActivities</code> to list the next set of activities.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When the number of activities is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of activities, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRunActivities</code> to list the next set of activities.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When the number of activities is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of activities, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRunActivities</code> to list the next set of activities.</p>
     */
    inline ListDataSourceRunActivitiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of activities is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of activities, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRunActivities</code> to list the next set of activities.</p>
     */
    inline ListDataSourceRunActivitiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of activities is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of activities, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListDataSourceRunActivities</code> to list the next set of activities.</p>
     */
    inline ListDataSourceRunActivitiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The status of the data source run.</p>
     */
    inline const DataAssetActivityStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the data source run.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the data source run.</p>
     */
    inline void SetStatus(const DataAssetActivityStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the data source run.</p>
     */
    inline void SetStatus(DataAssetActivityStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the data source run.</p>
     */
    inline ListDataSourceRunActivitiesRequest& WithStatus(const DataAssetActivityStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data source run.</p>
     */
    inline ListDataSourceRunActivitiesRequest& WithStatus(DataAssetActivityStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    DataAssetActivityStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

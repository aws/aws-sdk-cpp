/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/model/EdgeDirection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datazone/model/SortOrder.h>
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
  class ListLineageNodeHistoryRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListLineageNodeHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLineageNodeHistory"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The direction of the data lineage node refers to the lineage node having
     * neighbors in that direction. For example, if direction is <code>UPSTREAM</code>,
     * the <code>ListLineageNodeHistory</code> API responds with historical versions
     * with upstream neighbors only.</p>
     */
    inline const EdgeDirection& GetDirection() const{ return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(const EdgeDirection& value) { m_directionHasBeenSet = true; m_direction = value; }
    inline void SetDirection(EdgeDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }
    inline ListLineageNodeHistoryRequest& WithDirection(const EdgeDirection& value) { SetDirection(value); return *this;}
    inline ListLineageNodeHistoryRequest& WithDirection(EdgeDirection&& value) { SetDirection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where you want to list the history of the specified data
     * lineage node.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline ListLineageNodeHistoryRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline ListLineageNodeHistoryRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline ListLineageNodeHistoryRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the action is to return data lineage node history from the
     * time after the event timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTimestampGTE() const{ return m_eventTimestampGTE; }
    inline bool EventTimestampGTEHasBeenSet() const { return m_eventTimestampGTEHasBeenSet; }
    inline void SetEventTimestampGTE(const Aws::Utils::DateTime& value) { m_eventTimestampGTEHasBeenSet = true; m_eventTimestampGTE = value; }
    inline void SetEventTimestampGTE(Aws::Utils::DateTime&& value) { m_eventTimestampGTEHasBeenSet = true; m_eventTimestampGTE = std::move(value); }
    inline ListLineageNodeHistoryRequest& WithEventTimestampGTE(const Aws::Utils::DateTime& value) { SetEventTimestampGTE(value); return *this;}
    inline ListLineageNodeHistoryRequest& WithEventTimestampGTE(Aws::Utils::DateTime&& value) { SetEventTimestampGTE(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the action is to return data lineage node history from the
     * time prior of the event timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTimestampLTE() const{ return m_eventTimestampLTE; }
    inline bool EventTimestampLTEHasBeenSet() const { return m_eventTimestampLTEHasBeenSet; }
    inline void SetEventTimestampLTE(const Aws::Utils::DateTime& value) { m_eventTimestampLTEHasBeenSet = true; m_eventTimestampLTE = value; }
    inline void SetEventTimestampLTE(Aws::Utils::DateTime&& value) { m_eventTimestampLTEHasBeenSet = true; m_eventTimestampLTE = std::move(value); }
    inline ListLineageNodeHistoryRequest& WithEventTimestampLTE(const Aws::Utils::DateTime& value) { SetEventTimestampLTE(value); return *this;}
    inline ListLineageNodeHistoryRequest& WithEventTimestampLTE(Aws::Utils::DateTime&& value) { SetEventTimestampLTE(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data lineage node whose history you want to list.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline ListLineageNodeHistoryRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline ListLineageNodeHistoryRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline ListLineageNodeHistoryRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of history items to return in a single call to
     * ListLineageNodeHistory. When the number of memberships to be listed is greater
     * than the value of MaxResults, the response contains a NextToken value that you
     * can use in a subsequent call to ListLineageNodeHistory to list the next set of
     * items.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListLineageNodeHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of history items is greater than the default value for the
     * MaxResults parameter, or if you explicitly specify a value for MaxResults that
     * is less than the number of items, the response includes a pagination token named
     * NextToken. You can specify this NextToken value in a subsequent call to
     * ListLineageNodeHistory to list the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListLineageNodeHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLineageNodeHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLineageNodeHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order by which you want data lineage node history to be sorted.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListLineageNodeHistoryRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListLineageNodeHistoryRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}
  private:

    EdgeDirection m_direction;
    bool m_directionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_eventTimestampGTE;
    bool m_eventTimestampGTEHasBeenSet = false;

    Aws::Utils::DateTime m_eventTimestampLTE;
    bool m_eventTimestampLTEHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

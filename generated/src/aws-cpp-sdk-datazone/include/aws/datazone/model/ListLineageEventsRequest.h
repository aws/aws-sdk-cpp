/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/LineageEventProcessingStatus.h>
#include <aws/datazone/model/SortOrder.h>
#include <aws/core/utils/DateTime.h>
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
  class ListLineageEventsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListLineageEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLineageEvents"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the domain where you want to list lineage events.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline ListLineageEventsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline ListLineageEventsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline ListLineageEventsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of lineage events to return in a single call to
     * ListLineageEvents. When the number of lineage events to be listed is greater
     * than the value of MaxResults, the response contains a NextToken value that you
     * can use in a subsequent call to ListLineageEvents to list the next set of
     * lineage events.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListLineageEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of lineage events is greater than the default value for the
     * MaxResults parameter, or if you explicitly specify a value for MaxResults that
     * is less than the number of lineage events, the response includes a pagination
     * token named NextToken. You can specify this NextToken value in a subsequent call
     * to ListLineageEvents to list the next set of lineage events.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListLineageEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLineageEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLineageEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The processing status of a lineage event.</p>
     */
    inline const LineageEventProcessingStatus& GetProcessingStatus() const{ return m_processingStatus; }
    inline bool ProcessingStatusHasBeenSet() const { return m_processingStatusHasBeenSet; }
    inline void SetProcessingStatus(const LineageEventProcessingStatus& value) { m_processingStatusHasBeenSet = true; m_processingStatus = value; }
    inline void SetProcessingStatus(LineageEventProcessingStatus&& value) { m_processingStatusHasBeenSet = true; m_processingStatus = std::move(value); }
    inline ListLineageEventsRequest& WithProcessingStatus(const LineageEventProcessingStatus& value) { SetProcessingStatus(value); return *this;}
    inline ListLineageEventsRequest& WithProcessingStatus(LineageEventProcessingStatus&& value) { SetProcessingStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order of the lineage events.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListLineageEventsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListLineageEventsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The after timestamp of a lineage event.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestampAfter() const{ return m_timestampAfter; }
    inline bool TimestampAfterHasBeenSet() const { return m_timestampAfterHasBeenSet; }
    inline void SetTimestampAfter(const Aws::Utils::DateTime& value) { m_timestampAfterHasBeenSet = true; m_timestampAfter = value; }
    inline void SetTimestampAfter(Aws::Utils::DateTime&& value) { m_timestampAfterHasBeenSet = true; m_timestampAfter = std::move(value); }
    inline ListLineageEventsRequest& WithTimestampAfter(const Aws::Utils::DateTime& value) { SetTimestampAfter(value); return *this;}
    inline ListLineageEventsRequest& WithTimestampAfter(Aws::Utils::DateTime&& value) { SetTimestampAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The before timestamp of a lineage event.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestampBefore() const{ return m_timestampBefore; }
    inline bool TimestampBeforeHasBeenSet() const { return m_timestampBeforeHasBeenSet; }
    inline void SetTimestampBefore(const Aws::Utils::DateTime& value) { m_timestampBeforeHasBeenSet = true; m_timestampBefore = value; }
    inline void SetTimestampBefore(Aws::Utils::DateTime&& value) { m_timestampBeforeHasBeenSet = true; m_timestampBefore = std::move(value); }
    inline ListLineageEventsRequest& WithTimestampBefore(const Aws::Utils::DateTime& value) { SetTimestampBefore(value); return *this;}
    inline ListLineageEventsRequest& WithTimestampBefore(Aws::Utils::DateTime&& value) { SetTimestampBefore(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    LineageEventProcessingStatus m_processingStatus;
    bool m_processingStatusHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::Utils::DateTime m_timestampAfter;
    bool m_timestampAfterHasBeenSet = false;

    Aws::Utils::DateTime m_timestampBefore;
    bool m_timestampBeforeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

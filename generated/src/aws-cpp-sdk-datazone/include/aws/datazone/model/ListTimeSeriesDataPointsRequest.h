/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datazone/model/TimeSeriesEntityType.h>
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
  class ListTimeSeriesDataPointsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListTimeSeriesDataPointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTimeSeriesDataPoints"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain that houses the assets for which you
     * want to list time series data points.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline ListTimeSeriesDataPointsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline ListTimeSeriesDataPointsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline ListTimeSeriesDataPointsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the data points that you wanted to list ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }
    inline ListTimeSeriesDataPointsRequest& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline ListTimeSeriesDataPointsRequest& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset for which you want to list data points.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const{ return m_entityIdentifier; }
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
    inline void SetEntityIdentifier(const Aws::String& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = value; }
    inline void SetEntityIdentifier(Aws::String&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::move(value); }
    inline void SetEntityIdentifier(const char* value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier.assign(value); }
    inline ListTimeSeriesDataPointsRequest& WithEntityIdentifier(const Aws::String& value) { SetEntityIdentifier(value); return *this;}
    inline ListTimeSeriesDataPointsRequest& WithEntityIdentifier(Aws::String&& value) { SetEntityIdentifier(std::move(value)); return *this;}
    inline ListTimeSeriesDataPointsRequest& WithEntityIdentifier(const char* value) { SetEntityIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the asset for which you want to list data points.</p>
     */
    inline const TimeSeriesEntityType& GetEntityType() const{ return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(const TimeSeriesEntityType& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline void SetEntityType(TimeSeriesEntityType&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }
    inline ListTimeSeriesDataPointsRequest& WithEntityType(const TimeSeriesEntityType& value) { SetEntityType(value); return *this;}
    inline ListTimeSeriesDataPointsRequest& WithEntityType(TimeSeriesEntityType&& value) { SetEntityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the time series data points form.</p>
     */
    inline const Aws::String& GetFormName() const{ return m_formName; }
    inline bool FormNameHasBeenSet() const { return m_formNameHasBeenSet; }
    inline void SetFormName(const Aws::String& value) { m_formNameHasBeenSet = true; m_formName = value; }
    inline void SetFormName(Aws::String&& value) { m_formNameHasBeenSet = true; m_formName = std::move(value); }
    inline void SetFormName(const char* value) { m_formNameHasBeenSet = true; m_formName.assign(value); }
    inline ListTimeSeriesDataPointsRequest& WithFormName(const Aws::String& value) { SetFormName(value); return *this;}
    inline ListTimeSeriesDataPointsRequest& WithFormName(Aws::String&& value) { SetFormName(std::move(value)); return *this;}
    inline ListTimeSeriesDataPointsRequest& WithFormName(const char* value) { SetFormName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of data points to return in a single call to
     * ListTimeSeriesDataPoints. When the number of data points to be listed is greater
     * than the value of MaxResults, the response contains a NextToken value that you
     * can use in a subsequent call to ListTimeSeriesDataPoints to list the next set of
     * data points.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTimeSeriesDataPointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of data points is greater than the default value for the
     * MaxResults parameter, or if you explicitly specify a value for MaxResults that
     * is less than the number of data points, the response includes a pagination token
     * named NextToken. You can specify this NextToken value in a subsequent call to
     * ListTimeSeriesDataPoints to list the next set of data points.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTimeSeriesDataPointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTimeSeriesDataPointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTimeSeriesDataPointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the data points that you want to list started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline ListTimeSeriesDataPointsRequest& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline ListTimeSeriesDataPointsRequest& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    Aws::String m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    TimeSeriesEntityType m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_formName;
    bool m_formNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

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
    AWS_DATAZONE_API ListTimeSeriesDataPointsRequest() = default;

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
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    ListTimeSeriesDataPointsRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the data points that you wanted to list ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    ListTimeSeriesDataPointsRequest& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset for which you want to list data points.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const { return m_entityIdentifier; }
    inline bool EntityIdentifierHasBeenSet() const { return m_entityIdentifierHasBeenSet; }
    template<typename EntityIdentifierT = Aws::String>
    void SetEntityIdentifier(EntityIdentifierT&& value) { m_entityIdentifierHasBeenSet = true; m_entityIdentifier = std::forward<EntityIdentifierT>(value); }
    template<typename EntityIdentifierT = Aws::String>
    ListTimeSeriesDataPointsRequest& WithEntityIdentifier(EntityIdentifierT&& value) { SetEntityIdentifier(std::forward<EntityIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the asset for which you want to list data points.</p>
     */
    inline TimeSeriesEntityType GetEntityType() const { return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(TimeSeriesEntityType value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline ListTimeSeriesDataPointsRequest& WithEntityType(TimeSeriesEntityType value) { SetEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the time series data points form.</p>
     */
    inline const Aws::String& GetFormName() const { return m_formName; }
    inline bool FormNameHasBeenSet() const { return m_formNameHasBeenSet; }
    template<typename FormNameT = Aws::String>
    void SetFormName(FormNameT&& value) { m_formNameHasBeenSet = true; m_formName = std::forward<FormNameT>(value); }
    template<typename FormNameT = Aws::String>
    ListTimeSeriesDataPointsRequest& WithFormName(FormNameT&& value) { SetFormName(std::forward<FormNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of data points to return in a single call to
     * ListTimeSeriesDataPoints. When the number of data points to be listed is greater
     * than the value of MaxResults, the response contains a NextToken value that you
     * can use in a subsequent call to ListTimeSeriesDataPoints to list the next set of
     * data points.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTimeSeriesDataPointsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the data points that you want to list started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    ListTimeSeriesDataPointsRequest& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    Aws::String m_entityIdentifier;
    bool m_entityIdentifierHasBeenSet = false;

    TimeSeriesEntityType m_entityType{TimeSeriesEntityType::NOT_SET};
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_formName;
    bool m_formNameHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

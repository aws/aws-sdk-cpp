/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/RelationshipType.h>
#include <utility>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

  /**
   */
  class ListAnomalyGroupRelatedMetricsRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupRelatedMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAnomalyGroupRelatedMetrics"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the anomaly detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }
    inline ListAnomalyGroupRelatedMetricsRequest& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}
    inline ListAnomalyGroupRelatedMetricsRequest& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}
    inline ListAnomalyGroupRelatedMetricsRequest& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline const Aws::String& GetAnomalyGroupId() const{ return m_anomalyGroupId; }
    inline bool AnomalyGroupIdHasBeenSet() const { return m_anomalyGroupIdHasBeenSet; }
    inline void SetAnomalyGroupId(const Aws::String& value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId = value; }
    inline void SetAnomalyGroupId(Aws::String&& value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId = std::move(value); }
    inline void SetAnomalyGroupId(const char* value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId.assign(value); }
    inline ListAnomalyGroupRelatedMetricsRequest& WithAnomalyGroupId(const Aws::String& value) { SetAnomalyGroupId(value); return *this;}
    inline ListAnomalyGroupRelatedMetricsRequest& WithAnomalyGroupId(Aws::String&& value) { SetAnomalyGroupId(std::move(value)); return *this;}
    inline ListAnomalyGroupRelatedMetricsRequest& WithAnomalyGroupId(const char* value) { SetAnomalyGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter for potential causes (<code>CAUSE_OF_INPUT_ANOMALY_GROUP</code>) or
     * downstream effects (<code>EFFECT_OF_INPUT_ANOMALY_GROUP</code>) of the anomaly
     * group.</p>
     */
    inline const RelationshipType& GetRelationshipTypeFilter() const{ return m_relationshipTypeFilter; }
    inline bool RelationshipTypeFilterHasBeenSet() const { return m_relationshipTypeFilterHasBeenSet; }
    inline void SetRelationshipTypeFilter(const RelationshipType& value) { m_relationshipTypeFilterHasBeenSet = true; m_relationshipTypeFilter = value; }
    inline void SetRelationshipTypeFilter(RelationshipType&& value) { m_relationshipTypeFilterHasBeenSet = true; m_relationshipTypeFilter = std::move(value); }
    inline ListAnomalyGroupRelatedMetricsRequest& WithRelationshipTypeFilter(const RelationshipType& value) { SetRelationshipTypeFilter(value); return *this;}
    inline ListAnomalyGroupRelatedMetricsRequest& WithRelationshipTypeFilter(RelationshipType&& value) { SetRelationshipTypeFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAnomalyGroupRelatedMetricsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token that's returned by a previous request to
     * retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAnomalyGroupRelatedMetricsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAnomalyGroupRelatedMetricsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAnomalyGroupRelatedMetricsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    Aws::String m_anomalyGroupId;
    bool m_anomalyGroupIdHasBeenSet = false;

    RelationshipType m_relationshipTypeFilter;
    bool m_relationshipTypeFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws

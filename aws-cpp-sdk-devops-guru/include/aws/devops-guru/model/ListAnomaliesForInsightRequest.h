/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/StartTimeRange.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class AWS_DEVOPSGURU_API ListAnomaliesForInsightRequest : public DevOpsGuruRequest
  {
  public:
    ListAnomaliesForInsightRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAnomaliesForInsight"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetInsightId() const{ return m_insightId; }

    
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }

    
    inline void SetInsightId(const Aws::String& value) { m_insightIdHasBeenSet = true; m_insightId = value; }

    
    inline void SetInsightId(Aws::String&& value) { m_insightIdHasBeenSet = true; m_insightId = std::move(value); }

    
    inline void SetInsightId(const char* value) { m_insightIdHasBeenSet = true; m_insightId.assign(value); }

    
    inline ListAnomaliesForInsightRequest& WithInsightId(const Aws::String& value) { SetInsightId(value); return *this;}

    
    inline ListAnomaliesForInsightRequest& WithInsightId(Aws::String&& value) { SetInsightId(std::move(value)); return *this;}

    
    inline ListAnomaliesForInsightRequest& WithInsightId(const char* value) { SetInsightId(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListAnomaliesForInsightRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListAnomaliesForInsightRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListAnomaliesForInsightRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListAnomaliesForInsightRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const StartTimeRange& GetStartTimeRange() const{ return m_startTimeRange; }

    
    inline bool StartTimeRangeHasBeenSet() const { return m_startTimeRangeHasBeenSet; }

    
    inline void SetStartTimeRange(const StartTimeRange& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = value; }

    
    inline void SetStartTimeRange(StartTimeRange&& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = std::move(value); }

    
    inline ListAnomaliesForInsightRequest& WithStartTimeRange(const StartTimeRange& value) { SetStartTimeRange(value); return *this;}

    
    inline ListAnomaliesForInsightRequest& WithStartTimeRange(StartTimeRange&& value) { SetStartTimeRange(std::move(value)); return *this;}

  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    StartTimeRange m_startTimeRange;
    bool m_startTimeRangeHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

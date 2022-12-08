/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class GetInsightImpactGraphRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API GetInsightImpactGraphRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInsightImpactGraph"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline const Aws::String& GetInsightId() const{ return m_insightId; }

    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }

    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline void SetInsightId(const Aws::String& value) { m_insightIdHasBeenSet = true; m_insightId = value; }

    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline void SetInsightId(Aws::String&& value) { m_insightIdHasBeenSet = true; m_insightId = std::move(value); }

    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline void SetInsightId(const char* value) { m_insightIdHasBeenSet = true; m_insightId.assign(value); }

    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline GetInsightImpactGraphRequest& WithInsightId(const Aws::String& value) { SetInsightId(value); return *this;}

    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline GetInsightImpactGraphRequest& WithInsightId(Aws::String&& value) { SetInsightId(std::move(value)); return *this;}

    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline GetInsightImpactGraphRequest& WithInsightId(const char* value) { SetInsightId(value); return *this;}


    /**
     * <p>The estimated start time of the insight, in Unix time seconds. The StartTime
     * is inclusive of the value provided and can't be more than 30 days old.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The estimated start time of the insight, in Unix time seconds. The StartTime
     * is inclusive of the value provided and can't be more than 30 days old.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The estimated start time of the insight, in Unix time seconds. The StartTime
     * is inclusive of the value provided and can't be more than 30 days old.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The estimated start time of the insight, in Unix time seconds. The StartTime
     * is inclusive of the value provided and can't be more than 30 days old.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The estimated start time of the insight, in Unix time seconds. The StartTime
     * is inclusive of the value provided and can't be more than 30 days old.</p>
     */
    inline GetInsightImpactGraphRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The estimated start time of the insight, in Unix time seconds. The StartTime
     * is inclusive of the value provided and can't be more than 30 days old.</p>
     */
    inline GetInsightImpactGraphRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The estimated end time of the insight, in Unix time seconds. The EndTime is
     * exclusive of the value provided. The time range between the start time and end
     * time can't be more than six hours. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The estimated end time of the insight, in Unix time seconds. The EndTime is
     * exclusive of the value provided. The time range between the start time and end
     * time can't be more than six hours. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The estimated end time of the insight, in Unix time seconds. The EndTime is
     * exclusive of the value provided. The time range between the start time and end
     * time can't be more than six hours. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The estimated end time of the insight, in Unix time seconds. The EndTime is
     * exclusive of the value provided. The time range between the start time and end
     * time can't be more than six hours. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The estimated end time of the insight, in Unix time seconds. The EndTime is
     * exclusive of the value provided. The time range between the start time and end
     * time can't be more than six hours. </p>
     */
    inline GetInsightImpactGraphRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The estimated end time of the insight, in Unix time seconds. The EndTime is
     * exclusive of the value provided. The time range between the start time and end
     * time can't be more than six hours. </p>
     */
    inline GetInsightImpactGraphRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results. </p>
     */
    inline GetInsightImpactGraphRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results. </p>
     */
    inline GetInsightImpactGraphRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results. </p>
     */
    inline GetInsightImpactGraphRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws

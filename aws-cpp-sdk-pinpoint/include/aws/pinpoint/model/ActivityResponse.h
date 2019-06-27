/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about an activity that was performed by a
   * campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ActivityResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ActivityResponse
  {
  public:
    ActivityResponse();
    ActivityResponse(Aws::Utils::Json::JsonView jsonValue);
    ActivityResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline ActivityResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline ActivityResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline ActivityResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The unique identifier for the campaign that the activity applies to.</p>
     */
    inline const Aws::String& GetCampaignId() const{ return m_campaignId; }

    /**
     * <p>The unique identifier for the campaign that the activity applies to.</p>
     */
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }

    /**
     * <p>The unique identifier for the campaign that the activity applies to.</p>
     */
    inline void SetCampaignId(const Aws::String& value) { m_campaignIdHasBeenSet = true; m_campaignId = value; }

    /**
     * <p>The unique identifier for the campaign that the activity applies to.</p>
     */
    inline void SetCampaignId(Aws::String&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::move(value); }

    /**
     * <p>The unique identifier for the campaign that the activity applies to.</p>
     */
    inline void SetCampaignId(const char* value) { m_campaignIdHasBeenSet = true; m_campaignId.assign(value); }

    /**
     * <p>The unique identifier for the campaign that the activity applies to.</p>
     */
    inline ActivityResponse& WithCampaignId(const Aws::String& value) { SetCampaignId(value); return *this;}

    /**
     * <p>The unique identifier for the campaign that the activity applies to.</p>
     */
    inline ActivityResponse& WithCampaignId(Aws::String&& value) { SetCampaignId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the campaign that the activity applies to.</p>
     */
    inline ActivityResponse& WithCampaignId(const char* value) { SetCampaignId(value); return *this;}


    /**
     * <p>The actual time, in ISO 8601 format, when the activity was marked CANCELLED
     * or COMPLETED.</p>
     */
    inline const Aws::String& GetEnd() const{ return m_end; }

    /**
     * <p>The actual time, in ISO 8601 format, when the activity was marked CANCELLED
     * or COMPLETED.</p>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>The actual time, in ISO 8601 format, when the activity was marked CANCELLED
     * or COMPLETED.</p>
     */
    inline void SetEnd(const Aws::String& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>The actual time, in ISO 8601 format, when the activity was marked CANCELLED
     * or COMPLETED.</p>
     */
    inline void SetEnd(Aws::String&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * <p>The actual time, in ISO 8601 format, when the activity was marked CANCELLED
     * or COMPLETED.</p>
     */
    inline void SetEnd(const char* value) { m_endHasBeenSet = true; m_end.assign(value); }

    /**
     * <p>The actual time, in ISO 8601 format, when the activity was marked CANCELLED
     * or COMPLETED.</p>
     */
    inline ActivityResponse& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}

    /**
     * <p>The actual time, in ISO 8601 format, when the activity was marked CANCELLED
     * or COMPLETED.</p>
     */
    inline ActivityResponse& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}

    /**
     * <p>The actual time, in ISO 8601 format, when the activity was marked CANCELLED
     * or COMPLETED.</p>
     */
    inline ActivityResponse& WithEnd(const char* value) { SetEnd(value); return *this;}


    /**
     * <p>The unique identifier for the activity.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the activity.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the activity.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the activity.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the activity.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the activity.</p>
     */
    inline ActivityResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the activity.</p>
     */
    inline ActivityResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the activity.</p>
     */
    inline ActivityResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Specifies whether the activity succeeded. Possible values are SUCCESS and
     * FAIL.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * <p>Specifies whether the activity succeeded. Possible values are SUCCESS and
     * FAIL.</p>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>Specifies whether the activity succeeded. Possible values are SUCCESS and
     * FAIL.</p>
     */
    inline void SetResult(const Aws::String& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>Specifies whether the activity succeeded. Possible values are SUCCESS and
     * FAIL.</p>
     */
    inline void SetResult(Aws::String&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>Specifies whether the activity succeeded. Possible values are SUCCESS and
     * FAIL.</p>
     */
    inline void SetResult(const char* value) { m_resultHasBeenSet = true; m_result.assign(value); }

    /**
     * <p>Specifies whether the activity succeeded. Possible values are SUCCESS and
     * FAIL.</p>
     */
    inline ActivityResponse& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * <p>Specifies whether the activity succeeded. Possible values are SUCCESS and
     * FAIL.</p>
     */
    inline ActivityResponse& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}

    /**
     * <p>Specifies whether the activity succeeded. Possible values are SUCCESS and
     * FAIL.</p>
     */
    inline ActivityResponse& WithResult(const char* value) { SetResult(value); return *this;}


    /**
     * <p>The scheduled start time, in ISO 8601 format, for the activity.</p>
     */
    inline const Aws::String& GetScheduledStart() const{ return m_scheduledStart; }

    /**
     * <p>The scheduled start time, in ISO 8601 format, for the activity.</p>
     */
    inline bool ScheduledStartHasBeenSet() const { return m_scheduledStartHasBeenSet; }

    /**
     * <p>The scheduled start time, in ISO 8601 format, for the activity.</p>
     */
    inline void SetScheduledStart(const Aws::String& value) { m_scheduledStartHasBeenSet = true; m_scheduledStart = value; }

    /**
     * <p>The scheduled start time, in ISO 8601 format, for the activity.</p>
     */
    inline void SetScheduledStart(Aws::String&& value) { m_scheduledStartHasBeenSet = true; m_scheduledStart = std::move(value); }

    /**
     * <p>The scheduled start time, in ISO 8601 format, for the activity.</p>
     */
    inline void SetScheduledStart(const char* value) { m_scheduledStartHasBeenSet = true; m_scheduledStart.assign(value); }

    /**
     * <p>The scheduled start time, in ISO 8601 format, for the activity.</p>
     */
    inline ActivityResponse& WithScheduledStart(const Aws::String& value) { SetScheduledStart(value); return *this;}

    /**
     * <p>The scheduled start time, in ISO 8601 format, for the activity.</p>
     */
    inline ActivityResponse& WithScheduledStart(Aws::String&& value) { SetScheduledStart(std::move(value)); return *this;}

    /**
     * <p>The scheduled start time, in ISO 8601 format, for the activity.</p>
     */
    inline ActivityResponse& WithScheduledStart(const char* value) { SetScheduledStart(value); return *this;}


    /**
     * <p>The actual start time, in ISO 8601 format, of the activity.</p>
     */
    inline const Aws::String& GetStart() const{ return m_start; }

    /**
     * <p>The actual start time, in ISO 8601 format, of the activity.</p>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>The actual start time, in ISO 8601 format, of the activity.</p>
     */
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The actual start time, in ISO 8601 format, of the activity.</p>
     */
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>The actual start time, in ISO 8601 format, of the activity.</p>
     */
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }

    /**
     * <p>The actual start time, in ISO 8601 format, of the activity.</p>
     */
    inline ActivityResponse& WithStart(const Aws::String& value) { SetStart(value); return *this;}

    /**
     * <p>The actual start time, in ISO 8601 format, of the activity.</p>
     */
    inline ActivityResponse& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}

    /**
     * <p>The actual start time, in ISO 8601 format, of the activity.</p>
     */
    inline ActivityResponse& WithStart(const char* value) { SetStart(value); return *this;}


    /**
     * <p>The state of the activity. Possible values are: PENDING, INITIALIZING,
     * RUNNING, PAUSED, CANCELLED, and COMPLETED.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the activity. Possible values are: PENDING, INITIALIZING,
     * RUNNING, PAUSED, CANCELLED, and COMPLETED.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the activity. Possible values are: PENDING, INITIALIZING,
     * RUNNING, PAUSED, CANCELLED, and COMPLETED.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the activity. Possible values are: PENDING, INITIALIZING,
     * RUNNING, PAUSED, CANCELLED, and COMPLETED.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the activity. Possible values are: PENDING, INITIALIZING,
     * RUNNING, PAUSED, CANCELLED, and COMPLETED.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of the activity. Possible values are: PENDING, INITIALIZING,
     * RUNNING, PAUSED, CANCELLED, and COMPLETED.</p>
     */
    inline ActivityResponse& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the activity. Possible values are: PENDING, INITIALIZING,
     * RUNNING, PAUSED, CANCELLED, and COMPLETED.</p>
     */
    inline ActivityResponse& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the activity. Possible values are: PENDING, INITIALIZING,
     * RUNNING, PAUSED, CANCELLED, and COMPLETED.</p>
     */
    inline ActivityResponse& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The total number of endpoints that the campaign successfully delivered
     * messages to.</p>
     */
    inline int GetSuccessfulEndpointCount() const{ return m_successfulEndpointCount; }

    /**
     * <p>The total number of endpoints that the campaign successfully delivered
     * messages to.</p>
     */
    inline bool SuccessfulEndpointCountHasBeenSet() const { return m_successfulEndpointCountHasBeenSet; }

    /**
     * <p>The total number of endpoints that the campaign successfully delivered
     * messages to.</p>
     */
    inline void SetSuccessfulEndpointCount(int value) { m_successfulEndpointCountHasBeenSet = true; m_successfulEndpointCount = value; }

    /**
     * <p>The total number of endpoints that the campaign successfully delivered
     * messages to.</p>
     */
    inline ActivityResponse& WithSuccessfulEndpointCount(int value) { SetSuccessfulEndpointCount(value); return *this;}


    /**
     * <p>The total number of time zones that were completed.</p>
     */
    inline int GetTimezonesCompletedCount() const{ return m_timezonesCompletedCount; }

    /**
     * <p>The total number of time zones that were completed.</p>
     */
    inline bool TimezonesCompletedCountHasBeenSet() const { return m_timezonesCompletedCountHasBeenSet; }

    /**
     * <p>The total number of time zones that were completed.</p>
     */
    inline void SetTimezonesCompletedCount(int value) { m_timezonesCompletedCountHasBeenSet = true; m_timezonesCompletedCount = value; }

    /**
     * <p>The total number of time zones that were completed.</p>
     */
    inline ActivityResponse& WithTimezonesCompletedCount(int value) { SetTimezonesCompletedCount(value); return *this;}


    /**
     * <p>The total number of unique time zones that are in the segment for the
     * campaign.</p>
     */
    inline int GetTimezonesTotalCount() const{ return m_timezonesTotalCount; }

    /**
     * <p>The total number of unique time zones that are in the segment for the
     * campaign.</p>
     */
    inline bool TimezonesTotalCountHasBeenSet() const { return m_timezonesTotalCountHasBeenSet; }

    /**
     * <p>The total number of unique time zones that are in the segment for the
     * campaign.</p>
     */
    inline void SetTimezonesTotalCount(int value) { m_timezonesTotalCountHasBeenSet = true; m_timezonesTotalCount = value; }

    /**
     * <p>The total number of unique time zones that are in the segment for the
     * campaign.</p>
     */
    inline ActivityResponse& WithTimezonesTotalCount(int value) { SetTimezonesTotalCount(value); return *this;}


    /**
     * <p>The total number of endpoints that the campaign attempted to deliver messages
     * to.</p>
     */
    inline int GetTotalEndpointCount() const{ return m_totalEndpointCount; }

    /**
     * <p>The total number of endpoints that the campaign attempted to deliver messages
     * to.</p>
     */
    inline bool TotalEndpointCountHasBeenSet() const { return m_totalEndpointCountHasBeenSet; }

    /**
     * <p>The total number of endpoints that the campaign attempted to deliver messages
     * to.</p>
     */
    inline void SetTotalEndpointCount(int value) { m_totalEndpointCountHasBeenSet = true; m_totalEndpointCount = value; }

    /**
     * <p>The total number of endpoints that the campaign attempted to deliver messages
     * to.</p>
     */
    inline ActivityResponse& WithTotalEndpointCount(int value) { SetTotalEndpointCount(value); return *this;}


    /**
     * <p>The unique identifier for the campaign treatment that the activity applies
     * to. A treatment is a variation of a campaign that's used for A/B testing of a
     * campaign.</p>
     */
    inline const Aws::String& GetTreatmentId() const{ return m_treatmentId; }

    /**
     * <p>The unique identifier for the campaign treatment that the activity applies
     * to. A treatment is a variation of a campaign that's used for A/B testing of a
     * campaign.</p>
     */
    inline bool TreatmentIdHasBeenSet() const { return m_treatmentIdHasBeenSet; }

    /**
     * <p>The unique identifier for the campaign treatment that the activity applies
     * to. A treatment is a variation of a campaign that's used for A/B testing of a
     * campaign.</p>
     */
    inline void SetTreatmentId(const Aws::String& value) { m_treatmentIdHasBeenSet = true; m_treatmentId = value; }

    /**
     * <p>The unique identifier for the campaign treatment that the activity applies
     * to. A treatment is a variation of a campaign that's used for A/B testing of a
     * campaign.</p>
     */
    inline void SetTreatmentId(Aws::String&& value) { m_treatmentIdHasBeenSet = true; m_treatmentId = std::move(value); }

    /**
     * <p>The unique identifier for the campaign treatment that the activity applies
     * to. A treatment is a variation of a campaign that's used for A/B testing of a
     * campaign.</p>
     */
    inline void SetTreatmentId(const char* value) { m_treatmentIdHasBeenSet = true; m_treatmentId.assign(value); }

    /**
     * <p>The unique identifier for the campaign treatment that the activity applies
     * to. A treatment is a variation of a campaign that's used for A/B testing of a
     * campaign.</p>
     */
    inline ActivityResponse& WithTreatmentId(const Aws::String& value) { SetTreatmentId(value); return *this;}

    /**
     * <p>The unique identifier for the campaign treatment that the activity applies
     * to. A treatment is a variation of a campaign that's used for A/B testing of a
     * campaign.</p>
     */
    inline ActivityResponse& WithTreatmentId(Aws::String&& value) { SetTreatmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the campaign treatment that the activity applies
     * to. A treatment is a variation of a campaign that's used for A/B testing of a
     * campaign.</p>
     */
    inline ActivityResponse& WithTreatmentId(const char* value) { SetTreatmentId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet;

    Aws::String m_end;
    bool m_endHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_result;
    bool m_resultHasBeenSet;

    Aws::String m_scheduledStart;
    bool m_scheduledStartHasBeenSet;

    Aws::String m_start;
    bool m_startHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;

    int m_successfulEndpointCount;
    bool m_successfulEndpointCountHasBeenSet;

    int m_timezonesCompletedCount;
    bool m_timezonesCompletedCountHasBeenSet;

    int m_timezonesTotalCount;
    bool m_timezonesTotalCountHasBeenSet;

    int m_totalEndpointCount;
    bool m_totalEndpointCountHasBeenSet;

    Aws::String m_treatmentId;
    bool m_treatmentIdHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

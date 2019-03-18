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
   * Activity definition<p><h3>See Also:</h3>   <a
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
     * The ID of the application to which the campaign applies.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The ID of the application to which the campaign applies.
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * The ID of the application to which the campaign applies.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The ID of the application to which the campaign applies.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The ID of the application to which the campaign applies.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The ID of the application to which the campaign applies.
     */
    inline ActivityResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The ID of the application to which the campaign applies.
     */
    inline ActivityResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The ID of the application to which the campaign applies.
     */
    inline ActivityResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The ID of the campaign to which the activity applies.
     */
    inline const Aws::String& GetCampaignId() const{ return m_campaignId; }

    /**
     * The ID of the campaign to which the activity applies.
     */
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }

    /**
     * The ID of the campaign to which the activity applies.
     */
    inline void SetCampaignId(const Aws::String& value) { m_campaignIdHasBeenSet = true; m_campaignId = value; }

    /**
     * The ID of the campaign to which the activity applies.
     */
    inline void SetCampaignId(Aws::String&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::move(value); }

    /**
     * The ID of the campaign to which the activity applies.
     */
    inline void SetCampaignId(const char* value) { m_campaignIdHasBeenSet = true; m_campaignId.assign(value); }

    /**
     * The ID of the campaign to which the activity applies.
     */
    inline ActivityResponse& WithCampaignId(const Aws::String& value) { SetCampaignId(value); return *this;}

    /**
     * The ID of the campaign to which the activity applies.
     */
    inline ActivityResponse& WithCampaignId(Aws::String&& value) { SetCampaignId(std::move(value)); return *this;}

    /**
     * The ID of the campaign to which the activity applies.
     */
    inline ActivityResponse& WithCampaignId(const char* value) { SetCampaignId(value); return *this;}


    /**
     * The actual time the activity was marked CANCELLED or COMPLETED. Provided in ISO
     * 8601 format.
     */
    inline const Aws::String& GetEnd() const{ return m_end; }

    /**
     * The actual time the activity was marked CANCELLED or COMPLETED. Provided in ISO
     * 8601 format.
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * The actual time the activity was marked CANCELLED or COMPLETED. Provided in ISO
     * 8601 format.
     */
    inline void SetEnd(const Aws::String& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * The actual time the activity was marked CANCELLED or COMPLETED. Provided in ISO
     * 8601 format.
     */
    inline void SetEnd(Aws::String&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * The actual time the activity was marked CANCELLED or COMPLETED. Provided in ISO
     * 8601 format.
     */
    inline void SetEnd(const char* value) { m_endHasBeenSet = true; m_end.assign(value); }

    /**
     * The actual time the activity was marked CANCELLED or COMPLETED. Provided in ISO
     * 8601 format.
     */
    inline ActivityResponse& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}

    /**
     * The actual time the activity was marked CANCELLED or COMPLETED. Provided in ISO
     * 8601 format.
     */
    inline ActivityResponse& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}

    /**
     * The actual time the activity was marked CANCELLED or COMPLETED. Provided in ISO
     * 8601 format.
     */
    inline ActivityResponse& WithEnd(const char* value) { SetEnd(value); return *this;}


    /**
     * The unique activity ID.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique activity ID.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The unique activity ID.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The unique activity ID.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The unique activity ID.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The unique activity ID.
     */
    inline ActivityResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique activity ID.
     */
    inline ActivityResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique activity ID.
     */
    inline ActivityResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Indicates whether the activity succeeded.

Valid values: SUCCESS, FAIL
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * Indicates whether the activity succeeded.

Valid values: SUCCESS, FAIL
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * Indicates whether the activity succeeded.

Valid values: SUCCESS, FAIL
     */
    inline void SetResult(const Aws::String& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * Indicates whether the activity succeeded.

Valid values: SUCCESS, FAIL
     */
    inline void SetResult(Aws::String&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * Indicates whether the activity succeeded.

Valid values: SUCCESS, FAIL
     */
    inline void SetResult(const char* value) { m_resultHasBeenSet = true; m_result.assign(value); }

    /**
     * Indicates whether the activity succeeded.

Valid values: SUCCESS, FAIL
     */
    inline ActivityResponse& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * Indicates whether the activity succeeded.

Valid values: SUCCESS, FAIL
     */
    inline ActivityResponse& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}

    /**
     * Indicates whether the activity succeeded.

Valid values: SUCCESS, FAIL
     */
    inline ActivityResponse& WithResult(const char* value) { SetResult(value); return *this;}


    /**
     * The scheduled start time for the activity in ISO 8601 format.
     */
    inline const Aws::String& GetScheduledStart() const{ return m_scheduledStart; }

    /**
     * The scheduled start time for the activity in ISO 8601 format.
     */
    inline bool ScheduledStartHasBeenSet() const { return m_scheduledStartHasBeenSet; }

    /**
     * The scheduled start time for the activity in ISO 8601 format.
     */
    inline void SetScheduledStart(const Aws::String& value) { m_scheduledStartHasBeenSet = true; m_scheduledStart = value; }

    /**
     * The scheduled start time for the activity in ISO 8601 format.
     */
    inline void SetScheduledStart(Aws::String&& value) { m_scheduledStartHasBeenSet = true; m_scheduledStart = std::move(value); }

    /**
     * The scheduled start time for the activity in ISO 8601 format.
     */
    inline void SetScheduledStart(const char* value) { m_scheduledStartHasBeenSet = true; m_scheduledStart.assign(value); }

    /**
     * The scheduled start time for the activity in ISO 8601 format.
     */
    inline ActivityResponse& WithScheduledStart(const Aws::String& value) { SetScheduledStart(value); return *this;}

    /**
     * The scheduled start time for the activity in ISO 8601 format.
     */
    inline ActivityResponse& WithScheduledStart(Aws::String&& value) { SetScheduledStart(std::move(value)); return *this;}

    /**
     * The scheduled start time for the activity in ISO 8601 format.
     */
    inline ActivityResponse& WithScheduledStart(const char* value) { SetScheduledStart(value); return *this;}


    /**
     * The actual start time of the activity in ISO 8601 format.
     */
    inline const Aws::String& GetStart() const{ return m_start; }

    /**
     * The actual start time of the activity in ISO 8601 format.
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * The actual start time of the activity in ISO 8601 format.
     */
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * The actual start time of the activity in ISO 8601 format.
     */
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * The actual start time of the activity in ISO 8601 format.
     */
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }

    /**
     * The actual start time of the activity in ISO 8601 format.
     */
    inline ActivityResponse& WithStart(const Aws::String& value) { SetStart(value); return *this;}

    /**
     * The actual start time of the activity in ISO 8601 format.
     */
    inline ActivityResponse& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}

    /**
     * The actual start time of the activity in ISO 8601 format.
     */
    inline ActivityResponse& WithStart(const char* value) { SetStart(value); return *this;}


    /**
     * The state of the activity.

Valid values: PENDING, INITIALIZING, RUNNING,
     * PAUSED, CANCELLED, COMPLETED
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * The state of the activity.

Valid values: PENDING, INITIALIZING, RUNNING,
     * PAUSED, CANCELLED, COMPLETED
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * The state of the activity.

Valid values: PENDING, INITIALIZING, RUNNING,
     * PAUSED, CANCELLED, COMPLETED
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * The state of the activity.

Valid values: PENDING, INITIALIZING, RUNNING,
     * PAUSED, CANCELLED, COMPLETED
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * The state of the activity.

Valid values: PENDING, INITIALIZING, RUNNING,
     * PAUSED, CANCELLED, COMPLETED
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * The state of the activity.

Valid values: PENDING, INITIALIZING, RUNNING,
     * PAUSED, CANCELLED, COMPLETED
     */
    inline ActivityResponse& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * The state of the activity.

Valid values: PENDING, INITIALIZING, RUNNING,
     * PAUSED, CANCELLED, COMPLETED
     */
    inline ActivityResponse& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * The state of the activity.

Valid values: PENDING, INITIALIZING, RUNNING,
     * PAUSED, CANCELLED, COMPLETED
     */
    inline ActivityResponse& WithState(const char* value) { SetState(value); return *this;}


    /**
     * The total number of endpoints to which the campaign successfully delivered
     * messages.
     */
    inline int GetSuccessfulEndpointCount() const{ return m_successfulEndpointCount; }

    /**
     * The total number of endpoints to which the campaign successfully delivered
     * messages.
     */
    inline bool SuccessfulEndpointCountHasBeenSet() const { return m_successfulEndpointCountHasBeenSet; }

    /**
     * The total number of endpoints to which the campaign successfully delivered
     * messages.
     */
    inline void SetSuccessfulEndpointCount(int value) { m_successfulEndpointCountHasBeenSet = true; m_successfulEndpointCount = value; }

    /**
     * The total number of endpoints to which the campaign successfully delivered
     * messages.
     */
    inline ActivityResponse& WithSuccessfulEndpointCount(int value) { SetSuccessfulEndpointCount(value); return *this;}


    /**
     * The total number of timezones completed.
     */
    inline int GetTimezonesCompletedCount() const{ return m_timezonesCompletedCount; }

    /**
     * The total number of timezones completed.
     */
    inline bool TimezonesCompletedCountHasBeenSet() const { return m_timezonesCompletedCountHasBeenSet; }

    /**
     * The total number of timezones completed.
     */
    inline void SetTimezonesCompletedCount(int value) { m_timezonesCompletedCountHasBeenSet = true; m_timezonesCompletedCount = value; }

    /**
     * The total number of timezones completed.
     */
    inline ActivityResponse& WithTimezonesCompletedCount(int value) { SetTimezonesCompletedCount(value); return *this;}


    /**
     * The total number of unique timezones present in the segment.
     */
    inline int GetTimezonesTotalCount() const{ return m_timezonesTotalCount; }

    /**
     * The total number of unique timezones present in the segment.
     */
    inline bool TimezonesTotalCountHasBeenSet() const { return m_timezonesTotalCountHasBeenSet; }

    /**
     * The total number of unique timezones present in the segment.
     */
    inline void SetTimezonesTotalCount(int value) { m_timezonesTotalCountHasBeenSet = true; m_timezonesTotalCount = value; }

    /**
     * The total number of unique timezones present in the segment.
     */
    inline ActivityResponse& WithTimezonesTotalCount(int value) { SetTimezonesTotalCount(value); return *this;}


    /**
     * The total number of endpoints to which the campaign attempts to deliver
     * messages.
     */
    inline int GetTotalEndpointCount() const{ return m_totalEndpointCount; }

    /**
     * The total number of endpoints to which the campaign attempts to deliver
     * messages.
     */
    inline bool TotalEndpointCountHasBeenSet() const { return m_totalEndpointCountHasBeenSet; }

    /**
     * The total number of endpoints to which the campaign attempts to deliver
     * messages.
     */
    inline void SetTotalEndpointCount(int value) { m_totalEndpointCountHasBeenSet = true; m_totalEndpointCount = value; }

    /**
     * The total number of endpoints to which the campaign attempts to deliver
     * messages.
     */
    inline ActivityResponse& WithTotalEndpointCount(int value) { SetTotalEndpointCount(value); return *this;}


    /**
     * The ID of a variation of the campaign used for A/B testing.
     */
    inline const Aws::String& GetTreatmentId() const{ return m_treatmentId; }

    /**
     * The ID of a variation of the campaign used for A/B testing.
     */
    inline bool TreatmentIdHasBeenSet() const { return m_treatmentIdHasBeenSet; }

    /**
     * The ID of a variation of the campaign used for A/B testing.
     */
    inline void SetTreatmentId(const Aws::String& value) { m_treatmentIdHasBeenSet = true; m_treatmentId = value; }

    /**
     * The ID of a variation of the campaign used for A/B testing.
     */
    inline void SetTreatmentId(Aws::String&& value) { m_treatmentIdHasBeenSet = true; m_treatmentId = std::move(value); }

    /**
     * The ID of a variation of the campaign used for A/B testing.
     */
    inline void SetTreatmentId(const char* value) { m_treatmentIdHasBeenSet = true; m_treatmentId.assign(value); }

    /**
     * The ID of a variation of the campaign used for A/B testing.
     */
    inline ActivityResponse& WithTreatmentId(const Aws::String& value) { SetTreatmentId(value); return *this;}

    /**
     * The ID of a variation of the campaign used for A/B testing.
     */
    inline ActivityResponse& WithTreatmentId(Aws::String&& value) { SetTreatmentId(std::move(value)); return *this;}

    /**
     * The ID of a variation of the campaign used for A/B testing.
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

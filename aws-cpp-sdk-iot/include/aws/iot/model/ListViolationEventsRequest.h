/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/BehaviorCriteriaType.h>
#include <aws/iot/model/VerificationState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class ListViolationEventsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListViolationEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListViolationEvents"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The start time for the alerts to be listed.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time for the alerts to be listed.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time for the alerts to be listed.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time for the alerts to be listed.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time for the alerts to be listed.</p>
     */
    inline ListViolationEventsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time for the alerts to be listed.</p>
     */
    inline ListViolationEventsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time for the alerts to be listed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time for the alerts to be listed.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time for the alerts to be listed.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time for the alerts to be listed.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time for the alerts to be listed.</p>
     */
    inline ListViolationEventsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time for the alerts to be listed.</p>
     */
    inline ListViolationEventsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>A filter to limit results to those alerts caused by the specified thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>A filter to limit results to those alerts caused by the specified thing.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>A filter to limit results to those alerts caused by the specified thing.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>A filter to limit results to those alerts caused by the specified thing.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>A filter to limit results to those alerts caused by the specified thing.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>A filter to limit results to those alerts caused by the specified thing.</p>
     */
    inline ListViolationEventsRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>A filter to limit results to those alerts caused by the specified thing.</p>
     */
    inline ListViolationEventsRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>A filter to limit results to those alerts caused by the specified thing.</p>
     */
    inline ListViolationEventsRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>A filter to limit results to those alerts generated by the specified security
     * profile.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }

    /**
     * <p>A filter to limit results to those alerts generated by the specified security
     * profile.</p>
     */
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }

    /**
     * <p>A filter to limit results to those alerts generated by the specified security
     * profile.</p>
     */
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }

    /**
     * <p>A filter to limit results to those alerts generated by the specified security
     * profile.</p>
     */
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }

    /**
     * <p>A filter to limit results to those alerts generated by the specified security
     * profile.</p>
     */
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }

    /**
     * <p>A filter to limit results to those alerts generated by the specified security
     * profile.</p>
     */
    inline ListViolationEventsRequest& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}

    /**
     * <p>A filter to limit results to those alerts generated by the specified security
     * profile.</p>
     */
    inline ListViolationEventsRequest& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}

    /**
     * <p>A filter to limit results to those alerts generated by the specified security
     * profile.</p>
     */
    inline ListViolationEventsRequest& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}


    /**
     * <p> The criteria for a behavior. </p>
     */
    inline const BehaviorCriteriaType& GetBehaviorCriteriaType() const{ return m_behaviorCriteriaType; }

    /**
     * <p> The criteria for a behavior. </p>
     */
    inline bool BehaviorCriteriaTypeHasBeenSet() const { return m_behaviorCriteriaTypeHasBeenSet; }

    /**
     * <p> The criteria for a behavior. </p>
     */
    inline void SetBehaviorCriteriaType(const BehaviorCriteriaType& value) { m_behaviorCriteriaTypeHasBeenSet = true; m_behaviorCriteriaType = value; }

    /**
     * <p> The criteria for a behavior. </p>
     */
    inline void SetBehaviorCriteriaType(BehaviorCriteriaType&& value) { m_behaviorCriteriaTypeHasBeenSet = true; m_behaviorCriteriaType = std::move(value); }

    /**
     * <p> The criteria for a behavior. </p>
     */
    inline ListViolationEventsRequest& WithBehaviorCriteriaType(const BehaviorCriteriaType& value) { SetBehaviorCriteriaType(value); return *this;}

    /**
     * <p> The criteria for a behavior. </p>
     */
    inline ListViolationEventsRequest& WithBehaviorCriteriaType(BehaviorCriteriaType&& value) { SetBehaviorCriteriaType(std::move(value)); return *this;}


    /**
     * <p> A list of all suppressed alerts. </p>
     */
    inline bool GetListSuppressedAlerts() const{ return m_listSuppressedAlerts; }

    /**
     * <p> A list of all suppressed alerts. </p>
     */
    inline bool ListSuppressedAlertsHasBeenSet() const { return m_listSuppressedAlertsHasBeenSet; }

    /**
     * <p> A list of all suppressed alerts. </p>
     */
    inline void SetListSuppressedAlerts(bool value) { m_listSuppressedAlertsHasBeenSet = true; m_listSuppressedAlerts = value; }

    /**
     * <p> A list of all suppressed alerts. </p>
     */
    inline ListViolationEventsRequest& WithListSuppressedAlerts(bool value) { SetListSuppressedAlerts(value); return *this;}


    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline const VerificationState& GetVerificationState() const{ return m_verificationState; }

    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }

    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline void SetVerificationState(const VerificationState& value) { m_verificationStateHasBeenSet = true; m_verificationState = value; }

    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline void SetVerificationState(VerificationState&& value) { m_verificationStateHasBeenSet = true; m_verificationState = std::move(value); }

    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline ListViolationEventsRequest& WithVerificationState(const VerificationState& value) { SetVerificationState(value); return *this;}

    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline ListViolationEventsRequest& WithVerificationState(VerificationState&& value) { SetVerificationState(std::move(value)); return *this;}


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListViolationEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListViolationEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListViolationEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline ListViolationEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet = false;

    BehaviorCriteriaType m_behaviorCriteriaType;
    bool m_behaviorCriteriaTypeHasBeenSet = false;

    bool m_listSuppressedAlerts;
    bool m_listSuppressedAlertsHasBeenSet = false;

    VerificationState m_verificationState;
    bool m_verificationStateHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudtrail/model/EventCategory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/LookupAttribute.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Contains a request for LookupEvents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/LookupEventsRequest">AWS
   * API Reference</a></p>
   */
  class LookupEventsRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API LookupEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "LookupEvents"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Contains a list of lookup attributes. Currently the list can contain only one
     * item.</p>
     */
    inline const Aws::Vector<LookupAttribute>& GetLookupAttributes() const { return m_lookupAttributes; }
    inline bool LookupAttributesHasBeenSet() const { return m_lookupAttributesHasBeenSet; }
    template<typename LookupAttributesT = Aws::Vector<LookupAttribute>>
    void SetLookupAttributes(LookupAttributesT&& value) { m_lookupAttributesHasBeenSet = true; m_lookupAttributes = std::forward<LookupAttributesT>(value); }
    template<typename LookupAttributesT = Aws::Vector<LookupAttribute>>
    LookupEventsRequest& WithLookupAttributes(LookupAttributesT&& value) { SetLookupAttributes(std::forward<LookupAttributesT>(value)); return *this;}
    template<typename LookupAttributesT = LookupAttribute>
    LookupEventsRequest& AddLookupAttributes(LookupAttributesT&& value) { m_lookupAttributesHasBeenSet = true; m_lookupAttributes.emplace_back(std::forward<LookupAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies that only events that occur after or at the specified time are
     * returned. If the specified start time is after the specified end time, an error
     * is returned.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    LookupEventsRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that only events that occur before or at the specified time are
     * returned. If the specified end time is before the specified start time, an error
     * is returned.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    LookupEventsRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the event category. If you do not specify an event category, events
     * of the category are not returned in the response. For example, if you do not
     * specify <code>insight</code> as the value of <code>EventCategory</code>, no
     * Insights events are returned.</p>
     */
    inline EventCategory GetEventCategory() const { return m_eventCategory; }
    inline bool EventCategoryHasBeenSet() const { return m_eventCategoryHasBeenSet; }
    inline void SetEventCategory(EventCategory value) { m_eventCategoryHasBeenSet = true; m_eventCategory = value; }
    inline LookupEventsRequest& WithEventCategory(EventCategory value) { SetEventCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of events to return. Possible values are 1 through 50. The default
     * is 50.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline LookupEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * This token must be passed in with the same parameters that were specified in the
     * original call. For example, if the original call specified an AttributeKey of
     * 'Username' with a value of 'root', the call with NextToken should include those
     * same parameters.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    LookupEventsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LookupAttribute> m_lookupAttributes;
    bool m_lookupAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    EventCategory m_eventCategory{EventCategory::NOT_SET};
    bool m_eventCategoryHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

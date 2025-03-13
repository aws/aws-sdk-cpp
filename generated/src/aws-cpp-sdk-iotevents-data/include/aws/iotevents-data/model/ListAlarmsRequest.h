/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/IoTEventsDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTEventsData
{
namespace Model
{

  /**
   */
  class ListAlarmsRequest : public IoTEventsDataRequest
  {
  public:
    AWS_IOTEVENTSDATA_API ListAlarmsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAlarms"; }

    AWS_IOTEVENTSDATA_API Aws::String SerializePayload() const override;

    AWS_IOTEVENTSDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelName() const { return m_alarmModelName; }
    inline bool AlarmModelNameHasBeenSet() const { return m_alarmModelNameHasBeenSet; }
    template<typename AlarmModelNameT = Aws::String>
    void SetAlarmModelName(AlarmModelNameT&& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = std::forward<AlarmModelNameT>(value); }
    template<typename AlarmModelNameT = Aws::String>
    ListAlarmsRequest& WithAlarmModelName(AlarmModelNameT&& value) { SetAlarmModelName(std::forward<AlarmModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAlarmsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAlarmsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws

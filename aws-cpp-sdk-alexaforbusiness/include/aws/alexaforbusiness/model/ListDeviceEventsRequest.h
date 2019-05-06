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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/DeviceEventType.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API ListDeviceEventsRequest : public AlexaForBusinessRequest
  {
  public:
    ListDeviceEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeviceEvents"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of a device.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>The ARN of a device.</p>
     */
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }

    /**
     * <p>The ARN of a device.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }

    /**
     * <p>The ARN of a device.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::move(value); }

    /**
     * <p>The ARN of a device.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArnHasBeenSet = true; m_deviceArn.assign(value); }

    /**
     * <p>The ARN of a device.</p>
     */
    inline ListDeviceEventsRequest& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The ARN of a device.</p>
     */
    inline ListDeviceEventsRequest& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a device.</p>
     */
    inline ListDeviceEventsRequest& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    /**
     * <p>The event type to filter device events. If EventType isn't specified, this
     * returns a list of all device events in reverse chronological order. If EventType
     * is specified, this returns a list of device events for that EventType in reverse
     * chronological order. </p>
     */
    inline const DeviceEventType& GetEventType() const{ return m_eventType; }

    /**
     * <p>The event type to filter device events. If EventType isn't specified, this
     * returns a list of all device events in reverse chronological order. If EventType
     * is specified, this returns a list of device events for that EventType in reverse
     * chronological order. </p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The event type to filter device events. If EventType isn't specified, this
     * returns a list of all device events in reverse chronological order. If EventType
     * is specified, this returns a list of device events for that EventType in reverse
     * chronological order. </p>
     */
    inline void SetEventType(const DeviceEventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The event type to filter device events. If EventType isn't specified, this
     * returns a list of all device events in reverse chronological order. If EventType
     * is specified, this returns a list of device events for that EventType in reverse
     * chronological order. </p>
     */
    inline void SetEventType(DeviceEventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The event type to filter device events. If EventType isn't specified, this
     * returns a list of all device events in reverse chronological order. If EventType
     * is specified, this returns a list of device events for that EventType in reverse
     * chronological order. </p>
     */
    inline ListDeviceEventsRequest& WithEventType(const DeviceEventType& value) { SetEventType(value); return *this;}

    /**
     * <p>The event type to filter device events. If EventType isn't specified, this
     * returns a list of all device events in reverse chronological order. If EventType
     * is specified, this returns a list of device events for that EventType in reverse
     * chronological order. </p>
     */
    inline ListDeviceEventsRequest& WithEventType(DeviceEventType&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response only includes results beyond the token, up to the value specified by
     * MaxResults. When the end of results is reached, the response has a value of
     * null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response only includes results beyond the token, up to the value specified by
     * MaxResults. When the end of results is reached, the response has a value of
     * null.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response only includes results beyond the token, up to the value specified by
     * MaxResults. When the end of results is reached, the response has a value of
     * null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response only includes results beyond the token, up to the value specified by
     * MaxResults. When the end of results is reached, the response has a value of
     * null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response only includes results beyond the token, up to the value specified by
     * MaxResults. When the end of results is reached, the response has a value of
     * null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response only includes results beyond the token, up to the value specified by
     * MaxResults. When the end of results is reached, the response has a value of
     * null.</p>
     */
    inline ListDeviceEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response only includes results beyond the token, up to the value specified by
     * MaxResults. When the end of results is reached, the response has a value of
     * null.</p>
     */
    inline ListDeviceEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response only includes results beyond the token, up to the value specified by
     * MaxResults. When the end of results is reached, the response has a value of
     * null.</p>
     */
    inline ListDeviceEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to include in the response. The default value
     * is 50. If more results exist than the specified MaxResults value, a token is
     * included in the response so that the remaining results can be retrieved. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to include in the response. The default value
     * is 50. If more results exist than the specified MaxResults value, a token is
     * included in the response so that the remaining results can be retrieved. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to include in the response. The default value
     * is 50. If more results exist than the specified MaxResults value, a token is
     * included in the response so that the remaining results can be retrieved. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to include in the response. The default value
     * is 50. If more results exist than the specified MaxResults value, a token is
     * included in the response so that the remaining results can be retrieved. </p>
     */
    inline ListDeviceEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet;

    DeviceEventType m_eventType;
    bool m_eventTypeHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws

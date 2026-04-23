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
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/sms-voice/model/CloudWatchLogsDestination.h>
#include <aws/sms-voice/model/KinesisFirehoseDestination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms-voice/model/SnsDestination.h>
#include <aws/sms-voice/model/EventType.h>
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
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * An object that defines a single event destination.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/EventDestinationDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTSMSVOICE_API EventDestinationDefinition
  {
  public:
    EventDestinationDefinition();
    EventDestinationDefinition(Aws::Utils::Json::JsonView jsonValue);
    EventDestinationDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const CloudWatchLogsDestination& GetCloudWatchLogsDestination() const{ return m_cloudWatchLogsDestination; }

    
    inline bool CloudWatchLogsDestinationHasBeenSet() const { return m_cloudWatchLogsDestinationHasBeenSet; }

    
    inline void SetCloudWatchLogsDestination(const CloudWatchLogsDestination& value) { m_cloudWatchLogsDestinationHasBeenSet = true; m_cloudWatchLogsDestination = value; }

    
    inline void SetCloudWatchLogsDestination(CloudWatchLogsDestination&& value) { m_cloudWatchLogsDestinationHasBeenSet = true; m_cloudWatchLogsDestination = std::move(value); }

    
    inline EventDestinationDefinition& WithCloudWatchLogsDestination(const CloudWatchLogsDestination& value) { SetCloudWatchLogsDestination(value); return *this;}

    
    inline EventDestinationDefinition& WithCloudWatchLogsDestination(CloudWatchLogsDestination&& value) { SetCloudWatchLogsDestination(std::move(value)); return *this;}


    /**
     * Indicates whether or not the event destination is enabled. If the event
     * destination is enabled, then Amazon Pinpoint sends response data to the
     * specified event destination.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * Indicates whether or not the event destination is enabled. If the event
     * destination is enabled, then Amazon Pinpoint sends response data to the
     * specified event destination.
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * Indicates whether or not the event destination is enabled. If the event
     * destination is enabled, then Amazon Pinpoint sends response data to the
     * specified event destination.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * Indicates whether or not the event destination is enabled. If the event
     * destination is enabled, then Amazon Pinpoint sends response data to the
     * specified event destination.
     */
    inline EventDestinationDefinition& WithEnabled(bool value) { SetEnabled(value); return *this;}


    
    inline const KinesisFirehoseDestination& GetKinesisFirehoseDestination() const{ return m_kinesisFirehoseDestination; }

    
    inline bool KinesisFirehoseDestinationHasBeenSet() const { return m_kinesisFirehoseDestinationHasBeenSet; }

    
    inline void SetKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = value; }

    
    inline void SetKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = std::move(value); }

    
    inline EventDestinationDefinition& WithKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { SetKinesisFirehoseDestination(value); return *this;}

    
    inline EventDestinationDefinition& WithKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { SetKinesisFirehoseDestination(std::move(value)); return *this;}


    
    inline const Aws::Vector<EventType>& GetMatchingEventTypes() const{ return m_matchingEventTypes; }

    
    inline bool MatchingEventTypesHasBeenSet() const { return m_matchingEventTypesHasBeenSet; }

    
    inline void SetMatchingEventTypes(const Aws::Vector<EventType>& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = value; }

    
    inline void SetMatchingEventTypes(Aws::Vector<EventType>&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = std::move(value); }

    
    inline EventDestinationDefinition& WithMatchingEventTypes(const Aws::Vector<EventType>& value) { SetMatchingEventTypes(value); return *this;}

    
    inline EventDestinationDefinition& WithMatchingEventTypes(Aws::Vector<EventType>&& value) { SetMatchingEventTypes(std::move(value)); return *this;}

    
    inline EventDestinationDefinition& AddMatchingEventTypes(const EventType& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(value); return *this; }

    
    inline EventDestinationDefinition& AddMatchingEventTypes(EventType&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(std::move(value)); return *this; }


    
    inline const SnsDestination& GetSnsDestination() const{ return m_snsDestination; }

    
    inline bool SnsDestinationHasBeenSet() const { return m_snsDestinationHasBeenSet; }

    
    inline void SetSnsDestination(const SnsDestination& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = value; }

    
    inline void SetSnsDestination(SnsDestination&& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = std::move(value); }

    
    inline EventDestinationDefinition& WithSnsDestination(const SnsDestination& value) { SetSnsDestination(value); return *this;}

    
    inline EventDestinationDefinition& WithSnsDestination(SnsDestination&& value) { SetSnsDestination(std::move(value)); return *this;}

  private:

    CloudWatchLogsDestination m_cloudWatchLogsDestination;
    bool m_cloudWatchLogsDestinationHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    KinesisFirehoseDestination m_kinesisFirehoseDestination;
    bool m_kinesisFirehoseDestinationHasBeenSet;

    Aws::Vector<EventType> m_matchingEventTypes;
    bool m_matchingEventTypesHasBeenSet;

    SnsDestination m_snsDestination;
    bool m_snsDestinationHasBeenSet;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws

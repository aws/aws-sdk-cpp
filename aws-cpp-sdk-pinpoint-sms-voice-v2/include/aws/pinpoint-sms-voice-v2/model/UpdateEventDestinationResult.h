/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/EventDestination.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class UpdateEventDestinationResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API UpdateEventDestinationResult();
    AWS_PINPOINTSMSVOICEV2_API UpdateEventDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API UpdateEventDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the ConfigurationSet that was updated.</p>
     */
    inline const Aws::String& GetConfigurationSetArn() const{ return m_configurationSetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the ConfigurationSet that was updated.</p>
     */
    inline void SetConfigurationSetArn(const Aws::String& value) { m_configurationSetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the ConfigurationSet that was updated.</p>
     */
    inline void SetConfigurationSetArn(Aws::String&& value) { m_configurationSetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the ConfigurationSet that was updated.</p>
     */
    inline void SetConfigurationSetArn(const char* value) { m_configurationSetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the ConfigurationSet that was updated.</p>
     */
    inline UpdateEventDestinationResult& WithConfigurationSetArn(const Aws::String& value) { SetConfigurationSetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the ConfigurationSet that was updated.</p>
     */
    inline UpdateEventDestinationResult& WithConfigurationSetArn(Aws::String&& value) { SetConfigurationSetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the ConfigurationSet that was updated.</p>
     */
    inline UpdateEventDestinationResult& WithConfigurationSetArn(const char* value) { SetConfigurationSetArn(value); return *this;}


    /**
     * <p>The name of the configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set.</p>
     */
    inline UpdateEventDestinationResult& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set.</p>
     */
    inline UpdateEventDestinationResult& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set.</p>
     */
    inline UpdateEventDestinationResult& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>An EventDestination object containing the details of where events will be
     * logged. </p>
     */
    inline const EventDestination& GetEventDestination() const{ return m_eventDestination; }

    /**
     * <p>An EventDestination object containing the details of where events will be
     * logged. </p>
     */
    inline void SetEventDestination(const EventDestination& value) { m_eventDestination = value; }

    /**
     * <p>An EventDestination object containing the details of where events will be
     * logged. </p>
     */
    inline void SetEventDestination(EventDestination&& value) { m_eventDestination = std::move(value); }

    /**
     * <p>An EventDestination object containing the details of where events will be
     * logged. </p>
     */
    inline UpdateEventDestinationResult& WithEventDestination(const EventDestination& value) { SetEventDestination(value); return *this;}

    /**
     * <p>An EventDestination object containing the details of where events will be
     * logged. </p>
     */
    inline UpdateEventDestinationResult& WithEventDestination(EventDestination&& value) { SetEventDestination(std::move(value)); return *this;}

  private:

    Aws::String m_configurationSetArn;

    Aws::String m_configurationSetName;

    EventDestination m_eventDestination;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws

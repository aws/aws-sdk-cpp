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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/TrackingOptions.h>
#include <aws/pinpoint-email/model/DeliveryOptions.h>
#include <aws/pinpoint-email/model/ReputationOptions.h>
#include <aws/pinpoint-email/model/SendingOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/Tag.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>Information about a configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetConfigurationSetResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API GetConfigurationSetResult
  {
  public:
    GetConfigurationSetResult();
    GetConfigurationSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetConfigurationSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetConfigurationSetResult& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline const TrackingOptions& GetTrackingOptions() const{ return m_trackingOptions; }

    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline void SetTrackingOptions(const TrackingOptions& value) { m_trackingOptions = value; }

    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline void SetTrackingOptions(TrackingOptions&& value) { m_trackingOptions = std::move(value); }

    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithTrackingOptions(const TrackingOptions& value) { SetTrackingOptions(value); return *this;}

    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithTrackingOptions(TrackingOptions&& value) { SetTrackingOptions(std::move(value)); return *this;}


    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline const DeliveryOptions& GetDeliveryOptions() const{ return m_deliveryOptions; }

    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline void SetDeliveryOptions(const DeliveryOptions& value) { m_deliveryOptions = value; }

    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline void SetDeliveryOptions(DeliveryOptions&& value) { m_deliveryOptions = std::move(value); }

    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithDeliveryOptions(const DeliveryOptions& value) { SetDeliveryOptions(value); return *this;}

    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithDeliveryOptions(DeliveryOptions&& value) { SetDeliveryOptions(std::move(value)); return *this;}


    /**
     * <p>An object that defines whether or not Amazon Pinpoint collects reputation
     * metrics for the emails that you send that use the configuration set.</p>
     */
    inline const ReputationOptions& GetReputationOptions() const{ return m_reputationOptions; }

    /**
     * <p>An object that defines whether or not Amazon Pinpoint collects reputation
     * metrics for the emails that you send that use the configuration set.</p>
     */
    inline void SetReputationOptions(const ReputationOptions& value) { m_reputationOptions = value; }

    /**
     * <p>An object that defines whether or not Amazon Pinpoint collects reputation
     * metrics for the emails that you send that use the configuration set.</p>
     */
    inline void SetReputationOptions(ReputationOptions&& value) { m_reputationOptions = std::move(value); }

    /**
     * <p>An object that defines whether or not Amazon Pinpoint collects reputation
     * metrics for the emails that you send that use the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithReputationOptions(const ReputationOptions& value) { SetReputationOptions(value); return *this;}

    /**
     * <p>An object that defines whether or not Amazon Pinpoint collects reputation
     * metrics for the emails that you send that use the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithReputationOptions(ReputationOptions&& value) { SetReputationOptions(std::move(value)); return *this;}


    /**
     * <p>An object that defines whether or not Amazon Pinpoint can send email that you
     * send using the configuration set.</p>
     */
    inline const SendingOptions& GetSendingOptions() const{ return m_sendingOptions; }

    /**
     * <p>An object that defines whether or not Amazon Pinpoint can send email that you
     * send using the configuration set.</p>
     */
    inline void SetSendingOptions(const SendingOptions& value) { m_sendingOptions = value; }

    /**
     * <p>An object that defines whether or not Amazon Pinpoint can send email that you
     * send using the configuration set.</p>
     */
    inline void SetSendingOptions(SendingOptions&& value) { m_sendingOptions = std::move(value); }

    /**
     * <p>An object that defines whether or not Amazon Pinpoint can send email that you
     * send using the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithSendingOptions(const SendingOptions& value) { SetSendingOptions(value); return *this;}

    /**
     * <p>An object that defines whether or not Amazon Pinpoint can send email that you
     * send using the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithSendingOptions(SendingOptions&& value) { SetSendingOptions(std::move(value)); return *this;}


    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline GetConfigurationSetResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline GetConfigurationSetResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_configurationSetName;

    TrackingOptions m_trackingOptions;

    DeliveryOptions m_deliveryOptions;

    ReputationOptions m_reputationOptions;

    SendingOptions m_sendingOptions;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws

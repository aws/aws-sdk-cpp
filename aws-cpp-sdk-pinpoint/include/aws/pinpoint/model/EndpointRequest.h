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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/ChannelType.h>
#include <aws/pinpoint/model/EndpointDemographic.h>
#include <aws/pinpoint/model/EndpointLocation.h>
#include <aws/pinpoint/model/EndpointUser.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies the channel type and other settings for an endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EndpointRequest
  {
  public:
    EndpointRequest();
    EndpointRequest(Aws::Utils::Json::JsonView jsonValue);
    EndpointRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The destination address for messages or push notifications that you send to
     * the endpoint. The address varies by channel. For a push-notification channel,
     * use the token provided by the push notification service, such as an Apple Push
     * Notification service (APNs) device token or a Firebase Cloud Messaging (FCM)
     * registration token. For the SMS channel, use a phone number in E.164 format,
     * such as +12065550100. For the email channel, use an email address.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The destination address for messages or push notifications that you send to
     * the endpoint. The address varies by channel. For a push-notification channel,
     * use the token provided by the push notification service, such as an Apple Push
     * Notification service (APNs) device token or a Firebase Cloud Messaging (FCM)
     * registration token. For the SMS channel, use a phone number in E.164 format,
     * such as +12065550100. For the email channel, use an email address.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The destination address for messages or push notifications that you send to
     * the endpoint. The address varies by channel. For a push-notification channel,
     * use the token provided by the push notification service, such as an Apple Push
     * Notification service (APNs) device token or a Firebase Cloud Messaging (FCM)
     * registration token. For the SMS channel, use a phone number in E.164 format,
     * such as +12065550100. For the email channel, use an email address.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The destination address for messages or push notifications that you send to
     * the endpoint. The address varies by channel. For a push-notification channel,
     * use the token provided by the push notification service, such as an Apple Push
     * Notification service (APNs) device token or a Firebase Cloud Messaging (FCM)
     * registration token. For the SMS channel, use a phone number in E.164 format,
     * such as +12065550100. For the email channel, use an email address.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The destination address for messages or push notifications that you send to
     * the endpoint. The address varies by channel. For a push-notification channel,
     * use the token provided by the push notification service, such as an Apple Push
     * Notification service (APNs) device token or a Firebase Cloud Messaging (FCM)
     * registration token. For the SMS channel, use a phone number in E.164 format,
     * such as +12065550100. For the email channel, use an email address.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The destination address for messages or push notifications that you send to
     * the endpoint. The address varies by channel. For a push-notification channel,
     * use the token provided by the push notification service, such as an Apple Push
     * Notification service (APNs) device token or a Firebase Cloud Messaging (FCM)
     * registration token. For the SMS channel, use a phone number in E.164 format,
     * such as +12065550100. For the email channel, use an email address.</p>
     */
    inline EndpointRequest& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The destination address for messages or push notifications that you send to
     * the endpoint. The address varies by channel. For a push-notification channel,
     * use the token provided by the push notification service, such as an Apple Push
     * Notification service (APNs) device token or a Firebase Cloud Messaging (FCM)
     * registration token. For the SMS channel, use a phone number in E.164 format,
     * such as +12065550100. For the email channel, use an email address.</p>
     */
    inline EndpointRequest& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The destination address for messages or push notifications that you send to
     * the endpoint. The address varies by channel. For a push-notification channel,
     * use the token provided by the push notification service, such as an Apple Push
     * Notification service (APNs) device token or a Firebase Cloud Messaging (FCM)
     * registration token. For the SMS channel, use a phone number in E.164 format,
     * such as +12065550100. For the email channel, use an email address.</p>
     */
    inline EndpointRequest& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["science", "music", "travel"]. You can use these attributes
     * as filter criteria when you create segments.</p> <p>When you define the name of
     * a custom attribute, avoid using the following characters: number sign (#), colon
     * (:), question mark (?), backslash (\), and slash (/). The Amazon Pinpoint
     * console can't display attribute names that contain these characters. This
     * limitation doesn't apply to attribute values.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["science", "music", "travel"]. You can use these attributes
     * as filter criteria when you create segments.</p> <p>When you define the name of
     * a custom attribute, avoid using the following characters: number sign (#), colon
     * (:), question mark (?), backslash (\), and slash (/). The Amazon Pinpoint
     * console can't display attribute names that contain these characters. This
     * limitation doesn't apply to attribute values.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["science", "music", "travel"]. You can use these attributes
     * as filter criteria when you create segments.</p> <p>When you define the name of
     * a custom attribute, avoid using the following characters: number sign (#), colon
     * (:), question mark (?), backslash (\), and slash (/). The Amazon Pinpoint
     * console can't display attribute names that contain these characters. This
     * limitation doesn't apply to attribute values.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["science", "music", "travel"]. You can use these attributes
     * as filter criteria when you create segments.</p> <p>When you define the name of
     * a custom attribute, avoid using the following characters: number sign (#), colon
     * (:), question mark (?), backslash (\), and slash (/). The Amazon Pinpoint
     * console can't display attribute names that contain these characters. This
     * limitation doesn't apply to attribute values.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["science", "music", "travel"]. You can use these attributes
     * as filter criteria when you create segments.</p> <p>When you define the name of
     * a custom attribute, avoid using the following characters: number sign (#), colon
     * (:), question mark (?), backslash (\), and slash (/). The Amazon Pinpoint
     * console can't display attribute names that contain these characters. This
     * limitation doesn't apply to attribute values.</p>
     */
    inline EndpointRequest& WithAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAttributes(value); return *this;}

    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["science", "music", "travel"]. You can use these attributes
     * as filter criteria when you create segments.</p> <p>When you define the name of
     * a custom attribute, avoid using the following characters: number sign (#), colon
     * (:), question mark (?), backslash (\), and slash (/). The Amazon Pinpoint
     * console can't display attribute names that contain these characters. This
     * limitation doesn't apply to attribute values.</p>
     */
    inline EndpointRequest& WithAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["science", "music", "travel"]. You can use these attributes
     * as filter criteria when you create segments.</p> <p>When you define the name of
     * a custom attribute, avoid using the following characters: number sign (#), colon
     * (:), question mark (?), backslash (\), and slash (/). The Amazon Pinpoint
     * console can't display attribute names that contain these characters. This
     * limitation doesn't apply to attribute values.</p>
     */
    inline EndpointRequest& AddAttributes(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["science", "music", "travel"]. You can use these attributes
     * as filter criteria when you create segments.</p> <p>When you define the name of
     * a custom attribute, avoid using the following characters: number sign (#), colon
     * (:), question mark (?), backslash (\), and slash (/). The Amazon Pinpoint
     * console can't display attribute names that contain these characters. This
     * limitation doesn't apply to attribute values.</p>
     */
    inline EndpointRequest& AddAttributes(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["science", "music", "travel"]. You can use these attributes
     * as filter criteria when you create segments.</p> <p>When you define the name of
     * a custom attribute, avoid using the following characters: number sign (#), colon
     * (:), question mark (?), backslash (\), and slash (/). The Amazon Pinpoint
     * console can't display attribute names that contain these characters. This
     * limitation doesn't apply to attribute values.</p>
     */
    inline EndpointRequest& AddAttributes(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["science", "music", "travel"]. You can use these attributes
     * as filter criteria when you create segments.</p> <p>When you define the name of
     * a custom attribute, avoid using the following characters: number sign (#), colon
     * (:), question mark (?), backslash (\), and slash (/). The Amazon Pinpoint
     * console can't display attribute names that contain these characters. This
     * limitation doesn't apply to attribute values.</p>
     */
    inline EndpointRequest& AddAttributes(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["science", "music", "travel"]. You can use these attributes
     * as filter criteria when you create segments.</p> <p>When you define the name of
     * a custom attribute, avoid using the following characters: number sign (#), colon
     * (:), question mark (?), backslash (\), and slash (/). The Amazon Pinpoint
     * console can't display attribute names that contain these characters. This
     * limitation doesn't apply to attribute values.</p>
     */
    inline EndpointRequest& AddAttributes(const char* key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["science", "music", "travel"]. You can use these attributes
     * as filter criteria when you create segments.</p> <p>When you define the name of
     * a custom attribute, avoid using the following characters: number sign (#), colon
     * (:), question mark (?), backslash (\), and slash (/). The Amazon Pinpoint
     * console can't display attribute names that contain these characters. This
     * limitation doesn't apply to attribute values.</p>
     */
    inline EndpointRequest& AddAttributes(const char* key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The channel to use when sending messages or push notifications to the
     * endpoint.</p>
     */
    inline const ChannelType& GetChannelType() const{ return m_channelType; }

    /**
     * <p>The channel to use when sending messages or push notifications to the
     * endpoint.</p>
     */
    inline bool ChannelTypeHasBeenSet() const { return m_channelTypeHasBeenSet; }

    /**
     * <p>The channel to use when sending messages or push notifications to the
     * endpoint.</p>
     */
    inline void SetChannelType(const ChannelType& value) { m_channelTypeHasBeenSet = true; m_channelType = value; }

    /**
     * <p>The channel to use when sending messages or push notifications to the
     * endpoint.</p>
     */
    inline void SetChannelType(ChannelType&& value) { m_channelTypeHasBeenSet = true; m_channelType = std::move(value); }

    /**
     * <p>The channel to use when sending messages or push notifications to the
     * endpoint.</p>
     */
    inline EndpointRequest& WithChannelType(const ChannelType& value) { SetChannelType(value); return *this;}

    /**
     * <p>The channel to use when sending messages or push notifications to the
     * endpoint.</p>
     */
    inline EndpointRequest& WithChannelType(ChannelType&& value) { SetChannelType(std::move(value)); return *this;}


    /**
     * <p>The demographic information for the endpoint, such as the time zone and
     * platform.</p>
     */
    inline const EndpointDemographic& GetDemographic() const{ return m_demographic; }

    /**
     * <p>The demographic information for the endpoint, such as the time zone and
     * platform.</p>
     */
    inline bool DemographicHasBeenSet() const { return m_demographicHasBeenSet; }

    /**
     * <p>The demographic information for the endpoint, such as the time zone and
     * platform.</p>
     */
    inline void SetDemographic(const EndpointDemographic& value) { m_demographicHasBeenSet = true; m_demographic = value; }

    /**
     * <p>The demographic information for the endpoint, such as the time zone and
     * platform.</p>
     */
    inline void SetDemographic(EndpointDemographic&& value) { m_demographicHasBeenSet = true; m_demographic = std::move(value); }

    /**
     * <p>The demographic information for the endpoint, such as the time zone and
     * platform.</p>
     */
    inline EndpointRequest& WithDemographic(const EndpointDemographic& value) { SetDemographic(value); return *this;}

    /**
     * <p>The demographic information for the endpoint, such as the time zone and
     * platform.</p>
     */
    inline EndpointRequest& WithDemographic(EndpointDemographic&& value) { SetDemographic(std::move(value)); return *this;}


    /**
     * <p>The date and time, in ISO 8601 format, when the endpoint is updated.</p>
     */
    inline const Aws::String& GetEffectiveDate() const{ return m_effectiveDate; }

    /**
     * <p>The date and time, in ISO 8601 format, when the endpoint is updated.</p>
     */
    inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }

    /**
     * <p>The date and time, in ISO 8601 format, when the endpoint is updated.</p>
     */
    inline void SetEffectiveDate(const Aws::String& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = value; }

    /**
     * <p>The date and time, in ISO 8601 format, when the endpoint is updated.</p>
     */
    inline void SetEffectiveDate(Aws::String&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::move(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when the endpoint is updated.</p>
     */
    inline void SetEffectiveDate(const char* value) { m_effectiveDateHasBeenSet = true; m_effectiveDate.assign(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when the endpoint is updated.</p>
     */
    inline EndpointRequest& WithEffectiveDate(const Aws::String& value) { SetEffectiveDate(value); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when the endpoint is updated.</p>
     */
    inline EndpointRequest& WithEffectiveDate(Aws::String&& value) { SetEffectiveDate(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when the endpoint is updated.</p>
     */
    inline EndpointRequest& WithEffectiveDate(const char* value) { SetEffectiveDate(value); return *this;}


    /**
     * <p>Not used.</p>
     */
    inline const Aws::String& GetEndpointStatus() const{ return m_endpointStatus; }

    /**
     * <p>Not used.</p>
     */
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }

    /**
     * <p>Not used.</p>
     */
    inline void SetEndpointStatus(const Aws::String& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }

    /**
     * <p>Not used.</p>
     */
    inline void SetEndpointStatus(Aws::String&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::move(value); }

    /**
     * <p>Not used.</p>
     */
    inline void SetEndpointStatus(const char* value) { m_endpointStatusHasBeenSet = true; m_endpointStatus.assign(value); }

    /**
     * <p>Not used.</p>
     */
    inline EndpointRequest& WithEndpointStatus(const Aws::String& value) { SetEndpointStatus(value); return *this;}

    /**
     * <p>Not used.</p>
     */
    inline EndpointRequest& WithEndpointStatus(Aws::String&& value) { SetEndpointStatus(std::move(value)); return *this;}

    /**
     * <p>Not used.</p>
     */
    inline EndpointRequest& WithEndpointStatus(const char* value) { SetEndpointStatus(value); return *this;}


    /**
     * <p>The geographic information for the endpoint.</p>
     */
    inline const EndpointLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The geographic information for the endpoint.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The geographic information for the endpoint.</p>
     */
    inline void SetLocation(const EndpointLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The geographic information for the endpoint.</p>
     */
    inline void SetLocation(EndpointLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The geographic information for the endpoint.</p>
     */
    inline EndpointRequest& WithLocation(const EndpointLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The geographic information for the endpoint.</p>
     */
    inline EndpointRequest& WithLocation(EndpointLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>One or more custom metrics that your app reports to Amazon Pinpoint for the
     * endpoint.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>One or more custom metrics that your app reports to Amazon Pinpoint for the
     * endpoint.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>One or more custom metrics that your app reports to Amazon Pinpoint for the
     * endpoint.</p>
     */
    inline void SetMetrics(const Aws::Map<Aws::String, double>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>One or more custom metrics that your app reports to Amazon Pinpoint for the
     * endpoint.</p>
     */
    inline void SetMetrics(Aws::Map<Aws::String, double>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>One or more custom metrics that your app reports to Amazon Pinpoint for the
     * endpoint.</p>
     */
    inline EndpointRequest& WithMetrics(const Aws::Map<Aws::String, double>& value) { SetMetrics(value); return *this;}

    /**
     * <p>One or more custom metrics that your app reports to Amazon Pinpoint for the
     * endpoint.</p>
     */
    inline EndpointRequest& WithMetrics(Aws::Map<Aws::String, double>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>One or more custom metrics that your app reports to Amazon Pinpoint for the
     * endpoint.</p>
     */
    inline EndpointRequest& AddMetrics(const Aws::String& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

    /**
     * <p>One or more custom metrics that your app reports to Amazon Pinpoint for the
     * endpoint.</p>
     */
    inline EndpointRequest& AddMetrics(Aws::String&& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more custom metrics that your app reports to Amazon Pinpoint for the
     * endpoint.</p>
     */
    inline EndpointRequest& AddMetrics(const char* key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }


    /**
     * <p>Specifies whether the user who's associated with the endpoint has opted out
     * of receiving messages and push notifications from you. Possible values are: ALL,
     * the user has opted out and doesn't want to receive any messages or push
     * notifications; and, NONE, the user hasn't opted out and wants to receive all
     * messages and push notifications.</p>
     */
    inline const Aws::String& GetOptOut() const{ return m_optOut; }

    /**
     * <p>Specifies whether the user who's associated with the endpoint has opted out
     * of receiving messages and push notifications from you. Possible values are: ALL,
     * the user has opted out and doesn't want to receive any messages or push
     * notifications; and, NONE, the user hasn't opted out and wants to receive all
     * messages and push notifications.</p>
     */
    inline bool OptOutHasBeenSet() const { return m_optOutHasBeenSet; }

    /**
     * <p>Specifies whether the user who's associated with the endpoint has opted out
     * of receiving messages and push notifications from you. Possible values are: ALL,
     * the user has opted out and doesn't want to receive any messages or push
     * notifications; and, NONE, the user hasn't opted out and wants to receive all
     * messages and push notifications.</p>
     */
    inline void SetOptOut(const Aws::String& value) { m_optOutHasBeenSet = true; m_optOut = value; }

    /**
     * <p>Specifies whether the user who's associated with the endpoint has opted out
     * of receiving messages and push notifications from you. Possible values are: ALL,
     * the user has opted out and doesn't want to receive any messages or push
     * notifications; and, NONE, the user hasn't opted out and wants to receive all
     * messages and push notifications.</p>
     */
    inline void SetOptOut(Aws::String&& value) { m_optOutHasBeenSet = true; m_optOut = std::move(value); }

    /**
     * <p>Specifies whether the user who's associated with the endpoint has opted out
     * of receiving messages and push notifications from you. Possible values are: ALL,
     * the user has opted out and doesn't want to receive any messages or push
     * notifications; and, NONE, the user hasn't opted out and wants to receive all
     * messages and push notifications.</p>
     */
    inline void SetOptOut(const char* value) { m_optOutHasBeenSet = true; m_optOut.assign(value); }

    /**
     * <p>Specifies whether the user who's associated with the endpoint has opted out
     * of receiving messages and push notifications from you. Possible values are: ALL,
     * the user has opted out and doesn't want to receive any messages or push
     * notifications; and, NONE, the user hasn't opted out and wants to receive all
     * messages and push notifications.</p>
     */
    inline EndpointRequest& WithOptOut(const Aws::String& value) { SetOptOut(value); return *this;}

    /**
     * <p>Specifies whether the user who's associated with the endpoint has opted out
     * of receiving messages and push notifications from you. Possible values are: ALL,
     * the user has opted out and doesn't want to receive any messages or push
     * notifications; and, NONE, the user hasn't opted out and wants to receive all
     * messages and push notifications.</p>
     */
    inline EndpointRequest& WithOptOut(Aws::String&& value) { SetOptOut(std::move(value)); return *this;}

    /**
     * <p>Specifies whether the user who's associated with the endpoint has opted out
     * of receiving messages and push notifications from you. Possible values are: ALL,
     * the user has opted out and doesn't want to receive any messages or push
     * notifications; and, NONE, the user hasn't opted out and wants to receive all
     * messages and push notifications.</p>
     */
    inline EndpointRequest& WithOptOut(const char* value) { SetOptOut(value); return *this;}


    /**
     * <p>The unique identifier for the most recent request to update the endpoint.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The unique identifier for the most recent request to update the endpoint.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The unique identifier for the most recent request to update the endpoint.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The unique identifier for the most recent request to update the endpoint.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The unique identifier for the most recent request to update the endpoint.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The unique identifier for the most recent request to update the endpoint.</p>
     */
    inline EndpointRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The unique identifier for the most recent request to update the endpoint.</p>
     */
    inline EndpointRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the most recent request to update the endpoint.</p>
     */
    inline EndpointRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>One or more custom user attributes that describe the user who's associated
     * with the endpoint.</p>
     */
    inline const EndpointUser& GetUser() const{ return m_user; }

    /**
     * <p>One or more custom user attributes that describe the user who's associated
     * with the endpoint.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>One or more custom user attributes that describe the user who's associated
     * with the endpoint.</p>
     */
    inline void SetUser(const EndpointUser& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>One or more custom user attributes that describe the user who's associated
     * with the endpoint.</p>
     */
    inline void SetUser(EndpointUser&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>One or more custom user attributes that describe the user who's associated
     * with the endpoint.</p>
     */
    inline EndpointRequest& WithUser(const EndpointUser& value) { SetUser(value); return *this;}

    /**
     * <p>One or more custom user attributes that describe the user who's associated
     * with the endpoint.</p>
     */
    inline EndpointRequest& WithUser(EndpointUser&& value) { SetUser(std::move(value)); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_attributes;
    bool m_attributesHasBeenSet;

    ChannelType m_channelType;
    bool m_channelTypeHasBeenSet;

    EndpointDemographic m_demographic;
    bool m_demographicHasBeenSet;

    Aws::String m_effectiveDate;
    bool m_effectiveDateHasBeenSet;

    Aws::String m_endpointStatus;
    bool m_endpointStatusHasBeenSet;

    EndpointLocation m_location;
    bool m_locationHasBeenSet;

    Aws::Map<Aws::String, double> m_metrics;
    bool m_metricsHasBeenSet;

    Aws::String m_optOut;
    bool m_optOutHasBeenSet;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet;

    EndpointUser m_user;
    bool m_userHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

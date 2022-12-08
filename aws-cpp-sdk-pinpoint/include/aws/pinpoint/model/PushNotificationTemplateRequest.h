/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/AndroidPushNotificationTemplate.h>
#include <aws/pinpoint/model/APNSPushNotificationTemplate.h>
#include <aws/pinpoint/model/DefaultPushNotificationTemplate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Specifies the content and settings for a message template that can be used in
   * messages that are sent through a push notification channel.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PushNotificationTemplateRequest">AWS
   * API Reference</a></p>
   */
  class PushNotificationTemplateRequest
  {
  public:
    AWS_PINPOINT_API PushNotificationTemplateRequest();
    AWS_PINPOINT_API PushNotificationTemplateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API PushNotificationTemplateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message template to use for the ADM (Amazon Device Messaging) channel.
     * This message template overrides the default template for push notification
     * channels (DefaultPushNotificationTemplate).</p>
     */
    inline const AndroidPushNotificationTemplate& GetADM() const{ return m_aDM; }

    /**
     * <p>The message template to use for the ADM (Amazon Device Messaging) channel.
     * This message template overrides the default template for push notification
     * channels (DefaultPushNotificationTemplate).</p>
     */
    inline bool ADMHasBeenSet() const { return m_aDMHasBeenSet; }

    /**
     * <p>The message template to use for the ADM (Amazon Device Messaging) channel.
     * This message template overrides the default template for push notification
     * channels (DefaultPushNotificationTemplate).</p>
     */
    inline void SetADM(const AndroidPushNotificationTemplate& value) { m_aDMHasBeenSet = true; m_aDM = value; }

    /**
     * <p>The message template to use for the ADM (Amazon Device Messaging) channel.
     * This message template overrides the default template for push notification
     * channels (DefaultPushNotificationTemplate).</p>
     */
    inline void SetADM(AndroidPushNotificationTemplate&& value) { m_aDMHasBeenSet = true; m_aDM = std::move(value); }

    /**
     * <p>The message template to use for the ADM (Amazon Device Messaging) channel.
     * This message template overrides the default template for push notification
     * channels (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateRequest& WithADM(const AndroidPushNotificationTemplate& value) { SetADM(value); return *this;}

    /**
     * <p>The message template to use for the ADM (Amazon Device Messaging) channel.
     * This message template overrides the default template for push notification
     * channels (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateRequest& WithADM(AndroidPushNotificationTemplate&& value) { SetADM(std::move(value)); return *this;}


    /**
     * <p>The message template to use for the APNs (Apple Push Notification service)
     * channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline const APNSPushNotificationTemplate& GetAPNS() const{ return m_aPNS; }

    /**
     * <p>The message template to use for the APNs (Apple Push Notification service)
     * channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline bool APNSHasBeenSet() const { return m_aPNSHasBeenSet; }

    /**
     * <p>The message template to use for the APNs (Apple Push Notification service)
     * channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline void SetAPNS(const APNSPushNotificationTemplate& value) { m_aPNSHasBeenSet = true; m_aPNS = value; }

    /**
     * <p>The message template to use for the APNs (Apple Push Notification service)
     * channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline void SetAPNS(APNSPushNotificationTemplate&& value) { m_aPNSHasBeenSet = true; m_aPNS = std::move(value); }

    /**
     * <p>The message template to use for the APNs (Apple Push Notification service)
     * channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateRequest& WithAPNS(const APNSPushNotificationTemplate& value) { SetAPNS(value); return *this;}

    /**
     * <p>The message template to use for the APNs (Apple Push Notification service)
     * channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateRequest& WithAPNS(APNSPushNotificationTemplate&& value) { SetAPNS(std::move(value)); return *this;}


    /**
     * <p>The message template to use for the Baidu (Baidu Cloud Push) channel. This
     * message template overrides the default template for push notification channels
     * (DefaultPushNotificationTemplate).</p>
     */
    inline const AndroidPushNotificationTemplate& GetBaidu() const{ return m_baidu; }

    /**
     * <p>The message template to use for the Baidu (Baidu Cloud Push) channel. This
     * message template overrides the default template for push notification channels
     * (DefaultPushNotificationTemplate).</p>
     */
    inline bool BaiduHasBeenSet() const { return m_baiduHasBeenSet; }

    /**
     * <p>The message template to use for the Baidu (Baidu Cloud Push) channel. This
     * message template overrides the default template for push notification channels
     * (DefaultPushNotificationTemplate).</p>
     */
    inline void SetBaidu(const AndroidPushNotificationTemplate& value) { m_baiduHasBeenSet = true; m_baidu = value; }

    /**
     * <p>The message template to use for the Baidu (Baidu Cloud Push) channel. This
     * message template overrides the default template for push notification channels
     * (DefaultPushNotificationTemplate).</p>
     */
    inline void SetBaidu(AndroidPushNotificationTemplate&& value) { m_baiduHasBeenSet = true; m_baidu = std::move(value); }

    /**
     * <p>The message template to use for the Baidu (Baidu Cloud Push) channel. This
     * message template overrides the default template for push notification channels
     * (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateRequest& WithBaidu(const AndroidPushNotificationTemplate& value) { SetBaidu(value); return *this;}

    /**
     * <p>The message template to use for the Baidu (Baidu Cloud Push) channel. This
     * message template overrides the default template for push notification channels
     * (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateRequest& WithBaidu(AndroidPushNotificationTemplate&& value) { SetBaidu(std::move(value)); return *this;}


    /**
     * <p>The default message template to use for push notification channels.</p>
     */
    inline const DefaultPushNotificationTemplate& GetDefault() const{ return m_default; }

    /**
     * <p>The default message template to use for push notification channels.</p>
     */
    inline bool DefaultHasBeenSet() const { return m_defaultHasBeenSet; }

    /**
     * <p>The default message template to use for push notification channels.</p>
     */
    inline void SetDefault(const DefaultPushNotificationTemplate& value) { m_defaultHasBeenSet = true; m_default = value; }

    /**
     * <p>The default message template to use for push notification channels.</p>
     */
    inline void SetDefault(DefaultPushNotificationTemplate&& value) { m_defaultHasBeenSet = true; m_default = std::move(value); }

    /**
     * <p>The default message template to use for push notification channels.</p>
     */
    inline PushNotificationTemplateRequest& WithDefault(const DefaultPushNotificationTemplate& value) { SetDefault(value); return *this;}

    /**
     * <p>The default message template to use for push notification channels.</p>
     */
    inline PushNotificationTemplateRequest& WithDefault(DefaultPushNotificationTemplate&& value) { SetDefault(std::move(value)); return *this;}


    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline const Aws::String& GetDefaultSubstitutions() const{ return m_defaultSubstitutions; }

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline bool DefaultSubstitutionsHasBeenSet() const { return m_defaultSubstitutionsHasBeenSet; }

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline void SetDefaultSubstitutions(const Aws::String& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = value; }

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline void SetDefaultSubstitutions(Aws::String&& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = std::move(value); }

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline void SetDefaultSubstitutions(const char* value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions.assign(value); }

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline PushNotificationTemplateRequest& WithDefaultSubstitutions(const Aws::String& value) { SetDefaultSubstitutions(value); return *this;}

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline PushNotificationTemplateRequest& WithDefaultSubstitutions(Aws::String&& value) { SetDefaultSubstitutions(std::move(value)); return *this;}

    /**
     * <p>A JSON object that specifies the default values to use for message variables
     * in the message template. This object is a set of key-value pairs. Each key
     * defines a message variable in the template. The corresponding value defines the
     * default value for that variable. When you create a message that's based on the
     * template, you can override these defaults with message-specific and
     * address-specific variables and values.</p>
     */
    inline PushNotificationTemplateRequest& WithDefaultSubstitutions(const char* value) { SetDefaultSubstitutions(value); return *this;}


    /**
     * <p>The message template to use for the GCM channel, which is used to send
     * notifications through the Firebase Cloud Messaging (FCM), formerly Google Cloud
     * Messaging (GCM), service. This message template overrides the default template
     * for push notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline const AndroidPushNotificationTemplate& GetGCM() const{ return m_gCM; }

    /**
     * <p>The message template to use for the GCM channel, which is used to send
     * notifications through the Firebase Cloud Messaging (FCM), formerly Google Cloud
     * Messaging (GCM), service. This message template overrides the default template
     * for push notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline bool GCMHasBeenSet() const { return m_gCMHasBeenSet; }

    /**
     * <p>The message template to use for the GCM channel, which is used to send
     * notifications through the Firebase Cloud Messaging (FCM), formerly Google Cloud
     * Messaging (GCM), service. This message template overrides the default template
     * for push notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline void SetGCM(const AndroidPushNotificationTemplate& value) { m_gCMHasBeenSet = true; m_gCM = value; }

    /**
     * <p>The message template to use for the GCM channel, which is used to send
     * notifications through the Firebase Cloud Messaging (FCM), formerly Google Cloud
     * Messaging (GCM), service. This message template overrides the default template
     * for push notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline void SetGCM(AndroidPushNotificationTemplate&& value) { m_gCMHasBeenSet = true; m_gCM = std::move(value); }

    /**
     * <p>The message template to use for the GCM channel, which is used to send
     * notifications through the Firebase Cloud Messaging (FCM), formerly Google Cloud
     * Messaging (GCM), service. This message template overrides the default template
     * for push notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateRequest& WithGCM(const AndroidPushNotificationTemplate& value) { SetGCM(value); return *this;}

    /**
     * <p>The message template to use for the GCM channel, which is used to send
     * notifications through the Firebase Cloud Messaging (FCM), formerly Google Cloud
     * Messaging (GCM), service. This message template overrides the default template
     * for push notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateRequest& WithGCM(AndroidPushNotificationTemplate&& value) { SetGCM(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline const Aws::String& GetRecommenderId() const{ return m_recommenderId; }

    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline bool RecommenderIdHasBeenSet() const { return m_recommenderIdHasBeenSet; }

    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline void SetRecommenderId(const Aws::String& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = value; }

    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline void SetRecommenderId(Aws::String&& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = std::move(value); }

    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline void SetRecommenderId(const char* value) { m_recommenderIdHasBeenSet = true; m_recommenderId.assign(value); }

    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline PushNotificationTemplateRequest& WithRecommenderId(const Aws::String& value) { SetRecommenderId(value); return *this;}

    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline PushNotificationTemplateRequest& WithRecommenderId(Aws::String&& value) { SetRecommenderId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the recommender model to use for the message
     * template. Amazon Pinpoint uses this value to determine how to retrieve and
     * process data from a recommender model when it sends messages that use the
     * template, if the template contains message variables for recommendation
     * data.</p>
     */
    inline PushNotificationTemplateRequest& WithRecommenderId(const char* value) { SetRecommenderId(value); return *this;}


    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline PushNotificationTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline PushNotificationTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline PushNotificationTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline PushNotificationTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline PushNotificationTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline PushNotificationTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline PushNotificationTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline PushNotificationTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline PushNotificationTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A custom description of the message template.</p>
     */
    inline const Aws::String& GetTemplateDescription() const{ return m_templateDescription; }

    /**
     * <p>A custom description of the message template.</p>
     */
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }

    /**
     * <p>A custom description of the message template.</p>
     */
    inline void SetTemplateDescription(const Aws::String& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = value; }

    /**
     * <p>A custom description of the message template.</p>
     */
    inline void SetTemplateDescription(Aws::String&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::move(value); }

    /**
     * <p>A custom description of the message template.</p>
     */
    inline void SetTemplateDescription(const char* value) { m_templateDescriptionHasBeenSet = true; m_templateDescription.assign(value); }

    /**
     * <p>A custom description of the message template.</p>
     */
    inline PushNotificationTemplateRequest& WithTemplateDescription(const Aws::String& value) { SetTemplateDescription(value); return *this;}

    /**
     * <p>A custom description of the message template.</p>
     */
    inline PushNotificationTemplateRequest& WithTemplateDescription(Aws::String&& value) { SetTemplateDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description of the message template.</p>
     */
    inline PushNotificationTemplateRequest& WithTemplateDescription(const char* value) { SetTemplateDescription(value); return *this;}

  private:

    AndroidPushNotificationTemplate m_aDM;
    bool m_aDMHasBeenSet = false;

    APNSPushNotificationTemplate m_aPNS;
    bool m_aPNSHasBeenSet = false;

    AndroidPushNotificationTemplate m_baidu;
    bool m_baiduHasBeenSet = false;

    DefaultPushNotificationTemplate m_default;
    bool m_defaultHasBeenSet = false;

    Aws::String m_defaultSubstitutions;
    bool m_defaultSubstitutionsHasBeenSet = false;

    AndroidPushNotificationTemplate m_gCM;
    bool m_gCMHasBeenSet = false;

    Aws::String m_recommenderId;
    bool m_recommenderIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

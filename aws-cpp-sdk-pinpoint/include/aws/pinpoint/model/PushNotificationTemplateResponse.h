/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/AndroidPushNotificationTemplate.h>
#include <aws/pinpoint/model/APNSPushNotificationTemplate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/DefaultPushNotificationTemplate.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/TemplateType.h>
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
   * <p>Provides information about the content and settings for a message template
   * that can be used in messages that are sent through a push notification
   * channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PushNotificationTemplateResponse">AWS
   * API Reference</a></p>
   */
  class PushNotificationTemplateResponse
  {
  public:
    AWS_PINPOINT_API PushNotificationTemplateResponse();
    AWS_PINPOINT_API PushNotificationTemplateResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API PushNotificationTemplateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message template that's used for the ADM (Amazon Device Messaging)
     * channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline const AndroidPushNotificationTemplate& GetADM() const{ return m_aDM; }

    /**
     * <p>The message template that's used for the ADM (Amazon Device Messaging)
     * channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline bool ADMHasBeenSet() const { return m_aDMHasBeenSet; }

    /**
     * <p>The message template that's used for the ADM (Amazon Device Messaging)
     * channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline void SetADM(const AndroidPushNotificationTemplate& value) { m_aDMHasBeenSet = true; m_aDM = value; }

    /**
     * <p>The message template that's used for the ADM (Amazon Device Messaging)
     * channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline void SetADM(AndroidPushNotificationTemplate&& value) { m_aDMHasBeenSet = true; m_aDM = std::move(value); }

    /**
     * <p>The message template that's used for the ADM (Amazon Device Messaging)
     * channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateResponse& WithADM(const AndroidPushNotificationTemplate& value) { SetADM(value); return *this;}

    /**
     * <p>The message template that's used for the ADM (Amazon Device Messaging)
     * channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateResponse& WithADM(AndroidPushNotificationTemplate&& value) { SetADM(std::move(value)); return *this;}


    /**
     * <p>The message template that's used for the APNs (Apple Push Notification
     * service) channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline const APNSPushNotificationTemplate& GetAPNS() const{ return m_aPNS; }

    /**
     * <p>The message template that's used for the APNs (Apple Push Notification
     * service) channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline bool APNSHasBeenSet() const { return m_aPNSHasBeenSet; }

    /**
     * <p>The message template that's used for the APNs (Apple Push Notification
     * service) channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline void SetAPNS(const APNSPushNotificationTemplate& value) { m_aPNSHasBeenSet = true; m_aPNS = value; }

    /**
     * <p>The message template that's used for the APNs (Apple Push Notification
     * service) channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline void SetAPNS(APNSPushNotificationTemplate&& value) { m_aPNSHasBeenSet = true; m_aPNS = std::move(value); }

    /**
     * <p>The message template that's used for the APNs (Apple Push Notification
     * service) channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateResponse& WithAPNS(const APNSPushNotificationTemplate& value) { SetAPNS(value); return *this;}

    /**
     * <p>The message template that's used for the APNs (Apple Push Notification
     * service) channel. This message template overrides the default template for push
     * notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateResponse& WithAPNS(APNSPushNotificationTemplate&& value) { SetAPNS(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline PushNotificationTemplateResponse& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline PushNotificationTemplateResponse& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline PushNotificationTemplateResponse& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The message template that's used for the Baidu (Baidu Cloud Push) channel.
     * This message template overrides the default template for push notification
     * channels (DefaultPushNotificationTemplate).</p>
     */
    inline const AndroidPushNotificationTemplate& GetBaidu() const{ return m_baidu; }

    /**
     * <p>The message template that's used for the Baidu (Baidu Cloud Push) channel.
     * This message template overrides the default template for push notification
     * channels (DefaultPushNotificationTemplate).</p>
     */
    inline bool BaiduHasBeenSet() const { return m_baiduHasBeenSet; }

    /**
     * <p>The message template that's used for the Baidu (Baidu Cloud Push) channel.
     * This message template overrides the default template for push notification
     * channels (DefaultPushNotificationTemplate).</p>
     */
    inline void SetBaidu(const AndroidPushNotificationTemplate& value) { m_baiduHasBeenSet = true; m_baidu = value; }

    /**
     * <p>The message template that's used for the Baidu (Baidu Cloud Push) channel.
     * This message template overrides the default template for push notification
     * channels (DefaultPushNotificationTemplate).</p>
     */
    inline void SetBaidu(AndroidPushNotificationTemplate&& value) { m_baiduHasBeenSet = true; m_baidu = std::move(value); }

    /**
     * <p>The message template that's used for the Baidu (Baidu Cloud Push) channel.
     * This message template overrides the default template for push notification
     * channels (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateResponse& WithBaidu(const AndroidPushNotificationTemplate& value) { SetBaidu(value); return *this;}

    /**
     * <p>The message template that's used for the Baidu (Baidu Cloud Push) channel.
     * This message template overrides the default template for push notification
     * channels (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateResponse& WithBaidu(AndroidPushNotificationTemplate&& value) { SetBaidu(std::move(value)); return *this;}


    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline PushNotificationTemplateResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline PushNotificationTemplateResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the message template was created.</p>
     */
    inline PushNotificationTemplateResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>The default message template that's used for push notification channels.</p>
     */
    inline const DefaultPushNotificationTemplate& GetDefault() const{ return m_default; }

    /**
     * <p>The default message template that's used for push notification channels.</p>
     */
    inline bool DefaultHasBeenSet() const { return m_defaultHasBeenSet; }

    /**
     * <p>The default message template that's used for push notification channels.</p>
     */
    inline void SetDefault(const DefaultPushNotificationTemplate& value) { m_defaultHasBeenSet = true; m_default = value; }

    /**
     * <p>The default message template that's used for push notification channels.</p>
     */
    inline void SetDefault(DefaultPushNotificationTemplate&& value) { m_defaultHasBeenSet = true; m_default = std::move(value); }

    /**
     * <p>The default message template that's used for push notification channels.</p>
     */
    inline PushNotificationTemplateResponse& WithDefault(const DefaultPushNotificationTemplate& value) { SetDefault(value); return *this;}

    /**
     * <p>The default message template that's used for push notification channels.</p>
     */
    inline PushNotificationTemplateResponse& WithDefault(DefaultPushNotificationTemplate&& value) { SetDefault(std::move(value)); return *this;}


    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline const Aws::String& GetDefaultSubstitutions() const{ return m_defaultSubstitutions; }

    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline bool DefaultSubstitutionsHasBeenSet() const { return m_defaultSubstitutionsHasBeenSet; }

    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline void SetDefaultSubstitutions(const Aws::String& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = value; }

    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline void SetDefaultSubstitutions(Aws::String&& value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions = std::move(value); }

    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline void SetDefaultSubstitutions(const char* value) { m_defaultSubstitutionsHasBeenSet = true; m_defaultSubstitutions.assign(value); }

    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline PushNotificationTemplateResponse& WithDefaultSubstitutions(const Aws::String& value) { SetDefaultSubstitutions(value); return *this;}

    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline PushNotificationTemplateResponse& WithDefaultSubstitutions(Aws::String&& value) { SetDefaultSubstitutions(std::move(value)); return *this;}

    /**
     * <p>The JSON object that specifies the default values that are used for message
     * variables in the message template. This object is a set of key-value pairs. Each
     * key defines a message variable in the template. The corresponding value defines
     * the default value for that variable.</p>
     */
    inline PushNotificationTemplateResponse& WithDefaultSubstitutions(const char* value) { SetDefaultSubstitutions(value); return *this;}


    /**
     * <p>The message template that's used for the GCM channel, which is used to send
     * notifications through the Firebase Cloud Messaging (FCM), formerly Google Cloud
     * Messaging (GCM), service. This message template overrides the default template
     * for push notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline const AndroidPushNotificationTemplate& GetGCM() const{ return m_gCM; }

    /**
     * <p>The message template that's used for the GCM channel, which is used to send
     * notifications through the Firebase Cloud Messaging (FCM), formerly Google Cloud
     * Messaging (GCM), service. This message template overrides the default template
     * for push notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline bool GCMHasBeenSet() const { return m_gCMHasBeenSet; }

    /**
     * <p>The message template that's used for the GCM channel, which is used to send
     * notifications through the Firebase Cloud Messaging (FCM), formerly Google Cloud
     * Messaging (GCM), service. This message template overrides the default template
     * for push notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline void SetGCM(const AndroidPushNotificationTemplate& value) { m_gCMHasBeenSet = true; m_gCM = value; }

    /**
     * <p>The message template that's used for the GCM channel, which is used to send
     * notifications through the Firebase Cloud Messaging (FCM), formerly Google Cloud
     * Messaging (GCM), service. This message template overrides the default template
     * for push notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline void SetGCM(AndroidPushNotificationTemplate&& value) { m_gCMHasBeenSet = true; m_gCM = std::move(value); }

    /**
     * <p>The message template that's used for the GCM channel, which is used to send
     * notifications through the Firebase Cloud Messaging (FCM), formerly Google Cloud
     * Messaging (GCM), service. This message template overrides the default template
     * for push notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateResponse& WithGCM(const AndroidPushNotificationTemplate& value) { SetGCM(value); return *this;}

    /**
     * <p>The message template that's used for the GCM channel, which is used to send
     * notifications through the Firebase Cloud Messaging (FCM), formerly Google Cloud
     * Messaging (GCM), service. This message template overrides the default template
     * for push notification channels (DefaultPushNotificationTemplate).</p>
     */
    inline PushNotificationTemplateResponse& WithGCM(AndroidPushNotificationTemplate&& value) { SetGCM(std::move(value)); return *this;}


    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline PushNotificationTemplateResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline PushNotificationTemplateResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the message template was last
     * modified.</p>
     */
    inline PushNotificationTemplateResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline const Aws::String& GetRecommenderId() const{ return m_recommenderId; }

    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline bool RecommenderIdHasBeenSet() const { return m_recommenderIdHasBeenSet; }

    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline void SetRecommenderId(const Aws::String& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = value; }

    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline void SetRecommenderId(Aws::String&& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = std::move(value); }

    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline void SetRecommenderId(const char* value) { m_recommenderIdHasBeenSet = true; m_recommenderId.assign(value); }

    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline PushNotificationTemplateResponse& WithRecommenderId(const Aws::String& value) { SetRecommenderId(value); return *this;}

    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline PushNotificationTemplateResponse& WithRecommenderId(Aws::String&& value) { SetRecommenderId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the recommender model that's used by the message
     * template.</p>
     */
    inline PushNotificationTemplateResponse& WithRecommenderId(const char* value) { SetRecommenderId(value); return *this;}


    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline PushNotificationTemplateResponse& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline PushNotificationTemplateResponse& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline PushNotificationTemplateResponse& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline PushNotificationTemplateResponse& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline PushNotificationTemplateResponse& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline PushNotificationTemplateResponse& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline PushNotificationTemplateResponse& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline PushNotificationTemplateResponse& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the message template. Each tag consists of a required tag key
     * and an associated tag value.</p>
     */
    inline PushNotificationTemplateResponse& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The custom description of the message template.</p>
     */
    inline const Aws::String& GetTemplateDescription() const{ return m_templateDescription; }

    /**
     * <p>The custom description of the message template.</p>
     */
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }

    /**
     * <p>The custom description of the message template.</p>
     */
    inline void SetTemplateDescription(const Aws::String& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = value; }

    /**
     * <p>The custom description of the message template.</p>
     */
    inline void SetTemplateDescription(Aws::String&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::move(value); }

    /**
     * <p>The custom description of the message template.</p>
     */
    inline void SetTemplateDescription(const char* value) { m_templateDescriptionHasBeenSet = true; m_templateDescription.assign(value); }

    /**
     * <p>The custom description of the message template.</p>
     */
    inline PushNotificationTemplateResponse& WithTemplateDescription(const Aws::String& value) { SetTemplateDescription(value); return *this;}

    /**
     * <p>The custom description of the message template.</p>
     */
    inline PushNotificationTemplateResponse& WithTemplateDescription(Aws::String&& value) { SetTemplateDescription(std::move(value)); return *this;}

    /**
     * <p>The custom description of the message template.</p>
     */
    inline PushNotificationTemplateResponse& WithTemplateDescription(const char* value) { SetTemplateDescription(value); return *this;}


    /**
     * <p>The name of the message template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the message template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the message template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the message template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the message template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the message template.</p>
     */
    inline PushNotificationTemplateResponse& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the message template.</p>
     */
    inline PushNotificationTemplateResponse& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the message template.</p>
     */
    inline PushNotificationTemplateResponse& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The type of channel that the message template is designed for. For a push
     * notification template, this value is PUSH.</p>
     */
    inline const TemplateType& GetTemplateType() const{ return m_templateType; }

    /**
     * <p>The type of channel that the message template is designed for. For a push
     * notification template, this value is PUSH.</p>
     */
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }

    /**
     * <p>The type of channel that the message template is designed for. For a push
     * notification template, this value is PUSH.</p>
     */
    inline void SetTemplateType(const TemplateType& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }

    /**
     * <p>The type of channel that the message template is designed for. For a push
     * notification template, this value is PUSH.</p>
     */
    inline void SetTemplateType(TemplateType&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }

    /**
     * <p>The type of channel that the message template is designed for. For a push
     * notification template, this value is PUSH.</p>
     */
    inline PushNotificationTemplateResponse& WithTemplateType(const TemplateType& value) { SetTemplateType(value); return *this;}

    /**
     * <p>The type of channel that the message template is designed for. For a push
     * notification template, this value is PUSH.</p>
     */
    inline PushNotificationTemplateResponse& WithTemplateType(TemplateType&& value) { SetTemplateType(std::move(value)); return *this;}


    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline PushNotificationTemplateResponse& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline PushNotificationTemplateResponse& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The unique identifier, as an integer, for the active version of the message
     * template, or the version of the template that you specified by using the version
     * parameter in your request.</p>
     */
    inline PushNotificationTemplateResponse& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    AndroidPushNotificationTemplate m_aDM;
    bool m_aDMHasBeenSet = false;

    APNSPushNotificationTemplate m_aPNS;
    bool m_aPNSHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AndroidPushNotificationTemplate m_baidu;
    bool m_baiduHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    DefaultPushNotificationTemplate m_default;
    bool m_defaultHasBeenSet = false;

    Aws::String m_defaultSubstitutions;
    bool m_defaultSubstitutionsHasBeenSet = false;

    AndroidPushNotificationTemplate m_gCM;
    bool m_gCMHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_recommenderId;
    bool m_recommenderIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    TemplateType m_templateType;
    bool m_templateTypeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

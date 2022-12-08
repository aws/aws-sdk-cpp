/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/OutboundCallerConfig.h>
#include <aws/connect/model/QueueStatus.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about a queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Queue">AWS API
   * Reference</a></p>
   */
  class Queue
  {
  public:
    AWS_CONNECT_API Queue();
    AWS_CONNECT_API Queue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Queue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the queue.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the queue.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the queue.</p>
     */
    inline Queue& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the queue.</p>
     */
    inline Queue& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the queue.</p>
     */
    inline Queue& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the queue.</p>
     */
    inline const Aws::String& GetQueueArn() const{ return m_queueArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the queue.</p>
     */
    inline bool QueueArnHasBeenSet() const { return m_queueArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the queue.</p>
     */
    inline void SetQueueArn(const Aws::String& value) { m_queueArnHasBeenSet = true; m_queueArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the queue.</p>
     */
    inline void SetQueueArn(Aws::String&& value) { m_queueArnHasBeenSet = true; m_queueArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the queue.</p>
     */
    inline void SetQueueArn(const char* value) { m_queueArnHasBeenSet = true; m_queueArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the queue.</p>
     */
    inline Queue& WithQueueArn(const Aws::String& value) { SetQueueArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the queue.</p>
     */
    inline Queue& WithQueueArn(Aws::String&& value) { SetQueueArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the queue.</p>
     */
    inline Queue& WithQueueArn(const char* value) { SetQueueArn(value); return *this;}


    /**
     * <p>The identifier for the queue.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }

    /**
     * <p>The identifier for the queue.</p>
     */
    inline Queue& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The identifier for the queue.</p>
     */
    inline Queue& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the queue.</p>
     */
    inline Queue& WithQueueId(const char* value) { SetQueueId(value); return *this;}


    /**
     * <p>The description of the queue.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the queue.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the queue.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the queue.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the queue.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the queue.</p>
     */
    inline Queue& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the queue.</p>
     */
    inline Queue& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the queue.</p>
     */
    inline Queue& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline const OutboundCallerConfig& GetOutboundCallerConfig() const{ return m_outboundCallerConfig; }

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline bool OutboundCallerConfigHasBeenSet() const { return m_outboundCallerConfigHasBeenSet; }

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline void SetOutboundCallerConfig(const OutboundCallerConfig& value) { m_outboundCallerConfigHasBeenSet = true; m_outboundCallerConfig = value; }

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline void SetOutboundCallerConfig(OutboundCallerConfig&& value) { m_outboundCallerConfigHasBeenSet = true; m_outboundCallerConfig = std::move(value); }

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline Queue& WithOutboundCallerConfig(const OutboundCallerConfig& value) { SetOutboundCallerConfig(value); return *this;}

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline Queue& WithOutboundCallerConfig(OutboundCallerConfig&& value) { SetOutboundCallerConfig(std::move(value)); return *this;}


    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const{ return m_hoursOfOperationId; }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline void SetHoursOfOperationId(const Aws::String& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = value; }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline void SetHoursOfOperationId(Aws::String&& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = std::move(value); }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline void SetHoursOfOperationId(const char* value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId.assign(value); }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline Queue& WithHoursOfOperationId(const Aws::String& value) { SetHoursOfOperationId(value); return *this;}

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline Queue& WithHoursOfOperationId(Aws::String&& value) { SetHoursOfOperationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline Queue& WithHoursOfOperationId(const char* value) { SetHoursOfOperationId(value); return *this;}


    /**
     * <p>The maximum number of contacts that can be in the queue before it is
     * considered full.</p>
     */
    inline int GetMaxContacts() const{ return m_maxContacts; }

    /**
     * <p>The maximum number of contacts that can be in the queue before it is
     * considered full.</p>
     */
    inline bool MaxContactsHasBeenSet() const { return m_maxContactsHasBeenSet; }

    /**
     * <p>The maximum number of contacts that can be in the queue before it is
     * considered full.</p>
     */
    inline void SetMaxContacts(int value) { m_maxContactsHasBeenSet = true; m_maxContacts = value; }

    /**
     * <p>The maximum number of contacts that can be in the queue before it is
     * considered full.</p>
     */
    inline Queue& WithMaxContacts(int value) { SetMaxContacts(value); return *this;}


    /**
     * <p>The status of the queue.</p>
     */
    inline const QueueStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the queue.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the queue.</p>
     */
    inline void SetStatus(const QueueStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the queue.</p>
     */
    inline void SetStatus(QueueStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the queue.</p>
     */
    inline Queue& WithStatus(const QueueStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the queue.</p>
     */
    inline Queue& WithStatus(QueueStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Queue& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Queue& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Queue& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Queue& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Queue& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Queue& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Queue& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Queue& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline Queue& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_queueArn;
    bool m_queueArnHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    OutboundCallerConfig m_outboundCallerConfig;
    bool m_outboundCallerConfigHasBeenSet = false;

    Aws::String m_hoursOfOperationId;
    bool m_hoursOfOperationIdHasBeenSet = false;

    int m_maxContacts;
    bool m_maxContactsHasBeenSet = false;

    QueueStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

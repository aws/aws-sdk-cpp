/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/datazone/model/TaskStatus.h>
#include <aws/datazone/model/Topic.h>
#include <aws/datazone/model/NotificationType.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of a notification generated in Amazon DataZone.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/NotificationOutput">AWS
   * API Reference</a></p>
   */
  class NotificationOutput
  {
  public:
    AWS_DATAZONE_API NotificationOutput();
    AWS_DATAZONE_API NotificationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API NotificationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action link included in the notification.</p>
     */
    inline const Aws::String& GetActionLink() const{ return m_actionLink; }

    /**
     * <p>The action link included in the notification.</p>
     */
    inline bool ActionLinkHasBeenSet() const { return m_actionLinkHasBeenSet; }

    /**
     * <p>The action link included in the notification.</p>
     */
    inline void SetActionLink(const Aws::String& value) { m_actionLinkHasBeenSet = true; m_actionLink = value; }

    /**
     * <p>The action link included in the notification.</p>
     */
    inline void SetActionLink(Aws::String&& value) { m_actionLinkHasBeenSet = true; m_actionLink = std::move(value); }

    /**
     * <p>The action link included in the notification.</p>
     */
    inline void SetActionLink(const char* value) { m_actionLinkHasBeenSet = true; m_actionLink.assign(value); }

    /**
     * <p>The action link included in the notification.</p>
     */
    inline NotificationOutput& WithActionLink(const Aws::String& value) { SetActionLink(value); return *this;}

    /**
     * <p>The action link included in the notification.</p>
     */
    inline NotificationOutput& WithActionLink(Aws::String&& value) { SetActionLink(std::move(value)); return *this;}

    /**
     * <p>The action link included in the notification.</p>
     */
    inline NotificationOutput& WithActionLink(const char* value) { SetActionLink(value); return *this;}


    /**
     * <p>The timestamp of when a notification was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The timestamp of when a notification was created.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The timestamp of when a notification was created.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The timestamp of when a notification was created.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when a notification was created.</p>
     */
    inline NotificationOutput& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when a notification was created.</p>
     */
    inline NotificationOutput& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The identifier of a Amazon DataZone domain in which the notification
     * exists.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of a Amazon DataZone domain in which the notification
     * exists.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of a Amazon DataZone domain in which the notification
     * exists.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of a Amazon DataZone domain in which the notification
     * exists.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of a Amazon DataZone domain in which the notification
     * exists.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of a Amazon DataZone domain in which the notification
     * exists.</p>
     */
    inline NotificationOutput& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of a Amazon DataZone domain in which the notification
     * exists.</p>
     */
    inline NotificationOutput& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of a Amazon DataZone domain in which the notification
     * exists.</p>
     */
    inline NotificationOutput& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The identifier of the notification.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the notification.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the notification.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the notification.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the notification.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the notification.</p>
     */
    inline NotificationOutput& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the notification.</p>
     */
    inline NotificationOutput& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the notification.</p>
     */
    inline NotificationOutput& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The timestamp of when the notification was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>The timestamp of when the notification was last updated.</p>
     */
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }

    /**
     * <p>The timestamp of when the notification was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * <p>The timestamp of when the notification was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when the notification was last updated.</p>
     */
    inline NotificationOutput& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when the notification was last updated.</p>
     */
    inline NotificationOutput& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The message included in the notification.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message included in the notification.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message included in the notification.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message included in the notification.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message included in the notification.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message included in the notification.</p>
     */
    inline NotificationOutput& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message included in the notification.</p>
     */
    inline NotificationOutput& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message included in the notification.</p>
     */
    inline NotificationOutput& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The metadata included in the notification.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata included in the notification.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata included in the notification.</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata included in the notification.</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata included in the notification.</p>
     */
    inline NotificationOutput& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata included in the notification.</p>
     */
    inline NotificationOutput& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata included in the notification.</p>
     */
    inline NotificationOutput& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

    /**
     * <p>The metadata included in the notification.</p>
     */
    inline NotificationOutput& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata included in the notification.</p>
     */
    inline NotificationOutput& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata included in the notification.</p>
     */
    inline NotificationOutput& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata included in the notification.</p>
     */
    inline NotificationOutput& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata included in the notification.</p>
     */
    inline NotificationOutput& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata included in the notification.</p>
     */
    inline NotificationOutput& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }


    /**
     * <p>The status included in the notification.</p>
     */
    inline const TaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status included in the notification.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status included in the notification.</p>
     */
    inline void SetStatus(const TaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status included in the notification.</p>
     */
    inline void SetStatus(TaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status included in the notification.</p>
     */
    inline NotificationOutput& WithStatus(const TaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status included in the notification.</p>
     */
    inline NotificationOutput& WithStatus(TaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The title of the notification.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the notification.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the notification.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the notification.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the notification.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the notification.</p>
     */
    inline NotificationOutput& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the notification.</p>
     */
    inline NotificationOutput& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the notification.</p>
     */
    inline NotificationOutput& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The topic of the notification.</p>
     */
    inline const Topic& GetTopic() const{ return m_topic; }

    /**
     * <p>The topic of the notification.</p>
     */
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }

    /**
     * <p>The topic of the notification.</p>
     */
    inline void SetTopic(const Topic& value) { m_topicHasBeenSet = true; m_topic = value; }

    /**
     * <p>The topic of the notification.</p>
     */
    inline void SetTopic(Topic&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }

    /**
     * <p>The topic of the notification.</p>
     */
    inline NotificationOutput& WithTopic(const Topic& value) { SetTopic(value); return *this;}

    /**
     * <p>The topic of the notification.</p>
     */
    inline NotificationOutput& WithTopic(Topic&& value) { SetTopic(std::move(value)); return *this;}


    /**
     * <p>The type of the notification.</p>
     */
    inline const NotificationType& GetType() const{ return m_type; }

    /**
     * <p>The type of the notification.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the notification.</p>
     */
    inline void SetType(const NotificationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the notification.</p>
     */
    inline void SetType(NotificationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the notification.</p>
     */
    inline NotificationOutput& WithType(const NotificationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the notification.</p>
     */
    inline NotificationOutput& WithType(NotificationType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_actionLink;
    bool m_actionLinkHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    TaskStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Topic m_topic;
    bool m_topicHasBeenSet = false;

    NotificationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

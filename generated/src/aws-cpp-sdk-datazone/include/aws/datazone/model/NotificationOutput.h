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


    ///@{
    /**
     * <p>The action link included in the notification.</p>
     */
    inline const Aws::String& GetActionLink() const{ return m_actionLink; }
    inline bool ActionLinkHasBeenSet() const { return m_actionLinkHasBeenSet; }
    inline void SetActionLink(const Aws::String& value) { m_actionLinkHasBeenSet = true; m_actionLink = value; }
    inline void SetActionLink(Aws::String&& value) { m_actionLinkHasBeenSet = true; m_actionLink = std::move(value); }
    inline void SetActionLink(const char* value) { m_actionLinkHasBeenSet = true; m_actionLink.assign(value); }
    inline NotificationOutput& WithActionLink(const Aws::String& value) { SetActionLink(value); return *this;}
    inline NotificationOutput& WithActionLink(Aws::String&& value) { SetActionLink(std::move(value)); return *this;}
    inline NotificationOutput& WithActionLink(const char* value) { SetActionLink(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when a notification was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline NotificationOutput& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline NotificationOutput& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a Amazon DataZone domain in which the notification
     * exists.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline NotificationOutput& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline NotificationOutput& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline NotificationOutput& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the notification.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline NotificationOutput& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline NotificationOutput& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline NotificationOutput& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the notification was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline NotificationOutput& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline NotificationOutput& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message included in the notification.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline NotificationOutput& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline NotificationOutput& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline NotificationOutput& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata included in the notification.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline NotificationOutput& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}
    inline NotificationOutput& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}
    inline NotificationOutput& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    inline NotificationOutput& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline NotificationOutput& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline NotificationOutput& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }
    inline NotificationOutput& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline NotificationOutput& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline NotificationOutput& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status included in the notification.</p>
     */
    inline const TaskStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline NotificationOutput& WithStatus(const TaskStatus& value) { SetStatus(value); return *this;}
    inline NotificationOutput& WithStatus(TaskStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the notification.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline NotificationOutput& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline NotificationOutput& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline NotificationOutput& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic of the notification.</p>
     */
    inline const Topic& GetTopic() const{ return m_topic; }
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
    inline void SetTopic(const Topic& value) { m_topicHasBeenSet = true; m_topic = value; }
    inline void SetTopic(Topic&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }
    inline NotificationOutput& WithTopic(const Topic& value) { SetTopic(value); return *this;}
    inline NotificationOutput& WithTopic(Topic&& value) { SetTopic(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the notification.</p>
     */
    inline const NotificationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const NotificationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(NotificationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline NotificationOutput& WithType(const NotificationType& value) { SetType(value); return *this;}
    inline NotificationOutput& WithType(NotificationType&& value) { SetType(std::move(value)); return *this;}
    ///@}
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

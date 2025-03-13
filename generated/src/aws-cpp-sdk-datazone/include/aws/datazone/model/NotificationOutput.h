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
    AWS_DATAZONE_API NotificationOutput() = default;
    AWS_DATAZONE_API NotificationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API NotificationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action link included in the notification.</p>
     */
    inline const Aws::String& GetActionLink() const { return m_actionLink; }
    inline bool ActionLinkHasBeenSet() const { return m_actionLinkHasBeenSet; }
    template<typename ActionLinkT = Aws::String>
    void SetActionLink(ActionLinkT&& value) { m_actionLinkHasBeenSet = true; m_actionLink = std::forward<ActionLinkT>(value); }
    template<typename ActionLinkT = Aws::String>
    NotificationOutput& WithActionLink(ActionLinkT&& value) { SetActionLink(std::forward<ActionLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when a notification was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    NotificationOutput& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a Amazon DataZone domain in which the notification
     * exists.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    NotificationOutput& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the notification.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    NotificationOutput& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the notification was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    NotificationOutput& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message included in the notification.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    NotificationOutput& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata included in the notification.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    NotificationOutput& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
    NotificationOutput& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
      m_metadataHasBeenSet = true; m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status included in the notification.</p>
     */
    inline TaskStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline NotificationOutput& WithStatus(TaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the notification.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    NotificationOutput& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic of the notification.</p>
     */
    inline const Topic& GetTopic() const { return m_topic; }
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
    template<typename TopicT = Topic>
    void SetTopic(TopicT&& value) { m_topicHasBeenSet = true; m_topic = std::forward<TopicT>(value); }
    template<typename TopicT = Topic>
    NotificationOutput& WithTopic(TopicT&& value) { SetTopic(std::forward<TopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the notification.</p>
     */
    inline NotificationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(NotificationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline NotificationOutput& WithType(NotificationType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_actionLink;
    bool m_actionLinkHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    TaskStatus m_status{TaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Topic m_topic;
    bool m_topicHasBeenSet = false;

    NotificationType m_type{NotificationType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

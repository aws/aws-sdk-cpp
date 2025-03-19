/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/health/model/EntityStatusCode.h>
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
namespace Health
{
namespace Model
{

  /**
   * <p>Information about an entity that is affected by a Health event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/AffectedEntity">AWS
   * API Reference</a></p>
   */
  class AffectedEntity
  {
  public:
    AWS_HEALTH_API AffectedEntity() = default;
    AWS_HEALTH_API AffectedEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API AffectedEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the entity. Format:
     * <code>arn:aws:health:<i>entity-region</i>:<i>aws-account</i>:entity/<i>entity-id</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1:111222333444:entity/AVh5GGT7ul1arKr1sE1K</code>
     * </p>
     */
    inline const Aws::String& GetEntityArn() const { return m_entityArn; }
    inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }
    template<typename EntityArnT = Aws::String>
    void SetEntityArn(EntityArnT&& value) { m_entityArnHasBeenSet = true; m_entityArn = std::forward<EntityArnT>(value); }
    template<typename EntityArnT = Aws::String>
    AffectedEntity& WithEntityArn(EntityArnT&& value) { SetEntityArn(std::forward<EntityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the event. The event ARN has the
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code> format.</p> <p>For example, an event ARN might look like the
     * following:</p> <p>
     * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline const Aws::String& GetEventArn() const { return m_eventArn; }
    inline bool EventArnHasBeenSet() const { return m_eventArnHasBeenSet; }
    template<typename EventArnT = Aws::String>
    void SetEventArn(EventArnT&& value) { m_eventArnHasBeenSet = true; m_eventArn = std::forward<EventArnT>(value); }
    template<typename EventArnT = Aws::String>
    AffectedEntity& WithEventArn(EventArnT&& value) { SetEventArn(std::forward<EventArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the affected entity.</p>
     */
    inline const Aws::String& GetEntityValue() const { return m_entityValue; }
    inline bool EntityValueHasBeenSet() const { return m_entityValueHasBeenSet; }
    template<typename EntityValueT = Aws::String>
    void SetEntityValue(EntityValueT&& value) { m_entityValueHasBeenSet = true; m_entityValue = std::forward<EntityValueT>(value); }
    template<typename EntityValueT = Aws::String>
    AffectedEntity& WithEntityValue(EntityValueT&& value) { SetEntityValue(std::forward<EntityValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the affected entity.</p>
     */
    inline const Aws::String& GetEntityUrl() const { return m_entityUrl; }
    inline bool EntityUrlHasBeenSet() const { return m_entityUrlHasBeenSet; }
    template<typename EntityUrlT = Aws::String>
    void SetEntityUrl(EntityUrlT&& value) { m_entityUrlHasBeenSet = true; m_entityUrl = std::forward<EntityUrlT>(value); }
    template<typename EntityUrlT = Aws::String>
    AffectedEntity& WithEntityUrl(EntityUrlT&& value) { SetEntityUrl(std::forward<EntityUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 12-digit Amazon Web Services account number that contains the affected
     * entity.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    AffectedEntity& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time that the entity was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    AffectedEntity& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent status of the entity affected by the event. The possible
     * values are <code>IMPAIRED</code>, <code>UNIMPAIRED</code>, and
     * <code>UNKNOWN</code>.</p>
     */
    inline EntityStatusCode GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(EntityStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline AffectedEntity& WithStatusCode(EntityStatusCode value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of entity tags attached to the affected entity.</p> 
     * <p>Currently, the <code>tags</code> property isn't supported.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    AffectedEntity& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    AffectedEntity& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Additional metadata about the affected entity.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEntityMetadata() const { return m_entityMetadata; }
    inline bool EntityMetadataHasBeenSet() const { return m_entityMetadataHasBeenSet; }
    template<typename EntityMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetEntityMetadata(EntityMetadataT&& value) { m_entityMetadataHasBeenSet = true; m_entityMetadata = std::forward<EntityMetadataT>(value); }
    template<typename EntityMetadataT = Aws::Map<Aws::String, Aws::String>>
    AffectedEntity& WithEntityMetadata(EntityMetadataT&& value) { SetEntityMetadata(std::forward<EntityMetadataT>(value)); return *this;}
    template<typename EntityMetadataKeyT = Aws::String, typename EntityMetadataValueT = Aws::String>
    AffectedEntity& AddEntityMetadata(EntityMetadataKeyT&& key, EntityMetadataValueT&& value) {
      m_entityMetadataHasBeenSet = true; m_entityMetadata.emplace(std::forward<EntityMetadataKeyT>(key), std::forward<EntityMetadataValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_entityArn;
    bool m_entityArnHasBeenSet = false;

    Aws::String m_eventArn;
    bool m_eventArnHasBeenSet = false;

    Aws::String m_entityValue;
    bool m_entityValueHasBeenSet = false;

    Aws::String m_entityUrl;
    bool m_entityUrlHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    EntityStatusCode m_statusCode{EntityStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_entityMetadata;
    bool m_entityMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Health
} // namespace Aws

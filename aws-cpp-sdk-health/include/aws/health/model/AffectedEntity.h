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
  class AWS_HEALTH_API AffectedEntity
  {
  public:
    AffectedEntity();
    AffectedEntity(Aws::Utils::Json::JsonView jsonValue);
    AffectedEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the entity. Format:
     * <code>arn:aws:health:<i>entity-region</i>:<i>aws-account</i>:entity/<i>entity-id</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1:111222333444:entity/AVh5GGT7ul1arKr1sE1K</code>
     * </p>
     */
    inline const Aws::String& GetEntityArn() const{ return m_entityArn; }

    /**
     * <p>The unique identifier for the entity. Format:
     * <code>arn:aws:health:<i>entity-region</i>:<i>aws-account</i>:entity/<i>entity-id</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1:111222333444:entity/AVh5GGT7ul1arKr1sE1K</code>
     * </p>
     */
    inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }

    /**
     * <p>The unique identifier for the entity. Format:
     * <code>arn:aws:health:<i>entity-region</i>:<i>aws-account</i>:entity/<i>entity-id</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1:111222333444:entity/AVh5GGT7ul1arKr1sE1K</code>
     * </p>
     */
    inline void SetEntityArn(const Aws::String& value) { m_entityArnHasBeenSet = true; m_entityArn = value; }

    /**
     * <p>The unique identifier for the entity. Format:
     * <code>arn:aws:health:<i>entity-region</i>:<i>aws-account</i>:entity/<i>entity-id</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1:111222333444:entity/AVh5GGT7ul1arKr1sE1K</code>
     * </p>
     */
    inline void SetEntityArn(Aws::String&& value) { m_entityArnHasBeenSet = true; m_entityArn = std::move(value); }

    /**
     * <p>The unique identifier for the entity. Format:
     * <code>arn:aws:health:<i>entity-region</i>:<i>aws-account</i>:entity/<i>entity-id</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1:111222333444:entity/AVh5GGT7ul1arKr1sE1K</code>
     * </p>
     */
    inline void SetEntityArn(const char* value) { m_entityArnHasBeenSet = true; m_entityArn.assign(value); }

    /**
     * <p>The unique identifier for the entity. Format:
     * <code>arn:aws:health:<i>entity-region</i>:<i>aws-account</i>:entity/<i>entity-id</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1:111222333444:entity/AVh5GGT7ul1arKr1sE1K</code>
     * </p>
     */
    inline AffectedEntity& WithEntityArn(const Aws::String& value) { SetEntityArn(value); return *this;}

    /**
     * <p>The unique identifier for the entity. Format:
     * <code>arn:aws:health:<i>entity-region</i>:<i>aws-account</i>:entity/<i>entity-id</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1:111222333444:entity/AVh5GGT7ul1arKr1sE1K</code>
     * </p>
     */
    inline AffectedEntity& WithEntityArn(Aws::String&& value) { SetEntityArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the entity. Format:
     * <code>arn:aws:health:<i>entity-region</i>:<i>aws-account</i>:entity/<i>entity-id</i>
     * </code>. Example:
     * <code>arn:aws:health:us-east-1:111222333444:entity/AVh5GGT7ul1arKr1sE1K</code>
     * </p>
     */
    inline AffectedEntity& WithEntityArn(const char* value) { SetEntityArn(value); return *this;}


    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline const Aws::String& GetEventArn() const{ return m_eventArn; }

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline bool EventArnHasBeenSet() const { return m_eventArnHasBeenSet; }

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetEventArn(const Aws::String& value) { m_eventArnHasBeenSet = true; m_eventArn = value; }

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetEventArn(Aws::String&& value) { m_eventArnHasBeenSet = true; m_eventArn = std::move(value); }

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline void SetEventArn(const char* value) { m_eventArnHasBeenSet = true; m_eventArn.assign(value); }

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline AffectedEntity& WithEventArn(const Aws::String& value) { SetEventArn(value); return *this;}

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline AffectedEntity& WithEventArn(Aws::String&& value) { SetEventArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the event. Format:
     * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
     * </code>. Example: <code>Example:
     * arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
     * </p>
     */
    inline AffectedEntity& WithEventArn(const char* value) { SetEventArn(value); return *this;}


    /**
     * <p>The ID of the affected entity.</p>
     */
    inline const Aws::String& GetEntityValue() const{ return m_entityValue; }

    /**
     * <p>The ID of the affected entity.</p>
     */
    inline bool EntityValueHasBeenSet() const { return m_entityValueHasBeenSet; }

    /**
     * <p>The ID of the affected entity.</p>
     */
    inline void SetEntityValue(const Aws::String& value) { m_entityValueHasBeenSet = true; m_entityValue = value; }

    /**
     * <p>The ID of the affected entity.</p>
     */
    inline void SetEntityValue(Aws::String&& value) { m_entityValueHasBeenSet = true; m_entityValue = std::move(value); }

    /**
     * <p>The ID of the affected entity.</p>
     */
    inline void SetEntityValue(const char* value) { m_entityValueHasBeenSet = true; m_entityValue.assign(value); }

    /**
     * <p>The ID of the affected entity.</p>
     */
    inline AffectedEntity& WithEntityValue(const Aws::String& value) { SetEntityValue(value); return *this;}

    /**
     * <p>The ID of the affected entity.</p>
     */
    inline AffectedEntity& WithEntityValue(Aws::String&& value) { SetEntityValue(std::move(value)); return *this;}

    /**
     * <p>The ID of the affected entity.</p>
     */
    inline AffectedEntity& WithEntityValue(const char* value) { SetEntityValue(value); return *this;}


    
    inline const Aws::String& GetEntityUrl() const{ return m_entityUrl; }

    
    inline bool EntityUrlHasBeenSet() const { return m_entityUrlHasBeenSet; }

    
    inline void SetEntityUrl(const Aws::String& value) { m_entityUrlHasBeenSet = true; m_entityUrl = value; }

    
    inline void SetEntityUrl(Aws::String&& value) { m_entityUrlHasBeenSet = true; m_entityUrl = std::move(value); }

    
    inline void SetEntityUrl(const char* value) { m_entityUrlHasBeenSet = true; m_entityUrl.assign(value); }

    
    inline AffectedEntity& WithEntityUrl(const Aws::String& value) { SetEntityUrl(value); return *this;}

    
    inline AffectedEntity& WithEntityUrl(Aws::String&& value) { SetEntityUrl(std::move(value)); return *this;}

    
    inline AffectedEntity& WithEntityUrl(const char* value) { SetEntityUrl(value); return *this;}


    /**
     * <p>The 12-digit AWS account number that contains the affected entity.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The 12-digit AWS account number that contains the affected entity.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The 12-digit AWS account number that contains the affected entity.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The 12-digit AWS account number that contains the affected entity.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The 12-digit AWS account number that contains the affected entity.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The 12-digit AWS account number that contains the affected entity.</p>
     */
    inline AffectedEntity& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The 12-digit AWS account number that contains the affected entity.</p>
     */
    inline AffectedEntity& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit AWS account number that contains the affected entity.</p>
     */
    inline AffectedEntity& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The most recent time that the entity was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The most recent time that the entity was updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The most recent time that the entity was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The most recent time that the entity was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The most recent time that the entity was updated.</p>
     */
    inline AffectedEntity& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The most recent time that the entity was updated.</p>
     */
    inline AffectedEntity& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The most recent status of the entity affected by the event. The possible
     * values are <code>IMPAIRED</code>, <code>UNIMPAIRED</code>, and
     * <code>UNKNOWN</code>.</p>
     */
    inline const EntityStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The most recent status of the entity affected by the event. The possible
     * values are <code>IMPAIRED</code>, <code>UNIMPAIRED</code>, and
     * <code>UNKNOWN</code>.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The most recent status of the entity affected by the event. The possible
     * values are <code>IMPAIRED</code>, <code>UNIMPAIRED</code>, and
     * <code>UNKNOWN</code>.</p>
     */
    inline void SetStatusCode(const EntityStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The most recent status of the entity affected by the event. The possible
     * values are <code>IMPAIRED</code>, <code>UNIMPAIRED</code>, and
     * <code>UNKNOWN</code>.</p>
     */
    inline void SetStatusCode(EntityStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The most recent status of the entity affected by the event. The possible
     * values are <code>IMPAIRED</code>, <code>UNIMPAIRED</code>, and
     * <code>UNKNOWN</code>.</p>
     */
    inline AffectedEntity& WithStatusCode(const EntityStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The most recent status of the entity affected by the event. The possible
     * values are <code>IMPAIRED</code>, <code>UNIMPAIRED</code>, and
     * <code>UNKNOWN</code>.</p>
     */
    inline AffectedEntity& WithStatusCode(EntityStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline AffectedEntity& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline AffectedEntity& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline AffectedEntity& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline AffectedEntity& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline AffectedEntity& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline AffectedEntity& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline AffectedEntity& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline AffectedEntity& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of entity tags attached to the affected entity.</p>
     */
    inline AffectedEntity& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_entityArn;
    bool m_entityArnHasBeenSet;

    Aws::String m_eventArn;
    bool m_eventArnHasBeenSet;

    Aws::String m_entityValue;
    bool m_entityValueHasBeenSet;

    Aws::String m_entityUrl;
    bool m_entityUrlHasBeenSet;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;

    EntityStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Health
} // namespace Aws

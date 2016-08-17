/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/RepositoryTriggerEventEnum.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Information about a trigger for a repository.</p>
   */
  class AWS_CODECOMMIT_API RepositoryTrigger
  {
  public:
    RepositoryTrigger();
    RepositoryTrigger(const Aws::Utils::Json::JsonValue& jsonValue);
    RepositoryTrigger& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the trigger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the trigger.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the trigger.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the trigger.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the trigger.</p>
     */
    inline RepositoryTrigger& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the trigger.</p>
     */
    inline RepositoryTrigger& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the trigger.</p>
     */
    inline RepositoryTrigger& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The ARN of the resource that is the target for a trigger. For example, the
     * ARN of a topic in Amazon Simple Notification Service (SNS).</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>The ARN of the resource that is the target for a trigger. For example, the
     * ARN of a topic in Amazon Simple Notification Service (SNS).</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The ARN of the resource that is the target for a trigger. For example, the
     * ARN of a topic in Amazon Simple Notification Service (SNS).</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The ARN of the resource that is the target for a trigger. For example, the
     * ARN of a topic in Amazon Simple Notification Service (SNS).</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>The ARN of the resource that is the target for a trigger. For example, the
     * ARN of a topic in Amazon Simple Notification Service (SNS).</p>
     */
    inline RepositoryTrigger& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The ARN of the resource that is the target for a trigger. For example, the
     * ARN of a topic in Amazon Simple Notification Service (SNS).</p>
     */
    inline RepositoryTrigger& WithDestinationArn(Aws::String&& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The ARN of the resource that is the target for a trigger. For example, the
     * ARN of a topic in Amazon Simple Notification Service (SNS).</p>
     */
    inline RepositoryTrigger& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}

    /**
     * <p>Any custom data associated with the trigger that will be included in the
     * information sent to the target of the trigger.</p>
     */
    inline const Aws::String& GetCustomData() const{ return m_customData; }

    /**
     * <p>Any custom data associated with the trigger that will be included in the
     * information sent to the target of the trigger.</p>
     */
    inline void SetCustomData(const Aws::String& value) { m_customDataHasBeenSet = true; m_customData = value; }

    /**
     * <p>Any custom data associated with the trigger that will be included in the
     * information sent to the target of the trigger.</p>
     */
    inline void SetCustomData(Aws::String&& value) { m_customDataHasBeenSet = true; m_customData = value; }

    /**
     * <p>Any custom data associated with the trigger that will be included in the
     * information sent to the target of the trigger.</p>
     */
    inline void SetCustomData(const char* value) { m_customDataHasBeenSet = true; m_customData.assign(value); }

    /**
     * <p>Any custom data associated with the trigger that will be included in the
     * information sent to the target of the trigger.</p>
     */
    inline RepositoryTrigger& WithCustomData(const Aws::String& value) { SetCustomData(value); return *this;}

    /**
     * <p>Any custom data associated with the trigger that will be included in the
     * information sent to the target of the trigger.</p>
     */
    inline RepositoryTrigger& WithCustomData(Aws::String&& value) { SetCustomData(value); return *this;}

    /**
     * <p>Any custom data associated with the trigger that will be included in the
     * information sent to the target of the trigger.</p>
     */
    inline RepositoryTrigger& WithCustomData(const char* value) { SetCustomData(value); return *this;}

    /**
     * <p>The branches that will be included in the trigger configuration. If no
     * branches are specified, the trigger will apply to all branches.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBranches() const{ return m_branches; }

    /**
     * <p>The branches that will be included in the trigger configuration. If no
     * branches are specified, the trigger will apply to all branches.</p>
     */
    inline void SetBranches(const Aws::Vector<Aws::String>& value) { m_branchesHasBeenSet = true; m_branches = value; }

    /**
     * <p>The branches that will be included in the trigger configuration. If no
     * branches are specified, the trigger will apply to all branches.</p>
     */
    inline void SetBranches(Aws::Vector<Aws::String>&& value) { m_branchesHasBeenSet = true; m_branches = value; }

    /**
     * <p>The branches that will be included in the trigger configuration. If no
     * branches are specified, the trigger will apply to all branches.</p>
     */
    inline RepositoryTrigger& WithBranches(const Aws::Vector<Aws::String>& value) { SetBranches(value); return *this;}

    /**
     * <p>The branches that will be included in the trigger configuration. If no
     * branches are specified, the trigger will apply to all branches.</p>
     */
    inline RepositoryTrigger& WithBranches(Aws::Vector<Aws::String>&& value) { SetBranches(value); return *this;}

    /**
     * <p>The branches that will be included in the trigger configuration. If no
     * branches are specified, the trigger will apply to all branches.</p>
     */
    inline RepositoryTrigger& AddBranches(const Aws::String& value) { m_branchesHasBeenSet = true; m_branches.push_back(value); return *this; }

    /**
     * <p>The branches that will be included in the trigger configuration. If no
     * branches are specified, the trigger will apply to all branches.</p>
     */
    inline RepositoryTrigger& AddBranches(Aws::String&& value) { m_branchesHasBeenSet = true; m_branches.push_back(value); return *this; }

    /**
     * <p>The branches that will be included in the trigger configuration. If no
     * branches are specified, the trigger will apply to all branches.</p>
     */
    inline RepositoryTrigger& AddBranches(const char* value) { m_branchesHasBeenSet = true; m_branches.push_back(value); return *this; }

    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). If no events are specified, the trigger will run for all
     * repository events.</p>
     */
    inline const Aws::Vector<RepositoryTriggerEventEnum>& GetEvents() const{ return m_events; }

    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). If no events are specified, the trigger will run for all
     * repository events.</p>
     */
    inline void SetEvents(const Aws::Vector<RepositoryTriggerEventEnum>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). If no events are specified, the trigger will run for all
     * repository events.</p>
     */
    inline void SetEvents(Aws::Vector<RepositoryTriggerEventEnum>&& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). If no events are specified, the trigger will run for all
     * repository events.</p>
     */
    inline RepositoryTrigger& WithEvents(const Aws::Vector<RepositoryTriggerEventEnum>& value) { SetEvents(value); return *this;}

    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). If no events are specified, the trigger will run for all
     * repository events.</p>
     */
    inline RepositoryTrigger& WithEvents(Aws::Vector<RepositoryTriggerEventEnum>&& value) { SetEvents(value); return *this;}

    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). If no events are specified, the trigger will run for all
     * repository events.</p>
     */
    inline RepositoryTrigger& AddEvents(const RepositoryTriggerEventEnum& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). If no events are specified, the trigger will run for all
     * repository events.</p>
     */
    inline RepositoryTrigger& AddEvents(RepositoryTriggerEventEnum&& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet;
    Aws::String m_customData;
    bool m_customDataHasBeenSet;
    Aws::Vector<Aws::String> m_branches;
    bool m_branchesHasBeenSet;
    Aws::Vector<RepositoryTriggerEventEnum> m_events;
    bool m_eventsHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws

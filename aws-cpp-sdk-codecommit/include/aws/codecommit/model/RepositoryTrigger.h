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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/RepositoryTriggerEventEnum.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Information about a trigger for a repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/RepositoryTrigger">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API RepositoryTrigger
  {
  public:
    RepositoryTrigger();
    RepositoryTrigger(Aws::Utils::Json::JsonView jsonValue);
    RepositoryTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the trigger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the trigger.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the trigger.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the trigger.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

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
    inline RepositoryTrigger& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

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
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>The ARN of the resource that is the target for a trigger. For example, the
     * ARN of a topic in Amazon Simple Notification Service (SNS).</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The ARN of the resource that is the target for a trigger. For example, the
     * ARN of a topic in Amazon Simple Notification Service (SNS).</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

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
    inline RepositoryTrigger& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

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
    inline bool CustomDataHasBeenSet() const { return m_customDataHasBeenSet; }

    /**
     * <p>Any custom data associated with the trigger that will be included in the
     * information sent to the target of the trigger.</p>
     */
    inline void SetCustomData(const Aws::String& value) { m_customDataHasBeenSet = true; m_customData = value; }

    /**
     * <p>Any custom data associated with the trigger that will be included in the
     * information sent to the target of the trigger.</p>
     */
    inline void SetCustomData(Aws::String&& value) { m_customDataHasBeenSet = true; m_customData = std::move(value); }

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
    inline RepositoryTrigger& WithCustomData(Aws::String&& value) { SetCustomData(std::move(value)); return *this;}

    /**
     * <p>Any custom data associated with the trigger that will be included in the
     * information sent to the target of the trigger.</p>
     */
    inline RepositoryTrigger& WithCustomData(const char* value) { SetCustomData(value); return *this;}


    /**
     * <p>The branches that will be included in the trigger configuration. If you
     * specify an empty array, the trigger will apply to all branches.</p> <note>
     * <p>While no content is required in the array, you must include the array
     * itself.</p> </note>
     */
    inline const Aws::Vector<Aws::String>& GetBranches() const{ return m_branches; }

    /**
     * <p>The branches that will be included in the trigger configuration. If you
     * specify an empty array, the trigger will apply to all branches.</p> <note>
     * <p>While no content is required in the array, you must include the array
     * itself.</p> </note>
     */
    inline bool BranchesHasBeenSet() const { return m_branchesHasBeenSet; }

    /**
     * <p>The branches that will be included in the trigger configuration. If you
     * specify an empty array, the trigger will apply to all branches.</p> <note>
     * <p>While no content is required in the array, you must include the array
     * itself.</p> </note>
     */
    inline void SetBranches(const Aws::Vector<Aws::String>& value) { m_branchesHasBeenSet = true; m_branches = value; }

    /**
     * <p>The branches that will be included in the trigger configuration. If you
     * specify an empty array, the trigger will apply to all branches.</p> <note>
     * <p>While no content is required in the array, you must include the array
     * itself.</p> </note>
     */
    inline void SetBranches(Aws::Vector<Aws::String>&& value) { m_branchesHasBeenSet = true; m_branches = std::move(value); }

    /**
     * <p>The branches that will be included in the trigger configuration. If you
     * specify an empty array, the trigger will apply to all branches.</p> <note>
     * <p>While no content is required in the array, you must include the array
     * itself.</p> </note>
     */
    inline RepositoryTrigger& WithBranches(const Aws::Vector<Aws::String>& value) { SetBranches(value); return *this;}

    /**
     * <p>The branches that will be included in the trigger configuration. If you
     * specify an empty array, the trigger will apply to all branches.</p> <note>
     * <p>While no content is required in the array, you must include the array
     * itself.</p> </note>
     */
    inline RepositoryTrigger& WithBranches(Aws::Vector<Aws::String>&& value) { SetBranches(std::move(value)); return *this;}

    /**
     * <p>The branches that will be included in the trigger configuration. If you
     * specify an empty array, the trigger will apply to all branches.</p> <note>
     * <p>While no content is required in the array, you must include the array
     * itself.</p> </note>
     */
    inline RepositoryTrigger& AddBranches(const Aws::String& value) { m_branchesHasBeenSet = true; m_branches.push_back(value); return *this; }

    /**
     * <p>The branches that will be included in the trigger configuration. If you
     * specify an empty array, the trigger will apply to all branches.</p> <note>
     * <p>While no content is required in the array, you must include the array
     * itself.</p> </note>
     */
    inline RepositoryTrigger& AddBranches(Aws::String&& value) { m_branchesHasBeenSet = true; m_branches.push_back(std::move(value)); return *this; }

    /**
     * <p>The branches that will be included in the trigger configuration. If you
     * specify an empty array, the trigger will apply to all branches.</p> <note>
     * <p>While no content is required in the array, you must include the array
     * itself.</p> </note>
     */
    inline RepositoryTrigger& AddBranches(const char* value) { m_branchesHasBeenSet = true; m_branches.push_back(value); return *this; }


    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). </p> <note> <p>The valid value "all" cannot be used with any
     * other values.</p> </note>
     */
    inline const Aws::Vector<RepositoryTriggerEventEnum>& GetEvents() const{ return m_events; }

    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). </p> <note> <p>The valid value "all" cannot be used with any
     * other values.</p> </note>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). </p> <note> <p>The valid value "all" cannot be used with any
     * other values.</p> </note>
     */
    inline void SetEvents(const Aws::Vector<RepositoryTriggerEventEnum>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). </p> <note> <p>The valid value "all" cannot be used with any
     * other values.</p> </note>
     */
    inline void SetEvents(Aws::Vector<RepositoryTriggerEventEnum>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). </p> <note> <p>The valid value "all" cannot be used with any
     * other values.</p> </note>
     */
    inline RepositoryTrigger& WithEvents(const Aws::Vector<RepositoryTriggerEventEnum>& value) { SetEvents(value); return *this;}

    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). </p> <note> <p>The valid value "all" cannot be used with any
     * other values.</p> </note>
     */
    inline RepositoryTrigger& WithEvents(Aws::Vector<RepositoryTriggerEventEnum>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). </p> <note> <p>The valid value "all" cannot be used with any
     * other values.</p> </note>
     */
    inline RepositoryTrigger& AddEvents(const RepositoryTriggerEventEnum& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>The repository events that will cause the trigger to run actions in another
     * service, such as sending a notification through Amazon Simple Notification
     * Service (SNS). </p> <note> <p>The valid value "all" cannot be used with any
     * other values.</p> </note>
     */
    inline RepositoryTrigger& AddEvents(RepositoryTriggerEventEnum&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }

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

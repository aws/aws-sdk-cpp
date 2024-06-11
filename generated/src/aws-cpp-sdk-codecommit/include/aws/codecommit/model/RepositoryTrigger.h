/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about a trigger for a repository. </p>  <p>If you want to
   * receive notifications about repository events, consider using notifications
   * instead of triggers. For more information, see <a
   * href="https://docs.aws.amazon.com/codecommit/latest/userguide/how-to-repository-email.html">Configuring
   * notifications for repository events</a>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/RepositoryTrigger">AWS
   * API Reference</a></p>
   */
  class RepositoryTrigger
  {
  public:
    AWS_CODECOMMIT_API RepositoryTrigger();
    AWS_CODECOMMIT_API RepositoryTrigger(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API RepositoryTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the trigger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RepositoryTrigger& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RepositoryTrigger& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RepositoryTrigger& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource that is the target for a trigger (for example, the
     * ARN of a topic in Amazon SNS).</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }
    inline RepositoryTrigger& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}
    inline RepositoryTrigger& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}
    inline RepositoryTrigger& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any custom data associated with the trigger to be included in the information
     * sent to the target of the trigger.</p>
     */
    inline const Aws::String& GetCustomData() const{ return m_customData; }
    inline bool CustomDataHasBeenSet() const { return m_customDataHasBeenSet; }
    inline void SetCustomData(const Aws::String& value) { m_customDataHasBeenSet = true; m_customData = value; }
    inline void SetCustomData(Aws::String&& value) { m_customDataHasBeenSet = true; m_customData = std::move(value); }
    inline void SetCustomData(const char* value) { m_customDataHasBeenSet = true; m_customData.assign(value); }
    inline RepositoryTrigger& WithCustomData(const Aws::String& value) { SetCustomData(value); return *this;}
    inline RepositoryTrigger& WithCustomData(Aws::String&& value) { SetCustomData(std::move(value)); return *this;}
    inline RepositoryTrigger& WithCustomData(const char* value) { SetCustomData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branches to be included in the trigger configuration. If you specify an
     * empty array, the trigger applies to all branches.</p>  <p>Although no
     * content is required in the array, you must include the array itself.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetBranches() const{ return m_branches; }
    inline bool BranchesHasBeenSet() const { return m_branchesHasBeenSet; }
    inline void SetBranches(const Aws::Vector<Aws::String>& value) { m_branchesHasBeenSet = true; m_branches = value; }
    inline void SetBranches(Aws::Vector<Aws::String>&& value) { m_branchesHasBeenSet = true; m_branches = std::move(value); }
    inline RepositoryTrigger& WithBranches(const Aws::Vector<Aws::String>& value) { SetBranches(value); return *this;}
    inline RepositoryTrigger& WithBranches(Aws::Vector<Aws::String>&& value) { SetBranches(std::move(value)); return *this;}
    inline RepositoryTrigger& AddBranches(const Aws::String& value) { m_branchesHasBeenSet = true; m_branches.push_back(value); return *this; }
    inline RepositoryTrigger& AddBranches(Aws::String&& value) { m_branchesHasBeenSet = true; m_branches.push_back(std::move(value)); return *this; }
    inline RepositoryTrigger& AddBranches(const char* value) { m_branchesHasBeenSet = true; m_branches.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The repository events that cause the trigger to run actions in another
     * service, such as sending a notification through Amazon SNS. </p>  <p>The
     * valid value "all" cannot be used with any other values.</p> 
     */
    inline const Aws::Vector<RepositoryTriggerEventEnum>& GetEvents() const{ return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    inline void SetEvents(const Aws::Vector<RepositoryTriggerEventEnum>& value) { m_eventsHasBeenSet = true; m_events = value; }
    inline void SetEvents(Aws::Vector<RepositoryTriggerEventEnum>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }
    inline RepositoryTrigger& WithEvents(const Aws::Vector<RepositoryTriggerEventEnum>& value) { SetEvents(value); return *this;}
    inline RepositoryTrigger& WithEvents(Aws::Vector<RepositoryTriggerEventEnum>&& value) { SetEvents(std::move(value)); return *this;}
    inline RepositoryTrigger& AddEvents(const RepositoryTriggerEventEnum& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }
    inline RepositoryTrigger& AddEvents(RepositoryTriggerEventEnum&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::String m_customData;
    bool m_customDataHasBeenSet = false;

    Aws::Vector<Aws::String> m_branches;
    bool m_branchesHasBeenSet = false;

    Aws::Vector<RepositoryTriggerEventEnum> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws

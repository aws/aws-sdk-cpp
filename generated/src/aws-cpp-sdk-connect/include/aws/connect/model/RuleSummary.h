/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EventSourceName.h>
#include <aws/connect/model/RulePublishStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/ActionSummary.h>
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
   * <p>A list of <code>ActionTypes</code> associated with a rule. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RuleSummary">AWS
   * API Reference</a></p>
   */
  class RuleSummary
  {
  public:
    AWS_CONNECT_API RuleSummary();
    AWS_CONNECT_API RuleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RuleSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RuleSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RuleSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the rule.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }
    inline RuleSummary& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}
    inline RuleSummary& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}
    inline RuleSummary& WithRuleId(const char* value) { SetRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline const Aws::String& GetRuleArn() const{ return m_ruleArn; }
    inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
    inline void SetRuleArn(const Aws::String& value) { m_ruleArnHasBeenSet = true; m_ruleArn = value; }
    inline void SetRuleArn(Aws::String&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::move(value); }
    inline void SetRuleArn(const char* value) { m_ruleArnHasBeenSet = true; m_ruleArn.assign(value); }
    inline RuleSummary& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}
    inline RuleSummary& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}
    inline RuleSummary& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event source.</p>
     */
    inline const EventSourceName& GetEventSourceName() const{ return m_eventSourceName; }
    inline bool EventSourceNameHasBeenSet() const { return m_eventSourceNameHasBeenSet; }
    inline void SetEventSourceName(const EventSourceName& value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName = value; }
    inline void SetEventSourceName(EventSourceName&& value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName = std::move(value); }
    inline RuleSummary& WithEventSourceName(const EventSourceName& value) { SetEventSourceName(value); return *this;}
    inline RuleSummary& WithEventSourceName(EventSourceName&& value) { SetEventSourceName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The publish status of the rule.</p>
     */
    inline const RulePublishStatus& GetPublishStatus() const{ return m_publishStatus; }
    inline bool PublishStatusHasBeenSet() const { return m_publishStatusHasBeenSet; }
    inline void SetPublishStatus(const RulePublishStatus& value) { m_publishStatusHasBeenSet = true; m_publishStatus = value; }
    inline void SetPublishStatus(RulePublishStatus&& value) { m_publishStatusHasBeenSet = true; m_publishStatus = std::move(value); }
    inline RuleSummary& WithPublishStatus(const RulePublishStatus& value) { SetPublishStatus(value); return *this;}
    inline RuleSummary& WithPublishStatus(RulePublishStatus&& value) { SetPublishStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ActionTypes associated with a rule. </p>
     */
    inline const Aws::Vector<ActionSummary>& GetActionSummaries() const{ return m_actionSummaries; }
    inline bool ActionSummariesHasBeenSet() const { return m_actionSummariesHasBeenSet; }
    inline void SetActionSummaries(const Aws::Vector<ActionSummary>& value) { m_actionSummariesHasBeenSet = true; m_actionSummaries = value; }
    inline void SetActionSummaries(Aws::Vector<ActionSummary>&& value) { m_actionSummariesHasBeenSet = true; m_actionSummaries = std::move(value); }
    inline RuleSummary& WithActionSummaries(const Aws::Vector<ActionSummary>& value) { SetActionSummaries(value); return *this;}
    inline RuleSummary& WithActionSummaries(Aws::Vector<ActionSummary>&& value) { SetActionSummaries(std::move(value)); return *this;}
    inline RuleSummary& AddActionSummaries(const ActionSummary& value) { m_actionSummariesHasBeenSet = true; m_actionSummaries.push_back(value); return *this; }
    inline RuleSummary& AddActionSummaries(ActionSummary&& value) { m_actionSummariesHasBeenSet = true; m_actionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the rule was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline RuleSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline RuleSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the rule was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline RuleSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline RuleSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet = false;

    EventSourceName m_eventSourceName;
    bool m_eventSourceNameHasBeenSet = false;

    RulePublishStatus m_publishStatus;
    bool m_publishStatusHasBeenSet = false;

    Aws::Vector<ActionSummary> m_actionSummaries;
    bool m_actionSummariesHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

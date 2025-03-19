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
    AWS_CONNECT_API RuleSummary() = default;
    AWS_CONNECT_API RuleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RuleSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the rule.</p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    RuleSummary& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
    inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
    template<typename RuleArnT = Aws::String>
    void SetRuleArn(RuleArnT&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::forward<RuleArnT>(value); }
    template<typename RuleArnT = Aws::String>
    RuleSummary& WithRuleArn(RuleArnT&& value) { SetRuleArn(std::forward<RuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event source.</p>
     */
    inline EventSourceName GetEventSourceName() const { return m_eventSourceName; }
    inline bool EventSourceNameHasBeenSet() const { return m_eventSourceNameHasBeenSet; }
    inline void SetEventSourceName(EventSourceName value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName = value; }
    inline RuleSummary& WithEventSourceName(EventSourceName value) { SetEventSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The publish status of the rule.</p>
     */
    inline RulePublishStatus GetPublishStatus() const { return m_publishStatus; }
    inline bool PublishStatusHasBeenSet() const { return m_publishStatusHasBeenSet; }
    inline void SetPublishStatus(RulePublishStatus value) { m_publishStatusHasBeenSet = true; m_publishStatus = value; }
    inline RuleSummary& WithPublishStatus(RulePublishStatus value) { SetPublishStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ActionTypes associated with a rule. </p>
     */
    inline const Aws::Vector<ActionSummary>& GetActionSummaries() const { return m_actionSummaries; }
    inline bool ActionSummariesHasBeenSet() const { return m_actionSummariesHasBeenSet; }
    template<typename ActionSummariesT = Aws::Vector<ActionSummary>>
    void SetActionSummaries(ActionSummariesT&& value) { m_actionSummariesHasBeenSet = true; m_actionSummaries = std::forward<ActionSummariesT>(value); }
    template<typename ActionSummariesT = Aws::Vector<ActionSummary>>
    RuleSummary& WithActionSummaries(ActionSummariesT&& value) { SetActionSummaries(std::forward<ActionSummariesT>(value)); return *this;}
    template<typename ActionSummariesT = ActionSummary>
    RuleSummary& AddActionSummaries(ActionSummariesT&& value) { m_actionSummariesHasBeenSet = true; m_actionSummaries.emplace_back(std::forward<ActionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the rule was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    RuleSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the rule was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    RuleSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet = false;

    EventSourceName m_eventSourceName{EventSourceName::NOT_SET};
    bool m_eventSourceNameHasBeenSet = false;

    RulePublishStatus m_publishStatus{RulePublishStatus::NOT_SET};
    bool m_publishStatusHasBeenSet = false;

    Aws::Vector<ActionSummary> m_actionSummaries;
    bool m_actionSummariesHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

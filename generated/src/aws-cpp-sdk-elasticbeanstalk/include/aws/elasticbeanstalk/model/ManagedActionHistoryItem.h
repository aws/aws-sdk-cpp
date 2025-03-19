/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ActionType.h>
#include <aws/elasticbeanstalk/model/FailureType.h>
#include <aws/elasticbeanstalk/model/ActionHistoryStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>The record of a completed or failed managed action.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ManagedActionHistoryItem">AWS
   * API Reference</a></p>
   */
  class ManagedActionHistoryItem
  {
  public:
    AWS_ELASTICBEANSTALK_API ManagedActionHistoryItem() = default;
    AWS_ELASTICBEANSTALK_API ManagedActionHistoryItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ManagedActionHistoryItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique identifier for the managed action.</p>
     */
    inline const Aws::String& GetActionId() const { return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    ManagedActionHistoryItem& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the managed action.</p>
     */
    inline ActionType GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(ActionType value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline ManagedActionHistoryItem& WithActionType(ActionType value) { SetActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the managed action.</p>
     */
    inline const Aws::String& GetActionDescription() const { return m_actionDescription; }
    inline bool ActionDescriptionHasBeenSet() const { return m_actionDescriptionHasBeenSet; }
    template<typename ActionDescriptionT = Aws::String>
    void SetActionDescription(ActionDescriptionT&& value) { m_actionDescriptionHasBeenSet = true; m_actionDescription = std::forward<ActionDescriptionT>(value); }
    template<typename ActionDescriptionT = Aws::String>
    ManagedActionHistoryItem& WithActionDescription(ActionDescriptionT&& value) { SetActionDescription(std::forward<ActionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action failed, the type of failure.</p>
     */
    inline FailureType GetFailureType() const { return m_failureType; }
    inline bool FailureTypeHasBeenSet() const { return m_failureTypeHasBeenSet; }
    inline void SetFailureType(FailureType value) { m_failureTypeHasBeenSet = true; m_failureType = value; }
    inline ManagedActionHistoryItem& WithFailureType(FailureType value) { SetFailureType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the action.</p>
     */
    inline ActionHistoryStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ActionHistoryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ManagedActionHistoryItem& WithStatus(ActionHistoryStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action failed, a description of the failure.</p>
     */
    inline const Aws::String& GetFailureDescription() const { return m_failureDescription; }
    inline bool FailureDescriptionHasBeenSet() const { return m_failureDescriptionHasBeenSet; }
    template<typename FailureDescriptionT = Aws::String>
    void SetFailureDescription(FailureDescriptionT&& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = std::forward<FailureDescriptionT>(value); }
    template<typename FailureDescriptionT = Aws::String>
    ManagedActionHistoryItem& WithFailureDescription(FailureDescriptionT&& value) { SetFailureDescription(std::forward<FailureDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the action started executing.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutedTime() const { return m_executedTime; }
    inline bool ExecutedTimeHasBeenSet() const { return m_executedTimeHasBeenSet; }
    template<typename ExecutedTimeT = Aws::Utils::DateTime>
    void SetExecutedTime(ExecutedTimeT&& value) { m_executedTimeHasBeenSet = true; m_executedTime = std::forward<ExecutedTimeT>(value); }
    template<typename ExecutedTimeT = Aws::Utils::DateTime>
    ManagedActionHistoryItem& WithExecutedTime(ExecutedTimeT&& value) { SetExecutedTime(std::forward<ExecutedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the action finished executing.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedTime() const { return m_finishedTime; }
    inline bool FinishedTimeHasBeenSet() const { return m_finishedTimeHasBeenSet; }
    template<typename FinishedTimeT = Aws::Utils::DateTime>
    void SetFinishedTime(FinishedTimeT&& value) { m_finishedTimeHasBeenSet = true; m_finishedTime = std::forward<FinishedTimeT>(value); }
    template<typename FinishedTimeT = Aws::Utils::DateTime>
    ManagedActionHistoryItem& WithFinishedTime(FinishedTimeT&& value) { SetFinishedTime(std::forward<FinishedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    ActionType m_actionType{ActionType::NOT_SET};
    bool m_actionTypeHasBeenSet = false;

    Aws::String m_actionDescription;
    bool m_actionDescriptionHasBeenSet = false;

    FailureType m_failureType{FailureType::NOT_SET};
    bool m_failureTypeHasBeenSet = false;

    ActionHistoryStatus m_status{ActionHistoryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureDescription;
    bool m_failureDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_executedTime{};
    bool m_executedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_finishedTime{};
    bool m_finishedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws

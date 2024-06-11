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
    AWS_ELASTICBEANSTALK_API ManagedActionHistoryItem();
    AWS_ELASTICBEANSTALK_API ManagedActionHistoryItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ManagedActionHistoryItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique identifier for the managed action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }
    inline ManagedActionHistoryItem& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}
    inline ManagedActionHistoryItem& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}
    inline ManagedActionHistoryItem& WithActionId(const char* value) { SetActionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the managed action.</p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(const ActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline void SetActionType(ActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }
    inline ManagedActionHistoryItem& WithActionType(const ActionType& value) { SetActionType(value); return *this;}
    inline ManagedActionHistoryItem& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the managed action.</p>
     */
    inline const Aws::String& GetActionDescription() const{ return m_actionDescription; }
    inline bool ActionDescriptionHasBeenSet() const { return m_actionDescriptionHasBeenSet; }
    inline void SetActionDescription(const Aws::String& value) { m_actionDescriptionHasBeenSet = true; m_actionDescription = value; }
    inline void SetActionDescription(Aws::String&& value) { m_actionDescriptionHasBeenSet = true; m_actionDescription = std::move(value); }
    inline void SetActionDescription(const char* value) { m_actionDescriptionHasBeenSet = true; m_actionDescription.assign(value); }
    inline ManagedActionHistoryItem& WithActionDescription(const Aws::String& value) { SetActionDescription(value); return *this;}
    inline ManagedActionHistoryItem& WithActionDescription(Aws::String&& value) { SetActionDescription(std::move(value)); return *this;}
    inline ManagedActionHistoryItem& WithActionDescription(const char* value) { SetActionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action failed, the type of failure.</p>
     */
    inline const FailureType& GetFailureType() const{ return m_failureType; }
    inline bool FailureTypeHasBeenSet() const { return m_failureTypeHasBeenSet; }
    inline void SetFailureType(const FailureType& value) { m_failureTypeHasBeenSet = true; m_failureType = value; }
    inline void SetFailureType(FailureType&& value) { m_failureTypeHasBeenSet = true; m_failureType = std::move(value); }
    inline ManagedActionHistoryItem& WithFailureType(const FailureType& value) { SetFailureType(value); return *this;}
    inline ManagedActionHistoryItem& WithFailureType(FailureType&& value) { SetFailureType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the action.</p>
     */
    inline const ActionHistoryStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ActionHistoryStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ActionHistoryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ManagedActionHistoryItem& WithStatus(const ActionHistoryStatus& value) { SetStatus(value); return *this;}
    inline ManagedActionHistoryItem& WithStatus(ActionHistoryStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the action failed, a description of the failure.</p>
     */
    inline const Aws::String& GetFailureDescription() const{ return m_failureDescription; }
    inline bool FailureDescriptionHasBeenSet() const { return m_failureDescriptionHasBeenSet; }
    inline void SetFailureDescription(const Aws::String& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = value; }
    inline void SetFailureDescription(Aws::String&& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = std::move(value); }
    inline void SetFailureDescription(const char* value) { m_failureDescriptionHasBeenSet = true; m_failureDescription.assign(value); }
    inline ManagedActionHistoryItem& WithFailureDescription(const Aws::String& value) { SetFailureDescription(value); return *this;}
    inline ManagedActionHistoryItem& WithFailureDescription(Aws::String&& value) { SetFailureDescription(std::move(value)); return *this;}
    inline ManagedActionHistoryItem& WithFailureDescription(const char* value) { SetFailureDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the action started executing.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutedTime() const{ return m_executedTime; }
    inline bool ExecutedTimeHasBeenSet() const { return m_executedTimeHasBeenSet; }
    inline void SetExecutedTime(const Aws::Utils::DateTime& value) { m_executedTimeHasBeenSet = true; m_executedTime = value; }
    inline void SetExecutedTime(Aws::Utils::DateTime&& value) { m_executedTimeHasBeenSet = true; m_executedTime = std::move(value); }
    inline ManagedActionHistoryItem& WithExecutedTime(const Aws::Utils::DateTime& value) { SetExecutedTime(value); return *this;}
    inline ManagedActionHistoryItem& WithExecutedTime(Aws::Utils::DateTime&& value) { SetExecutedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the action finished executing.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedTime() const{ return m_finishedTime; }
    inline bool FinishedTimeHasBeenSet() const { return m_finishedTimeHasBeenSet; }
    inline void SetFinishedTime(const Aws::Utils::DateTime& value) { m_finishedTimeHasBeenSet = true; m_finishedTime = value; }
    inline void SetFinishedTime(Aws::Utils::DateTime&& value) { m_finishedTimeHasBeenSet = true; m_finishedTime = std::move(value); }
    inline ManagedActionHistoryItem& WithFinishedTime(const Aws::Utils::DateTime& value) { SetFinishedTime(value); return *this;}
    inline ManagedActionHistoryItem& WithFinishedTime(Aws::Utils::DateTime&& value) { SetFinishedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    ActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    Aws::String m_actionDescription;
    bool m_actionDescriptionHasBeenSet = false;

    FailureType m_failureType;
    bool m_failureTypeHasBeenSet = false;

    ActionHistoryStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureDescription;
    bool m_failureDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_executedTime;
    bool m_executedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_finishedTime;
    bool m_finishedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ActionType.h>
#include <aws/elasticbeanstalk/model/ActionStatus.h>
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
   * <p>The record of an upcoming or in-progress managed action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ManagedAction">AWS
   * API Reference</a></p>
   */
  class ManagedAction
  {
  public:
    AWS_ELASTICBEANSTALK_API ManagedAction() = default;
    AWS_ELASTICBEANSTALK_API ManagedAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ManagedAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    ManagedAction& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
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
    ManagedAction& WithActionDescription(ActionDescriptionT&& value) { SetActionDescription(std::forward<ActionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of managed action.</p>
     */
    inline ActionType GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(ActionType value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline ManagedAction& WithActionType(ActionType value) { SetActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the managed action. If the action is <code>Scheduled</code>,
     * you can apply it immediately with <a>ApplyEnvironmentManagedAction</a>.</p>
     */
    inline ActionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ActionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ManagedAction& WithStatus(ActionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the maintenance window in which the managed action will
     * execute.</p>
     */
    inline const Aws::Utils::DateTime& GetWindowStartTime() const { return m_windowStartTime; }
    inline bool WindowStartTimeHasBeenSet() const { return m_windowStartTimeHasBeenSet; }
    template<typename WindowStartTimeT = Aws::Utils::DateTime>
    void SetWindowStartTime(WindowStartTimeT&& value) { m_windowStartTimeHasBeenSet = true; m_windowStartTime = std::forward<WindowStartTimeT>(value); }
    template<typename WindowStartTimeT = Aws::Utils::DateTime>
    ManagedAction& WithWindowStartTime(WindowStartTimeT&& value) { SetWindowStartTime(std::forward<WindowStartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_actionDescription;
    bool m_actionDescriptionHasBeenSet = false;

    ActionType m_actionType{ActionType::NOT_SET};
    bool m_actionTypeHasBeenSet = false;

    ActionStatus m_status{ActionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_windowStartTime{};
    bool m_windowStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws

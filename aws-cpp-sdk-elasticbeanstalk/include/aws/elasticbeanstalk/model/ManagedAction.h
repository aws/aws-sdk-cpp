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
  class AWS_ELASTICBEANSTALK_API ManagedAction
  {
  public:
    ManagedAction();
    ManagedAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    ManagedAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A unique identifier for the managed action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p>A unique identifier for the managed action.</p>
     */
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }

    /**
     * <p>A unique identifier for the managed action.</p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }

    /**
     * <p>A unique identifier for the managed action.</p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }

    /**
     * <p>A unique identifier for the managed action.</p>
     */
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }

    /**
     * <p>A unique identifier for the managed action.</p>
     */
    inline ManagedAction& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p>A unique identifier for the managed action.</p>
     */
    inline ManagedAction& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the managed action.</p>
     */
    inline ManagedAction& WithActionId(const char* value) { SetActionId(value); return *this;}


    /**
     * <p>A description of the managed action.</p>
     */
    inline const Aws::String& GetActionDescription() const{ return m_actionDescription; }

    /**
     * <p>A description of the managed action.</p>
     */
    inline bool ActionDescriptionHasBeenSet() const { return m_actionDescriptionHasBeenSet; }

    /**
     * <p>A description of the managed action.</p>
     */
    inline void SetActionDescription(const Aws::String& value) { m_actionDescriptionHasBeenSet = true; m_actionDescription = value; }

    /**
     * <p>A description of the managed action.</p>
     */
    inline void SetActionDescription(Aws::String&& value) { m_actionDescriptionHasBeenSet = true; m_actionDescription = std::move(value); }

    /**
     * <p>A description of the managed action.</p>
     */
    inline void SetActionDescription(const char* value) { m_actionDescriptionHasBeenSet = true; m_actionDescription.assign(value); }

    /**
     * <p>A description of the managed action.</p>
     */
    inline ManagedAction& WithActionDescription(const Aws::String& value) { SetActionDescription(value); return *this;}

    /**
     * <p>A description of the managed action.</p>
     */
    inline ManagedAction& WithActionDescription(Aws::String&& value) { SetActionDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the managed action.</p>
     */
    inline ManagedAction& WithActionDescription(const char* value) { SetActionDescription(value); return *this;}


    /**
     * <p>The type of managed action.</p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>The type of managed action.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The type of managed action.</p>
     */
    inline void SetActionType(const ActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The type of managed action.</p>
     */
    inline void SetActionType(ActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The type of managed action.</p>
     */
    inline ManagedAction& WithActionType(const ActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>The type of managed action.</p>
     */
    inline ManagedAction& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p>The status of the managed action. If the action is <code>Scheduled</code>,
     * you can apply it immediately with <a>ApplyEnvironmentManagedAction</a>.</p>
     */
    inline const ActionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the managed action. If the action is <code>Scheduled</code>,
     * you can apply it immediately with <a>ApplyEnvironmentManagedAction</a>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the managed action. If the action is <code>Scheduled</code>,
     * you can apply it immediately with <a>ApplyEnvironmentManagedAction</a>.</p>
     */
    inline void SetStatus(const ActionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the managed action. If the action is <code>Scheduled</code>,
     * you can apply it immediately with <a>ApplyEnvironmentManagedAction</a>.</p>
     */
    inline void SetStatus(ActionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the managed action. If the action is <code>Scheduled</code>,
     * you can apply it immediately with <a>ApplyEnvironmentManagedAction</a>.</p>
     */
    inline ManagedAction& WithStatus(const ActionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the managed action. If the action is <code>Scheduled</code>,
     * you can apply it immediately with <a>ApplyEnvironmentManagedAction</a>.</p>
     */
    inline ManagedAction& WithStatus(ActionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The start time of the maintenance window in which the managed action will
     * execute.</p>
     */
    inline const Aws::Utils::DateTime& GetWindowStartTime() const{ return m_windowStartTime; }

    /**
     * <p>The start time of the maintenance window in which the managed action will
     * execute.</p>
     */
    inline bool WindowStartTimeHasBeenSet() const { return m_windowStartTimeHasBeenSet; }

    /**
     * <p>The start time of the maintenance window in which the managed action will
     * execute.</p>
     */
    inline void SetWindowStartTime(const Aws::Utils::DateTime& value) { m_windowStartTimeHasBeenSet = true; m_windowStartTime = value; }

    /**
     * <p>The start time of the maintenance window in which the managed action will
     * execute.</p>
     */
    inline void SetWindowStartTime(Aws::Utils::DateTime&& value) { m_windowStartTimeHasBeenSet = true; m_windowStartTime = std::move(value); }

    /**
     * <p>The start time of the maintenance window in which the managed action will
     * execute.</p>
     */
    inline ManagedAction& WithWindowStartTime(const Aws::Utils::DateTime& value) { SetWindowStartTime(value); return *this;}

    /**
     * <p>The start time of the maintenance window in which the managed action will
     * execute.</p>
     */
    inline ManagedAction& WithWindowStartTime(Aws::Utils::DateTime&& value) { SetWindowStartTime(std::move(value)); return *this;}

  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet;

    Aws::String m_actionDescription;
    bool m_actionDescriptionHasBeenSet;

    ActionType m_actionType;
    bool m_actionTypeHasBeenSet;

    ActionStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_windowStartTime;
    bool m_windowStartTimeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws

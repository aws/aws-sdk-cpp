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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/AutoRollbackEvent.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about a configuration for automatically rolling back to a
   * previous version of an application revision when a deployment is not completed
   * successfully.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/AutoRollbackConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API AutoRollbackConfiguration
  {
  public:
    AutoRollbackConfiguration();
    AutoRollbackConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AutoRollbackConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether a defined automatic rollback configuration is currently
     * enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether a defined automatic rollback configuration is currently
     * enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether a defined automatic rollback configuration is currently
     * enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether a defined automatic rollback configuration is currently
     * enabled.</p>
     */
    inline AutoRollbackConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The event type or types that trigger a rollback.</p>
     */
    inline const Aws::Vector<AutoRollbackEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>The event type or types that trigger a rollback.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>The event type or types that trigger a rollback.</p>
     */
    inline void SetEvents(const Aws::Vector<AutoRollbackEvent>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>The event type or types that trigger a rollback.</p>
     */
    inline void SetEvents(Aws::Vector<AutoRollbackEvent>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>The event type or types that trigger a rollback.</p>
     */
    inline AutoRollbackConfiguration& WithEvents(const Aws::Vector<AutoRollbackEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>The event type or types that trigger a rollback.</p>
     */
    inline AutoRollbackConfiguration& WithEvents(Aws::Vector<AutoRollbackEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>The event type or types that trigger a rollback.</p>
     */
    inline AutoRollbackConfiguration& AddEvents(const AutoRollbackEvent& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>The event type or types that trigger a rollback.</p>
     */
    inline AutoRollbackConfiguration& AddEvents(AutoRollbackEvent&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::Vector<AutoRollbackEvent> m_events;
    bool m_eventsHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws

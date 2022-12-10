/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AutoRollbackConfiguration
  {
  public:
    AWS_CODEDEPLOY_API AutoRollbackConfiguration();
    AWS_CODEDEPLOY_API AutoRollbackConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API AutoRollbackConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_enabledHasBeenSet = false;

    Aws::Vector<AutoRollbackEvent> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/EventType.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>Describes a data repository association's automatic export policy. The
   * <code>AutoExportPolicy</code> defines the types of updated objects on the file
   * system that will be automatically exported to the data repository. As you
   * create, modify, or delete files, Amazon FSx for Lustre automatically exports the
   * defined changes asynchronously once your application finishes modifying the
   * file.</p> <p>This <code>AutoExportPolicy</code> is supported only for Amazon FSx
   * for Lustre file systems with the <code>Persistent_2</code> deployment
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/AutoExportPolicy">AWS
   * API Reference</a></p>
   */
  class AutoExportPolicy
  {
  public:
    AWS_FSX_API AutoExportPolicy();
    AWS_FSX_API AutoExportPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API AutoExportPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>AutoExportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - New files and directories are automatically
     * exported to the data repository as they are added to the file system.</p> </li>
     * <li> <p> <code>CHANGED</code> - Changes to files and directories on the file
     * system are automatically exported to the data repository.</p> </li> <li> <p>
     * <code>DELETED</code> - Files and directories are automatically deleted on the
     * data repository when they are deleted on the file system.</p> </li> </ul> <p>You
     * can define any combination of event types for your
     * <code>AutoExportPolicy</code>.</p>
     */
    inline const Aws::Vector<EventType>& GetEvents() const{ return m_events; }

    /**
     * <p>The <code>AutoExportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - New files and directories are automatically
     * exported to the data repository as they are added to the file system.</p> </li>
     * <li> <p> <code>CHANGED</code> - Changes to files and directories on the file
     * system are automatically exported to the data repository.</p> </li> <li> <p>
     * <code>DELETED</code> - Files and directories are automatically deleted on the
     * data repository when they are deleted on the file system.</p> </li> </ul> <p>You
     * can define any combination of event types for your
     * <code>AutoExportPolicy</code>.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>The <code>AutoExportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - New files and directories are automatically
     * exported to the data repository as they are added to the file system.</p> </li>
     * <li> <p> <code>CHANGED</code> - Changes to files and directories on the file
     * system are automatically exported to the data repository.</p> </li> <li> <p>
     * <code>DELETED</code> - Files and directories are automatically deleted on the
     * data repository when they are deleted on the file system.</p> </li> </ul> <p>You
     * can define any combination of event types for your
     * <code>AutoExportPolicy</code>.</p>
     */
    inline void SetEvents(const Aws::Vector<EventType>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>The <code>AutoExportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - New files and directories are automatically
     * exported to the data repository as they are added to the file system.</p> </li>
     * <li> <p> <code>CHANGED</code> - Changes to files and directories on the file
     * system are automatically exported to the data repository.</p> </li> <li> <p>
     * <code>DELETED</code> - Files and directories are automatically deleted on the
     * data repository when they are deleted on the file system.</p> </li> </ul> <p>You
     * can define any combination of event types for your
     * <code>AutoExportPolicy</code>.</p>
     */
    inline void SetEvents(Aws::Vector<EventType>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>The <code>AutoExportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - New files and directories are automatically
     * exported to the data repository as they are added to the file system.</p> </li>
     * <li> <p> <code>CHANGED</code> - Changes to files and directories on the file
     * system are automatically exported to the data repository.</p> </li> <li> <p>
     * <code>DELETED</code> - Files and directories are automatically deleted on the
     * data repository when they are deleted on the file system.</p> </li> </ul> <p>You
     * can define any combination of event types for your
     * <code>AutoExportPolicy</code>.</p>
     */
    inline AutoExportPolicy& WithEvents(const Aws::Vector<EventType>& value) { SetEvents(value); return *this;}

    /**
     * <p>The <code>AutoExportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - New files and directories are automatically
     * exported to the data repository as they are added to the file system.</p> </li>
     * <li> <p> <code>CHANGED</code> - Changes to files and directories on the file
     * system are automatically exported to the data repository.</p> </li> <li> <p>
     * <code>DELETED</code> - Files and directories are automatically deleted on the
     * data repository when they are deleted on the file system.</p> </li> </ul> <p>You
     * can define any combination of event types for your
     * <code>AutoExportPolicy</code>.</p>
     */
    inline AutoExportPolicy& WithEvents(Aws::Vector<EventType>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>The <code>AutoExportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - New files and directories are automatically
     * exported to the data repository as they are added to the file system.</p> </li>
     * <li> <p> <code>CHANGED</code> - Changes to files and directories on the file
     * system are automatically exported to the data repository.</p> </li> <li> <p>
     * <code>DELETED</code> - Files and directories are automatically deleted on the
     * data repository when they are deleted on the file system.</p> </li> </ul> <p>You
     * can define any combination of event types for your
     * <code>AutoExportPolicy</code>.</p>
     */
    inline AutoExportPolicy& AddEvents(const EventType& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>The <code>AutoExportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - New files and directories are automatically
     * exported to the data repository as they are added to the file system.</p> </li>
     * <li> <p> <code>CHANGED</code> - Changes to files and directories on the file
     * system are automatically exported to the data repository.</p> </li> <li> <p>
     * <code>DELETED</code> - Files and directories are automatically deleted on the
     * data repository when they are deleted on the file system.</p> </li> </ul> <p>You
     * can define any combination of event types for your
     * <code>AutoExportPolicy</code>.</p>
     */
    inline AutoExportPolicy& AddEvents(EventType&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EventType> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws

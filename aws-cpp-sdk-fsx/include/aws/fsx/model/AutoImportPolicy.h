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
   * <p>Describes the data repository association's automatic import policy. The
   * AutoImportPolicy defines how Amazon FSx keeps your file metadata and directory
   * listings up to date by importing changes to your Amazon FSx for Lustre file
   * system as you modify objects in a linked S3 bucket.</p> <p>The
   * <code>AutoImportPolicy</code> is supported only for Amazon FSx for Lustre file
   * systems with the <code>Persistent_2</code> deployment type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/AutoImportPolicy">AWS
   * API Reference</a></p>
   */
  class AutoImportPolicy
  {
  public:
    AWS_FSX_API AutoImportPolicy();
    AWS_FSX_API AutoImportPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API AutoImportPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>AutoImportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - Amazon FSx automatically imports metadata of
     * files added to the linked S3 bucket that do not currently exist in the FSx file
     * system.</p> </li> <li> <p> <code>CHANGED</code> - Amazon FSx automatically
     * updates file metadata and invalidates existing file content on the file system
     * as files change in the data repository.</p> </li> <li> <p> <code>DELETED</code>
     * - Amazon FSx automatically deletes files on the file system as corresponding
     * files are deleted in the data repository.</p> </li> </ul> <p>You can define any
     * combination of event types for your <code>AutoImportPolicy</code>.</p>
     */
    inline const Aws::Vector<EventType>& GetEvents() const{ return m_events; }

    /**
     * <p>The <code>AutoImportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - Amazon FSx automatically imports metadata of
     * files added to the linked S3 bucket that do not currently exist in the FSx file
     * system.</p> </li> <li> <p> <code>CHANGED</code> - Amazon FSx automatically
     * updates file metadata and invalidates existing file content on the file system
     * as files change in the data repository.</p> </li> <li> <p> <code>DELETED</code>
     * - Amazon FSx automatically deletes files on the file system as corresponding
     * files are deleted in the data repository.</p> </li> </ul> <p>You can define any
     * combination of event types for your <code>AutoImportPolicy</code>.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>The <code>AutoImportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - Amazon FSx automatically imports metadata of
     * files added to the linked S3 bucket that do not currently exist in the FSx file
     * system.</p> </li> <li> <p> <code>CHANGED</code> - Amazon FSx automatically
     * updates file metadata and invalidates existing file content on the file system
     * as files change in the data repository.</p> </li> <li> <p> <code>DELETED</code>
     * - Amazon FSx automatically deletes files on the file system as corresponding
     * files are deleted in the data repository.</p> </li> </ul> <p>You can define any
     * combination of event types for your <code>AutoImportPolicy</code>.</p>
     */
    inline void SetEvents(const Aws::Vector<EventType>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>The <code>AutoImportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - Amazon FSx automatically imports metadata of
     * files added to the linked S3 bucket that do not currently exist in the FSx file
     * system.</p> </li> <li> <p> <code>CHANGED</code> - Amazon FSx automatically
     * updates file metadata and invalidates existing file content on the file system
     * as files change in the data repository.</p> </li> <li> <p> <code>DELETED</code>
     * - Amazon FSx automatically deletes files on the file system as corresponding
     * files are deleted in the data repository.</p> </li> </ul> <p>You can define any
     * combination of event types for your <code>AutoImportPolicy</code>.</p>
     */
    inline void SetEvents(Aws::Vector<EventType>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>The <code>AutoImportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - Amazon FSx automatically imports metadata of
     * files added to the linked S3 bucket that do not currently exist in the FSx file
     * system.</p> </li> <li> <p> <code>CHANGED</code> - Amazon FSx automatically
     * updates file metadata and invalidates existing file content on the file system
     * as files change in the data repository.</p> </li> <li> <p> <code>DELETED</code>
     * - Amazon FSx automatically deletes files on the file system as corresponding
     * files are deleted in the data repository.</p> </li> </ul> <p>You can define any
     * combination of event types for your <code>AutoImportPolicy</code>.</p>
     */
    inline AutoImportPolicy& WithEvents(const Aws::Vector<EventType>& value) { SetEvents(value); return *this;}

    /**
     * <p>The <code>AutoImportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - Amazon FSx automatically imports metadata of
     * files added to the linked S3 bucket that do not currently exist in the FSx file
     * system.</p> </li> <li> <p> <code>CHANGED</code> - Amazon FSx automatically
     * updates file metadata and invalidates existing file content on the file system
     * as files change in the data repository.</p> </li> <li> <p> <code>DELETED</code>
     * - Amazon FSx automatically deletes files on the file system as corresponding
     * files are deleted in the data repository.</p> </li> </ul> <p>You can define any
     * combination of event types for your <code>AutoImportPolicy</code>.</p>
     */
    inline AutoImportPolicy& WithEvents(Aws::Vector<EventType>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>The <code>AutoImportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - Amazon FSx automatically imports metadata of
     * files added to the linked S3 bucket that do not currently exist in the FSx file
     * system.</p> </li> <li> <p> <code>CHANGED</code> - Amazon FSx automatically
     * updates file metadata and invalidates existing file content on the file system
     * as files change in the data repository.</p> </li> <li> <p> <code>DELETED</code>
     * - Amazon FSx automatically deletes files on the file system as corresponding
     * files are deleted in the data repository.</p> </li> </ul> <p>You can define any
     * combination of event types for your <code>AutoImportPolicy</code>.</p>
     */
    inline AutoImportPolicy& AddEvents(const EventType& value) { m_eventsHasBeenSet = true; m_events.push_back(value); return *this; }

    /**
     * <p>The <code>AutoImportPolicy</code> can have the following event values:</p>
     * <ul> <li> <p> <code>NEW</code> - Amazon FSx automatically imports metadata of
     * files added to the linked S3 bucket that do not currently exist in the FSx file
     * system.</p> </li> <li> <p> <code>CHANGED</code> - Amazon FSx automatically
     * updates file metadata and invalidates existing file content on the file system
     * as files change in the data repository.</p> </li> <li> <p> <code>DELETED</code>
     * - Amazon FSx automatically deletes files on the file system as corresponding
     * files are deleted in the data repository.</p> </li> </ul> <p>You can define any
     * combination of event types for your <code>AutoImportPolicy</code>.</p>
     */
    inline AutoImportPolicy& AddEvents(EventType&& value) { m_eventsHasBeenSet = true; m_events.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EventType> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws

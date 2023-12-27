﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodeStarconnections
{
namespace Model
{

  /**
   * <p>Information about a resource sync event for the resource associated with a
   * sync configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/ResourceSyncEvent">AWS
   * API Reference</a></p>
   */
  class ResourceSyncEvent
  {
  public:
    AWS_CODESTARCONNECTIONS_API ResourceSyncEvent();
    AWS_CODESTARCONNECTIONS_API ResourceSyncEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API ResourceSyncEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The event for a resource sync event.</p>
     */
    inline const Aws::String& GetEvent() const{ return m_event; }

    /**
     * <p>The event for a resource sync event.</p>
     */
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    /**
     * <p>The event for a resource sync event.</p>
     */
    inline void SetEvent(const Aws::String& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>The event for a resource sync event.</p>
     */
    inline void SetEvent(Aws::String&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    /**
     * <p>The event for a resource sync event.</p>
     */
    inline void SetEvent(const char* value) { m_eventHasBeenSet = true; m_event.assign(value); }

    /**
     * <p>The event for a resource sync event.</p>
     */
    inline ResourceSyncEvent& WithEvent(const Aws::String& value) { SetEvent(value); return *this;}

    /**
     * <p>The event for a resource sync event.</p>
     */
    inline ResourceSyncEvent& WithEvent(Aws::String&& value) { SetEvent(std::move(value)); return *this;}

    /**
     * <p>The event for a resource sync event.</p>
     */
    inline ResourceSyncEvent& WithEvent(const char* value) { SetEvent(value); return *this;}


    /**
     * <p>The ID for a resource sync event.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The ID for a resource sync event.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The ID for a resource sync event.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The ID for a resource sync event.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The ID for a resource sync event.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The ID for a resource sync event.</p>
     */
    inline ResourceSyncEvent& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The ID for a resource sync event.</p>
     */
    inline ResourceSyncEvent& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The ID for a resource sync event.</p>
     */
    inline ResourceSyncEvent& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The time that a resource sync event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetTime() const{ return m_time; }

    /**
     * <p>The time that a resource sync event occurred.</p>
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * <p>The time that a resource sync event occurred.</p>
     */
    inline void SetTime(const Aws::Utils::DateTime& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>The time that a resource sync event occurred.</p>
     */
    inline void SetTime(Aws::Utils::DateTime&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * <p>The time that a resource sync event occurred.</p>
     */
    inline ResourceSyncEvent& WithTime(const Aws::Utils::DateTime& value) { SetTime(value); return *this;}

    /**
     * <p>The time that a resource sync event occurred.</p>
     */
    inline ResourceSyncEvent& WithTime(Aws::Utils::DateTime&& value) { SetTime(std::move(value)); return *this;}


    /**
     * <p>The type of resource sync event.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of resource sync event.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of resource sync event.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of resource sync event.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of resource sync event.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of resource sync event.</p>
     */
    inline ResourceSyncEvent& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of resource sync event.</p>
     */
    inline ResourceSyncEvent& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of resource sync event.</p>
     */
    inline ResourceSyncEvent& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_event;
    bool m_eventHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::Utils::DateTime m_time;
    bool m_timeHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws

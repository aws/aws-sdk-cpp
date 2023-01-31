/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail-data/CloudTrailData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudTrailData
{
namespace Model
{

  /**
   * <p>A response that includes successful and failed event results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-data-2021-08-11/AuditEventResultEntry">AWS
   * API Reference</a></p>
   */
  class AuditEventResultEntry
  {
  public:
    AWS_CLOUDTRAILDATA_API AuditEventResultEntry();
    AWS_CLOUDTRAILDATA_API AuditEventResultEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAILDATA_API AuditEventResultEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAILDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The event ID assigned by CloudTrail.</p>
     */
    inline const Aws::String& GetEventID() const{ return m_eventID; }

    /**
     * <p>The event ID assigned by CloudTrail.</p>
     */
    inline bool EventIDHasBeenSet() const { return m_eventIDHasBeenSet; }

    /**
     * <p>The event ID assigned by CloudTrail.</p>
     */
    inline void SetEventID(const Aws::String& value) { m_eventIDHasBeenSet = true; m_eventID = value; }

    /**
     * <p>The event ID assigned by CloudTrail.</p>
     */
    inline void SetEventID(Aws::String&& value) { m_eventIDHasBeenSet = true; m_eventID = std::move(value); }

    /**
     * <p>The event ID assigned by CloudTrail.</p>
     */
    inline void SetEventID(const char* value) { m_eventIDHasBeenSet = true; m_eventID.assign(value); }

    /**
     * <p>The event ID assigned by CloudTrail.</p>
     */
    inline AuditEventResultEntry& WithEventID(const Aws::String& value) { SetEventID(value); return *this;}

    /**
     * <p>The event ID assigned by CloudTrail.</p>
     */
    inline AuditEventResultEntry& WithEventID(Aws::String&& value) { SetEventID(std::move(value)); return *this;}

    /**
     * <p>The event ID assigned by CloudTrail.</p>
     */
    inline AuditEventResultEntry& WithEventID(const char* value) { SetEventID(value); return *this;}


    /**
     * <p>The original event ID from the source event.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The original event ID from the source event.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The original event ID from the source event.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The original event ID from the source event.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The original event ID from the source event.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The original event ID from the source event.</p>
     */
    inline AuditEventResultEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The original event ID from the source event.</p>
     */
    inline AuditEventResultEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The original event ID from the source event.</p>
     */
    inline AuditEventResultEntry& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_eventID;
    bool m_eventIDHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrailData
} // namespace Aws

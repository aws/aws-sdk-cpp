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
   * <p>An event from a source outside of Amazon Web Services that you want
   * CloudTrail to log.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-data-2021-08-11/AuditEvent">AWS
   * API Reference</a></p>
   */
  class AuditEvent
  {
  public:
    AWS_CLOUDTRAILDATA_API AuditEvent();
    AWS_CLOUDTRAILDATA_API AuditEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAILDATA_API AuditEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAILDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content of an audit event that comes from the event, such as
     * <code>userIdentity</code>, <code>userAgent</code>, and
     * <code>eventSource</code>.</p>
     */
    inline const Aws::String& GetEventData() const{ return m_eventData; }

    /**
     * <p>The content of an audit event that comes from the event, such as
     * <code>userIdentity</code>, <code>userAgent</code>, and
     * <code>eventSource</code>.</p>
     */
    inline bool EventDataHasBeenSet() const { return m_eventDataHasBeenSet; }

    /**
     * <p>The content of an audit event that comes from the event, such as
     * <code>userIdentity</code>, <code>userAgent</code>, and
     * <code>eventSource</code>.</p>
     */
    inline void SetEventData(const Aws::String& value) { m_eventDataHasBeenSet = true; m_eventData = value; }

    /**
     * <p>The content of an audit event that comes from the event, such as
     * <code>userIdentity</code>, <code>userAgent</code>, and
     * <code>eventSource</code>.</p>
     */
    inline void SetEventData(Aws::String&& value) { m_eventDataHasBeenSet = true; m_eventData = std::move(value); }

    /**
     * <p>The content of an audit event that comes from the event, such as
     * <code>userIdentity</code>, <code>userAgent</code>, and
     * <code>eventSource</code>.</p>
     */
    inline void SetEventData(const char* value) { m_eventDataHasBeenSet = true; m_eventData.assign(value); }

    /**
     * <p>The content of an audit event that comes from the event, such as
     * <code>userIdentity</code>, <code>userAgent</code>, and
     * <code>eventSource</code>.</p>
     */
    inline AuditEvent& WithEventData(const Aws::String& value) { SetEventData(value); return *this;}

    /**
     * <p>The content of an audit event that comes from the event, such as
     * <code>userIdentity</code>, <code>userAgent</code>, and
     * <code>eventSource</code>.</p>
     */
    inline AuditEvent& WithEventData(Aws::String&& value) { SetEventData(std::move(value)); return *this;}

    /**
     * <p>The content of an audit event that comes from the event, such as
     * <code>userIdentity</code>, <code>userAgent</code>, and
     * <code>eventSource</code>.</p>
     */
    inline AuditEvent& WithEventData(const char* value) { SetEventData(value); return *this;}


    /**
     * <p>A checksum is a base64-SHA256 algorithm that helps you verify that CloudTrail
     * receives the event that matches with the checksum. Calculate the checksum by
     * running a command like the following:</p> <p> <code>printf %s <i>$eventdata</i>
     * | openssl dgst -binary -sha256 | base64</code> </p>
     */
    inline const Aws::String& GetEventDataChecksum() const{ return m_eventDataChecksum; }

    /**
     * <p>A checksum is a base64-SHA256 algorithm that helps you verify that CloudTrail
     * receives the event that matches with the checksum. Calculate the checksum by
     * running a command like the following:</p> <p> <code>printf %s <i>$eventdata</i>
     * | openssl dgst -binary -sha256 | base64</code> </p>
     */
    inline bool EventDataChecksumHasBeenSet() const { return m_eventDataChecksumHasBeenSet; }

    /**
     * <p>A checksum is a base64-SHA256 algorithm that helps you verify that CloudTrail
     * receives the event that matches with the checksum. Calculate the checksum by
     * running a command like the following:</p> <p> <code>printf %s <i>$eventdata</i>
     * | openssl dgst -binary -sha256 | base64</code> </p>
     */
    inline void SetEventDataChecksum(const Aws::String& value) { m_eventDataChecksumHasBeenSet = true; m_eventDataChecksum = value; }

    /**
     * <p>A checksum is a base64-SHA256 algorithm that helps you verify that CloudTrail
     * receives the event that matches with the checksum. Calculate the checksum by
     * running a command like the following:</p> <p> <code>printf %s <i>$eventdata</i>
     * | openssl dgst -binary -sha256 | base64</code> </p>
     */
    inline void SetEventDataChecksum(Aws::String&& value) { m_eventDataChecksumHasBeenSet = true; m_eventDataChecksum = std::move(value); }

    /**
     * <p>A checksum is a base64-SHA256 algorithm that helps you verify that CloudTrail
     * receives the event that matches with the checksum. Calculate the checksum by
     * running a command like the following:</p> <p> <code>printf %s <i>$eventdata</i>
     * | openssl dgst -binary -sha256 | base64</code> </p>
     */
    inline void SetEventDataChecksum(const char* value) { m_eventDataChecksumHasBeenSet = true; m_eventDataChecksum.assign(value); }

    /**
     * <p>A checksum is a base64-SHA256 algorithm that helps you verify that CloudTrail
     * receives the event that matches with the checksum. Calculate the checksum by
     * running a command like the following:</p> <p> <code>printf %s <i>$eventdata</i>
     * | openssl dgst -binary -sha256 | base64</code> </p>
     */
    inline AuditEvent& WithEventDataChecksum(const Aws::String& value) { SetEventDataChecksum(value); return *this;}

    /**
     * <p>A checksum is a base64-SHA256 algorithm that helps you verify that CloudTrail
     * receives the event that matches with the checksum. Calculate the checksum by
     * running a command like the following:</p> <p> <code>printf %s <i>$eventdata</i>
     * | openssl dgst -binary -sha256 | base64</code> </p>
     */
    inline AuditEvent& WithEventDataChecksum(Aws::String&& value) { SetEventDataChecksum(std::move(value)); return *this;}

    /**
     * <p>A checksum is a base64-SHA256 algorithm that helps you verify that CloudTrail
     * receives the event that matches with the checksum. Calculate the checksum by
     * running a command like the following:</p> <p> <code>printf %s <i>$eventdata</i>
     * | openssl dgst -binary -sha256 | base64</code> </p>
     */
    inline AuditEvent& WithEventDataChecksum(const char* value) { SetEventDataChecksum(value); return *this;}


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
    inline AuditEvent& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The original event ID from the source event.</p>
     */
    inline AuditEvent& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The original event ID from the source event.</p>
     */
    inline AuditEvent& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_eventData;
    bool m_eventDataHasBeenSet = false;

    Aws::String m_eventDataChecksum;
    bool m_eventDataChecksumHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrailData
} // namespace Aws

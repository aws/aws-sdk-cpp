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
    AWS_CLOUDTRAILDATA_API AuditEvent() = default;
    AWS_CLOUDTRAILDATA_API AuditEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAILDATA_API AuditEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAILDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of an audit event that comes from the event, such as
     * <code>userIdentity</code>, <code>userAgent</code>, and
     * <code>eventSource</code>.</p>
     */
    inline const Aws::String& GetEventData() const { return m_eventData; }
    inline bool EventDataHasBeenSet() const { return m_eventDataHasBeenSet; }
    template<typename EventDataT = Aws::String>
    void SetEventData(EventDataT&& value) { m_eventDataHasBeenSet = true; m_eventData = std::forward<EventDataT>(value); }
    template<typename EventDataT = Aws::String>
    AuditEvent& WithEventData(EventDataT&& value) { SetEventData(std::forward<EventDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A checksum is a base64-SHA256 algorithm that helps you verify that CloudTrail
     * receives the event that matches with the checksum. Calculate the checksum by
     * running a command like the following:</p> <p> <code>printf %s <i>$eventdata</i>
     * | openssl dgst -binary -sha256 | base64</code> </p>
     */
    inline const Aws::String& GetEventDataChecksum() const { return m_eventDataChecksum; }
    inline bool EventDataChecksumHasBeenSet() const { return m_eventDataChecksumHasBeenSet; }
    template<typename EventDataChecksumT = Aws::String>
    void SetEventDataChecksum(EventDataChecksumT&& value) { m_eventDataChecksumHasBeenSet = true; m_eventDataChecksum = std::forward<EventDataChecksumT>(value); }
    template<typename EventDataChecksumT = Aws::String>
    AuditEvent& WithEventDataChecksum(EventDataChecksumT&& value) { SetEventDataChecksum(std::forward<EventDataChecksumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original event ID from the source event.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AuditEvent& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
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

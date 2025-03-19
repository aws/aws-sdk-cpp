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
    AWS_CLOUDTRAILDATA_API AuditEventResultEntry() = default;
    AWS_CLOUDTRAILDATA_API AuditEventResultEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAILDATA_API AuditEventResultEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAILDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The event ID assigned by CloudTrail.</p>
     */
    inline const Aws::String& GetEventID() const { return m_eventID; }
    inline bool EventIDHasBeenSet() const { return m_eventIDHasBeenSet; }
    template<typename EventIDT = Aws::String>
    void SetEventID(EventIDT&& value) { m_eventIDHasBeenSet = true; m_eventID = std::forward<EventIDT>(value); }
    template<typename EventIDT = Aws::String>
    AuditEventResultEntry& WithEventID(EventIDT&& value) { SetEventID(std::forward<EventIDT>(value)); return *this;}
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
    AuditEventResultEntry& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventID;
    bool m_eventIDHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrailData
} // namespace Aws

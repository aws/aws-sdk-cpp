/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/AuditEventFieldValueUnion.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Fields for audit event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/AuditEventField">AWS
   * API Reference</a></p>
   */
  class AuditEventField
  {
  public:
    AWS_CONNECTCASES_API AuditEventField() = default;
    AWS_CONNECTCASES_API AuditEventField(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API AuditEventField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier of field in an Audit History entry.</p>
     */
    inline const Aws::String& GetEventFieldId() const { return m_eventFieldId; }
    inline bool EventFieldIdHasBeenSet() const { return m_eventFieldIdHasBeenSet; }
    template<typename EventFieldIdT = Aws::String>
    void SetEventFieldId(EventFieldIdT&& value) { m_eventFieldIdHasBeenSet = true; m_eventFieldId = std::forward<EventFieldIdT>(value); }
    template<typename EventFieldIdT = Aws::String>
    AuditEventField& WithEventFieldId(EventFieldIdT&& value) { SetEventFieldId(std::forward<EventFieldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Union of potential field value types.</p>
     */
    inline const AuditEventFieldValueUnion& GetNewValue() const { return m_newValue; }
    inline bool NewValueHasBeenSet() const { return m_newValueHasBeenSet; }
    template<typename NewValueT = AuditEventFieldValueUnion>
    void SetNewValue(NewValueT&& value) { m_newValueHasBeenSet = true; m_newValue = std::forward<NewValueT>(value); }
    template<typename NewValueT = AuditEventFieldValueUnion>
    AuditEventField& WithNewValue(NewValueT&& value) { SetNewValue(std::forward<NewValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Union of potential field value types.</p>
     */
    inline const AuditEventFieldValueUnion& GetOldValue() const { return m_oldValue; }
    inline bool OldValueHasBeenSet() const { return m_oldValueHasBeenSet; }
    template<typename OldValueT = AuditEventFieldValueUnion>
    void SetOldValue(OldValueT&& value) { m_oldValueHasBeenSet = true; m_oldValue = std::forward<OldValueT>(value); }
    template<typename OldValueT = AuditEventFieldValueUnion>
    AuditEventField& WithOldValue(OldValueT&& value) { SetOldValue(std::forward<OldValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventFieldId;
    bool m_eventFieldIdHasBeenSet = false;

    AuditEventFieldValueUnion m_newValue;
    bool m_newValueHasBeenSet = false;

    AuditEventFieldValueUnion m_oldValue;
    bool m_oldValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws

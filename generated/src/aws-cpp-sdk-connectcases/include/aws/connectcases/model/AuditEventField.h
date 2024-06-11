﻿/**
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
    AWS_CONNECTCASES_API AuditEventField();
    AWS_CONNECTCASES_API AuditEventField(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API AuditEventField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier of field in an Audit History entry.</p>
     */
    inline const Aws::String& GetEventFieldId() const{ return m_eventFieldId; }
    inline bool EventFieldIdHasBeenSet() const { return m_eventFieldIdHasBeenSet; }
    inline void SetEventFieldId(const Aws::String& value) { m_eventFieldIdHasBeenSet = true; m_eventFieldId = value; }
    inline void SetEventFieldId(Aws::String&& value) { m_eventFieldIdHasBeenSet = true; m_eventFieldId = std::move(value); }
    inline void SetEventFieldId(const char* value) { m_eventFieldIdHasBeenSet = true; m_eventFieldId.assign(value); }
    inline AuditEventField& WithEventFieldId(const Aws::String& value) { SetEventFieldId(value); return *this;}
    inline AuditEventField& WithEventFieldId(Aws::String&& value) { SetEventFieldId(std::move(value)); return *this;}
    inline AuditEventField& WithEventFieldId(const char* value) { SetEventFieldId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Union of potential field value types.</p>
     */
    inline const AuditEventFieldValueUnion& GetNewValue() const{ return m_newValue; }
    inline bool NewValueHasBeenSet() const { return m_newValueHasBeenSet; }
    inline void SetNewValue(const AuditEventFieldValueUnion& value) { m_newValueHasBeenSet = true; m_newValue = value; }
    inline void SetNewValue(AuditEventFieldValueUnion&& value) { m_newValueHasBeenSet = true; m_newValue = std::move(value); }
    inline AuditEventField& WithNewValue(const AuditEventFieldValueUnion& value) { SetNewValue(value); return *this;}
    inline AuditEventField& WithNewValue(AuditEventFieldValueUnion&& value) { SetNewValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Union of potential field value types.</p>
     */
    inline const AuditEventFieldValueUnion& GetOldValue() const{ return m_oldValue; }
    inline bool OldValueHasBeenSet() const { return m_oldValueHasBeenSet; }
    inline void SetOldValue(const AuditEventFieldValueUnion& value) { m_oldValueHasBeenSet = true; m_oldValue = value; }
    inline void SetOldValue(AuditEventFieldValueUnion&& value) { m_oldValueHasBeenSet = true; m_oldValue = std::move(value); }
    inline AuditEventField& WithOldValue(const AuditEventFieldValueUnion& value) { SetOldValue(value); return *this;}
    inline AuditEventField& WithOldValue(AuditEventFieldValueUnion&& value) { SetOldValue(std::move(value)); return *this;}
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

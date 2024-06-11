/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/AuditEventPerformedBy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connectcases/model/RelatedItemType.h>
#include <aws/connectcases/model/AuditEventType.h>
#include <aws/connectcases/model/AuditEventField.h>
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
   * <p>Represents the content of a particular audit event.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/AuditEvent">AWS
   * API Reference</a></p>
   */
  class AuditEvent
  {
  public:
    AWS_CONNECTCASES_API AuditEvent();
    AWS_CONNECTCASES_API AuditEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API AuditEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier of a case audit history event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }
    inline AuditEvent& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}
    inline AuditEvent& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}
    inline AuditEvent& WithEventId(const char* value) { SetEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Case Audit History event fields.</p>
     */
    inline const Aws::Vector<AuditEventField>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Vector<AuditEventField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Vector<AuditEventField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline AuditEvent& WithFields(const Aws::Vector<AuditEventField>& value) { SetFields(value); return *this;}
    inline AuditEvent& WithFields(Aws::Vector<AuditEventField>&& value) { SetFields(std::move(value)); return *this;}
    inline AuditEvent& AddFields(const AuditEventField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    inline AuditEvent& AddFields(AuditEventField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information of the user which performed the audit.</p>
     */
    inline const AuditEventPerformedBy& GetPerformedBy() const{ return m_performedBy; }
    inline bool PerformedByHasBeenSet() const { return m_performedByHasBeenSet; }
    inline void SetPerformedBy(const AuditEventPerformedBy& value) { m_performedByHasBeenSet = true; m_performedBy = value; }
    inline void SetPerformedBy(AuditEventPerformedBy&& value) { m_performedByHasBeenSet = true; m_performedBy = std::move(value); }
    inline AuditEvent& WithPerformedBy(const AuditEventPerformedBy& value) { SetPerformedBy(value); return *this;}
    inline AuditEvent& WithPerformedBy(AuditEventPerformedBy&& value) { SetPerformedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which an Audit History event took place.</p>
     */
    inline const Aws::Utils::DateTime& GetPerformedTime() const{ return m_performedTime; }
    inline bool PerformedTimeHasBeenSet() const { return m_performedTimeHasBeenSet; }
    inline void SetPerformedTime(const Aws::Utils::DateTime& value) { m_performedTimeHasBeenSet = true; m_performedTime = value; }
    inline void SetPerformedTime(Aws::Utils::DateTime&& value) { m_performedTimeHasBeenSet = true; m_performedTime = std::move(value); }
    inline AuditEvent& WithPerformedTime(const Aws::Utils::DateTime& value) { SetPerformedTime(value); return *this;}
    inline AuditEvent& WithPerformedTime(Aws::Utils::DateTime&& value) { SetPerformedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Type of the related item.</p>
     */
    inline const RelatedItemType& GetRelatedItemType() const{ return m_relatedItemType; }
    inline bool RelatedItemTypeHasBeenSet() const { return m_relatedItemTypeHasBeenSet; }
    inline void SetRelatedItemType(const RelatedItemType& value) { m_relatedItemTypeHasBeenSet = true; m_relatedItemType = value; }
    inline void SetRelatedItemType(RelatedItemType&& value) { m_relatedItemTypeHasBeenSet = true; m_relatedItemType = std::move(value); }
    inline AuditEvent& WithRelatedItemType(const RelatedItemType& value) { SetRelatedItemType(value); return *this;}
    inline AuditEvent& WithRelatedItemType(RelatedItemType&& value) { SetRelatedItemType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Type of an audit history event.</p>
     */
    inline const AuditEventType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AuditEventType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AuditEventType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AuditEvent& WithType(const AuditEventType& value) { SetType(value); return *this;}
    inline AuditEvent& WithType(AuditEventType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::Vector<AuditEventField> m_fields;
    bool m_fieldsHasBeenSet = false;

    AuditEventPerformedBy m_performedBy;
    bool m_performedByHasBeenSet = false;

    Aws::Utils::DateTime m_performedTime;
    bool m_performedTimeHasBeenSet = false;

    RelatedItemType m_relatedItemType;
    bool m_relatedItemTypeHasBeenSet = false;

    AuditEventType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws

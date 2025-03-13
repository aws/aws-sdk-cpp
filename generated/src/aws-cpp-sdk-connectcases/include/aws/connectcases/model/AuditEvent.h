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
    AWS_CONNECTCASES_API AuditEvent() = default;
    AWS_CONNECTCASES_API AuditEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API AuditEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier of a case audit history event.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    AuditEvent& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Case Audit History event fields.</p>
     */
    inline const Aws::Vector<AuditEventField>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<AuditEventField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<AuditEventField>>
    AuditEvent& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = AuditEventField>
    AuditEvent& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information of the user which performed the audit.</p>
     */
    inline const AuditEventPerformedBy& GetPerformedBy() const { return m_performedBy; }
    inline bool PerformedByHasBeenSet() const { return m_performedByHasBeenSet; }
    template<typename PerformedByT = AuditEventPerformedBy>
    void SetPerformedBy(PerformedByT&& value) { m_performedByHasBeenSet = true; m_performedBy = std::forward<PerformedByT>(value); }
    template<typename PerformedByT = AuditEventPerformedBy>
    AuditEvent& WithPerformedBy(PerformedByT&& value) { SetPerformedBy(std::forward<PerformedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which an Audit History event took place.</p>
     */
    inline const Aws::Utils::DateTime& GetPerformedTime() const { return m_performedTime; }
    inline bool PerformedTimeHasBeenSet() const { return m_performedTimeHasBeenSet; }
    template<typename PerformedTimeT = Aws::Utils::DateTime>
    void SetPerformedTime(PerformedTimeT&& value) { m_performedTimeHasBeenSet = true; m_performedTime = std::forward<PerformedTimeT>(value); }
    template<typename PerformedTimeT = Aws::Utils::DateTime>
    AuditEvent& WithPerformedTime(PerformedTimeT&& value) { SetPerformedTime(std::forward<PerformedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Type of the related item.</p>
     */
    inline RelatedItemType GetRelatedItemType() const { return m_relatedItemType; }
    inline bool RelatedItemTypeHasBeenSet() const { return m_relatedItemTypeHasBeenSet; }
    inline void SetRelatedItemType(RelatedItemType value) { m_relatedItemTypeHasBeenSet = true; m_relatedItemType = value; }
    inline AuditEvent& WithRelatedItemType(RelatedItemType value) { SetRelatedItemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Type of an audit history event.</p>
     */
    inline AuditEventType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AuditEventType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AuditEvent& WithType(AuditEventType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::Vector<AuditEventField> m_fields;
    bool m_fieldsHasBeenSet = false;

    AuditEventPerformedBy m_performedBy;
    bool m_performedByHasBeenSet = false;

    Aws::Utils::DateTime m_performedTime{};
    bool m_performedTimeHasBeenSet = false;

    RelatedItemType m_relatedItemType{RelatedItemType::NOT_SET};
    bool m_relatedItemTypeHasBeenSet = false;

    AuditEventType m_type{AuditEventType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws

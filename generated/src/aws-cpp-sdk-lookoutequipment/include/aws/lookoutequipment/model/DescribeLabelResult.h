/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/LabelRating.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LookoutEquipment
{
namespace Model
{
  class DescribeLabelResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DescribeLabelResult() = default;
    AWS_LOOKOUTEQUIPMENT_API DescribeLabelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeLabelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The name of the requested label group. </p>
     */
    inline const Aws::String& GetLabelGroupName() const { return m_labelGroupName; }
    template<typename LabelGroupNameT = Aws::String>
    void SetLabelGroupName(LabelGroupNameT&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::forward<LabelGroupNameT>(value); }
    template<typename LabelGroupNameT = Aws::String>
    DescribeLabelResult& WithLabelGroupName(LabelGroupNameT&& value) { SetLabelGroupName(std::forward<LabelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the requested label group. </p>
     */
    inline const Aws::String& GetLabelGroupArn() const { return m_labelGroupArn; }
    template<typename LabelGroupArnT = Aws::String>
    void SetLabelGroupArn(LabelGroupArnT&& value) { m_labelGroupArnHasBeenSet = true; m_labelGroupArn = std::forward<LabelGroupArnT>(value); }
    template<typename LabelGroupArnT = Aws::String>
    DescribeLabelResult& WithLabelGroupArn(LabelGroupArnT&& value) { SetLabelGroupArn(std::forward<LabelGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the requested label. </p>
     */
    inline const Aws::String& GetLabelId() const { return m_labelId; }
    template<typename LabelIdT = Aws::String>
    void SetLabelId(LabelIdT&& value) { m_labelIdHasBeenSet = true; m_labelId = std::forward<LabelIdT>(value); }
    template<typename LabelIdT = Aws::String>
    DescribeLabelResult& WithLabelId(LabelIdT&& value) { SetLabelId(std::forward<LabelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The start time of the requested label. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DescribeLabelResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The end time of the requested label. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DescribeLabelResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether a labeled event represents an anomaly. </p>
     */
    inline LabelRating GetRating() const { return m_rating; }
    inline void SetRating(LabelRating value) { m_ratingHasBeenSet = true; m_rating = value; }
    inline DescribeLabelResult& WithRating(LabelRating value) { SetRating(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline const Aws::String& GetFaultCode() const { return m_faultCode; }
    template<typename FaultCodeT = Aws::String>
    void SetFaultCode(FaultCodeT&& value) { m_faultCodeHasBeenSet = true; m_faultCode = std::forward<FaultCodeT>(value); }
    template<typename FaultCodeT = Aws::String>
    DescribeLabelResult& WithFaultCode(FaultCodeT&& value) { SetFaultCode(std::forward<FaultCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata providing additional information about the label.</p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline const Aws::String& GetNotes() const { return m_notes; }
    template<typename NotesT = Aws::String>
    void SetNotes(NotesT&& value) { m_notesHasBeenSet = true; m_notes = std::forward<NotesT>(value); }
    template<typename NotesT = Aws::String>
    DescribeLabelResult& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline const Aws::String& GetEquipment() const { return m_equipment; }
    template<typename EquipmentT = Aws::String>
    void SetEquipment(EquipmentT&& value) { m_equipmentHasBeenSet = true; m_equipment = std::forward<EquipmentT>(value); }
    template<typename EquipmentT = Aws::String>
    DescribeLabelResult& WithEquipment(EquipmentT&& value) { SetEquipment(std::forward<EquipmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time at which the label was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeLabelResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLabelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;

    Aws::String m_labelGroupArn;
    bool m_labelGroupArnHasBeenSet = false;

    Aws::String m_labelId;
    bool m_labelIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    LabelRating m_rating{LabelRating::NOT_SET};
    bool m_ratingHasBeenSet = false;

    Aws::String m_faultCode;
    bool m_faultCodeHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    Aws::String m_equipment;
    bool m_equipmentHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws

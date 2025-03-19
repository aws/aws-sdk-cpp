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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p> Information about the label. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/LabelSummary">AWS
   * API Reference</a></p>
   */
  class LabelSummary
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API LabelSummary() = default;
    AWS_LOOKOUTEQUIPMENT_API LabelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API LabelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupName() const { return m_labelGroupName; }
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }
    template<typename LabelGroupNameT = Aws::String>
    void SetLabelGroupName(LabelGroupNameT&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::forward<LabelGroupNameT>(value); }
    template<typename LabelGroupNameT = Aws::String>
    LabelSummary& WithLabelGroupName(LabelGroupNameT&& value) { SetLabelGroupName(std::forward<LabelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the label. </p>
     */
    inline const Aws::String& GetLabelId() const { return m_labelId; }
    inline bool LabelIdHasBeenSet() const { return m_labelIdHasBeenSet; }
    template<typename LabelIdT = Aws::String>
    void SetLabelId(LabelIdT&& value) { m_labelIdHasBeenSet = true; m_labelId = std::forward<LabelIdT>(value); }
    template<typename LabelIdT = Aws::String>
    LabelSummary& WithLabelId(LabelIdT&& value) { SetLabelId(std::forward<LabelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupArn() const { return m_labelGroupArn; }
    inline bool LabelGroupArnHasBeenSet() const { return m_labelGroupArnHasBeenSet; }
    template<typename LabelGroupArnT = Aws::String>
    void SetLabelGroupArn(LabelGroupArnT&& value) { m_labelGroupArnHasBeenSet = true; m_labelGroupArn = std::forward<LabelGroupArnT>(value); }
    template<typename LabelGroupArnT = Aws::String>
    LabelSummary& WithLabelGroupArn(LabelGroupArnT&& value) { SetLabelGroupArn(std::forward<LabelGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp indicating the start of the label. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    LabelSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp indicating the end of the label. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    LabelSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether a labeled event represents an anomaly. </p>
     */
    inline LabelRating GetRating() const { return m_rating; }
    inline bool RatingHasBeenSet() const { return m_ratingHasBeenSet; }
    inline void SetRating(LabelRating value) { m_ratingHasBeenSet = true; m_rating = value; }
    inline LabelSummary& WithRating(LabelRating value) { SetRating(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline const Aws::String& GetFaultCode() const { return m_faultCode; }
    inline bool FaultCodeHasBeenSet() const { return m_faultCodeHasBeenSet; }
    template<typename FaultCodeT = Aws::String>
    void SetFaultCode(FaultCodeT&& value) { m_faultCodeHasBeenSet = true; m_faultCode = std::forward<FaultCodeT>(value); }
    template<typename FaultCodeT = Aws::String>
    LabelSummary& WithFaultCode(FaultCodeT&& value) { SetFaultCode(std::forward<FaultCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline const Aws::String& GetEquipment() const { return m_equipment; }
    inline bool EquipmentHasBeenSet() const { return m_equipmentHasBeenSet; }
    template<typename EquipmentT = Aws::String>
    void SetEquipment(EquipmentT&& value) { m_equipmentHasBeenSet = true; m_equipment = std::forward<EquipmentT>(value); }
    template<typename EquipmentT = Aws::String>
    LabelSummary& WithEquipment(EquipmentT&& value) { SetEquipment(std::forward<EquipmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time at which the label was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    LabelSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;

    Aws::String m_labelId;
    bool m_labelIdHasBeenSet = false;

    Aws::String m_labelGroupArn;
    bool m_labelGroupArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    LabelRating m_rating{LabelRating::NOT_SET};
    bool m_ratingHasBeenSet = false;

    Aws::String m_faultCode;
    bool m_faultCodeHasBeenSet = false;

    Aws::String m_equipment;
    bool m_equipmentHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws

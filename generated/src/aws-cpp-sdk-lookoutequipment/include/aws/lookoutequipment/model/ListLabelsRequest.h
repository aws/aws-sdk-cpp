/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class ListLabelsRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListLabelsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLabels"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> Returns the name of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupName() const { return m_labelGroupName; }
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }
    template<typename LabelGroupNameT = Aws::String>
    void SetLabelGroupName(LabelGroupNameT&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::forward<LabelGroupNameT>(value); }
    template<typename LabelGroupNameT = Aws::String>
    ListLabelsRequest& WithLabelGroupName(LabelGroupNameT&& value) { SetLabelGroupName(std::forward<LabelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Returns all the labels with a end time equal to or later than the start time
     * given. </p>
     */
    inline const Aws::Utils::DateTime& GetIntervalStartTime() const { return m_intervalStartTime; }
    inline bool IntervalStartTimeHasBeenSet() const { return m_intervalStartTimeHasBeenSet; }
    template<typename IntervalStartTimeT = Aws::Utils::DateTime>
    void SetIntervalStartTime(IntervalStartTimeT&& value) { m_intervalStartTimeHasBeenSet = true; m_intervalStartTime = std::forward<IntervalStartTimeT>(value); }
    template<typename IntervalStartTimeT = Aws::Utils::DateTime>
    ListLabelsRequest& WithIntervalStartTime(IntervalStartTimeT&& value) { SetIntervalStartTime(std::forward<IntervalStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Returns all labels with a start time earlier than the end time given. </p>
     */
    inline const Aws::Utils::DateTime& GetIntervalEndTime() const { return m_intervalEndTime; }
    inline bool IntervalEndTimeHasBeenSet() const { return m_intervalEndTimeHasBeenSet; }
    template<typename IntervalEndTimeT = Aws::Utils::DateTime>
    void SetIntervalEndTime(IntervalEndTimeT&& value) { m_intervalEndTimeHasBeenSet = true; m_intervalEndTime = std::forward<IntervalEndTimeT>(value); }
    template<typename IntervalEndTimeT = Aws::Utils::DateTime>
    ListLabelsRequest& WithIntervalEndTime(IntervalEndTimeT&& value) { SetIntervalEndTime(std::forward<IntervalEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Returns labels with a particular fault code. </p>
     */
    inline const Aws::String& GetFaultCode() const { return m_faultCode; }
    inline bool FaultCodeHasBeenSet() const { return m_faultCodeHasBeenSet; }
    template<typename FaultCodeT = Aws::String>
    void SetFaultCode(FaultCodeT&& value) { m_faultCodeHasBeenSet = true; m_faultCode = std::forward<FaultCodeT>(value); }
    template<typename FaultCodeT = Aws::String>
    ListLabelsRequest& WithFaultCode(FaultCodeT&& value) { SetFaultCode(std::forward<FaultCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lists the labels that pertain to a particular piece of equipment. </p>
     */
    inline const Aws::String& GetEquipment() const { return m_equipment; }
    inline bool EquipmentHasBeenSet() const { return m_equipmentHasBeenSet; }
    template<typename EquipmentT = Aws::String>
    void SetEquipment(EquipmentT&& value) { m_equipmentHasBeenSet = true; m_equipment = std::forward<EquipmentT>(value); }
    template<typename EquipmentT = Aws::String>
    ListLabelsRequest& WithEquipment(EquipmentT&& value) { SetEquipment(std::forward<EquipmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLabelsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the maximum number of labels to list. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListLabelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_intervalStartTime{};
    bool m_intervalStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_intervalEndTime{};
    bool m_intervalEndTimeHasBeenSet = false;

    Aws::String m_faultCode;
    bool m_faultCodeHasBeenSet = false;

    Aws::String m_equipment;
    bool m_equipmentHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws

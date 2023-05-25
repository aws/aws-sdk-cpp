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
    AWS_LOOKOUTEQUIPMENT_API ListLabelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLabels"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> Retruns the name of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupName() const{ return m_labelGroupName; }

    /**
     * <p> Retruns the name of the label group. </p>
     */
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }

    /**
     * <p> Retruns the name of the label group. </p>
     */
    inline void SetLabelGroupName(const Aws::String& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = value; }

    /**
     * <p> Retruns the name of the label group. </p>
     */
    inline void SetLabelGroupName(Aws::String&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::move(value); }

    /**
     * <p> Retruns the name of the label group. </p>
     */
    inline void SetLabelGroupName(const char* value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName.assign(value); }

    /**
     * <p> Retruns the name of the label group. </p>
     */
    inline ListLabelsRequest& WithLabelGroupName(const Aws::String& value) { SetLabelGroupName(value); return *this;}

    /**
     * <p> Retruns the name of the label group. </p>
     */
    inline ListLabelsRequest& WithLabelGroupName(Aws::String&& value) { SetLabelGroupName(std::move(value)); return *this;}

    /**
     * <p> Retruns the name of the label group. </p>
     */
    inline ListLabelsRequest& WithLabelGroupName(const char* value) { SetLabelGroupName(value); return *this;}


    /**
     * <p> Returns all the labels with a end time equal to or later than the start time
     * given. </p>
     */
    inline const Aws::Utils::DateTime& GetIntervalStartTime() const{ return m_intervalStartTime; }

    /**
     * <p> Returns all the labels with a end time equal to or later than the start time
     * given. </p>
     */
    inline bool IntervalStartTimeHasBeenSet() const { return m_intervalStartTimeHasBeenSet; }

    /**
     * <p> Returns all the labels with a end time equal to or later than the start time
     * given. </p>
     */
    inline void SetIntervalStartTime(const Aws::Utils::DateTime& value) { m_intervalStartTimeHasBeenSet = true; m_intervalStartTime = value; }

    /**
     * <p> Returns all the labels with a end time equal to or later than the start time
     * given. </p>
     */
    inline void SetIntervalStartTime(Aws::Utils::DateTime&& value) { m_intervalStartTimeHasBeenSet = true; m_intervalStartTime = std::move(value); }

    /**
     * <p> Returns all the labels with a end time equal to or later than the start time
     * given. </p>
     */
    inline ListLabelsRequest& WithIntervalStartTime(const Aws::Utils::DateTime& value) { SetIntervalStartTime(value); return *this;}

    /**
     * <p> Returns all the labels with a end time equal to or later than the start time
     * given. </p>
     */
    inline ListLabelsRequest& WithIntervalStartTime(Aws::Utils::DateTime&& value) { SetIntervalStartTime(std::move(value)); return *this;}


    /**
     * <p> Returns all labels with a start time earlier than the end time given. </p>
     */
    inline const Aws::Utils::DateTime& GetIntervalEndTime() const{ return m_intervalEndTime; }

    /**
     * <p> Returns all labels with a start time earlier than the end time given. </p>
     */
    inline bool IntervalEndTimeHasBeenSet() const { return m_intervalEndTimeHasBeenSet; }

    /**
     * <p> Returns all labels with a start time earlier than the end time given. </p>
     */
    inline void SetIntervalEndTime(const Aws::Utils::DateTime& value) { m_intervalEndTimeHasBeenSet = true; m_intervalEndTime = value; }

    /**
     * <p> Returns all labels with a start time earlier than the end time given. </p>
     */
    inline void SetIntervalEndTime(Aws::Utils::DateTime&& value) { m_intervalEndTimeHasBeenSet = true; m_intervalEndTime = std::move(value); }

    /**
     * <p> Returns all labels with a start time earlier than the end time given. </p>
     */
    inline ListLabelsRequest& WithIntervalEndTime(const Aws::Utils::DateTime& value) { SetIntervalEndTime(value); return *this;}

    /**
     * <p> Returns all labels with a start time earlier than the end time given. </p>
     */
    inline ListLabelsRequest& WithIntervalEndTime(Aws::Utils::DateTime&& value) { SetIntervalEndTime(std::move(value)); return *this;}


    /**
     * <p> Returns labels with a particular fault code. </p>
     */
    inline const Aws::String& GetFaultCode() const{ return m_faultCode; }

    /**
     * <p> Returns labels with a particular fault code. </p>
     */
    inline bool FaultCodeHasBeenSet() const { return m_faultCodeHasBeenSet; }

    /**
     * <p> Returns labels with a particular fault code. </p>
     */
    inline void SetFaultCode(const Aws::String& value) { m_faultCodeHasBeenSet = true; m_faultCode = value; }

    /**
     * <p> Returns labels with a particular fault code. </p>
     */
    inline void SetFaultCode(Aws::String&& value) { m_faultCodeHasBeenSet = true; m_faultCode = std::move(value); }

    /**
     * <p> Returns labels with a particular fault code. </p>
     */
    inline void SetFaultCode(const char* value) { m_faultCodeHasBeenSet = true; m_faultCode.assign(value); }

    /**
     * <p> Returns labels with a particular fault code. </p>
     */
    inline ListLabelsRequest& WithFaultCode(const Aws::String& value) { SetFaultCode(value); return *this;}

    /**
     * <p> Returns labels with a particular fault code. </p>
     */
    inline ListLabelsRequest& WithFaultCode(Aws::String&& value) { SetFaultCode(std::move(value)); return *this;}

    /**
     * <p> Returns labels with a particular fault code. </p>
     */
    inline ListLabelsRequest& WithFaultCode(const char* value) { SetFaultCode(value); return *this;}


    /**
     * <p> Lists the labels that pertain to a particular piece of equipment. </p>
     */
    inline const Aws::String& GetEquipment() const{ return m_equipment; }

    /**
     * <p> Lists the labels that pertain to a particular piece of equipment. </p>
     */
    inline bool EquipmentHasBeenSet() const { return m_equipmentHasBeenSet; }

    /**
     * <p> Lists the labels that pertain to a particular piece of equipment. </p>
     */
    inline void SetEquipment(const Aws::String& value) { m_equipmentHasBeenSet = true; m_equipment = value; }

    /**
     * <p> Lists the labels that pertain to a particular piece of equipment. </p>
     */
    inline void SetEquipment(Aws::String&& value) { m_equipmentHasBeenSet = true; m_equipment = std::move(value); }

    /**
     * <p> Lists the labels that pertain to a particular piece of equipment. </p>
     */
    inline void SetEquipment(const char* value) { m_equipmentHasBeenSet = true; m_equipment.assign(value); }

    /**
     * <p> Lists the labels that pertain to a particular piece of equipment. </p>
     */
    inline ListLabelsRequest& WithEquipment(const Aws::String& value) { SetEquipment(value); return *this;}

    /**
     * <p> Lists the labels that pertain to a particular piece of equipment. </p>
     */
    inline ListLabelsRequest& WithEquipment(Aws::String&& value) { SetEquipment(std::move(value)); return *this;}

    /**
     * <p> Lists the labels that pertain to a particular piece of equipment. </p>
     */
    inline ListLabelsRequest& WithEquipment(const char* value) { SetEquipment(value); return *this;}


    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline ListLabelsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline ListLabelsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline ListLabelsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Specifies the maximum number of labels to list. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Specifies the maximum number of labels to list. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Specifies the maximum number of labels to list. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Specifies the maximum number of labels to list. </p>
     */
    inline ListLabelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_intervalStartTime;
    bool m_intervalStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_intervalEndTime;
    bool m_intervalEndTimeHasBeenSet = false;

    Aws::String m_faultCode;
    bool m_faultCodeHasBeenSet = false;

    Aws::String m_equipment;
    bool m_equipmentHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws

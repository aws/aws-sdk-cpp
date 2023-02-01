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
    AWS_LOOKOUTEQUIPMENT_API LabelSummary();
    AWS_LOOKOUTEQUIPMENT_API LabelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API LabelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupName() const{ return m_labelGroupName; }

    /**
     * <p> The name of the label group. </p>
     */
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }

    /**
     * <p> The name of the label group. </p>
     */
    inline void SetLabelGroupName(const Aws::String& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = value; }

    /**
     * <p> The name of the label group. </p>
     */
    inline void SetLabelGroupName(Aws::String&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::move(value); }

    /**
     * <p> The name of the label group. </p>
     */
    inline void SetLabelGroupName(const char* value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName.assign(value); }

    /**
     * <p> The name of the label group. </p>
     */
    inline LabelSummary& WithLabelGroupName(const Aws::String& value) { SetLabelGroupName(value); return *this;}

    /**
     * <p> The name of the label group. </p>
     */
    inline LabelSummary& WithLabelGroupName(Aws::String&& value) { SetLabelGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the label group. </p>
     */
    inline LabelSummary& WithLabelGroupName(const char* value) { SetLabelGroupName(value); return *this;}


    /**
     * <p> The ID of the label. </p>
     */
    inline const Aws::String& GetLabelId() const{ return m_labelId; }

    /**
     * <p> The ID of the label. </p>
     */
    inline bool LabelIdHasBeenSet() const { return m_labelIdHasBeenSet; }

    /**
     * <p> The ID of the label. </p>
     */
    inline void SetLabelId(const Aws::String& value) { m_labelIdHasBeenSet = true; m_labelId = value; }

    /**
     * <p> The ID of the label. </p>
     */
    inline void SetLabelId(Aws::String&& value) { m_labelIdHasBeenSet = true; m_labelId = std::move(value); }

    /**
     * <p> The ID of the label. </p>
     */
    inline void SetLabelId(const char* value) { m_labelIdHasBeenSet = true; m_labelId.assign(value); }

    /**
     * <p> The ID of the label. </p>
     */
    inline LabelSummary& WithLabelId(const Aws::String& value) { SetLabelId(value); return *this;}

    /**
     * <p> The ID of the label. </p>
     */
    inline LabelSummary& WithLabelId(Aws::String&& value) { SetLabelId(std::move(value)); return *this;}

    /**
     * <p> The ID of the label. </p>
     */
    inline LabelSummary& WithLabelId(const char* value) { SetLabelId(value); return *this;}


    /**
     * <p> The ARN of the label group. </p>
     */
    inline const Aws::String& GetLabelGroupArn() const{ return m_labelGroupArn; }

    /**
     * <p> The ARN of the label group. </p>
     */
    inline bool LabelGroupArnHasBeenSet() const { return m_labelGroupArnHasBeenSet; }

    /**
     * <p> The ARN of the label group. </p>
     */
    inline void SetLabelGroupArn(const Aws::String& value) { m_labelGroupArnHasBeenSet = true; m_labelGroupArn = value; }

    /**
     * <p> The ARN of the label group. </p>
     */
    inline void SetLabelGroupArn(Aws::String&& value) { m_labelGroupArnHasBeenSet = true; m_labelGroupArn = std::move(value); }

    /**
     * <p> The ARN of the label group. </p>
     */
    inline void SetLabelGroupArn(const char* value) { m_labelGroupArnHasBeenSet = true; m_labelGroupArn.assign(value); }

    /**
     * <p> The ARN of the label group. </p>
     */
    inline LabelSummary& WithLabelGroupArn(const Aws::String& value) { SetLabelGroupArn(value); return *this;}

    /**
     * <p> The ARN of the label group. </p>
     */
    inline LabelSummary& WithLabelGroupArn(Aws::String&& value) { SetLabelGroupArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the label group. </p>
     */
    inline LabelSummary& WithLabelGroupArn(const char* value) { SetLabelGroupArn(value); return *this;}


    /**
     * <p> The timestamp indicating the start of the label. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The timestamp indicating the start of the label. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The timestamp indicating the start of the label. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The timestamp indicating the start of the label. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The timestamp indicating the start of the label. </p>
     */
    inline LabelSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The timestamp indicating the start of the label. </p>
     */
    inline LabelSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The timestamp indicating the end of the label. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The timestamp indicating the end of the label. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The timestamp indicating the end of the label. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The timestamp indicating the end of the label. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The timestamp indicating the end of the label. </p>
     */
    inline LabelSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The timestamp indicating the end of the label. </p>
     */
    inline LabelSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p> Indicates whether a labeled event represents an anomaly. </p>
     */
    inline const LabelRating& GetRating() const{ return m_rating; }

    /**
     * <p> Indicates whether a labeled event represents an anomaly. </p>
     */
    inline bool RatingHasBeenSet() const { return m_ratingHasBeenSet; }

    /**
     * <p> Indicates whether a labeled event represents an anomaly. </p>
     */
    inline void SetRating(const LabelRating& value) { m_ratingHasBeenSet = true; m_rating = value; }

    /**
     * <p> Indicates whether a labeled event represents an anomaly. </p>
     */
    inline void SetRating(LabelRating&& value) { m_ratingHasBeenSet = true; m_rating = std::move(value); }

    /**
     * <p> Indicates whether a labeled event represents an anomaly. </p>
     */
    inline LabelSummary& WithRating(const LabelRating& value) { SetRating(value); return *this;}

    /**
     * <p> Indicates whether a labeled event represents an anomaly. </p>
     */
    inline LabelSummary& WithRating(LabelRating&& value) { SetRating(std::move(value)); return *this;}


    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline const Aws::String& GetFaultCode() const{ return m_faultCode; }

    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline bool FaultCodeHasBeenSet() const { return m_faultCodeHasBeenSet; }

    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline void SetFaultCode(const Aws::String& value) { m_faultCodeHasBeenSet = true; m_faultCode = value; }

    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline void SetFaultCode(Aws::String&& value) { m_faultCodeHasBeenSet = true; m_faultCode = std::move(value); }

    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline void SetFaultCode(const char* value) { m_faultCodeHasBeenSet = true; m_faultCode.assign(value); }

    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline LabelSummary& WithFaultCode(const Aws::String& value) { SetFaultCode(value); return *this;}

    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline LabelSummary& WithFaultCode(Aws::String&& value) { SetFaultCode(std::move(value)); return *this;}

    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline LabelSummary& WithFaultCode(const char* value) { SetFaultCode(value); return *this;}


    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline const Aws::String& GetEquipment() const{ return m_equipment; }

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline bool EquipmentHasBeenSet() const { return m_equipmentHasBeenSet; }

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline void SetEquipment(const Aws::String& value) { m_equipmentHasBeenSet = true; m_equipment = value; }

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline void SetEquipment(Aws::String&& value) { m_equipmentHasBeenSet = true; m_equipment = std::move(value); }

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline void SetEquipment(const char* value) { m_equipmentHasBeenSet = true; m_equipment.assign(value); }

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline LabelSummary& WithEquipment(const Aws::String& value) { SetEquipment(value); return *this;}

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline LabelSummary& WithEquipment(Aws::String&& value) { SetEquipment(std::move(value)); return *this;}

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline LabelSummary& WithEquipment(const char* value) { SetEquipment(value); return *this;}


    /**
     * <p> The time at which the label was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p> The time at which the label was created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p> The time at which the label was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p> The time at which the label was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p> The time at which the label was created. </p>
     */
    inline LabelSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p> The time at which the label was created. </p>
     */
    inline LabelSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;

    Aws::String m_labelId;
    bool m_labelIdHasBeenSet = false;

    Aws::String m_labelGroupArn;
    bool m_labelGroupArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    LabelRating m_rating;
    bool m_ratingHasBeenSet = false;

    Aws::String m_faultCode;
    bool m_faultCodeHasBeenSet = false;

    Aws::String m_equipment;
    bool m_equipmentHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws

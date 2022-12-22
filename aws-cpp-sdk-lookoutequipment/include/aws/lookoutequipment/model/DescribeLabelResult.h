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
    AWS_LOOKOUTEQUIPMENT_API DescribeLabelResult();
    AWS_LOOKOUTEQUIPMENT_API DescribeLabelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeLabelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the requested label group. </p>
     */
    inline const Aws::String& GetLabelGroupName() const{ return m_labelGroupName; }

    /**
     * <p> The name of the requested label group. </p>
     */
    inline void SetLabelGroupName(const Aws::String& value) { m_labelGroupName = value; }

    /**
     * <p> The name of the requested label group. </p>
     */
    inline void SetLabelGroupName(Aws::String&& value) { m_labelGroupName = std::move(value); }

    /**
     * <p> The name of the requested label group. </p>
     */
    inline void SetLabelGroupName(const char* value) { m_labelGroupName.assign(value); }

    /**
     * <p> The name of the requested label group. </p>
     */
    inline DescribeLabelResult& WithLabelGroupName(const Aws::String& value) { SetLabelGroupName(value); return *this;}

    /**
     * <p> The name of the requested label group. </p>
     */
    inline DescribeLabelResult& WithLabelGroupName(Aws::String&& value) { SetLabelGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the requested label group. </p>
     */
    inline DescribeLabelResult& WithLabelGroupName(const char* value) { SetLabelGroupName(value); return *this;}


    /**
     * <p> The ARN of the requested label group. </p>
     */
    inline const Aws::String& GetLabelGroupArn() const{ return m_labelGroupArn; }

    /**
     * <p> The ARN of the requested label group. </p>
     */
    inline void SetLabelGroupArn(const Aws::String& value) { m_labelGroupArn = value; }

    /**
     * <p> The ARN of the requested label group. </p>
     */
    inline void SetLabelGroupArn(Aws::String&& value) { m_labelGroupArn = std::move(value); }

    /**
     * <p> The ARN of the requested label group. </p>
     */
    inline void SetLabelGroupArn(const char* value) { m_labelGroupArn.assign(value); }

    /**
     * <p> The ARN of the requested label group. </p>
     */
    inline DescribeLabelResult& WithLabelGroupArn(const Aws::String& value) { SetLabelGroupArn(value); return *this;}

    /**
     * <p> The ARN of the requested label group. </p>
     */
    inline DescribeLabelResult& WithLabelGroupArn(Aws::String&& value) { SetLabelGroupArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the requested label group. </p>
     */
    inline DescribeLabelResult& WithLabelGroupArn(const char* value) { SetLabelGroupArn(value); return *this;}


    /**
     * <p> The ID of the requested label. </p>
     */
    inline const Aws::String& GetLabelId() const{ return m_labelId; }

    /**
     * <p> The ID of the requested label. </p>
     */
    inline void SetLabelId(const Aws::String& value) { m_labelId = value; }

    /**
     * <p> The ID of the requested label. </p>
     */
    inline void SetLabelId(Aws::String&& value) { m_labelId = std::move(value); }

    /**
     * <p> The ID of the requested label. </p>
     */
    inline void SetLabelId(const char* value) { m_labelId.assign(value); }

    /**
     * <p> The ID of the requested label. </p>
     */
    inline DescribeLabelResult& WithLabelId(const Aws::String& value) { SetLabelId(value); return *this;}

    /**
     * <p> The ID of the requested label. </p>
     */
    inline DescribeLabelResult& WithLabelId(Aws::String&& value) { SetLabelId(std::move(value)); return *this;}

    /**
     * <p> The ID of the requested label. </p>
     */
    inline DescribeLabelResult& WithLabelId(const char* value) { SetLabelId(value); return *this;}


    /**
     * <p> The start time of the requested label. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The start time of the requested label. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p> The start time of the requested label. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p> The start time of the requested label. </p>
     */
    inline DescribeLabelResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The start time of the requested label. </p>
     */
    inline DescribeLabelResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The end time of the requested label. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The end time of the requested label. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p> The end time of the requested label. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p> The end time of the requested label. </p>
     */
    inline DescribeLabelResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The end time of the requested label. </p>
     */
    inline DescribeLabelResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p> Indicates whether a labeled event represents an anomaly. </p>
     */
    inline const LabelRating& GetRating() const{ return m_rating; }

    /**
     * <p> Indicates whether a labeled event represents an anomaly. </p>
     */
    inline void SetRating(const LabelRating& value) { m_rating = value; }

    /**
     * <p> Indicates whether a labeled event represents an anomaly. </p>
     */
    inline void SetRating(LabelRating&& value) { m_rating = std::move(value); }

    /**
     * <p> Indicates whether a labeled event represents an anomaly. </p>
     */
    inline DescribeLabelResult& WithRating(const LabelRating& value) { SetRating(value); return *this;}

    /**
     * <p> Indicates whether a labeled event represents an anomaly. </p>
     */
    inline DescribeLabelResult& WithRating(LabelRating&& value) { SetRating(std::move(value)); return *this;}


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
    inline void SetFaultCode(const Aws::String& value) { m_faultCode = value; }

    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline void SetFaultCode(Aws::String&& value) { m_faultCode = std::move(value); }

    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline void SetFaultCode(const char* value) { m_faultCode.assign(value); }

    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline DescribeLabelResult& WithFaultCode(const Aws::String& value) { SetFaultCode(value); return *this;}

    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline DescribeLabelResult& WithFaultCode(Aws::String&& value) { SetFaultCode(std::move(value)); return *this;}

    /**
     * <p> Indicates the type of anomaly associated with the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline DescribeLabelResult& WithFaultCode(const char* value) { SetFaultCode(value); return *this;}


    /**
     * <p>Metadata providing additional information about the label.</p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline const Aws::String& GetNotes() const{ return m_notes; }

    /**
     * <p>Metadata providing additional information about the label.</p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline void SetNotes(const Aws::String& value) { m_notes = value; }

    /**
     * <p>Metadata providing additional information about the label.</p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline void SetNotes(Aws::String&& value) { m_notes = std::move(value); }

    /**
     * <p>Metadata providing additional information about the label.</p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline void SetNotes(const char* value) { m_notes.assign(value); }

    /**
     * <p>Metadata providing additional information about the label.</p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline DescribeLabelResult& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    /**
     * <p>Metadata providing additional information about the label.</p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline DescribeLabelResult& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    /**
     * <p>Metadata providing additional information about the label.</p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline DescribeLabelResult& WithNotes(const char* value) { SetNotes(value); return *this;}


    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline const Aws::String& GetEquipment() const{ return m_equipment; }

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline void SetEquipment(const Aws::String& value) { m_equipment = value; }

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline void SetEquipment(Aws::String&& value) { m_equipment = std::move(value); }

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline void SetEquipment(const char* value) { m_equipment.assign(value); }

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline DescribeLabelResult& WithEquipment(const Aws::String& value) { SetEquipment(value); return *this;}

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline DescribeLabelResult& WithEquipment(Aws::String&& value) { SetEquipment(std::move(value)); return *this;}

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     */
    inline DescribeLabelResult& WithEquipment(const char* value) { SetEquipment(value); return *this;}


    /**
     * <p> The time at which the label was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p> The time at which the label was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p> The time at which the label was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p> The time at which the label was created. </p>
     */
    inline DescribeLabelResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p> The time at which the label was created. </p>
     */
    inline DescribeLabelResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_labelGroupName;

    Aws::String m_labelGroupArn;

    Aws::String m_labelId;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    LabelRating m_rating;

    Aws::String m_faultCode;

    Aws::String m_notes;

    Aws::String m_equipment;

    Aws::Utils::DateTime m_createdAt;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws

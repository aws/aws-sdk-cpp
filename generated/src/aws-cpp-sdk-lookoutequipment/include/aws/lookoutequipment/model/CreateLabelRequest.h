/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/LabelRating.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class CreateLabelRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateLabelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLabel"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of a group of labels. </p> <p>Data in this field will be retained
     * for service usage. Follow best practices for the security of your data. </p>
     */
    inline const Aws::String& GetLabelGroupName() const{ return m_labelGroupName; }

    /**
     * <p> The name of a group of labels. </p> <p>Data in this field will be retained
     * for service usage. Follow best practices for the security of your data. </p>
     */
    inline bool LabelGroupNameHasBeenSet() const { return m_labelGroupNameHasBeenSet; }

    /**
     * <p> The name of a group of labels. </p> <p>Data in this field will be retained
     * for service usage. Follow best practices for the security of your data. </p>
     */
    inline void SetLabelGroupName(const Aws::String& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = value; }

    /**
     * <p> The name of a group of labels. </p> <p>Data in this field will be retained
     * for service usage. Follow best practices for the security of your data. </p>
     */
    inline void SetLabelGroupName(Aws::String&& value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName = std::move(value); }

    /**
     * <p> The name of a group of labels. </p> <p>Data in this field will be retained
     * for service usage. Follow best practices for the security of your data. </p>
     */
    inline void SetLabelGroupName(const char* value) { m_labelGroupNameHasBeenSet = true; m_labelGroupName.assign(value); }

    /**
     * <p> The name of a group of labels. </p> <p>Data in this field will be retained
     * for service usage. Follow best practices for the security of your data. </p>
     */
    inline CreateLabelRequest& WithLabelGroupName(const Aws::String& value) { SetLabelGroupName(value); return *this;}

    /**
     * <p> The name of a group of labels. </p> <p>Data in this field will be retained
     * for service usage. Follow best practices for the security of your data. </p>
     */
    inline CreateLabelRequest& WithLabelGroupName(Aws::String&& value) { SetLabelGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of a group of labels. </p> <p>Data in this field will be retained
     * for service usage. Follow best practices for the security of your data. </p>
     */
    inline CreateLabelRequest& WithLabelGroupName(const char* value) { SetLabelGroupName(value); return *this;}


    /**
     * <p> The start time of the labeled event. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The start time of the labeled event. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The start time of the labeled event. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The start time of the labeled event. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The start time of the labeled event. </p>
     */
    inline CreateLabelRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The start time of the labeled event. </p>
     */
    inline CreateLabelRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The end time of the labeled event. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The end time of the labeled event. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The end time of the labeled event. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The end time of the labeled event. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The end time of the labeled event. </p>
     */
    inline CreateLabelRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The end time of the labeled event. </p>
     */
    inline CreateLabelRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


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
    inline CreateLabelRequest& WithRating(const LabelRating& value) { SetRating(value); return *this;}

    /**
     * <p> Indicates whether a labeled event represents an anomaly. </p>
     */
    inline CreateLabelRequest& WithRating(LabelRating&& value) { SetRating(std::move(value)); return *this;}


    /**
     * <p> Provides additional information about the label. The fault code must be
     * defined in the FaultCodes attribute of the label group.</p> <p>Data in this
     * field will be retained for service usage. Follow best practices for the security
     * of your data. </p>
     */
    inline const Aws::String& GetFaultCode() const{ return m_faultCode; }

    /**
     * <p> Provides additional information about the label. The fault code must be
     * defined in the FaultCodes attribute of the label group.</p> <p>Data in this
     * field will be retained for service usage. Follow best practices for the security
     * of your data. </p>
     */
    inline bool FaultCodeHasBeenSet() const { return m_faultCodeHasBeenSet; }

    /**
     * <p> Provides additional information about the label. The fault code must be
     * defined in the FaultCodes attribute of the label group.</p> <p>Data in this
     * field will be retained for service usage. Follow best practices for the security
     * of your data. </p>
     */
    inline void SetFaultCode(const Aws::String& value) { m_faultCodeHasBeenSet = true; m_faultCode = value; }

    /**
     * <p> Provides additional information about the label. The fault code must be
     * defined in the FaultCodes attribute of the label group.</p> <p>Data in this
     * field will be retained for service usage. Follow best practices for the security
     * of your data. </p>
     */
    inline void SetFaultCode(Aws::String&& value) { m_faultCodeHasBeenSet = true; m_faultCode = std::move(value); }

    /**
     * <p> Provides additional information about the label. The fault code must be
     * defined in the FaultCodes attribute of the label group.</p> <p>Data in this
     * field will be retained for service usage. Follow best practices for the security
     * of your data. </p>
     */
    inline void SetFaultCode(const char* value) { m_faultCodeHasBeenSet = true; m_faultCode.assign(value); }

    /**
     * <p> Provides additional information about the label. The fault code must be
     * defined in the FaultCodes attribute of the label group.</p> <p>Data in this
     * field will be retained for service usage. Follow best practices for the security
     * of your data. </p>
     */
    inline CreateLabelRequest& WithFaultCode(const Aws::String& value) { SetFaultCode(value); return *this;}

    /**
     * <p> Provides additional information about the label. The fault code must be
     * defined in the FaultCodes attribute of the label group.</p> <p>Data in this
     * field will be retained for service usage. Follow best practices for the security
     * of your data. </p>
     */
    inline CreateLabelRequest& WithFaultCode(Aws::String&& value) { SetFaultCode(std::move(value)); return *this;}

    /**
     * <p> Provides additional information about the label. The fault code must be
     * defined in the FaultCodes attribute of the label group.</p> <p>Data in this
     * field will be retained for service usage. Follow best practices for the security
     * of your data. </p>
     */
    inline CreateLabelRequest& WithFaultCode(const char* value) { SetFaultCode(value); return *this;}


    /**
     * <p> Metadata providing additional information about the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline const Aws::String& GetNotes() const{ return m_notes; }

    /**
     * <p> Metadata providing additional information about the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    /**
     * <p> Metadata providing additional information about the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    /**
     * <p> Metadata providing additional information about the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    /**
     * <p> Metadata providing additional information about the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    /**
     * <p> Metadata providing additional information about the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline CreateLabelRequest& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    /**
     * <p> Metadata providing additional information about the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline CreateLabelRequest& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    /**
     * <p> Metadata providing additional information about the label. </p> <p>Data in
     * this field will be retained for service usage. Follow best practices for the
     * security of your data.</p>
     */
    inline CreateLabelRequest& WithNotes(const char* value) { SetNotes(value); return *this;}


    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline const Aws::String& GetEquipment() const{ return m_equipment; }

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline bool EquipmentHasBeenSet() const { return m_equipmentHasBeenSet; }

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline void SetEquipment(const Aws::String& value) { m_equipmentHasBeenSet = true; m_equipment = value; }

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline void SetEquipment(Aws::String&& value) { m_equipmentHasBeenSet = true; m_equipment = std::move(value); }

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline void SetEquipment(const char* value) { m_equipmentHasBeenSet = true; m_equipment.assign(value); }

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline CreateLabelRequest& WithEquipment(const Aws::String& value) { SetEquipment(value); return *this;}

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline CreateLabelRequest& WithEquipment(Aws::String&& value) { SetEquipment(std::move(value)); return *this;}

    /**
     * <p> Indicates that a label pertains to a particular piece of equipment. </p>
     * <p>Data in this field will be retained for service usage. Follow best practices
     * for the security of your data.</p>
     */
    inline CreateLabelRequest& WithEquipment(const char* value) { SetEquipment(value); return *this;}


    /**
     * <p> A unique identifier for the request to create a label. If you do not set the
     * client request token, Lookout for Equipment generates one. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> A unique identifier for the request to create a label. If you do not set the
     * client request token, Lookout for Equipment generates one. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> A unique identifier for the request to create a label. If you do not set the
     * client request token, Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> A unique identifier for the request to create a label. If you do not set the
     * client request token, Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> A unique identifier for the request to create a label. If you do not set the
     * client request token, Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> A unique identifier for the request to create a label. If you do not set the
     * client request token, Lookout for Equipment generates one. </p>
     */
    inline CreateLabelRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> A unique identifier for the request to create a label. If you do not set the
     * client request token, Lookout for Equipment generates one. </p>
     */
    inline CreateLabelRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the request to create a label. If you do not set the
     * client request token, Lookout for Equipment generates one. </p>
     */
    inline CreateLabelRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_labelGroupName;
    bool m_labelGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    LabelRating m_rating;
    bool m_ratingHasBeenSet = false;

    Aws::String m_faultCode;
    bool m_faultCodeHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    Aws::String m_equipment;
    bool m_equipmentHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws

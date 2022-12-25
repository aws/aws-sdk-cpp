/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The notification that informs a user of an update in Audit Manager. For
   * example, this includes the notification that's sent when a control set is
   * delegated for review. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/Notification">AWS
   * API Reference</a></p>
   */
  class Notification
  {
  public:
    AWS_AUDITMANAGER_API Notification();
    AWS_AUDITMANAGER_API Notification(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Notification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier for the notification. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The unique identifier for the notification. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The unique identifier for the notification. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The unique identifier for the notification. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The unique identifier for the notification. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The unique identifier for the notification. </p>
     */
    inline Notification& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The unique identifier for the notification. </p>
     */
    inline Notification& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the notification. </p>
     */
    inline Notification& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The identifier for the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline Notification& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline Notification& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline Notification& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}


    /**
     * <p> The name of the related assessment. </p>
     */
    inline const Aws::String& GetAssessmentName() const{ return m_assessmentName; }

    /**
     * <p> The name of the related assessment. </p>
     */
    inline bool AssessmentNameHasBeenSet() const { return m_assessmentNameHasBeenSet; }

    /**
     * <p> The name of the related assessment. </p>
     */
    inline void SetAssessmentName(const Aws::String& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }

    /**
     * <p> The name of the related assessment. </p>
     */
    inline void SetAssessmentName(Aws::String&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = std::move(value); }

    /**
     * <p> The name of the related assessment. </p>
     */
    inline void SetAssessmentName(const char* value) { m_assessmentNameHasBeenSet = true; m_assessmentName.assign(value); }

    /**
     * <p> The name of the related assessment. </p>
     */
    inline Notification& WithAssessmentName(const Aws::String& value) { SetAssessmentName(value); return *this;}

    /**
     * <p> The name of the related assessment. </p>
     */
    inline Notification& WithAssessmentName(Aws::String&& value) { SetAssessmentName(std::move(value)); return *this;}

    /**
     * <p> The name of the related assessment. </p>
     */
    inline Notification& WithAssessmentName(const char* value) { SetAssessmentName(value); return *this;}


    /**
     * <p> The identifier for the control set. </p>
     */
    inline const Aws::String& GetControlSetId() const{ return m_controlSetId; }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline bool ControlSetIdHasBeenSet() const { return m_controlSetIdHasBeenSet; }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline void SetControlSetId(const Aws::String& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = value; }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline void SetControlSetId(Aws::String&& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = std::move(value); }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline void SetControlSetId(const char* value) { m_controlSetIdHasBeenSet = true; m_controlSetId.assign(value); }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline Notification& WithControlSetId(const Aws::String& value) { SetControlSetId(value); return *this;}

    /**
     * <p> The identifier for the control set. </p>
     */
    inline Notification& WithControlSetId(Aws::String&& value) { SetControlSetId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the control set. </p>
     */
    inline Notification& WithControlSetId(const char* value) { SetControlSetId(value); return *this;}


    /**
     * <p> Specifies the name of the control set that the notification is about. </p>
     */
    inline const Aws::String& GetControlSetName() const{ return m_controlSetName; }

    /**
     * <p> Specifies the name of the control set that the notification is about. </p>
     */
    inline bool ControlSetNameHasBeenSet() const { return m_controlSetNameHasBeenSet; }

    /**
     * <p> Specifies the name of the control set that the notification is about. </p>
     */
    inline void SetControlSetName(const Aws::String& value) { m_controlSetNameHasBeenSet = true; m_controlSetName = value; }

    /**
     * <p> Specifies the name of the control set that the notification is about. </p>
     */
    inline void SetControlSetName(Aws::String&& value) { m_controlSetNameHasBeenSet = true; m_controlSetName = std::move(value); }

    /**
     * <p> Specifies the name of the control set that the notification is about. </p>
     */
    inline void SetControlSetName(const char* value) { m_controlSetNameHasBeenSet = true; m_controlSetName.assign(value); }

    /**
     * <p> Specifies the name of the control set that the notification is about. </p>
     */
    inline Notification& WithControlSetName(const Aws::String& value) { SetControlSetName(value); return *this;}

    /**
     * <p> Specifies the name of the control set that the notification is about. </p>
     */
    inline Notification& WithControlSetName(Aws::String&& value) { SetControlSetName(std::move(value)); return *this;}

    /**
     * <p> Specifies the name of the control set that the notification is about. </p>
     */
    inline Notification& WithControlSetName(const char* value) { SetControlSetName(value); return *this;}


    /**
     * <p> The description of the notification. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the notification. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the notification. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the notification. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the notification. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the notification. </p>
     */
    inline Notification& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the notification. </p>
     */
    inline Notification& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the notification. </p>
     */
    inline Notification& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The time when the notification was sent. </p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }

    /**
     * <p> The time when the notification was sent. </p>
     */
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }

    /**
     * <p> The time when the notification was sent. </p>
     */
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }

    /**
     * <p> The time when the notification was sent. </p>
     */
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }

    /**
     * <p> The time when the notification was sent. </p>
     */
    inline Notification& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}

    /**
     * <p> The time when the notification was sent. </p>
     */
    inline Notification& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}


    /**
     * <p> The sender of the notification. </p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p> The sender of the notification. </p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p> The sender of the notification. </p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p> The sender of the notification. </p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p> The sender of the notification. </p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p> The sender of the notification. </p>
     */
    inline Notification& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p> The sender of the notification. </p>
     */
    inline Notification& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p> The sender of the notification. </p>
     */
    inline Notification& WithSource(const char* value) { SetSource(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_assessmentName;
    bool m_assessmentNameHasBeenSet = false;

    Aws::String m_controlSetId;
    bool m_controlSetIdHasBeenSet = false;

    Aws::String m_controlSetName;
    bool m_controlSetNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws

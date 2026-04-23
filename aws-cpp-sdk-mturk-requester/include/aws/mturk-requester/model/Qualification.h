/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mturk-requester/model/Locale.h>
#include <aws/mturk-requester/model/QualificationStatus.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p>The Qualification data structure represents a Qualification assigned to a
   * user, including the Qualification type and the value (score).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/Qualification">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API Qualification
  {
  public:
    Qualification();
    Qualification(Aws::Utils::Json::JsonView jsonValue);
    Qualification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the Qualification type for the Qualification.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }

    /**
     * <p> The ID of the Qualification type for the Qualification.</p>
     */
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }

    /**
     * <p> The ID of the Qualification type for the Qualification.</p>
     */
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

    /**
     * <p> The ID of the Qualification type for the Qualification.</p>
     */
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::move(value); }

    /**
     * <p> The ID of the Qualification type for the Qualification.</p>
     */
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }

    /**
     * <p> The ID of the Qualification type for the Qualification.</p>
     */
    inline Qualification& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}

    /**
     * <p> The ID of the Qualification type for the Qualification.</p>
     */
    inline Qualification& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Qualification type for the Qualification.</p>
     */
    inline Qualification& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}


    /**
     * <p> The ID of the Worker who possesses the Qualification. </p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p> The ID of the Worker who possesses the Qualification. </p>
     */
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }

    /**
     * <p> The ID of the Worker who possesses the Qualification. </p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p> The ID of the Worker who possesses the Qualification. </p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }

    /**
     * <p> The ID of the Worker who possesses the Qualification. </p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p> The ID of the Worker who possesses the Qualification. </p>
     */
    inline Qualification& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p> The ID of the Worker who possesses the Qualification. </p>
     */
    inline Qualification& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Worker who possesses the Qualification. </p>
     */
    inline Qualification& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}


    /**
     * <p> The date and time the Qualification was granted to the Worker. If the
     * Worker's Qualification was revoked, and then re-granted based on a new
     * Qualification request, GrantTime is the date and time of the last call to the
     * AcceptQualificationRequest operation.</p>
     */
    inline const Aws::Utils::DateTime& GetGrantTime() const{ return m_grantTime; }

    /**
     * <p> The date and time the Qualification was granted to the Worker. If the
     * Worker's Qualification was revoked, and then re-granted based on a new
     * Qualification request, GrantTime is the date and time of the last call to the
     * AcceptQualificationRequest operation.</p>
     */
    inline bool GrantTimeHasBeenSet() const { return m_grantTimeHasBeenSet; }

    /**
     * <p> The date and time the Qualification was granted to the Worker. If the
     * Worker's Qualification was revoked, and then re-granted based on a new
     * Qualification request, GrantTime is the date and time of the last call to the
     * AcceptQualificationRequest operation.</p>
     */
    inline void SetGrantTime(const Aws::Utils::DateTime& value) { m_grantTimeHasBeenSet = true; m_grantTime = value; }

    /**
     * <p> The date and time the Qualification was granted to the Worker. If the
     * Worker's Qualification was revoked, and then re-granted based on a new
     * Qualification request, GrantTime is the date and time of the last call to the
     * AcceptQualificationRequest operation.</p>
     */
    inline void SetGrantTime(Aws::Utils::DateTime&& value) { m_grantTimeHasBeenSet = true; m_grantTime = std::move(value); }

    /**
     * <p> The date and time the Qualification was granted to the Worker. If the
     * Worker's Qualification was revoked, and then re-granted based on a new
     * Qualification request, GrantTime is the date and time of the last call to the
     * AcceptQualificationRequest operation.</p>
     */
    inline Qualification& WithGrantTime(const Aws::Utils::DateTime& value) { SetGrantTime(value); return *this;}

    /**
     * <p> The date and time the Qualification was granted to the Worker. If the
     * Worker's Qualification was revoked, and then re-granted based on a new
     * Qualification request, GrantTime is the date and time of the last call to the
     * AcceptQualificationRequest operation.</p>
     */
    inline Qualification& WithGrantTime(Aws::Utils::DateTime&& value) { SetGrantTime(std::move(value)); return *this;}


    /**
     * <p> The value (score) of the Qualification, if the Qualification has an integer
     * value.</p>
     */
    inline int GetIntegerValue() const{ return m_integerValue; }

    /**
     * <p> The value (score) of the Qualification, if the Qualification has an integer
     * value.</p>
     */
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }

    /**
     * <p> The value (score) of the Qualification, if the Qualification has an integer
     * value.</p>
     */
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }

    /**
     * <p> The value (score) of the Qualification, if the Qualification has an integer
     * value.</p>
     */
    inline Qualification& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}


    
    inline const Locale& GetLocaleValue() const{ return m_localeValue; }

    
    inline bool LocaleValueHasBeenSet() const { return m_localeValueHasBeenSet; }

    
    inline void SetLocaleValue(const Locale& value) { m_localeValueHasBeenSet = true; m_localeValue = value; }

    
    inline void SetLocaleValue(Locale&& value) { m_localeValueHasBeenSet = true; m_localeValue = std::move(value); }

    
    inline Qualification& WithLocaleValue(const Locale& value) { SetLocaleValue(value); return *this;}

    
    inline Qualification& WithLocaleValue(Locale&& value) { SetLocaleValue(std::move(value)); return *this;}


    /**
     * <p> The status of the Qualification. Valid values are Granted | Revoked.</p>
     */
    inline const QualificationStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the Qualification. Valid values are Granted | Revoked.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the Qualification. Valid values are Granted | Revoked.</p>
     */
    inline void SetStatus(const QualificationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the Qualification. Valid values are Granted | Revoked.</p>
     */
    inline void SetStatus(QualificationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the Qualification. Valid values are Granted | Revoked.</p>
     */
    inline Qualification& WithStatus(const QualificationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the Qualification. Valid values are Granted | Revoked.</p>
     */
    inline Qualification& WithStatus(QualificationStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet;

    Aws::Utils::DateTime m_grantTime;
    bool m_grantTimeHasBeenSet;

    int m_integerValue;
    bool m_integerValueHasBeenSet;

    Locale m_localeValue;
    bool m_localeValueHasBeenSet;

    QualificationStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws

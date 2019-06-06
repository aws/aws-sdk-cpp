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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/Action.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GuardDuty
{
namespace Model
{

  class AWS_GUARDDUTY_API Service
  {
  public:
    Service();
    Service(Aws::Utils::Json::JsonView jsonValue);
    Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the activity described in a finding.</p>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>Information about the activity described in a finding.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Information about the activity described in a finding.</p>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Information about the activity described in a finding.</p>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Information about the activity described in a finding.</p>
     */
    inline Service& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>Information about the activity described in a finding.</p>
     */
    inline Service& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Indicates whether this finding is archived.</p>
     */
    inline bool GetArchived() const{ return m_archived; }

    /**
     * <p>Indicates whether this finding is archived.</p>
     */
    inline bool ArchivedHasBeenSet() const { return m_archivedHasBeenSet; }

    /**
     * <p>Indicates whether this finding is archived.</p>
     */
    inline void SetArchived(bool value) { m_archivedHasBeenSet = true; m_archived = value; }

    /**
     * <p>Indicates whether this finding is archived.</p>
     */
    inline Service& WithArchived(bool value) { SetArchived(value); return *this;}


    /**
     * <p>Total count of the occurrences of this finding type.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>Total count of the occurrences of this finding type.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>Total count of the occurrences of this finding type.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>Total count of the occurrences of this finding type.</p>
     */
    inline Service& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>Detector ID for the GuardDuty service.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>Detector ID for the GuardDuty service.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>Detector ID for the GuardDuty service.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>Detector ID for the GuardDuty service.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>Detector ID for the GuardDuty service.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>Detector ID for the GuardDuty service.</p>
     */
    inline Service& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>Detector ID for the GuardDuty service.</p>
     */
    inline Service& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>Detector ID for the GuardDuty service.</p>
     */
    inline Service& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline const Aws::String& GetEventFirstSeen() const{ return m_eventFirstSeen; }

    /**
     * <p>First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline bool EventFirstSeenHasBeenSet() const { return m_eventFirstSeenHasBeenSet; }

    /**
     * <p>First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline void SetEventFirstSeen(const Aws::String& value) { m_eventFirstSeenHasBeenSet = true; m_eventFirstSeen = value; }

    /**
     * <p>First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline void SetEventFirstSeen(Aws::String&& value) { m_eventFirstSeenHasBeenSet = true; m_eventFirstSeen = std::move(value); }

    /**
     * <p>First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline void SetEventFirstSeen(const char* value) { m_eventFirstSeenHasBeenSet = true; m_eventFirstSeen.assign(value); }

    /**
     * <p>First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline Service& WithEventFirstSeen(const Aws::String& value) { SetEventFirstSeen(value); return *this;}

    /**
     * <p>First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline Service& WithEventFirstSeen(Aws::String&& value) { SetEventFirstSeen(std::move(value)); return *this;}

    /**
     * <p>First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline Service& WithEventFirstSeen(const char* value) { SetEventFirstSeen(value); return *this;}


    /**
     * <p>Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline const Aws::String& GetEventLastSeen() const{ return m_eventLastSeen; }

    /**
     * <p>Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline bool EventLastSeenHasBeenSet() const { return m_eventLastSeenHasBeenSet; }

    /**
     * <p>Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline void SetEventLastSeen(const Aws::String& value) { m_eventLastSeenHasBeenSet = true; m_eventLastSeen = value; }

    /**
     * <p>Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline void SetEventLastSeen(Aws::String&& value) { m_eventLastSeenHasBeenSet = true; m_eventLastSeen = std::move(value); }

    /**
     * <p>Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline void SetEventLastSeen(const char* value) { m_eventLastSeenHasBeenSet = true; m_eventLastSeen.assign(value); }

    /**
     * <p>Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline Service& WithEventLastSeen(const Aws::String& value) { SetEventLastSeen(value); return *this;}

    /**
     * <p>Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline Service& WithEventLastSeen(Aws::String&& value) { SetEventLastSeen(std::move(value)); return *this;}

    /**
     * <p>Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.</p>
     */
    inline Service& WithEventLastSeen(const char* value) { SetEventLastSeen(value); return *this;}


    /**
     * <p>Resource role information for this finding.</p>
     */
    inline const Aws::String& GetResourceRole() const{ return m_resourceRole; }

    /**
     * <p>Resource role information for this finding.</p>
     */
    inline bool ResourceRoleHasBeenSet() const { return m_resourceRoleHasBeenSet; }

    /**
     * <p>Resource role information for this finding.</p>
     */
    inline void SetResourceRole(const Aws::String& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = value; }

    /**
     * <p>Resource role information for this finding.</p>
     */
    inline void SetResourceRole(Aws::String&& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = std::move(value); }

    /**
     * <p>Resource role information for this finding.</p>
     */
    inline void SetResourceRole(const char* value) { m_resourceRoleHasBeenSet = true; m_resourceRole.assign(value); }

    /**
     * <p>Resource role information for this finding.</p>
     */
    inline Service& WithResourceRole(const Aws::String& value) { SetResourceRole(value); return *this;}

    /**
     * <p>Resource role information for this finding.</p>
     */
    inline Service& WithResourceRole(Aws::String&& value) { SetResourceRole(std::move(value)); return *this;}

    /**
     * <p>Resource role information for this finding.</p>
     */
    inline Service& WithResourceRole(const char* value) { SetResourceRole(value); return *this;}


    /**
     * <p>The name of the AWS service (GuardDuty) that generated a finding.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the AWS service (GuardDuty) that generated a finding.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the AWS service (GuardDuty) that generated a finding.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the AWS service (GuardDuty) that generated a finding.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the AWS service (GuardDuty) that generated a finding.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the AWS service (GuardDuty) that generated a finding.</p>
     */
    inline Service& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the AWS service (GuardDuty) that generated a finding.</p>
     */
    inline Service& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS service (GuardDuty) that generated a finding.</p>
     */
    inline Service& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>Feedback left about the finding.</p>
     */
    inline const Aws::String& GetUserFeedback() const{ return m_userFeedback; }

    /**
     * <p>Feedback left about the finding.</p>
     */
    inline bool UserFeedbackHasBeenSet() const { return m_userFeedbackHasBeenSet; }

    /**
     * <p>Feedback left about the finding.</p>
     */
    inline void SetUserFeedback(const Aws::String& value) { m_userFeedbackHasBeenSet = true; m_userFeedback = value; }

    /**
     * <p>Feedback left about the finding.</p>
     */
    inline void SetUserFeedback(Aws::String&& value) { m_userFeedbackHasBeenSet = true; m_userFeedback = std::move(value); }

    /**
     * <p>Feedback left about the finding.</p>
     */
    inline void SetUserFeedback(const char* value) { m_userFeedbackHasBeenSet = true; m_userFeedback.assign(value); }

    /**
     * <p>Feedback left about the finding.</p>
     */
    inline Service& WithUserFeedback(const Aws::String& value) { SetUserFeedback(value); return *this;}

    /**
     * <p>Feedback left about the finding.</p>
     */
    inline Service& WithUserFeedback(Aws::String&& value) { SetUserFeedback(std::move(value)); return *this;}

    /**
     * <p>Feedback left about the finding.</p>
     */
    inline Service& WithUserFeedback(const char* value) { SetUserFeedback(value); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet;

    bool m_archived;
    bool m_archivedHasBeenSet;

    int m_count;
    bool m_countHasBeenSet;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::String m_eventFirstSeen;
    bool m_eventFirstSeenHasBeenSet;

    Aws::String m_eventLastSeen;
    bool m_eventLastSeenHasBeenSet;

    Aws::String m_resourceRole;
    bool m_resourceRoleHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    Aws::String m_userFeedback;
    bool m_userFeedbackHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

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

  /**
   * Additional information assigned to the generated finding by GuardDuty.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Service">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API Service
  {
  public:
    Service();
    Service(Aws::Utils::Json::JsonView jsonValue);
    Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Information about the activity described in a finding.
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * Information about the activity described in a finding.
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * Information about the activity described in a finding.
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * Information about the activity described in a finding.
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * Information about the activity described in a finding.
     */
    inline Service& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * Information about the activity described in a finding.
     */
    inline Service& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * Indicates whether this finding is archived.
     */
    inline bool GetArchived() const{ return m_archived; }

    /**
     * Indicates whether this finding is archived.
     */
    inline bool ArchivedHasBeenSet() const { return m_archivedHasBeenSet; }

    /**
     * Indicates whether this finding is archived.
     */
    inline void SetArchived(bool value) { m_archivedHasBeenSet = true; m_archived = value; }

    /**
     * Indicates whether this finding is archived.
     */
    inline Service& WithArchived(bool value) { SetArchived(value); return *this;}


    /**
     * Total count of the occurrences of this finding type.
     */
    inline int GetCount() const{ return m_count; }

    /**
     * Total count of the occurrences of this finding type.
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * Total count of the occurrences of this finding type.
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * Total count of the occurrences of this finding type.
     */
    inline Service& WithCount(int value) { SetCount(value); return *this;}


    /**
     * Detector ID for the GuardDuty service.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * Detector ID for the GuardDuty service.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * Detector ID for the GuardDuty service.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * Detector ID for the GuardDuty service.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * Detector ID for the GuardDuty service.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * Detector ID for the GuardDuty service.
     */
    inline Service& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * Detector ID for the GuardDuty service.
     */
    inline Service& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * Detector ID for the GuardDuty service.
     */
    inline Service& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline const Aws::String& GetEventFirstSeen() const{ return m_eventFirstSeen; }

    /**
     * First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline bool EventFirstSeenHasBeenSet() const { return m_eventFirstSeenHasBeenSet; }

    /**
     * First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline void SetEventFirstSeen(const Aws::String& value) { m_eventFirstSeenHasBeenSet = true; m_eventFirstSeen = value; }

    /**
     * First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline void SetEventFirstSeen(Aws::String&& value) { m_eventFirstSeenHasBeenSet = true; m_eventFirstSeen = std::move(value); }

    /**
     * First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline void SetEventFirstSeen(const char* value) { m_eventFirstSeenHasBeenSet = true; m_eventFirstSeen.assign(value); }

    /**
     * First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline Service& WithEventFirstSeen(const Aws::String& value) { SetEventFirstSeen(value); return *this;}

    /**
     * First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline Service& WithEventFirstSeen(Aws::String&& value) { SetEventFirstSeen(std::move(value)); return *this;}

    /**
     * First seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline Service& WithEventFirstSeen(const char* value) { SetEventFirstSeen(value); return *this;}


    /**
     * Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline const Aws::String& GetEventLastSeen() const{ return m_eventLastSeen; }

    /**
     * Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline bool EventLastSeenHasBeenSet() const { return m_eventLastSeenHasBeenSet; }

    /**
     * Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline void SetEventLastSeen(const Aws::String& value) { m_eventLastSeenHasBeenSet = true; m_eventLastSeen = value; }

    /**
     * Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline void SetEventLastSeen(Aws::String&& value) { m_eventLastSeenHasBeenSet = true; m_eventLastSeen = std::move(value); }

    /**
     * Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline void SetEventLastSeen(const char* value) { m_eventLastSeenHasBeenSet = true; m_eventLastSeen.assign(value); }

    /**
     * Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline Service& WithEventLastSeen(const Aws::String& value) { SetEventLastSeen(value); return *this;}

    /**
     * Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline Service& WithEventLastSeen(Aws::String&& value) { SetEventLastSeen(std::move(value)); return *this;}

    /**
     * Last seen timestamp of the activity that prompted GuardDuty to generate this
     * finding.
     */
    inline Service& WithEventLastSeen(const char* value) { SetEventLastSeen(value); return *this;}


    /**
     * Resource role information for this finding.
     */
    inline const Aws::String& GetResourceRole() const{ return m_resourceRole; }

    /**
     * Resource role information for this finding.
     */
    inline bool ResourceRoleHasBeenSet() const { return m_resourceRoleHasBeenSet; }

    /**
     * Resource role information for this finding.
     */
    inline void SetResourceRole(const Aws::String& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = value; }

    /**
     * Resource role information for this finding.
     */
    inline void SetResourceRole(Aws::String&& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = std::move(value); }

    /**
     * Resource role information for this finding.
     */
    inline void SetResourceRole(const char* value) { m_resourceRoleHasBeenSet = true; m_resourceRole.assign(value); }

    /**
     * Resource role information for this finding.
     */
    inline Service& WithResourceRole(const Aws::String& value) { SetResourceRole(value); return *this;}

    /**
     * Resource role information for this finding.
     */
    inline Service& WithResourceRole(Aws::String&& value) { SetResourceRole(std::move(value)); return *this;}

    /**
     * Resource role information for this finding.
     */
    inline Service& WithResourceRole(const char* value) { SetResourceRole(value); return *this;}


    /**
     * The name of the AWS service (GuardDuty) that generated a finding.
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * The name of the AWS service (GuardDuty) that generated a finding.
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * The name of the AWS service (GuardDuty) that generated a finding.
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * The name of the AWS service (GuardDuty) that generated a finding.
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * The name of the AWS service (GuardDuty) that generated a finding.
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * The name of the AWS service (GuardDuty) that generated a finding.
     */
    inline Service& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * The name of the AWS service (GuardDuty) that generated a finding.
     */
    inline Service& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * The name of the AWS service (GuardDuty) that generated a finding.
     */
    inline Service& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * Feedback left about the finding.
     */
    inline const Aws::String& GetUserFeedback() const{ return m_userFeedback; }

    /**
     * Feedback left about the finding.
     */
    inline bool UserFeedbackHasBeenSet() const { return m_userFeedbackHasBeenSet; }

    /**
     * Feedback left about the finding.
     */
    inline void SetUserFeedback(const Aws::String& value) { m_userFeedbackHasBeenSet = true; m_userFeedback = value; }

    /**
     * Feedback left about the finding.
     */
    inline void SetUserFeedback(Aws::String&& value) { m_userFeedbackHasBeenSet = true; m_userFeedback = std::move(value); }

    /**
     * Feedback left about the finding.
     */
    inline void SetUserFeedback(const char* value) { m_userFeedbackHasBeenSet = true; m_userFeedback.assign(value); }

    /**
     * Feedback left about the finding.
     */
    inline Service& WithUserFeedback(const Aws::String& value) { SetUserFeedback(value); return *this;}

    /**
     * Feedback left about the finding.
     */
    inline Service& WithUserFeedback(Aws::String&& value) { SetUserFeedback(std::move(value)); return *this;}

    /**
     * Feedback left about the finding.
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

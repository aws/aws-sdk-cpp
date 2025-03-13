/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/AlarmModelVersionStatus.h>
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
namespace IoTEvents
{
namespace Model
{
  class UpdateAlarmModelResult
  {
  public:
    AWS_IOTEVENTS_API UpdateAlarmModelResult() = default;
    AWS_IOTEVENTS_API UpdateAlarmModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API UpdateAlarmModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    UpdateAlarmModelResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAlarmModelArn() const { return m_alarmModelArn; }
    template<typename AlarmModelArnT = Aws::String>
    void SetAlarmModelArn(AlarmModelArnT&& value) { m_alarmModelArnHasBeenSet = true; m_alarmModelArn = std::forward<AlarmModelArnT>(value); }
    template<typename AlarmModelArnT = Aws::String>
    UpdateAlarmModelResult& WithAlarmModelArn(AlarmModelArnT&& value) { SetAlarmModelArn(std::forward<AlarmModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelVersion() const { return m_alarmModelVersion; }
    template<typename AlarmModelVersionT = Aws::String>
    void SetAlarmModelVersion(AlarmModelVersionT&& value) { m_alarmModelVersionHasBeenSet = true; m_alarmModelVersion = std::forward<AlarmModelVersionT>(value); }
    template<typename AlarmModelVersionT = Aws::String>
    UpdateAlarmModelResult& WithAlarmModelVersion(AlarmModelVersionT&& value) { SetAlarmModelVersion(std::forward<AlarmModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    UpdateAlarmModelResult& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the alarm model. The status can be one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The alarm model is active and
     * it's ready to evaluate data.</p> </li> <li> <p> <code>ACTIVATING</code> - AWS
     * IoT Events is activating your alarm model. Activating an alarm model can take up
     * to a few minutes.</p> </li> <li> <p> <code>INACTIVE</code> - The alarm model is
     * inactive, so it isn't ready to evaluate data. Check your alarm model information
     * and update the alarm model.</p> </li> <li> <p> <code>FAILED</code> - You
     * couldn't create or update the alarm model. Check your alarm model information
     * and try again.</p> </li> </ul>
     */
    inline AlarmModelVersionStatus GetStatus() const { return m_status; }
    inline void SetStatus(AlarmModelVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateAlarmModelResult& WithStatus(AlarmModelVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAlarmModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_alarmModelArn;
    bool m_alarmModelArnHasBeenSet = false;

    Aws::String m_alarmModelVersion;
    bool m_alarmModelVersionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    AlarmModelVersionStatus m_status{AlarmModelVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws

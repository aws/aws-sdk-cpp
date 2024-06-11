﻿/**
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
  class CreateAlarmModelResult
  {
  public:
    AWS_IOTEVENTS_API CreateAlarmModelResult();
    AWS_IOTEVENTS_API CreateAlarmModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API CreateAlarmModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline CreateAlarmModelResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline CreateAlarmModelResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAlarmModelArn() const{ return m_alarmModelArn; }
    inline void SetAlarmModelArn(const Aws::String& value) { m_alarmModelArn = value; }
    inline void SetAlarmModelArn(Aws::String&& value) { m_alarmModelArn = std::move(value); }
    inline void SetAlarmModelArn(const char* value) { m_alarmModelArn.assign(value); }
    inline CreateAlarmModelResult& WithAlarmModelArn(const Aws::String& value) { SetAlarmModelArn(value); return *this;}
    inline CreateAlarmModelResult& WithAlarmModelArn(Aws::String&& value) { SetAlarmModelArn(std::move(value)); return *this;}
    inline CreateAlarmModelResult& WithAlarmModelArn(const char* value) { SetAlarmModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelVersion() const{ return m_alarmModelVersion; }
    inline void SetAlarmModelVersion(const Aws::String& value) { m_alarmModelVersion = value; }
    inline void SetAlarmModelVersion(Aws::String&& value) { m_alarmModelVersion = std::move(value); }
    inline void SetAlarmModelVersion(const char* value) { m_alarmModelVersion.assign(value); }
    inline CreateAlarmModelResult& WithAlarmModelVersion(const Aws::String& value) { SetAlarmModelVersion(value); return *this;}
    inline CreateAlarmModelResult& WithAlarmModelVersion(Aws::String&& value) { SetAlarmModelVersion(std::move(value)); return *this;}
    inline CreateAlarmModelResult& WithAlarmModelVersion(const char* value) { SetAlarmModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTime = std::move(value); }
    inline CreateAlarmModelResult& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline CreateAlarmModelResult& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
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
    inline const AlarmModelVersionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const AlarmModelVersionStatus& value) { m_status = value; }
    inline void SetStatus(AlarmModelVersionStatus&& value) { m_status = std::move(value); }
    inline CreateAlarmModelResult& WithStatus(const AlarmModelVersionStatus& value) { SetStatus(value); return *this;}
    inline CreateAlarmModelResult& WithStatus(AlarmModelVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAlarmModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAlarmModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAlarmModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_alarmModelArn;

    Aws::String m_alarmModelVersion;

    Aws::Utils::DateTime m_lastUpdateTime;

    AlarmModelVersionStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws

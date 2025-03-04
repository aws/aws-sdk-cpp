/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot-managed-integrations/model/OtaStatus.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure representing one over-the-air (OTA) task.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/OtaTaskSummary">AWS
   * API Reference</a></p>
   */
  class OtaTaskSummary
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskSummary();
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the over-the-air (OTA) task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline OtaTaskSummary& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline OtaTaskSummary& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline OtaTaskSummary& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the over-the-air (OTA) task.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }
    inline OtaTaskSummary& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline OtaTaskSummary& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline OtaTaskSummary& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task was created at.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline OtaTaskSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline OtaTaskSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task was last updated
     * at.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline OtaTaskSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline OtaTaskSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the over-the-air (OTA) task configuration.</p>
     */
    inline const Aws::String& GetTaskConfigurationId() const{ return m_taskConfigurationId; }
    inline bool TaskConfigurationIdHasBeenSet() const { return m_taskConfigurationIdHasBeenSet; }
    inline void SetTaskConfigurationId(const Aws::String& value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId = value; }
    inline void SetTaskConfigurationId(Aws::String&& value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId = std::move(value); }
    inline void SetTaskConfigurationId(const char* value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId.assign(value); }
    inline OtaTaskSummary& WithTaskConfigurationId(const Aws::String& value) { SetTaskConfigurationId(value); return *this;}
    inline OtaTaskSummary& WithTaskConfigurationId(Aws::String&& value) { SetTaskConfigurationId(std::move(value)); return *this;}
    inline OtaTaskSummary& WithTaskConfigurationId(const char* value) { SetTaskConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the over-the-air (OTA) task summary.</p>
     */
    inline const OtaStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OtaStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OtaStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline OtaTaskSummary& WithStatus(const OtaStatus& value) { SetStatus(value); return *this;}
    inline OtaTaskSummary& WithStatus(OtaStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_taskConfigurationId;
    bool m_taskConfigurationIdHasBeenSet = false;

    OtaStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

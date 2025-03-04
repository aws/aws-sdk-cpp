/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure representing one over-the-air (OTA) task
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/OtaTaskConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class OtaTaskConfigurationSummary
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskConfigurationSummary();
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the over-the-air (OTA) task configuration</p>
     */
    inline const Aws::String& GetTaskConfigurationId() const{ return m_taskConfigurationId; }
    inline bool TaskConfigurationIdHasBeenSet() const { return m_taskConfigurationIdHasBeenSet; }
    inline void SetTaskConfigurationId(const Aws::String& value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId = value; }
    inline void SetTaskConfigurationId(Aws::String&& value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId = std::move(value); }
    inline void SetTaskConfigurationId(const char* value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId.assign(value); }
    inline OtaTaskConfigurationSummary& WithTaskConfigurationId(const Aws::String& value) { SetTaskConfigurationId(value); return *this;}
    inline OtaTaskConfigurationSummary& WithTaskConfigurationId(Aws::String&& value) { SetTaskConfigurationId(std::move(value)); return *this;}
    inline OtaTaskConfigurationSummary& WithTaskConfigurationId(const char* value) { SetTaskConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the over-the-air (OTA) task configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline OtaTaskConfigurationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline OtaTaskConfigurationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline OtaTaskConfigurationSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the over-the-air (OTA) task configuration was
     * created at.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline OtaTaskConfigurationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline OtaTaskConfigurationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskConfigurationId;
    bool m_taskConfigurationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

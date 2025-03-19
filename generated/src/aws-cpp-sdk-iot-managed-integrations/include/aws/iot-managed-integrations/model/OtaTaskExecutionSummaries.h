/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/OtaTaskExecutionSummary.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure representing one execution summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/OtaTaskExecutionSummaries">AWS
   * API Reference</a></p>
   */
  class OtaTaskExecutionSummaries
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionSummaries() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionSummaries(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionSummaries& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Structure representing one over-the-air (OTA) task execution summary</p>
     */
    inline const OtaTaskExecutionSummary& GetTaskExecutionSummary() const { return m_taskExecutionSummary; }
    inline bool TaskExecutionSummaryHasBeenSet() const { return m_taskExecutionSummaryHasBeenSet; }
    template<typename TaskExecutionSummaryT = OtaTaskExecutionSummary>
    void SetTaskExecutionSummary(TaskExecutionSummaryT&& value) { m_taskExecutionSummaryHasBeenSet = true; m_taskExecutionSummary = std::forward<TaskExecutionSummaryT>(value); }
    template<typename TaskExecutionSummaryT = OtaTaskExecutionSummary>
    OtaTaskExecutionSummaries& WithTaskExecutionSummary(TaskExecutionSummaryT&& value) { SetTaskExecutionSummary(std::forward<TaskExecutionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of a managed thing.</p>
     */
    inline const Aws::String& GetManagedThingId() const { return m_managedThingId; }
    inline bool ManagedThingIdHasBeenSet() const { return m_managedThingIdHasBeenSet; }
    template<typename ManagedThingIdT = Aws::String>
    void SetManagedThingId(ManagedThingIdT&& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = std::forward<ManagedThingIdT>(value); }
    template<typename ManagedThingIdT = Aws::String>
    OtaTaskExecutionSummaries& WithManagedThingId(ManagedThingIdT&& value) { SetManagedThingId(std::forward<ManagedThingIdT>(value)); return *this;}
    ///@}
  private:

    OtaTaskExecutionSummary m_taskExecutionSummary;
    bool m_taskExecutionSummaryHasBeenSet = false;

    Aws::String m_managedThingId;
    bool m_managedThingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

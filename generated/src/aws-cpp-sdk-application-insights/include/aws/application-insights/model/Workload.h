/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/Tier.h>
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
namespace ApplicationInsights
{
namespace Model
{

  /**
   * <p>Describes the workloads on a component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/Workload">AWS
   * API Reference</a></p>
   */
  class Workload
  {
  public:
    AWS_APPLICATIONINSIGHTS_API Workload() = default;
    AWS_APPLICATIONINSIGHTS_API Workload(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Workload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the workload.</p>
     */
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    Workload& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    Workload& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workload.</p>
     */
    inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    template<typename WorkloadNameT = Aws::String>
    void SetWorkloadName(WorkloadNameT&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::forward<WorkloadNameT>(value); }
    template<typename WorkloadNameT = Aws::String>
    Workload& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tier of the workload.</p>
     */
    inline Tier GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(Tier value) { m_tierHasBeenSet = true; m_tier = value; }
    inline Workload& WithTier(Tier value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If logging is supported for the resource type, shows whether the component
     * has configured logs to be monitored.</p>
     */
    inline const Aws::String& GetWorkloadRemarks() const { return m_workloadRemarks; }
    inline bool WorkloadRemarksHasBeenSet() const { return m_workloadRemarksHasBeenSet; }
    template<typename WorkloadRemarksT = Aws::String>
    void SetWorkloadRemarks(WorkloadRemarksT&& value) { m_workloadRemarksHasBeenSet = true; m_workloadRemarks = std::forward<WorkloadRemarksT>(value); }
    template<typename WorkloadRemarksT = Aws::String>
    Workload& WithWorkloadRemarks(WorkloadRemarksT&& value) { SetWorkloadRemarks(std::forward<WorkloadRemarksT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether all of the component configurations required to monitor a
     * workload were provided.</p>
     */
    inline bool GetMissingWorkloadConfig() const { return m_missingWorkloadConfig; }
    inline bool MissingWorkloadConfigHasBeenSet() const { return m_missingWorkloadConfigHasBeenSet; }
    inline void SetMissingWorkloadConfig(bool value) { m_missingWorkloadConfigHasBeenSet = true; m_missingWorkloadConfig = value; }
    inline Workload& WithMissingWorkloadConfig(bool value) { SetMissingWorkloadConfig(value); return *this;}
    ///@}
  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Tier m_tier{Tier::NOT_SET};
    bool m_tierHasBeenSet = false;

    Aws::String m_workloadRemarks;
    bool m_workloadRemarksHasBeenSet = false;

    bool m_missingWorkloadConfig{false};
    bool m_missingWorkloadConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws

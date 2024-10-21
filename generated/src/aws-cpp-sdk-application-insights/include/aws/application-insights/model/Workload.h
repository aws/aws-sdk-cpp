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
    AWS_APPLICATIONINSIGHTS_API Workload();
    AWS_APPLICATIONINSIGHTS_API Workload(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Workload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the workload.</p>
     */
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }
    inline Workload& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}
    inline Workload& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}
    inline Workload& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }
    inline Workload& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}
    inline Workload& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}
    inline Workload& WithComponentName(const char* value) { SetComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workload.</p>
     */
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }
    inline Workload& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}
    inline Workload& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}
    inline Workload& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tier of the workload.</p>
     */
    inline const Tier& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const Tier& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(Tier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline Workload& WithTier(const Tier& value) { SetTier(value); return *this;}
    inline Workload& WithTier(Tier&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If logging is supported for the resource type, shows whether the component
     * has configured logs to be monitored.</p>
     */
    inline const Aws::String& GetWorkloadRemarks() const{ return m_workloadRemarks; }
    inline bool WorkloadRemarksHasBeenSet() const { return m_workloadRemarksHasBeenSet; }
    inline void SetWorkloadRemarks(const Aws::String& value) { m_workloadRemarksHasBeenSet = true; m_workloadRemarks = value; }
    inline void SetWorkloadRemarks(Aws::String&& value) { m_workloadRemarksHasBeenSet = true; m_workloadRemarks = std::move(value); }
    inline void SetWorkloadRemarks(const char* value) { m_workloadRemarksHasBeenSet = true; m_workloadRemarks.assign(value); }
    inline Workload& WithWorkloadRemarks(const Aws::String& value) { SetWorkloadRemarks(value); return *this;}
    inline Workload& WithWorkloadRemarks(Aws::String&& value) { SetWorkloadRemarks(std::move(value)); return *this;}
    inline Workload& WithWorkloadRemarks(const char* value) { SetWorkloadRemarks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether all of the component configurations required to monitor a
     * workload were provided.</p>
     */
    inline bool GetMissingWorkloadConfig() const{ return m_missingWorkloadConfig; }
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

    Tier m_tier;
    bool m_tierHasBeenSet = false;

    Aws::String m_workloadRemarks;
    bool m_workloadRemarksHasBeenSet = false;

    bool m_missingWorkloadConfig;
    bool m_missingWorkloadConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/WorkspaceConfigurationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amp/model/LimitsPerLabelSet.h>
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
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>This structure contains the description of the workspace
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/WorkspaceConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class WorkspaceConfigurationDescription
  {
  public:
    AWS_PROMETHEUSSERVICE_API WorkspaceConfigurationDescription() = default;
    AWS_PROMETHEUSSERVICE_API WorkspaceConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API WorkspaceConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This structure displays the current status of the workspace configuration,
     * and might also contain a reason for that status.</p>
     */
    inline const WorkspaceConfigurationStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = WorkspaceConfigurationStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = WorkspaceConfigurationStatus>
    WorkspaceConfigurationDescription& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an array of structures, where each structure displays one label sets
     * for the workspace and the limits for that label set.</p>
     */
    inline const Aws::Vector<LimitsPerLabelSet>& GetLimitsPerLabelSet() const { return m_limitsPerLabelSet; }
    inline bool LimitsPerLabelSetHasBeenSet() const { return m_limitsPerLabelSetHasBeenSet; }
    template<typename LimitsPerLabelSetT = Aws::Vector<LimitsPerLabelSet>>
    void SetLimitsPerLabelSet(LimitsPerLabelSetT&& value) { m_limitsPerLabelSetHasBeenSet = true; m_limitsPerLabelSet = std::forward<LimitsPerLabelSetT>(value); }
    template<typename LimitsPerLabelSetT = Aws::Vector<LimitsPerLabelSet>>
    WorkspaceConfigurationDescription& WithLimitsPerLabelSet(LimitsPerLabelSetT&& value) { SetLimitsPerLabelSet(std::forward<LimitsPerLabelSetT>(value)); return *this;}
    template<typename LimitsPerLabelSetT = LimitsPerLabelSet>
    WorkspaceConfigurationDescription& AddLimitsPerLabelSet(LimitsPerLabelSetT&& value) { m_limitsPerLabelSetHasBeenSet = true; m_limitsPerLabelSet.emplace_back(std::forward<LimitsPerLabelSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This field displays how many days that metrics are retained in the
     * workspace.</p>
     */
    inline int GetRetentionPeriodInDays() const { return m_retentionPeriodInDays; }
    inline bool RetentionPeriodInDaysHasBeenSet() const { return m_retentionPeriodInDaysHasBeenSet; }
    inline void SetRetentionPeriodInDays(int value) { m_retentionPeriodInDaysHasBeenSet = true; m_retentionPeriodInDays = value; }
    inline WorkspaceConfigurationDescription& WithRetentionPeriodInDays(int value) { SetRetentionPeriodInDays(value); return *this;}
    ///@}
  private:

    WorkspaceConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<LimitsPerLabelSet> m_limitsPerLabelSet;
    bool m_limitsPerLabelSetHasBeenSet = false;

    int m_retentionPeriodInDays{0};
    bool m_retentionPeriodInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws

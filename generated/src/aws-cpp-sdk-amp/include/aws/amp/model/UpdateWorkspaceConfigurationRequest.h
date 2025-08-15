/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amp/model/LimitsPerLabelSet.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

  /**
   */
  class UpdateWorkspaceConfigurationRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API UpdateWorkspaceConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkspaceConfiguration"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the workspace that you want to update. To find the IDs of your
     * workspaces, use the <a
     * href="https://docs.aws.amazon.com/prometheus/latest/APIReference/API_ListWorkspaces.htm">ListWorkspaces</a>
     * operation.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    UpdateWorkspaceConfigurationRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can include a token in your operation to make it an idempotent opeartion.
     * </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateWorkspaceConfigurationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an array of structures, where each structure defines a label set for
     * the workspace, and defines the active time series limit for each of those label
     * sets. Each label name in a label set must be unique.</p>
     */
    inline const Aws::Vector<LimitsPerLabelSet>& GetLimitsPerLabelSet() const { return m_limitsPerLabelSet; }
    inline bool LimitsPerLabelSetHasBeenSet() const { return m_limitsPerLabelSetHasBeenSet; }
    template<typename LimitsPerLabelSetT = Aws::Vector<LimitsPerLabelSet>>
    void SetLimitsPerLabelSet(LimitsPerLabelSetT&& value) { m_limitsPerLabelSetHasBeenSet = true; m_limitsPerLabelSet = std::forward<LimitsPerLabelSetT>(value); }
    template<typename LimitsPerLabelSetT = Aws::Vector<LimitsPerLabelSet>>
    UpdateWorkspaceConfigurationRequest& WithLimitsPerLabelSet(LimitsPerLabelSetT&& value) { SetLimitsPerLabelSet(std::forward<LimitsPerLabelSetT>(value)); return *this;}
    template<typename LimitsPerLabelSetT = LimitsPerLabelSet>
    UpdateWorkspaceConfigurationRequest& AddLimitsPerLabelSet(LimitsPerLabelSetT&& value) { m_limitsPerLabelSetHasBeenSet = true; m_limitsPerLabelSet.emplace_back(std::forward<LimitsPerLabelSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies how many days that metrics will be retained in the workspace.</p>
     */
    inline int GetRetentionPeriodInDays() const { return m_retentionPeriodInDays; }
    inline bool RetentionPeriodInDaysHasBeenSet() const { return m_retentionPeriodInDaysHasBeenSet; }
    inline void SetRetentionPeriodInDays(int value) { m_retentionPeriodInDaysHasBeenSet = true; m_retentionPeriodInDays = value; }
    inline UpdateWorkspaceConfigurationRequest& WithRetentionPeriodInDays(int value) { SetRetentionPeriodInDays(value); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<LimitsPerLabelSet> m_limitsPerLabelSet;
    bool m_limitsPerLabelSetHasBeenSet = false;

    int m_retentionPeriodInDays{0};
    bool m_retentionPeriodInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws

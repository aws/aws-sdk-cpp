/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditMitigationActionsTaskTarget.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class StartAuditMitigationActionsTaskRequest : public IoTRequest
  {
  public:
    AWS_IOT_API StartAuditMitigationActionsTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAuditMitigationActionsTask"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for the task. You can use this identifier to check the
     * status of the task or to cancel it.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    StartAuditMitigationActionsTaskRequest& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the audit findings to which the mitigation actions are applied. You
     * can apply them to a type of audit check, to all findings from an audit, or to a
     * specific set of findings.</p>
     */
    inline const AuditMitigationActionsTaskTarget& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = AuditMitigationActionsTaskTarget>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = AuditMitigationActionsTaskTarget>
    StartAuditMitigationActionsTaskRequest& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For an audit check, specifies which mitigation actions to apply. Those
     * actions must be defined in your Amazon Web Services accounts.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAuditCheckToActionsMapping() const { return m_auditCheckToActionsMapping; }
    inline bool AuditCheckToActionsMappingHasBeenSet() const { return m_auditCheckToActionsMappingHasBeenSet; }
    template<typename AuditCheckToActionsMappingT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetAuditCheckToActionsMapping(AuditCheckToActionsMappingT&& value) { m_auditCheckToActionsMappingHasBeenSet = true; m_auditCheckToActionsMapping = std::forward<AuditCheckToActionsMappingT>(value); }
    template<typename AuditCheckToActionsMappingT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    StartAuditMitigationActionsTaskRequest& WithAuditCheckToActionsMapping(AuditCheckToActionsMappingT&& value) { SetAuditCheckToActionsMapping(std::forward<AuditCheckToActionsMappingT>(value)); return *this;}
    template<typename AuditCheckToActionsMappingKeyT = Aws::String, typename AuditCheckToActionsMappingValueT = Aws::Vector<Aws::String>>
    StartAuditMitigationActionsTaskRequest& AddAuditCheckToActionsMapping(AuditCheckToActionsMappingKeyT&& key, AuditCheckToActionsMappingValueT&& value) {
      m_auditCheckToActionsMappingHasBeenSet = true; m_auditCheckToActionsMapping.emplace(std::forward<AuditCheckToActionsMappingKeyT>(key), std::forward<AuditCheckToActionsMappingValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Each audit mitigation task must have a unique client request token. If you
     * try to start a new task with the same token as a task that already exists, an
     * exception occurs. If you omit this value, a unique client request token is
     * generated automatically.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartAuditMitigationActionsTaskRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    AuditMitigationActionsTaskTarget m_target;
    bool m_targetHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_auditCheckToActionsMapping;
    bool m_auditCheckToActionsMappingHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

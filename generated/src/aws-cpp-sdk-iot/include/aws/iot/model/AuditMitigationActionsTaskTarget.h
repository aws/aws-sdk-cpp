/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Used in MitigationActionParams, this information identifies the target
   * findings to which the mitigation actions are applied. Only one entry
   * appears.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuditMitigationActionsTaskTarget">AWS
   * API Reference</a></p>
   */
  class AuditMitigationActionsTaskTarget
  {
  public:
    AWS_IOT_API AuditMitigationActionsTaskTarget() = default;
    AWS_IOT_API AuditMitigationActionsTaskTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuditMitigationActionsTaskTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the task will apply a mitigation action to findings from a specific audit,
     * this value uniquely identifies the audit.</p>
     */
    inline const Aws::String& GetAuditTaskId() const { return m_auditTaskId; }
    inline bool AuditTaskIdHasBeenSet() const { return m_auditTaskIdHasBeenSet; }
    template<typename AuditTaskIdT = Aws::String>
    void SetAuditTaskId(AuditTaskIdT&& value) { m_auditTaskIdHasBeenSet = true; m_auditTaskId = std::forward<AuditTaskIdT>(value); }
    template<typename AuditTaskIdT = Aws::String>
    AuditMitigationActionsTaskTarget& WithAuditTaskId(AuditTaskIdT&& value) { SetAuditTaskId(std::forward<AuditTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the task will apply a mitigation action to one or more listed findings,
     * this value uniquely identifies those findings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingIds() const { return m_findingIds; }
    inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }
    template<typename FindingIdsT = Aws::Vector<Aws::String>>
    void SetFindingIds(FindingIdsT&& value) { m_findingIdsHasBeenSet = true; m_findingIds = std::forward<FindingIdsT>(value); }
    template<typename FindingIdsT = Aws::Vector<Aws::String>>
    AuditMitigationActionsTaskTarget& WithFindingIds(FindingIdsT&& value) { SetFindingIds(std::forward<FindingIdsT>(value)); return *this;}
    template<typename FindingIdsT = Aws::String>
    AuditMitigationActionsTaskTarget& AddFindingIds(FindingIdsT&& value) { m_findingIdsHasBeenSet = true; m_findingIds.emplace_back(std::forward<FindingIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a filter in the form of an audit check and set of reason codes that
     * identify the findings from the audit to which the audit mitigation actions task
     * apply.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAuditCheckToReasonCodeFilter() const { return m_auditCheckToReasonCodeFilter; }
    inline bool AuditCheckToReasonCodeFilterHasBeenSet() const { return m_auditCheckToReasonCodeFilterHasBeenSet; }
    template<typename AuditCheckToReasonCodeFilterT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetAuditCheckToReasonCodeFilter(AuditCheckToReasonCodeFilterT&& value) { m_auditCheckToReasonCodeFilterHasBeenSet = true; m_auditCheckToReasonCodeFilter = std::forward<AuditCheckToReasonCodeFilterT>(value); }
    template<typename AuditCheckToReasonCodeFilterT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    AuditMitigationActionsTaskTarget& WithAuditCheckToReasonCodeFilter(AuditCheckToReasonCodeFilterT&& value) { SetAuditCheckToReasonCodeFilter(std::forward<AuditCheckToReasonCodeFilterT>(value)); return *this;}
    template<typename AuditCheckToReasonCodeFilterKeyT = Aws::String, typename AuditCheckToReasonCodeFilterValueT = Aws::Vector<Aws::String>>
    AuditMitigationActionsTaskTarget& AddAuditCheckToReasonCodeFilter(AuditCheckToReasonCodeFilterKeyT&& key, AuditCheckToReasonCodeFilterValueT&& value) {
      m_auditCheckToReasonCodeFilterHasBeenSet = true; m_auditCheckToReasonCodeFilter.emplace(std::forward<AuditCheckToReasonCodeFilterKeyT>(key), std::forward<AuditCheckToReasonCodeFilterValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_auditTaskId;
    bool m_auditTaskIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_findingIds;
    bool m_findingIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_auditCheckToReasonCodeFilter;
    bool m_auditCheckToReasonCodeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

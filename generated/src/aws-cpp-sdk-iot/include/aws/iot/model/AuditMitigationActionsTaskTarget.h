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
    AWS_IOT_API AuditMitigationActionsTaskTarget();
    AWS_IOT_API AuditMitigationActionsTaskTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuditMitigationActionsTaskTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If the task will apply a mitigation action to findings from a specific audit,
     * this value uniquely identifies the audit.</p>
     */
    inline const Aws::String& GetAuditTaskId() const{ return m_auditTaskId; }

    /**
     * <p>If the task will apply a mitigation action to findings from a specific audit,
     * this value uniquely identifies the audit.</p>
     */
    inline bool AuditTaskIdHasBeenSet() const { return m_auditTaskIdHasBeenSet; }

    /**
     * <p>If the task will apply a mitigation action to findings from a specific audit,
     * this value uniquely identifies the audit.</p>
     */
    inline void SetAuditTaskId(const Aws::String& value) { m_auditTaskIdHasBeenSet = true; m_auditTaskId = value; }

    /**
     * <p>If the task will apply a mitigation action to findings from a specific audit,
     * this value uniquely identifies the audit.</p>
     */
    inline void SetAuditTaskId(Aws::String&& value) { m_auditTaskIdHasBeenSet = true; m_auditTaskId = std::move(value); }

    /**
     * <p>If the task will apply a mitigation action to findings from a specific audit,
     * this value uniquely identifies the audit.</p>
     */
    inline void SetAuditTaskId(const char* value) { m_auditTaskIdHasBeenSet = true; m_auditTaskId.assign(value); }

    /**
     * <p>If the task will apply a mitigation action to findings from a specific audit,
     * this value uniquely identifies the audit.</p>
     */
    inline AuditMitigationActionsTaskTarget& WithAuditTaskId(const Aws::String& value) { SetAuditTaskId(value); return *this;}

    /**
     * <p>If the task will apply a mitigation action to findings from a specific audit,
     * this value uniquely identifies the audit.</p>
     */
    inline AuditMitigationActionsTaskTarget& WithAuditTaskId(Aws::String&& value) { SetAuditTaskId(std::move(value)); return *this;}

    /**
     * <p>If the task will apply a mitigation action to findings from a specific audit,
     * this value uniquely identifies the audit.</p>
     */
    inline AuditMitigationActionsTaskTarget& WithAuditTaskId(const char* value) { SetAuditTaskId(value); return *this;}


    /**
     * <p>If the task will apply a mitigation action to one or more listed findings,
     * this value uniquely identifies those findings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingIds() const{ return m_findingIds; }

    /**
     * <p>If the task will apply a mitigation action to one or more listed findings,
     * this value uniquely identifies those findings.</p>
     */
    inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }

    /**
     * <p>If the task will apply a mitigation action to one or more listed findings,
     * this value uniquely identifies those findings.</p>
     */
    inline void SetFindingIds(const Aws::Vector<Aws::String>& value) { m_findingIdsHasBeenSet = true; m_findingIds = value; }

    /**
     * <p>If the task will apply a mitigation action to one or more listed findings,
     * this value uniquely identifies those findings.</p>
     */
    inline void SetFindingIds(Aws::Vector<Aws::String>&& value) { m_findingIdsHasBeenSet = true; m_findingIds = std::move(value); }

    /**
     * <p>If the task will apply a mitigation action to one or more listed findings,
     * this value uniquely identifies those findings.</p>
     */
    inline AuditMitigationActionsTaskTarget& WithFindingIds(const Aws::Vector<Aws::String>& value) { SetFindingIds(value); return *this;}

    /**
     * <p>If the task will apply a mitigation action to one or more listed findings,
     * this value uniquely identifies those findings.</p>
     */
    inline AuditMitigationActionsTaskTarget& WithFindingIds(Aws::Vector<Aws::String>&& value) { SetFindingIds(std::move(value)); return *this;}

    /**
     * <p>If the task will apply a mitigation action to one or more listed findings,
     * this value uniquely identifies those findings.</p>
     */
    inline AuditMitigationActionsTaskTarget& AddFindingIds(const Aws::String& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }

    /**
     * <p>If the task will apply a mitigation action to one or more listed findings,
     * this value uniquely identifies those findings.</p>
     */
    inline AuditMitigationActionsTaskTarget& AddFindingIds(Aws::String&& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(std::move(value)); return *this; }

    /**
     * <p>If the task will apply a mitigation action to one or more listed findings,
     * this value uniquely identifies those findings.</p>
     */
    inline AuditMitigationActionsTaskTarget& AddFindingIds(const char* value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }


    /**
     * <p>Specifies a filter in the form of an audit check and set of reason codes that
     * identify the findings from the audit to which the audit mitigation actions task
     * apply.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAuditCheckToReasonCodeFilter() const{ return m_auditCheckToReasonCodeFilter; }

    /**
     * <p>Specifies a filter in the form of an audit check and set of reason codes that
     * identify the findings from the audit to which the audit mitigation actions task
     * apply.</p>
     */
    inline bool AuditCheckToReasonCodeFilterHasBeenSet() const { return m_auditCheckToReasonCodeFilterHasBeenSet; }

    /**
     * <p>Specifies a filter in the form of an audit check and set of reason codes that
     * identify the findings from the audit to which the audit mitigation actions task
     * apply.</p>
     */
    inline void SetAuditCheckToReasonCodeFilter(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_auditCheckToReasonCodeFilterHasBeenSet = true; m_auditCheckToReasonCodeFilter = value; }

    /**
     * <p>Specifies a filter in the form of an audit check and set of reason codes that
     * identify the findings from the audit to which the audit mitigation actions task
     * apply.</p>
     */
    inline void SetAuditCheckToReasonCodeFilter(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_auditCheckToReasonCodeFilterHasBeenSet = true; m_auditCheckToReasonCodeFilter = std::move(value); }

    /**
     * <p>Specifies a filter in the form of an audit check and set of reason codes that
     * identify the findings from the audit to which the audit mitigation actions task
     * apply.</p>
     */
    inline AuditMitigationActionsTaskTarget& WithAuditCheckToReasonCodeFilter(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAuditCheckToReasonCodeFilter(value); return *this;}

    /**
     * <p>Specifies a filter in the form of an audit check and set of reason codes that
     * identify the findings from the audit to which the audit mitigation actions task
     * apply.</p>
     */
    inline AuditMitigationActionsTaskTarget& WithAuditCheckToReasonCodeFilter(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAuditCheckToReasonCodeFilter(std::move(value)); return *this;}

    /**
     * <p>Specifies a filter in the form of an audit check and set of reason codes that
     * identify the findings from the audit to which the audit mitigation actions task
     * apply.</p>
     */
    inline AuditMitigationActionsTaskTarget& AddAuditCheckToReasonCodeFilter(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_auditCheckToReasonCodeFilterHasBeenSet = true; m_auditCheckToReasonCodeFilter.emplace(key, value); return *this; }

    /**
     * <p>Specifies a filter in the form of an audit check and set of reason codes that
     * identify the findings from the audit to which the audit mitigation actions task
     * apply.</p>
     */
    inline AuditMitigationActionsTaskTarget& AddAuditCheckToReasonCodeFilter(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_auditCheckToReasonCodeFilterHasBeenSet = true; m_auditCheckToReasonCodeFilter.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies a filter in the form of an audit check and set of reason codes that
     * identify the findings from the audit to which the audit mitigation actions task
     * apply.</p>
     */
    inline AuditMitigationActionsTaskTarget& AddAuditCheckToReasonCodeFilter(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_auditCheckToReasonCodeFilterHasBeenSet = true; m_auditCheckToReasonCodeFilter.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies a filter in the form of an audit check and set of reason codes that
     * identify the findings from the audit to which the audit mitigation actions task
     * apply.</p>
     */
    inline AuditMitigationActionsTaskTarget& AddAuditCheckToReasonCodeFilter(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_auditCheckToReasonCodeFilterHasBeenSet = true; m_auditCheckToReasonCodeFilter.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies a filter in the form of an audit check and set of reason codes that
     * identify the findings from the audit to which the audit mitigation actions task
     * apply.</p>
     */
    inline AuditMitigationActionsTaskTarget& AddAuditCheckToReasonCodeFilter(const char* key, Aws::Vector<Aws::String>&& value) { m_auditCheckToReasonCodeFilterHasBeenSet = true; m_auditCheckToReasonCodeFilter.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies a filter in the form of an audit check and set of reason codes that
     * identify the findings from the audit to which the audit mitigation actions task
     * apply.</p>
     */
    inline AuditMitigationActionsTaskTarget& AddAuditCheckToReasonCodeFilter(const char* key, const Aws::Vector<Aws::String>& value) { m_auditCheckToReasonCodeFilterHasBeenSet = true; m_auditCheckToReasonCodeFilter.emplace(key, value); return *this; }

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

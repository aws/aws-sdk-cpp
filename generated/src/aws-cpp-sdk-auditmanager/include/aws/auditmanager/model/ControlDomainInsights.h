/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/EvidenceInsights.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p>A summary of the latest analytics data for a specific control domain.</p>
   * <p>Control domain insights are grouped by control domain, and ranked by the
   * highest total count of non-compliant evidence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ControlDomainInsights">AWS
   * API Reference</a></p>
   */
  class ControlDomainInsights
  {
  public:
    AWS_AUDITMANAGER_API ControlDomainInsights() = default;
    AWS_AUDITMANAGER_API ControlDomainInsights(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ControlDomainInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the control domain. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ControlDomainInsights& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the control domain. Audit Manager supports the
     * control domains that are provided by Amazon Web Services Control Catalog. For
     * information about how to find a list of available control domains, see <a
     * href="https://docs.aws.amazon.com/controlcatalog/latest/APIReference/API_ListDomains.html">
     * <code>ListDomains</code> </a> in the Amazon Web Services Control Catalog API
     * Reference.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ControlDomainInsights& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of controls in the control domain that collected non-compliant
     * evidence on the <code>lastUpdated</code> date. </p>
     */
    inline int GetControlsCountByNoncompliantEvidence() const { return m_controlsCountByNoncompliantEvidence; }
    inline bool ControlsCountByNoncompliantEvidenceHasBeenSet() const { return m_controlsCountByNoncompliantEvidenceHasBeenSet; }
    inline void SetControlsCountByNoncompliantEvidence(int value) { m_controlsCountByNoncompliantEvidenceHasBeenSet = true; m_controlsCountByNoncompliantEvidence = value; }
    inline ControlDomainInsights& WithControlsCountByNoncompliantEvidence(int value) { SetControlsCountByNoncompliantEvidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of controls in the control domain. </p>
     */
    inline int GetTotalControlsCount() const { return m_totalControlsCount; }
    inline bool TotalControlsCountHasBeenSet() const { return m_totalControlsCountHasBeenSet; }
    inline void SetTotalControlsCount(int value) { m_totalControlsCountHasBeenSet = true; m_totalControlsCount = value; }
    inline ControlDomainInsights& WithTotalControlsCount(int value) { SetTotalControlsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A breakdown of the compliance check status for the evidence that’s associated
     * with the control domain. </p>
     */
    inline const EvidenceInsights& GetEvidenceInsights() const { return m_evidenceInsights; }
    inline bool EvidenceInsightsHasBeenSet() const { return m_evidenceInsightsHasBeenSet; }
    template<typename EvidenceInsightsT = EvidenceInsights>
    void SetEvidenceInsights(EvidenceInsightsT&& value) { m_evidenceInsightsHasBeenSet = true; m_evidenceInsights = std::forward<EvidenceInsightsT>(value); }
    template<typename EvidenceInsightsT = EvidenceInsights>
    ControlDomainInsights& WithEvidenceInsights(EvidenceInsightsT&& value) { SetEvidenceInsights(std::forward<EvidenceInsightsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the control domain insights were last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    ControlDomainInsights& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_controlsCountByNoncompliantEvidence{0};
    bool m_controlsCountByNoncompliantEvidenceHasBeenSet = false;

    int m_totalControlsCount{0};
    bool m_totalControlsCountHasBeenSet = false;

    EvidenceInsights m_evidenceInsights;
    bool m_evidenceInsightsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws

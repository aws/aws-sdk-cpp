/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisaData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/ExploitObserved.h>
#include <aws/inspector2/model/Evidence.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details of the vulnerability identified in a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/FindingDetail">AWS
   * API Reference</a></p>
   */
  class FindingDetail
  {
  public:
    AWS_INSPECTOR2_API FindingDetail() = default;
    AWS_INSPECTOR2_API FindingDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API FindingDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The finding ARN that the vulnerability details are associated with.</p>
     */
    inline const Aws::String& GetFindingArn() const { return m_findingArn; }
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }
    template<typename FindingArnT = Aws::String>
    void SetFindingArn(FindingArnT&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::forward<FindingArnT>(value); }
    template<typename FindingArnT = Aws::String>
    FindingDetail& WithFindingArn(FindingArnT&& value) { SetFindingArn(std::forward<FindingArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Cybersecurity and Infrastructure Security Agency (CISA) details for a
     * specific vulnerability.</p>
     */
    inline const CisaData& GetCisaData() const { return m_cisaData; }
    inline bool CisaDataHasBeenSet() const { return m_cisaDataHasBeenSet; }
    template<typename CisaDataT = CisaData>
    void SetCisaData(CisaDataT&& value) { m_cisaDataHasBeenSet = true; m_cisaData = std::forward<CisaDataT>(value); }
    template<typename CisaDataT = CisaData>
    FindingDetail& WithCisaData(CisaDataT&& value) { SetCisaData(std::forward<CisaDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The risk score of the vulnerability.</p>
     */
    inline int GetRiskScore() const { return m_riskScore; }
    inline bool RiskScoreHasBeenSet() const { return m_riskScoreHasBeenSet; }
    inline void SetRiskScore(int value) { m_riskScoreHasBeenSet = true; m_riskScore = value; }
    inline FindingDetail& WithRiskScore(int value) { SetRiskScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information on the evidence of the vulnerability.</p>
     */
    inline const Aws::Vector<Evidence>& GetEvidences() const { return m_evidences; }
    inline bool EvidencesHasBeenSet() const { return m_evidencesHasBeenSet; }
    template<typename EvidencesT = Aws::Vector<Evidence>>
    void SetEvidences(EvidencesT&& value) { m_evidencesHasBeenSet = true; m_evidences = std::forward<EvidencesT>(value); }
    template<typename EvidencesT = Aws::Vector<Evidence>>
    FindingDetail& WithEvidences(EvidencesT&& value) { SetEvidences(std::forward<EvidencesT>(value)); return *this;}
    template<typename EvidencesT = Evidence>
    FindingDetail& AddEvidences(EvidencesT&& value) { m_evidencesHasBeenSet = true; m_evidences.emplace_back(std::forward<EvidencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The MITRE adversary tactics, techniques, or procedures (TTPs) associated with
     * the vulnerability.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTtps() const { return m_ttps; }
    inline bool TtpsHasBeenSet() const { return m_ttpsHasBeenSet; }
    template<typename TtpsT = Aws::Vector<Aws::String>>
    void SetTtps(TtpsT&& value) { m_ttpsHasBeenSet = true; m_ttps = std::forward<TtpsT>(value); }
    template<typename TtpsT = Aws::Vector<Aws::String>>
    FindingDetail& WithTtps(TtpsT&& value) { SetTtps(std::forward<TtpsT>(value)); return *this;}
    template<typename TtpsT = Aws::String>
    FindingDetail& AddTtps(TtpsT&& value) { m_ttpsHasBeenSet = true; m_ttps.emplace_back(std::forward<TtpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The known malware tools or kits that can exploit the vulnerability.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTools() const { return m_tools; }
    inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
    template<typename ToolsT = Aws::Vector<Aws::String>>
    void SetTools(ToolsT&& value) { m_toolsHasBeenSet = true; m_tools = std::forward<ToolsT>(value); }
    template<typename ToolsT = Aws::Vector<Aws::String>>
    FindingDetail& WithTools(ToolsT&& value) { SetTools(std::forward<ToolsT>(value)); return *this;}
    template<typename ToolsT = Aws::String>
    FindingDetail& AddTools(ToolsT&& value) { m_toolsHasBeenSet = true; m_tools.emplace_back(std::forward<ToolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information on when this exploit was observed.</p>
     */
    inline const ExploitObserved& GetExploitObserved() const { return m_exploitObserved; }
    inline bool ExploitObservedHasBeenSet() const { return m_exploitObservedHasBeenSet; }
    template<typename ExploitObservedT = ExploitObserved>
    void SetExploitObserved(ExploitObservedT&& value) { m_exploitObservedHasBeenSet = true; m_exploitObserved = std::forward<ExploitObservedT>(value); }
    template<typename ExploitObservedT = ExploitObserved>
    FindingDetail& WithExploitObserved(ExploitObservedT&& value) { SetExploitObserved(std::forward<ExploitObservedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference URLs for the vulnerability data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReferenceUrls() const { return m_referenceUrls; }
    inline bool ReferenceUrlsHasBeenSet() const { return m_referenceUrlsHasBeenSet; }
    template<typename ReferenceUrlsT = Aws::Vector<Aws::String>>
    void SetReferenceUrls(ReferenceUrlsT&& value) { m_referenceUrlsHasBeenSet = true; m_referenceUrls = std::forward<ReferenceUrlsT>(value); }
    template<typename ReferenceUrlsT = Aws::Vector<Aws::String>>
    FindingDetail& WithReferenceUrls(ReferenceUrlsT&& value) { SetReferenceUrls(std::forward<ReferenceUrlsT>(value)); return *this;}
    template<typename ReferenceUrlsT = Aws::String>
    FindingDetail& AddReferenceUrls(ReferenceUrlsT&& value) { m_referenceUrlsHasBeenSet = true; m_referenceUrls.emplace_back(std::forward<ReferenceUrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Common Weakness Enumerations (CWEs) associated with the
     * vulnerability.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCwes() const { return m_cwes; }
    inline bool CwesHasBeenSet() const { return m_cwesHasBeenSet; }
    template<typename CwesT = Aws::Vector<Aws::String>>
    void SetCwes(CwesT&& value) { m_cwesHasBeenSet = true; m_cwes = std::forward<CwesT>(value); }
    template<typename CwesT = Aws::Vector<Aws::String>>
    FindingDetail& WithCwes(CwesT&& value) { SetCwes(std::forward<CwesT>(value)); return *this;}
    template<typename CwesT = Aws::String>
    FindingDetail& AddCwes(CwesT&& value) { m_cwesHasBeenSet = true; m_cwes.emplace_back(std::forward<CwesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Exploit Prediction Scoring System (EPSS) score of the vulnerability.</p>
     */
    inline double GetEpssScore() const { return m_epssScore; }
    inline bool EpssScoreHasBeenSet() const { return m_epssScoreHasBeenSet; }
    inline void SetEpssScore(double value) { m_epssScoreHasBeenSet = true; m_epssScore = value; }
    inline FindingDetail& WithEpssScore(double value) { SetEpssScore(value); return *this;}
    ///@}
  private:

    Aws::String m_findingArn;
    bool m_findingArnHasBeenSet = false;

    CisaData m_cisaData;
    bool m_cisaDataHasBeenSet = false;

    int m_riskScore{0};
    bool m_riskScoreHasBeenSet = false;

    Aws::Vector<Evidence> m_evidences;
    bool m_evidencesHasBeenSet = false;

    Aws::Vector<Aws::String> m_ttps;
    bool m_ttpsHasBeenSet = false;

    Aws::Vector<Aws::String> m_tools;
    bool m_toolsHasBeenSet = false;

    ExploitObserved m_exploitObserved;
    bool m_exploitObservedHasBeenSet = false;

    Aws::Vector<Aws::String> m_referenceUrls;
    bool m_referenceUrlsHasBeenSet = false;

    Aws::Vector<Aws::String> m_cwes;
    bool m_cwesHasBeenSet = false;

    double m_epssScore{0.0};
    bool m_epssScoreHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

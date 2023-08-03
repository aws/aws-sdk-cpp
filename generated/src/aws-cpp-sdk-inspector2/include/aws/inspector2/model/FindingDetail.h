/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CisaData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/ExploitObserved.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_INSPECTOR2_API FindingDetail();
    AWS_INSPECTOR2_API FindingDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API FindingDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const CisaData& GetCisaData() const{ return m_cisaData; }

    
    inline bool CisaDataHasBeenSet() const { return m_cisaDataHasBeenSet; }

    
    inline void SetCisaData(const CisaData& value) { m_cisaDataHasBeenSet = true; m_cisaData = value; }

    
    inline void SetCisaData(CisaData&& value) { m_cisaDataHasBeenSet = true; m_cisaData = std::move(value); }

    
    inline FindingDetail& WithCisaData(const CisaData& value) { SetCisaData(value); return *this;}

    
    inline FindingDetail& WithCisaData(CisaData&& value) { SetCisaData(std::move(value)); return *this;}


    /**
     * <p>The Common Weakness Enumerations (CWEs) associated with the
     * vulnerability.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCwes() const{ return m_cwes; }

    /**
     * <p>The Common Weakness Enumerations (CWEs) associated with the
     * vulnerability.</p>
     */
    inline bool CwesHasBeenSet() const { return m_cwesHasBeenSet; }

    /**
     * <p>The Common Weakness Enumerations (CWEs) associated with the
     * vulnerability.</p>
     */
    inline void SetCwes(const Aws::Vector<Aws::String>& value) { m_cwesHasBeenSet = true; m_cwes = value; }

    /**
     * <p>The Common Weakness Enumerations (CWEs) associated with the
     * vulnerability.</p>
     */
    inline void SetCwes(Aws::Vector<Aws::String>&& value) { m_cwesHasBeenSet = true; m_cwes = std::move(value); }

    /**
     * <p>The Common Weakness Enumerations (CWEs) associated with the
     * vulnerability.</p>
     */
    inline FindingDetail& WithCwes(const Aws::Vector<Aws::String>& value) { SetCwes(value); return *this;}

    /**
     * <p>The Common Weakness Enumerations (CWEs) associated with the
     * vulnerability.</p>
     */
    inline FindingDetail& WithCwes(Aws::Vector<Aws::String>&& value) { SetCwes(std::move(value)); return *this;}

    /**
     * <p>The Common Weakness Enumerations (CWEs) associated with the
     * vulnerability.</p>
     */
    inline FindingDetail& AddCwes(const Aws::String& value) { m_cwesHasBeenSet = true; m_cwes.push_back(value); return *this; }

    /**
     * <p>The Common Weakness Enumerations (CWEs) associated with the
     * vulnerability.</p>
     */
    inline FindingDetail& AddCwes(Aws::String&& value) { m_cwesHasBeenSet = true; m_cwes.push_back(std::move(value)); return *this; }

    /**
     * <p>The Common Weakness Enumerations (CWEs) associated with the
     * vulnerability.</p>
     */
    inline FindingDetail& AddCwes(const char* value) { m_cwesHasBeenSet = true; m_cwes.push_back(value); return *this; }


    /**
     * <p>The Exploit Prediction Scoring System (EPSS) score of the vulnerability.</p>
     */
    inline double GetEpssScore() const{ return m_epssScore; }

    /**
     * <p>The Exploit Prediction Scoring System (EPSS) score of the vulnerability.</p>
     */
    inline bool EpssScoreHasBeenSet() const { return m_epssScoreHasBeenSet; }

    /**
     * <p>The Exploit Prediction Scoring System (EPSS) score of the vulnerability.</p>
     */
    inline void SetEpssScore(double value) { m_epssScoreHasBeenSet = true; m_epssScore = value; }

    /**
     * <p>The Exploit Prediction Scoring System (EPSS) score of the vulnerability.</p>
     */
    inline FindingDetail& WithEpssScore(double value) { SetEpssScore(value); return *this;}


    /**
     * <p>Information on the evidence of the vulnerability.</p>
     */
    inline const Aws::Vector<Evidence>& GetEvidences() const{ return m_evidences; }

    /**
     * <p>Information on the evidence of the vulnerability.</p>
     */
    inline bool EvidencesHasBeenSet() const { return m_evidencesHasBeenSet; }

    /**
     * <p>Information on the evidence of the vulnerability.</p>
     */
    inline void SetEvidences(const Aws::Vector<Evidence>& value) { m_evidencesHasBeenSet = true; m_evidences = value; }

    /**
     * <p>Information on the evidence of the vulnerability.</p>
     */
    inline void SetEvidences(Aws::Vector<Evidence>&& value) { m_evidencesHasBeenSet = true; m_evidences = std::move(value); }

    /**
     * <p>Information on the evidence of the vulnerability.</p>
     */
    inline FindingDetail& WithEvidences(const Aws::Vector<Evidence>& value) { SetEvidences(value); return *this;}

    /**
     * <p>Information on the evidence of the vulnerability.</p>
     */
    inline FindingDetail& WithEvidences(Aws::Vector<Evidence>&& value) { SetEvidences(std::move(value)); return *this;}

    /**
     * <p>Information on the evidence of the vulnerability.</p>
     */
    inline FindingDetail& AddEvidences(const Evidence& value) { m_evidencesHasBeenSet = true; m_evidences.push_back(value); return *this; }

    /**
     * <p>Information on the evidence of the vulnerability.</p>
     */
    inline FindingDetail& AddEvidences(Evidence&& value) { m_evidencesHasBeenSet = true; m_evidences.push_back(std::move(value)); return *this; }


    
    inline const ExploitObserved& GetExploitObserved() const{ return m_exploitObserved; }

    
    inline bool ExploitObservedHasBeenSet() const { return m_exploitObservedHasBeenSet; }

    
    inline void SetExploitObserved(const ExploitObserved& value) { m_exploitObservedHasBeenSet = true; m_exploitObserved = value; }

    
    inline void SetExploitObserved(ExploitObserved&& value) { m_exploitObservedHasBeenSet = true; m_exploitObserved = std::move(value); }

    
    inline FindingDetail& WithExploitObserved(const ExploitObserved& value) { SetExploitObserved(value); return *this;}

    
    inline FindingDetail& WithExploitObserved(ExploitObserved&& value) { SetExploitObserved(std::move(value)); return *this;}


    /**
     * <p>The finding ARN that the vulnerability details are associated with.</p>
     */
    inline const Aws::String& GetFindingArn() const{ return m_findingArn; }

    /**
     * <p>The finding ARN that the vulnerability details are associated with.</p>
     */
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }

    /**
     * <p>The finding ARN that the vulnerability details are associated with.</p>
     */
    inline void SetFindingArn(const Aws::String& value) { m_findingArnHasBeenSet = true; m_findingArn = value; }

    /**
     * <p>The finding ARN that the vulnerability details are associated with.</p>
     */
    inline void SetFindingArn(Aws::String&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::move(value); }

    /**
     * <p>The finding ARN that the vulnerability details are associated with.</p>
     */
    inline void SetFindingArn(const char* value) { m_findingArnHasBeenSet = true; m_findingArn.assign(value); }

    /**
     * <p>The finding ARN that the vulnerability details are associated with.</p>
     */
    inline FindingDetail& WithFindingArn(const Aws::String& value) { SetFindingArn(value); return *this;}

    /**
     * <p>The finding ARN that the vulnerability details are associated with.</p>
     */
    inline FindingDetail& WithFindingArn(Aws::String&& value) { SetFindingArn(std::move(value)); return *this;}

    /**
     * <p>The finding ARN that the vulnerability details are associated with.</p>
     */
    inline FindingDetail& WithFindingArn(const char* value) { SetFindingArn(value); return *this;}


    /**
     * <p>The reference URLs for the vulnerability data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReferenceUrls() const{ return m_referenceUrls; }

    /**
     * <p>The reference URLs for the vulnerability data.</p>
     */
    inline bool ReferenceUrlsHasBeenSet() const { return m_referenceUrlsHasBeenSet; }

    /**
     * <p>The reference URLs for the vulnerability data.</p>
     */
    inline void SetReferenceUrls(const Aws::Vector<Aws::String>& value) { m_referenceUrlsHasBeenSet = true; m_referenceUrls = value; }

    /**
     * <p>The reference URLs for the vulnerability data.</p>
     */
    inline void SetReferenceUrls(Aws::Vector<Aws::String>&& value) { m_referenceUrlsHasBeenSet = true; m_referenceUrls = std::move(value); }

    /**
     * <p>The reference URLs for the vulnerability data.</p>
     */
    inline FindingDetail& WithReferenceUrls(const Aws::Vector<Aws::String>& value) { SetReferenceUrls(value); return *this;}

    /**
     * <p>The reference URLs for the vulnerability data.</p>
     */
    inline FindingDetail& WithReferenceUrls(Aws::Vector<Aws::String>&& value) { SetReferenceUrls(std::move(value)); return *this;}

    /**
     * <p>The reference URLs for the vulnerability data.</p>
     */
    inline FindingDetail& AddReferenceUrls(const Aws::String& value) { m_referenceUrlsHasBeenSet = true; m_referenceUrls.push_back(value); return *this; }

    /**
     * <p>The reference URLs for the vulnerability data.</p>
     */
    inline FindingDetail& AddReferenceUrls(Aws::String&& value) { m_referenceUrlsHasBeenSet = true; m_referenceUrls.push_back(std::move(value)); return *this; }

    /**
     * <p>The reference URLs for the vulnerability data.</p>
     */
    inline FindingDetail& AddReferenceUrls(const char* value) { m_referenceUrlsHasBeenSet = true; m_referenceUrls.push_back(value); return *this; }


    /**
     * <p>The risk score of the vulnerability.</p>
     */
    inline int GetRiskScore() const{ return m_riskScore; }

    /**
     * <p>The risk score of the vulnerability.</p>
     */
    inline bool RiskScoreHasBeenSet() const { return m_riskScoreHasBeenSet; }

    /**
     * <p>The risk score of the vulnerability.</p>
     */
    inline void SetRiskScore(int value) { m_riskScoreHasBeenSet = true; m_riskScore = value; }

    /**
     * <p>The risk score of the vulnerability.</p>
     */
    inline FindingDetail& WithRiskScore(int value) { SetRiskScore(value); return *this;}


    /**
     * <p>The known malware tools or kits that can exploit the vulnerability.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTools() const{ return m_tools; }

    /**
     * <p>The known malware tools or kits that can exploit the vulnerability.</p>
     */
    inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }

    /**
     * <p>The known malware tools or kits that can exploit the vulnerability.</p>
     */
    inline void SetTools(const Aws::Vector<Aws::String>& value) { m_toolsHasBeenSet = true; m_tools = value; }

    /**
     * <p>The known malware tools or kits that can exploit the vulnerability.</p>
     */
    inline void SetTools(Aws::Vector<Aws::String>&& value) { m_toolsHasBeenSet = true; m_tools = std::move(value); }

    /**
     * <p>The known malware tools or kits that can exploit the vulnerability.</p>
     */
    inline FindingDetail& WithTools(const Aws::Vector<Aws::String>& value) { SetTools(value); return *this;}

    /**
     * <p>The known malware tools or kits that can exploit the vulnerability.</p>
     */
    inline FindingDetail& WithTools(Aws::Vector<Aws::String>&& value) { SetTools(std::move(value)); return *this;}

    /**
     * <p>The known malware tools or kits that can exploit the vulnerability.</p>
     */
    inline FindingDetail& AddTools(const Aws::String& value) { m_toolsHasBeenSet = true; m_tools.push_back(value); return *this; }

    /**
     * <p>The known malware tools or kits that can exploit the vulnerability.</p>
     */
    inline FindingDetail& AddTools(Aws::String&& value) { m_toolsHasBeenSet = true; m_tools.push_back(std::move(value)); return *this; }

    /**
     * <p>The known malware tools or kits that can exploit the vulnerability.</p>
     */
    inline FindingDetail& AddTools(const char* value) { m_toolsHasBeenSet = true; m_tools.push_back(value); return *this; }


    /**
     * <p>The MITRE adversary tactics, techniques, or procedures (TTPs) associated with
     * the vulnerability.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTtps() const{ return m_ttps; }

    /**
     * <p>The MITRE adversary tactics, techniques, or procedures (TTPs) associated with
     * the vulnerability.</p>
     */
    inline bool TtpsHasBeenSet() const { return m_ttpsHasBeenSet; }

    /**
     * <p>The MITRE adversary tactics, techniques, or procedures (TTPs) associated with
     * the vulnerability.</p>
     */
    inline void SetTtps(const Aws::Vector<Aws::String>& value) { m_ttpsHasBeenSet = true; m_ttps = value; }

    /**
     * <p>The MITRE adversary tactics, techniques, or procedures (TTPs) associated with
     * the vulnerability.</p>
     */
    inline void SetTtps(Aws::Vector<Aws::String>&& value) { m_ttpsHasBeenSet = true; m_ttps = std::move(value); }

    /**
     * <p>The MITRE adversary tactics, techniques, or procedures (TTPs) associated with
     * the vulnerability.</p>
     */
    inline FindingDetail& WithTtps(const Aws::Vector<Aws::String>& value) { SetTtps(value); return *this;}

    /**
     * <p>The MITRE adversary tactics, techniques, or procedures (TTPs) associated with
     * the vulnerability.</p>
     */
    inline FindingDetail& WithTtps(Aws::Vector<Aws::String>&& value) { SetTtps(std::move(value)); return *this;}

    /**
     * <p>The MITRE adversary tactics, techniques, or procedures (TTPs) associated with
     * the vulnerability.</p>
     */
    inline FindingDetail& AddTtps(const Aws::String& value) { m_ttpsHasBeenSet = true; m_ttps.push_back(value); return *this; }

    /**
     * <p>The MITRE adversary tactics, techniques, or procedures (TTPs) associated with
     * the vulnerability.</p>
     */
    inline FindingDetail& AddTtps(Aws::String&& value) { m_ttpsHasBeenSet = true; m_ttps.push_back(std::move(value)); return *this; }

    /**
     * <p>The MITRE adversary tactics, techniques, or procedures (TTPs) associated with
     * the vulnerability.</p>
     */
    inline FindingDetail& AddTtps(const char* value) { m_ttpsHasBeenSet = true; m_ttps.push_back(value); return *this; }

  private:

    CisaData m_cisaData;
    bool m_cisaDataHasBeenSet = false;

    Aws::Vector<Aws::String> m_cwes;
    bool m_cwesHasBeenSet = false;

    double m_epssScore;
    bool m_epssScoreHasBeenSet = false;

    Aws::Vector<Evidence> m_evidences;
    bool m_evidencesHasBeenSet = false;

    ExploitObserved m_exploitObserved;
    bool m_exploitObservedHasBeenSet = false;

    Aws::String m_findingArn;
    bool m_findingArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_referenceUrls;
    bool m_referenceUrlsHasBeenSet = false;

    int m_riskScore;
    bool m_riskScoreHasBeenSet = false;

    Aws::Vector<Aws::String> m_tools;
    bool m_toolsHasBeenSet = false;

    Aws::Vector<Aws::String> m_ttps;
    bool m_ttpsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

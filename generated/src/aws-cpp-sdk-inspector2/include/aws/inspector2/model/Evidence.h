/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Details of the evidence for a vulnerability identified in a
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Evidence">AWS
   * API Reference</a></p>
   */
  class Evidence
  {
  public:
    AWS_INSPECTOR2_API Evidence() = default;
    AWS_INSPECTOR2_API Evidence(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Evidence& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The evidence rule.</p>
     */
    inline const Aws::String& GetEvidenceRule() const { return m_evidenceRule; }
    inline bool EvidenceRuleHasBeenSet() const { return m_evidenceRuleHasBeenSet; }
    template<typename EvidenceRuleT = Aws::String>
    void SetEvidenceRule(EvidenceRuleT&& value) { m_evidenceRuleHasBeenSet = true; m_evidenceRule = std::forward<EvidenceRuleT>(value); }
    template<typename EvidenceRuleT = Aws::String>
    Evidence& WithEvidenceRule(EvidenceRuleT&& value) { SetEvidenceRule(std::forward<EvidenceRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The evidence details.</p>
     */
    inline const Aws::String& GetEvidenceDetail() const { return m_evidenceDetail; }
    inline bool EvidenceDetailHasBeenSet() const { return m_evidenceDetailHasBeenSet; }
    template<typename EvidenceDetailT = Aws::String>
    void SetEvidenceDetail(EvidenceDetailT&& value) { m_evidenceDetailHasBeenSet = true; m_evidenceDetail = std::forward<EvidenceDetailT>(value); }
    template<typename EvidenceDetailT = Aws::String>
    Evidence& WithEvidenceDetail(EvidenceDetailT&& value) { SetEvidenceDetail(std::forward<EvidenceDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The evidence severity.</p>
     */
    inline const Aws::String& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = Aws::String>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = Aws::String>
    Evidence& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_evidenceRule;
    bool m_evidenceRuleHasBeenSet = false;

    Aws::String m_evidenceDetail;
    bool m_evidenceDetailHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

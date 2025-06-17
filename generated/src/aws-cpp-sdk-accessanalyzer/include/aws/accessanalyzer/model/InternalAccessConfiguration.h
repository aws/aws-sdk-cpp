/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/InternalAccessAnalysisRule.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Specifies the configuration of an internal access analyzer for an Amazon Web
   * Services organization or account. This configuration determines how the analyzer
   * evaluates internal access within your Amazon Web Services
   * environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/InternalAccessConfiguration">AWS
   * API Reference</a></p>
   */
  class InternalAccessConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API InternalAccessConfiguration() = default;
    AWS_ACCESSANALYZER_API InternalAccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API InternalAccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about analysis rules for the internal access analyzer.
     * These rules determine which resources and access patterns will be analyzed.</p>
     */
    inline const InternalAccessAnalysisRule& GetAnalysisRule() const { return m_analysisRule; }
    inline bool AnalysisRuleHasBeenSet() const { return m_analysisRuleHasBeenSet; }
    template<typename AnalysisRuleT = InternalAccessAnalysisRule>
    void SetAnalysisRule(AnalysisRuleT&& value) { m_analysisRuleHasBeenSet = true; m_analysisRule = std::forward<AnalysisRuleT>(value); }
    template<typename AnalysisRuleT = InternalAccessAnalysisRule>
    InternalAccessConfiguration& WithAnalysisRule(AnalysisRuleT&& value) { SetAnalysisRule(std::forward<AnalysisRuleT>(value)); return *this;}
    ///@}
  private:

    InternalAccessAnalysisRule m_analysisRule;
    bool m_analysisRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws

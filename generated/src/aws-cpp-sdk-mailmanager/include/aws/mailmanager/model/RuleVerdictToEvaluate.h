/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleVerdictAttribute.h>
#include <aws/mailmanager/model/Analysis.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The verdict to evaluate in a verdict condition expression.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleVerdictToEvaluate">AWS
   * API Reference</a></p>
   */
  class RuleVerdictToEvaluate
  {
  public:
    AWS_MAILMANAGER_API RuleVerdictToEvaluate() = default;
    AWS_MAILMANAGER_API RuleVerdictToEvaluate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleVerdictToEvaluate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email verdict attribute to evaluate in a string verdict expression.</p>
     */
    inline RuleVerdictAttribute GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(RuleVerdictAttribute value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline RuleVerdictToEvaluate& WithAttribute(RuleVerdictAttribute value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Add On ARN and its returned value to evaluate in a verdict condition
     * expression.</p>
     */
    inline const Analysis& GetAnalysis() const { return m_analysis; }
    inline bool AnalysisHasBeenSet() const { return m_analysisHasBeenSet; }
    template<typename AnalysisT = Analysis>
    void SetAnalysis(AnalysisT&& value) { m_analysisHasBeenSet = true; m_analysis = std::forward<AnalysisT>(value); }
    template<typename AnalysisT = Analysis>
    RuleVerdictToEvaluate& WithAnalysis(AnalysisT&& value) { SetAnalysis(std::forward<AnalysisT>(value)); return *this;}
    ///@}
  private:

    RuleVerdictAttribute m_attribute{RuleVerdictAttribute::NOT_SET};
    bool m_attributeHasBeenSet = false;

    Analysis m_analysis;
    bool m_analysisHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws

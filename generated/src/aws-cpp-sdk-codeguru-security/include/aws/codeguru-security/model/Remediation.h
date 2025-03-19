/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/model/Recommendation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguru-security/model/SuggestedFix.h>
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
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   * <p>Information about how to remediate a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/Remediation">AWS
   * API Reference</a></p>
   */
  class Remediation
  {
  public:
    AWS_CODEGURUSECURITY_API Remediation() = default;
    AWS_CODEGURUSECURITY_API Remediation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Remediation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains information about the recommended course of action to
     * remediate a finding.</p>
     */
    inline const Recommendation& GetRecommendation() const { return m_recommendation; }
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
    template<typename RecommendationT = Recommendation>
    void SetRecommendation(RecommendationT&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::forward<RecommendationT>(value); }
    template<typename RecommendationT = Recommendation>
    Remediation& WithRecommendation(RecommendationT&& value) { SetRecommendation(std::forward<RecommendationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>SuggestedFix</code> objects. Each object contains information
     * about a suggested code fix to remediate the finding.</p>
     */
    inline const Aws::Vector<SuggestedFix>& GetSuggestedFixes() const { return m_suggestedFixes; }
    inline bool SuggestedFixesHasBeenSet() const { return m_suggestedFixesHasBeenSet; }
    template<typename SuggestedFixesT = Aws::Vector<SuggestedFix>>
    void SetSuggestedFixes(SuggestedFixesT&& value) { m_suggestedFixesHasBeenSet = true; m_suggestedFixes = std::forward<SuggestedFixesT>(value); }
    template<typename SuggestedFixesT = Aws::Vector<SuggestedFix>>
    Remediation& WithSuggestedFixes(SuggestedFixesT&& value) { SetSuggestedFixes(std::forward<SuggestedFixesT>(value)); return *this;}
    template<typename SuggestedFixesT = SuggestedFix>
    Remediation& AddSuggestedFixes(SuggestedFixesT&& value) { m_suggestedFixesHasBeenSet = true; m_suggestedFixes.emplace_back(std::forward<SuggestedFixesT>(value)); return *this; }
    ///@}
  private:

    Recommendation m_recommendation;
    bool m_recommendationHasBeenSet = false;

    Aws::Vector<SuggestedFix> m_suggestedFixes;
    bool m_suggestedFixesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws

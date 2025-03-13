/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>A compliance score is the percentage of the number of compliant rule-resource
   * combinations in a conformance pack compared to the number of total possible
   * rule-resource combinations in the conformance pack. This metric provides you
   * with a high-level view of the compliance state of your conformance packs. You
   * can use it to identify, investigate, and understand the level of compliance in
   * your conformance packs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackComplianceScore">AWS
   * API Reference</a></p>
   */
  class ConformancePackComplianceScore
  {
  public:
    AWS_CONFIGSERVICE_API ConformancePackComplianceScore() = default;
    AWS_CONFIGSERVICE_API ConformancePackComplianceScore(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackComplianceScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Compliance score for the conformance pack. Conformance packs with no
     * evaluation results will have a compliance score of
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline const Aws::String& GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    template<typename ScoreT = Aws::String>
    void SetScore(ScoreT&& value) { m_scoreHasBeenSet = true; m_score = std::forward<ScoreT>(value); }
    template<typename ScoreT = Aws::String>
    ConformancePackComplianceScore& WithScore(ScoreT&& value) { SetScore(std::forward<ScoreT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackName() const { return m_conformancePackName; }
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }
    template<typename ConformancePackNameT = Aws::String>
    void SetConformancePackName(ConformancePackNameT&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::forward<ConformancePackNameT>(value); }
    template<typename ConformancePackNameT = Aws::String>
    ConformancePackComplianceScore& WithConformancePackName(ConformancePackNameT&& value) { SetConformancePackName(std::forward<ConformancePackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the conformance pack compliance score was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    ConformancePackComplianceScore& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_score;
    bool m_scoreHasBeenSet = false;

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

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
    AWS_CONFIGSERVICE_API ConformancePackComplianceScore();
    AWS_CONFIGSERVICE_API ConformancePackComplianceScore(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackComplianceScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Compliance score for the conformance pack. Conformance packs with no
     * evaluation results will have a compliance score of
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline const Aws::String& GetScore() const{ return m_score; }

    /**
     * <p>Compliance score for the conformance pack. Conformance packs with no
     * evaluation results will have a compliance score of
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>Compliance score for the conformance pack. Conformance packs with no
     * evaluation results will have a compliance score of
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline void SetScore(const Aws::String& value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>Compliance score for the conformance pack. Conformance packs with no
     * evaluation results will have a compliance score of
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline void SetScore(Aws::String&& value) { m_scoreHasBeenSet = true; m_score = std::move(value); }

    /**
     * <p>Compliance score for the conformance pack. Conformance packs with no
     * evaluation results will have a compliance score of
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline void SetScore(const char* value) { m_scoreHasBeenSet = true; m_score.assign(value); }

    /**
     * <p>Compliance score for the conformance pack. Conformance packs with no
     * evaluation results will have a compliance score of
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline ConformancePackComplianceScore& WithScore(const Aws::String& value) { SetScore(value); return *this;}

    /**
     * <p>Compliance score for the conformance pack. Conformance packs with no
     * evaluation results will have a compliance score of
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline ConformancePackComplianceScore& WithScore(Aws::String&& value) { SetScore(std::move(value)); return *this;}

    /**
     * <p>Compliance score for the conformance pack. Conformance packs with no
     * evaluation results will have a compliance score of
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline ConformancePackComplianceScore& WithScore(const char* value) { SetScore(value); return *this;}


    /**
     * <p>The name of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackName() const{ return m_conformancePackName; }

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline void SetConformancePackName(const Aws::String& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = value; }

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline void SetConformancePackName(Aws::String&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::move(value); }

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline void SetConformancePackName(const char* value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName.assign(value); }

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline ConformancePackComplianceScore& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline ConformancePackComplianceScore& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}

    /**
     * <p>The name of the conformance pack.</p>
     */
    inline ConformancePackComplianceScore& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}


    /**
     * <p>The time that the conformance pack compliance score was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time that the conformance pack compliance score was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time that the conformance pack compliance score was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time that the conformance pack compliance score was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time that the conformance pack compliance score was last updated.</p>
     */
    inline ConformancePackComplianceScore& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time that the conformance pack compliance score was last updated.</p>
     */
    inline ConformancePackComplianceScore& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_score;
    bool m_scoreHasBeenSet = false;

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

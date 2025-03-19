/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/CvssScoreAdjustment.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Details about the source of the score, and the factors that determined the
   * adjustments to create the final score.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CvssScoreDetails">AWS
   * API Reference</a></p>
   */
  class CvssScoreDetails
  {
  public:
    AWS_IMAGEBUILDER_API CvssScoreDetails() = default;
    AWS_IMAGEBUILDER_API CvssScoreDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API CvssScoreDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source for the CVSS score.</p>
     */
    inline const Aws::String& GetScoreSource() const { return m_scoreSource; }
    inline bool ScoreSourceHasBeenSet() const { return m_scoreSourceHasBeenSet; }
    template<typename ScoreSourceT = Aws::String>
    void SetScoreSource(ScoreSourceT&& value) { m_scoreSourceHasBeenSet = true; m_scoreSource = std::forward<ScoreSourceT>(value); }
    template<typename ScoreSourceT = Aws::String>
    CvssScoreDetails& WithScoreSource(ScoreSourceT&& value) { SetScoreSource(std::forward<ScoreSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the finding.</p>
     */
    inline const Aws::String& GetCvssSource() const { return m_cvssSource; }
    inline bool CvssSourceHasBeenSet() const { return m_cvssSourceHasBeenSet; }
    template<typename CvssSourceT = Aws::String>
    void SetCvssSource(CvssSourceT&& value) { m_cvssSourceHasBeenSet = true; m_cvssSource = std::forward<CvssSourceT>(value); }
    template<typename CvssSourceT = Aws::String>
    CvssScoreDetails& WithCvssSource(CvssSourceT&& value) { SetCvssSource(std::forward<CvssSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CVSS version that generated the score.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    CvssScoreDetails& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CVSS score.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline CvssScoreDetails& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A vector that measures the severity of the vulnerability.</p>
     */
    inline const Aws::String& GetScoringVector() const { return m_scoringVector; }
    inline bool ScoringVectorHasBeenSet() const { return m_scoringVectorHasBeenSet; }
    template<typename ScoringVectorT = Aws::String>
    void SetScoringVector(ScoringVectorT&& value) { m_scoringVectorHasBeenSet = true; m_scoringVector = std::forward<ScoringVectorT>(value); }
    template<typename ScoringVectorT = Aws::String>
    CvssScoreDetails& WithScoringVector(ScoringVectorT&& value) { SetScoringVector(std::forward<ScoringVectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an adjustment that Amazon Inspector
     * made to the CVSS score for the finding.</p>
     */
    inline const Aws::Vector<CvssScoreAdjustment>& GetAdjustments() const { return m_adjustments; }
    inline bool AdjustmentsHasBeenSet() const { return m_adjustmentsHasBeenSet; }
    template<typename AdjustmentsT = Aws::Vector<CvssScoreAdjustment>>
    void SetAdjustments(AdjustmentsT&& value) { m_adjustmentsHasBeenSet = true; m_adjustments = std::forward<AdjustmentsT>(value); }
    template<typename AdjustmentsT = Aws::Vector<CvssScoreAdjustment>>
    CvssScoreDetails& WithAdjustments(AdjustmentsT&& value) { SetAdjustments(std::forward<AdjustmentsT>(value)); return *this;}
    template<typename AdjustmentsT = CvssScoreAdjustment>
    CvssScoreDetails& AddAdjustments(AdjustmentsT&& value) { m_adjustmentsHasBeenSet = true; m_adjustments.emplace_back(std::forward<AdjustmentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_scoreSource;
    bool m_scoreSourceHasBeenSet = false;

    Aws::String m_cvssSource;
    bool m_cvssSourceHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;

    Aws::String m_scoringVector;
    bool m_scoringVectorHasBeenSet = false;

    Aws::Vector<CvssScoreAdjustment> m_adjustments;
    bool m_adjustmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws

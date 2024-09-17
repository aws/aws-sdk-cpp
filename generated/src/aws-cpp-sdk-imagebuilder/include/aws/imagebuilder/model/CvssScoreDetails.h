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
    AWS_IMAGEBUILDER_API CvssScoreDetails();
    AWS_IMAGEBUILDER_API CvssScoreDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API CvssScoreDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source for the CVSS score.</p>
     */
    inline const Aws::String& GetScoreSource() const{ return m_scoreSource; }
    inline bool ScoreSourceHasBeenSet() const { return m_scoreSourceHasBeenSet; }
    inline void SetScoreSource(const Aws::String& value) { m_scoreSourceHasBeenSet = true; m_scoreSource = value; }
    inline void SetScoreSource(Aws::String&& value) { m_scoreSourceHasBeenSet = true; m_scoreSource = std::move(value); }
    inline void SetScoreSource(const char* value) { m_scoreSourceHasBeenSet = true; m_scoreSource.assign(value); }
    inline CvssScoreDetails& WithScoreSource(const Aws::String& value) { SetScoreSource(value); return *this;}
    inline CvssScoreDetails& WithScoreSource(Aws::String&& value) { SetScoreSource(std::move(value)); return *this;}
    inline CvssScoreDetails& WithScoreSource(const char* value) { SetScoreSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the finding.</p>
     */
    inline const Aws::String& GetCvssSource() const{ return m_cvssSource; }
    inline bool CvssSourceHasBeenSet() const { return m_cvssSourceHasBeenSet; }
    inline void SetCvssSource(const Aws::String& value) { m_cvssSourceHasBeenSet = true; m_cvssSource = value; }
    inline void SetCvssSource(Aws::String&& value) { m_cvssSourceHasBeenSet = true; m_cvssSource = std::move(value); }
    inline void SetCvssSource(const char* value) { m_cvssSourceHasBeenSet = true; m_cvssSource.assign(value); }
    inline CvssScoreDetails& WithCvssSource(const Aws::String& value) { SetCvssSource(value); return *this;}
    inline CvssScoreDetails& WithCvssSource(Aws::String&& value) { SetCvssSource(std::move(value)); return *this;}
    inline CvssScoreDetails& WithCvssSource(const char* value) { SetCvssSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CVSS version that generated the score.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline CvssScoreDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CvssScoreDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CvssScoreDetails& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CVSS score.</p>
     */
    inline double GetScore() const{ return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline CvssScoreDetails& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A vector that measures the severity of the vulnerability.</p>
     */
    inline const Aws::String& GetScoringVector() const{ return m_scoringVector; }
    inline bool ScoringVectorHasBeenSet() const { return m_scoringVectorHasBeenSet; }
    inline void SetScoringVector(const Aws::String& value) { m_scoringVectorHasBeenSet = true; m_scoringVector = value; }
    inline void SetScoringVector(Aws::String&& value) { m_scoringVectorHasBeenSet = true; m_scoringVector = std::move(value); }
    inline void SetScoringVector(const char* value) { m_scoringVectorHasBeenSet = true; m_scoringVector.assign(value); }
    inline CvssScoreDetails& WithScoringVector(const Aws::String& value) { SetScoringVector(value); return *this;}
    inline CvssScoreDetails& WithScoringVector(Aws::String&& value) { SetScoringVector(std::move(value)); return *this;}
    inline CvssScoreDetails& WithScoringVector(const char* value) { SetScoringVector(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an adjustment that Amazon Inspector
     * made to the CVSS score for the finding.</p>
     */
    inline const Aws::Vector<CvssScoreAdjustment>& GetAdjustments() const{ return m_adjustments; }
    inline bool AdjustmentsHasBeenSet() const { return m_adjustmentsHasBeenSet; }
    inline void SetAdjustments(const Aws::Vector<CvssScoreAdjustment>& value) { m_adjustmentsHasBeenSet = true; m_adjustments = value; }
    inline void SetAdjustments(Aws::Vector<CvssScoreAdjustment>&& value) { m_adjustmentsHasBeenSet = true; m_adjustments = std::move(value); }
    inline CvssScoreDetails& WithAdjustments(const Aws::Vector<CvssScoreAdjustment>& value) { SetAdjustments(value); return *this;}
    inline CvssScoreDetails& WithAdjustments(Aws::Vector<CvssScoreAdjustment>&& value) { SetAdjustments(std::move(value)); return *this;}
    inline CvssScoreDetails& AddAdjustments(const CvssScoreAdjustment& value) { m_adjustmentsHasBeenSet = true; m_adjustments.push_back(value); return *this; }
    inline CvssScoreDetails& AddAdjustments(CvssScoreAdjustment&& value) { m_adjustmentsHasBeenSet = true; m_adjustments.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_scoreSource;
    bool m_scoreSourceHasBeenSet = false;

    Aws::String m_cvssSource;
    bool m_cvssSourceHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;

    Aws::String m_scoringVector;
    bool m_scoringVectorHasBeenSet = false;

    Aws::Vector<CvssScoreAdjustment> m_adjustments;
    bool m_adjustmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws

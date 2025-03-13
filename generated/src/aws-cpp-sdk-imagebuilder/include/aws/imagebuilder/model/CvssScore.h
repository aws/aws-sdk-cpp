/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Amazon Inspector generates a risk score for each finding. This score helps
   * you to prioritize findings, to focus on the most critical findings and the most
   * vulnerable resources. The score uses the Common Vulnerability Scoring System
   * (CVSS) format. This format is a modification of the base CVSS score that the
   * National Vulnerability Database (NVD) provides. For more information about
   * severity levels, see <a
   * href="https://docs.aws.amazon.com/inspector/latest/user/findings-understanding-severity.html">Severity
   * levels for Amazon Inspector findings</a> in the <i>Amazon Inspector User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CvssScore">AWS
   * API Reference</a></p>
   */
  class CvssScore
  {
  public:
    AWS_IMAGEBUILDER_API CvssScore() = default;
    AWS_IMAGEBUILDER_API CvssScore(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API CvssScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CVSS base score.</p>
     */
    inline double GetBaseScore() const { return m_baseScore; }
    inline bool BaseScoreHasBeenSet() const { return m_baseScoreHasBeenSet; }
    inline void SetBaseScore(double value) { m_baseScoreHasBeenSet = true; m_baseScore = value; }
    inline CvssScore& WithBaseScore(double value) { SetBaseScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vector string of the CVSS score.</p>
     */
    inline const Aws::String& GetScoringVector() const { return m_scoringVector; }
    inline bool ScoringVectorHasBeenSet() const { return m_scoringVectorHasBeenSet; }
    template<typename ScoringVectorT = Aws::String>
    void SetScoringVector(ScoringVectorT&& value) { m_scoringVectorHasBeenSet = true; m_scoringVector = std::forward<ScoringVectorT>(value); }
    template<typename ScoringVectorT = Aws::String>
    CvssScore& WithScoringVector(ScoringVectorT&& value) { SetScoringVector(std::forward<ScoringVectorT>(value)); return *this;}
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
    CvssScore& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the CVSS score.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    CvssScore& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}
  private:

    double m_baseScore{0.0};
    bool m_baseScoreHasBeenSet = false;

    Aws::String m_scoringVector;
    bool m_scoringVectorHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws

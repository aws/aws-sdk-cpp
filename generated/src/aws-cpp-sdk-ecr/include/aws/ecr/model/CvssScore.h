/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The CVSS score for a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CvssScore">AWS API
   * Reference</a></p>
   */
  class CvssScore
  {
  public:
    AWS_ECR_API CvssScore();
    AWS_ECR_API CvssScore(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API CvssScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base CVSS score used for the finding.</p>
     */
    inline double GetBaseScore() const{ return m_baseScore; }
    inline bool BaseScoreHasBeenSet() const { return m_baseScoreHasBeenSet; }
    inline void SetBaseScore(double value) { m_baseScoreHasBeenSet = true; m_baseScore = value; }
    inline CvssScore& WithBaseScore(double value) { SetBaseScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vector string of the CVSS score.</p>
     */
    inline const Aws::String& GetScoringVector() const{ return m_scoringVector; }
    inline bool ScoringVectorHasBeenSet() const { return m_scoringVectorHasBeenSet; }
    inline void SetScoringVector(const Aws::String& value) { m_scoringVectorHasBeenSet = true; m_scoringVector = value; }
    inline void SetScoringVector(Aws::String&& value) { m_scoringVectorHasBeenSet = true; m_scoringVector = std::move(value); }
    inline void SetScoringVector(const char* value) { m_scoringVectorHasBeenSet = true; m_scoringVector.assign(value); }
    inline CvssScore& WithScoringVector(const Aws::String& value) { SetScoringVector(value); return *this;}
    inline CvssScore& WithScoringVector(Aws::String&& value) { SetScoringVector(std::move(value)); return *this;}
    inline CvssScore& WithScoringVector(const char* value) { SetScoringVector(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the CVSS score.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline CvssScore& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline CvssScore& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline CvssScore& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of CVSS used for the score.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline CvssScore& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CvssScore& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CvssScore& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    double m_baseScore;
    bool m_baseScoreHasBeenSet = false;

    Aws::String m_scoringVector;
    bool m_scoringVectorHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

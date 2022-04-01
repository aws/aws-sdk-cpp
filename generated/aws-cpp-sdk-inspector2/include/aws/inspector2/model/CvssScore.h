﻿/**
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
   * <p>The CVSS score for a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CvssScore">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR2_API CvssScore
  {
  public:
    CvssScore();
    CvssScore(Aws::Utils::Json::JsonView jsonValue);
    CvssScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The base CVSS score used for the finding.</p>
     */
    inline double GetBaseScore() const{ return m_baseScore; }

    /**
     * <p>The base CVSS score used for the finding.</p>
     */
    inline bool BaseScoreHasBeenSet() const { return m_baseScoreHasBeenSet; }

    /**
     * <p>The base CVSS score used for the finding.</p>
     */
    inline void SetBaseScore(double value) { m_baseScoreHasBeenSet = true; m_baseScore = value; }

    /**
     * <p>The base CVSS score used for the finding.</p>
     */
    inline CvssScore& WithBaseScore(double value) { SetBaseScore(value); return *this;}


    /**
     * <p>The vector string of the CVSS score.</p>
     */
    inline const Aws::String& GetScoringVector() const{ return m_scoringVector; }

    /**
     * <p>The vector string of the CVSS score.</p>
     */
    inline bool ScoringVectorHasBeenSet() const { return m_scoringVectorHasBeenSet; }

    /**
     * <p>The vector string of the CVSS score.</p>
     */
    inline void SetScoringVector(const Aws::String& value) { m_scoringVectorHasBeenSet = true; m_scoringVector = value; }

    /**
     * <p>The vector string of the CVSS score.</p>
     */
    inline void SetScoringVector(Aws::String&& value) { m_scoringVectorHasBeenSet = true; m_scoringVector = std::move(value); }

    /**
     * <p>The vector string of the CVSS score.</p>
     */
    inline void SetScoringVector(const char* value) { m_scoringVectorHasBeenSet = true; m_scoringVector.assign(value); }

    /**
     * <p>The vector string of the CVSS score.</p>
     */
    inline CvssScore& WithScoringVector(const Aws::String& value) { SetScoringVector(value); return *this;}

    /**
     * <p>The vector string of the CVSS score.</p>
     */
    inline CvssScore& WithScoringVector(Aws::String&& value) { SetScoringVector(std::move(value)); return *this;}

    /**
     * <p>The vector string of the CVSS score.</p>
     */
    inline CvssScore& WithScoringVector(const char* value) { SetScoringVector(value); return *this;}


    /**
     * <p>The source of the CVSS score.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source of the CVSS score.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the CVSS score.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the CVSS score.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the CVSS score.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source of the CVSS score.</p>
     */
    inline CvssScore& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the CVSS score.</p>
     */
    inline CvssScore& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source of the CVSS score.</p>
     */
    inline CvssScore& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The version of CVSS used for the score.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of CVSS used for the score.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of CVSS used for the score.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of CVSS used for the score.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of CVSS used for the score.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of CVSS used for the score.</p>
     */
    inline CvssScore& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of CVSS used for the score.</p>
     */
    inline CvssScore& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of CVSS used for the score.</p>
     */
    inline CvssScore& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    double m_baseScore;
    bool m_baseScoreHasBeenSet;

    Aws::String m_scoringVector;
    bool m_scoringVectorHasBeenSet;

    Aws::String m_source;
    bool m_sourceHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

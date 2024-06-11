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
   * <p>The Common Vulnerability Scoring System (CVSS) version 3 details for the
   * vulnerability.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Cvss3">AWS
   * API Reference</a></p>
   */
  class Cvss3
  {
  public:
    AWS_INSPECTOR2_API Cvss3();
    AWS_INSPECTOR2_API Cvss3(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Cvss3& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CVSS v3 base score for the vulnerability.</p>
     */
    inline double GetBaseScore() const{ return m_baseScore; }
    inline bool BaseScoreHasBeenSet() const { return m_baseScoreHasBeenSet; }
    inline void SetBaseScore(double value) { m_baseScoreHasBeenSet = true; m_baseScore = value; }
    inline Cvss3& WithBaseScore(double value) { SetBaseScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scoring vector associated with the CVSS v3 score.</p>
     */
    inline const Aws::String& GetScoringVector() const{ return m_scoringVector; }
    inline bool ScoringVectorHasBeenSet() const { return m_scoringVectorHasBeenSet; }
    inline void SetScoringVector(const Aws::String& value) { m_scoringVectorHasBeenSet = true; m_scoringVector = value; }
    inline void SetScoringVector(Aws::String&& value) { m_scoringVectorHasBeenSet = true; m_scoringVector = std::move(value); }
    inline void SetScoringVector(const char* value) { m_scoringVectorHasBeenSet = true; m_scoringVector.assign(value); }
    inline Cvss3& WithScoringVector(const Aws::String& value) { SetScoringVector(value); return *this;}
    inline Cvss3& WithScoringVector(Aws::String&& value) { SetScoringVector(std::move(value)); return *this;}
    inline Cvss3& WithScoringVector(const char* value) { SetScoringVector(value); return *this;}
    ///@}
  private:

    double m_baseScore;
    bool m_baseScoreHasBeenSet = false;

    Aws::String m_scoringVector;
    bool m_scoringVectorHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

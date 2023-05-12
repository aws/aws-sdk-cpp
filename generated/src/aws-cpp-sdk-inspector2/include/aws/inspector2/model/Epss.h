/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>

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
   * <p>Details about the Exploit Prediction Scoring System (EPSS)
   * score.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Epss">AWS API
   * Reference</a></p>
   */
  class Epss
  {
  public:
    AWS_INSPECTOR2_API Epss();
    AWS_INSPECTOR2_API Epss(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Epss& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Exploit Prediction Scoring System (EPSS) score.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The Exploit Prediction Scoring System (EPSS) score.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The Exploit Prediction Scoring System (EPSS) score.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The Exploit Prediction Scoring System (EPSS) score.</p>
     */
    inline Epss& WithScore(double value) { SetScore(value); return *this;}

  private:

    double m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

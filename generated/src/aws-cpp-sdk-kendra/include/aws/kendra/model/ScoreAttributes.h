/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/ScoreConfidence.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides a relative ranking that indicates how confident Amazon Kendra is
   * that the response matches the query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ScoreAttributes">AWS
   * API Reference</a></p>
   */
  class ScoreAttributes
  {
  public:
    AWS_KENDRA_API ScoreAttributes();
    AWS_KENDRA_API ScoreAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ScoreAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A relative ranking for how well the response matches the query.</p>
     */
    inline const ScoreConfidence& GetScoreConfidence() const{ return m_scoreConfidence; }

    /**
     * <p>A relative ranking for how well the response matches the query.</p>
     */
    inline bool ScoreConfidenceHasBeenSet() const { return m_scoreConfidenceHasBeenSet; }

    /**
     * <p>A relative ranking for how well the response matches the query.</p>
     */
    inline void SetScoreConfidence(const ScoreConfidence& value) { m_scoreConfidenceHasBeenSet = true; m_scoreConfidence = value; }

    /**
     * <p>A relative ranking for how well the response matches the query.</p>
     */
    inline void SetScoreConfidence(ScoreConfidence&& value) { m_scoreConfidenceHasBeenSet = true; m_scoreConfidence = std::move(value); }

    /**
     * <p>A relative ranking for how well the response matches the query.</p>
     */
    inline ScoreAttributes& WithScoreConfidence(const ScoreConfidence& value) { SetScoreConfidence(value); return *this;}

    /**
     * <p>A relative ranking for how well the response matches the query.</p>
     */
    inline ScoreAttributes& WithScoreConfidence(ScoreConfidence&& value) { SetScoreConfidence(std::move(value)); return *this;}

  private:

    ScoreConfidence m_scoreConfidence;
    bool m_scoreConfidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws

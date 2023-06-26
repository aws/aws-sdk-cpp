/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/SeverityDescription.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides the numerical and qualitative representations of a finding's
   * severity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Severity">AWS API
   * Reference</a></p>
   */
  class Severity
  {
  public:
    AWS_MACIE2_API Severity();
    AWS_MACIE2_API Severity(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Severity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The qualitative representation of the finding's severity, ranging from Low
     * (least severe) to High (most severe).</p>
     */
    inline const SeverityDescription& GetDescription() const{ return m_description; }

    /**
     * <p>The qualitative representation of the finding's severity, ranging from Low
     * (least severe) to High (most severe).</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The qualitative representation of the finding's severity, ranging from Low
     * (least severe) to High (most severe).</p>
     */
    inline void SetDescription(const SeverityDescription& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The qualitative representation of the finding's severity, ranging from Low
     * (least severe) to High (most severe).</p>
     */
    inline void SetDescription(SeverityDescription&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The qualitative representation of the finding's severity, ranging from Low
     * (least severe) to High (most severe).</p>
     */
    inline Severity& WithDescription(const SeverityDescription& value) { SetDescription(value); return *this;}

    /**
     * <p>The qualitative representation of the finding's severity, ranging from Low
     * (least severe) to High (most severe).</p>
     */
    inline Severity& WithDescription(SeverityDescription&& value) { SetDescription(std::move(value)); return *this;}


    /**
     * <p>The numerical representation of the finding's severity, ranging from 1 (least
     * severe) to 3 (most severe).</p>
     */
    inline long long GetScore() const{ return m_score; }

    /**
     * <p>The numerical representation of the finding's severity, ranging from 1 (least
     * severe) to 3 (most severe).</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The numerical representation of the finding's severity, ranging from 1 (least
     * severe) to 3 (most severe).</p>
     */
    inline void SetScore(long long value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The numerical representation of the finding's severity, ranging from 1 (least
     * severe) to 3 (most severe).</p>
     */
    inline Severity& WithScore(long long value) { SetScore(value); return *this;}

  private:

    SeverityDescription m_description;
    bool m_descriptionHasBeenSet = false;

    long long m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws

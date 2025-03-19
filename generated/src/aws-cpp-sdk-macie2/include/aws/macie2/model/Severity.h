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
    AWS_MACIE2_API Severity() = default;
    AWS_MACIE2_API Severity(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Severity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The qualitative representation of the finding's severity, ranging from Low
     * (least severe) to High (most severe).</p>
     */
    inline SeverityDescription GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(SeverityDescription value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline Severity& WithDescription(SeverityDescription value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numerical representation of the finding's severity, ranging from 1 (least
     * severe) to 3 (most severe).</p>
     */
    inline long long GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(long long value) { m_scoreHasBeenSet = true; m_score = value; }
    inline Severity& WithScore(long long value) { SetScore(value); return *this;}
    ///@}
  private:

    SeverityDescription m_description{SeverityDescription::NOT_SET};
    bool m_descriptionHasBeenSet = false;

    long long m_score{0};
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws

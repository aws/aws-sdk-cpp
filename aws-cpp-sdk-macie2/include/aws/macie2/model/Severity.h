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
   * <p>Provides the numeric score and textual representation of a severity
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Severity">AWS API
   * Reference</a></p>
   */
  class AWS_MACIE2_API Severity
  {
  public:
    Severity();
    Severity(Aws::Utils::Json::JsonView jsonValue);
    Severity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The textual representation of the severity value, such as Low or High.</p>
     */
    inline const SeverityDescription& GetDescription() const{ return m_description; }

    /**
     * <p>The textual representation of the severity value, such as Low or High.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The textual representation of the severity value, such as Low or High.</p>
     */
    inline void SetDescription(const SeverityDescription& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The textual representation of the severity value, such as Low or High.</p>
     */
    inline void SetDescription(SeverityDescription&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The textual representation of the severity value, such as Low or High.</p>
     */
    inline Severity& WithDescription(const SeverityDescription& value) { SetDescription(value); return *this;}

    /**
     * <p>The textual representation of the severity value, such as Low or High.</p>
     */
    inline Severity& WithDescription(SeverityDescription&& value) { SetDescription(std::move(value)); return *this;}


    /**
     * <p>The numeric score for the severity value, ranging from 0 (least severe) to 4
     * (most severe).</p>
     */
    inline long long GetScore() const{ return m_score; }

    /**
     * <p>The numeric score for the severity value, ranging from 0 (least severe) to 4
     * (most severe).</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The numeric score for the severity value, ranging from 0 (least severe) to 4
     * (most severe).</p>
     */
    inline void SetScore(long long value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The numeric score for the severity value, ranging from 0 (least severe) to 4
     * (most severe).</p>
     */
    inline Severity& WithScore(long long value) { SetScore(value); return *this;}

  private:

    SeverityDescription m_description;
    bool m_descriptionHasBeenSet;

    long long m_score;
    bool m_scoreHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws

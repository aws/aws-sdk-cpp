/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>In a model evaluation job that uses human workers you must define the name of
   * the metric, and how you want that metric rated <code>ratingMethod</code>, and an
   * optional description of the metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/HumanEvaluationCustomMetric">AWS
   * API Reference</a></p>
   */
  class HumanEvaluationCustomMetric
  {
  public:
    AWS_BEDROCK_API HumanEvaluationCustomMetric();
    AWS_BEDROCK_API HumanEvaluationCustomMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API HumanEvaluationCustomMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the metric. Your human evaluators will see this name in the
     * evaluation UI.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the metric. Your human evaluators will see this name in the
     * evaluation UI.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the metric. Your human evaluators will see this name in the
     * evaluation UI.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the metric. Your human evaluators will see this name in the
     * evaluation UI.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the metric. Your human evaluators will see this name in the
     * evaluation UI.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the metric. Your human evaluators will see this name in the
     * evaluation UI.</p>
     */
    inline HumanEvaluationCustomMetric& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the metric. Your human evaluators will see this name in the
     * evaluation UI.</p>
     */
    inline HumanEvaluationCustomMetric& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric. Your human evaluators will see this name in the
     * evaluation UI.</p>
     */
    inline HumanEvaluationCustomMetric& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional description of the metric. Use this parameter to provide more
     * details about the metric.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of the metric. Use this parameter to provide more
     * details about the metric.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of the metric. Use this parameter to provide more
     * details about the metric.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of the metric. Use this parameter to provide more
     * details about the metric.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of the metric. Use this parameter to provide more
     * details about the metric.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of the metric. Use this parameter to provide more
     * details about the metric.</p>
     */
    inline HumanEvaluationCustomMetric& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the metric. Use this parameter to provide more
     * details about the metric.</p>
     */
    inline HumanEvaluationCustomMetric& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the metric. Use this parameter to provide more
     * details about the metric.</p>
     */
    inline HumanEvaluationCustomMetric& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Choose how you want your human workers to evaluation your model. Valid values
     * for rating methods are <code>ThumbsUpDown</code>,
     * <code>IndividualLikertScale</code>,<code>ComparisonLikertScale</code>,
     * <code>ComparisonChoice</code>, and <code>ComparisonRank</code> </p>
     */
    inline const Aws::String& GetRatingMethod() const{ return m_ratingMethod; }

    /**
     * <p>Choose how you want your human workers to evaluation your model. Valid values
     * for rating methods are <code>ThumbsUpDown</code>,
     * <code>IndividualLikertScale</code>,<code>ComparisonLikertScale</code>,
     * <code>ComparisonChoice</code>, and <code>ComparisonRank</code> </p>
     */
    inline bool RatingMethodHasBeenSet() const { return m_ratingMethodHasBeenSet; }

    /**
     * <p>Choose how you want your human workers to evaluation your model. Valid values
     * for rating methods are <code>ThumbsUpDown</code>,
     * <code>IndividualLikertScale</code>,<code>ComparisonLikertScale</code>,
     * <code>ComparisonChoice</code>, and <code>ComparisonRank</code> </p>
     */
    inline void SetRatingMethod(const Aws::String& value) { m_ratingMethodHasBeenSet = true; m_ratingMethod = value; }

    /**
     * <p>Choose how you want your human workers to evaluation your model. Valid values
     * for rating methods are <code>ThumbsUpDown</code>,
     * <code>IndividualLikertScale</code>,<code>ComparisonLikertScale</code>,
     * <code>ComparisonChoice</code>, and <code>ComparisonRank</code> </p>
     */
    inline void SetRatingMethod(Aws::String&& value) { m_ratingMethodHasBeenSet = true; m_ratingMethod = std::move(value); }

    /**
     * <p>Choose how you want your human workers to evaluation your model. Valid values
     * for rating methods are <code>ThumbsUpDown</code>,
     * <code>IndividualLikertScale</code>,<code>ComparisonLikertScale</code>,
     * <code>ComparisonChoice</code>, and <code>ComparisonRank</code> </p>
     */
    inline void SetRatingMethod(const char* value) { m_ratingMethodHasBeenSet = true; m_ratingMethod.assign(value); }

    /**
     * <p>Choose how you want your human workers to evaluation your model. Valid values
     * for rating methods are <code>ThumbsUpDown</code>,
     * <code>IndividualLikertScale</code>,<code>ComparisonLikertScale</code>,
     * <code>ComparisonChoice</code>, and <code>ComparisonRank</code> </p>
     */
    inline HumanEvaluationCustomMetric& WithRatingMethod(const Aws::String& value) { SetRatingMethod(value); return *this;}

    /**
     * <p>Choose how you want your human workers to evaluation your model. Valid values
     * for rating methods are <code>ThumbsUpDown</code>,
     * <code>IndividualLikertScale</code>,<code>ComparisonLikertScale</code>,
     * <code>ComparisonChoice</code>, and <code>ComparisonRank</code> </p>
     */
    inline HumanEvaluationCustomMetric& WithRatingMethod(Aws::String&& value) { SetRatingMethod(std::move(value)); return *this;}

    /**
     * <p>Choose how you want your human workers to evaluation your model. Valid values
     * for rating methods are <code>ThumbsUpDown</code>,
     * <code>IndividualLikertScale</code>,<code>ComparisonLikertScale</code>,
     * <code>ComparisonChoice</code>, and <code>ComparisonRank</code> </p>
     */
    inline HumanEvaluationCustomMetric& WithRatingMethod(const char* value) { SetRatingMethod(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_ratingMethod;
    bool m_ratingMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

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
    AWS_BEDROCK_API HumanEvaluationCustomMetric() = default;
    AWS_BEDROCK_API HumanEvaluationCustomMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API HumanEvaluationCustomMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric. Your human evaluators will see this name in the
     * evaluation UI.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    HumanEvaluationCustomMetric& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the metric. Use this parameter to provide more
     * details about the metric.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    HumanEvaluationCustomMetric& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose how you want your human workers to evaluation your model. Valid values
     * for rating methods are <code>ThumbsUpDown</code>,
     * <code>IndividualLikertScale</code>,<code>ComparisonLikertScale</code>,
     * <code>ComparisonChoice</code>, and <code>ComparisonRank</code> </p>
     */
    inline const Aws::String& GetRatingMethod() const { return m_ratingMethod; }
    inline bool RatingMethodHasBeenSet() const { return m_ratingMethodHasBeenSet; }
    template<typename RatingMethodT = Aws::String>
    void SetRatingMethod(RatingMethodT&& value) { m_ratingMethodHasBeenSet = true; m_ratingMethod = std::forward<RatingMethodT>(value); }
    template<typename RatingMethodT = Aws::String>
    HumanEvaluationCustomMetric& WithRatingMethod(RatingMethodT&& value) { SetRatingMethod(std::forward<RatingMethodT>(value)); return *this;}
    ///@}
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/EvaluationDatasetLocation.h>
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
   * <p>Used to specify the name of a built-in prompt dataset and optionally, the
   * Amazon S3 bucket where a custom prompt dataset is saved.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationDataset">AWS
   * API Reference</a></p>
   */
  class EvaluationDataset
  {
  public:
    AWS_BEDROCK_API EvaluationDataset();
    AWS_BEDROCK_API EvaluationDataset(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationDataset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Used to specify supported built-in prompt datasets. Valid values are
     * <code>Builtin.Bold</code>, <code>Builtin.BoolQ</code>,
     * <code>Builtin.NaturalQuestions</code>, <code>Builtin.Gigaword</code>,
     * <code>Builtin.RealToxicityPrompts</code>, <code>Builtin.TriviaQa</code>,
     * <code>Builtin.T-Rex</code>, <code>Builtin.WomensEcommerceClothingReviews</code>
     * and <code>Builtin.Wikitext2</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Used to specify supported built-in prompt datasets. Valid values are
     * <code>Builtin.Bold</code>, <code>Builtin.BoolQ</code>,
     * <code>Builtin.NaturalQuestions</code>, <code>Builtin.Gigaword</code>,
     * <code>Builtin.RealToxicityPrompts</code>, <code>Builtin.TriviaQa</code>,
     * <code>Builtin.T-Rex</code>, <code>Builtin.WomensEcommerceClothingReviews</code>
     * and <code>Builtin.Wikitext2</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Used to specify supported built-in prompt datasets. Valid values are
     * <code>Builtin.Bold</code>, <code>Builtin.BoolQ</code>,
     * <code>Builtin.NaturalQuestions</code>, <code>Builtin.Gigaword</code>,
     * <code>Builtin.RealToxicityPrompts</code>, <code>Builtin.TriviaQa</code>,
     * <code>Builtin.T-Rex</code>, <code>Builtin.WomensEcommerceClothingReviews</code>
     * and <code>Builtin.Wikitext2</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Used to specify supported built-in prompt datasets. Valid values are
     * <code>Builtin.Bold</code>, <code>Builtin.BoolQ</code>,
     * <code>Builtin.NaturalQuestions</code>, <code>Builtin.Gigaword</code>,
     * <code>Builtin.RealToxicityPrompts</code>, <code>Builtin.TriviaQa</code>,
     * <code>Builtin.T-Rex</code>, <code>Builtin.WomensEcommerceClothingReviews</code>
     * and <code>Builtin.Wikitext2</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Used to specify supported built-in prompt datasets. Valid values are
     * <code>Builtin.Bold</code>, <code>Builtin.BoolQ</code>,
     * <code>Builtin.NaturalQuestions</code>, <code>Builtin.Gigaword</code>,
     * <code>Builtin.RealToxicityPrompts</code>, <code>Builtin.TriviaQa</code>,
     * <code>Builtin.T-Rex</code>, <code>Builtin.WomensEcommerceClothingReviews</code>
     * and <code>Builtin.Wikitext2</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Used to specify supported built-in prompt datasets. Valid values are
     * <code>Builtin.Bold</code>, <code>Builtin.BoolQ</code>,
     * <code>Builtin.NaturalQuestions</code>, <code>Builtin.Gigaword</code>,
     * <code>Builtin.RealToxicityPrompts</code>, <code>Builtin.TriviaQa</code>,
     * <code>Builtin.T-Rex</code>, <code>Builtin.WomensEcommerceClothingReviews</code>
     * and <code>Builtin.Wikitext2</code>.</p>
     */
    inline EvaluationDataset& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Used to specify supported built-in prompt datasets. Valid values are
     * <code>Builtin.Bold</code>, <code>Builtin.BoolQ</code>,
     * <code>Builtin.NaturalQuestions</code>, <code>Builtin.Gigaword</code>,
     * <code>Builtin.RealToxicityPrompts</code>, <code>Builtin.TriviaQa</code>,
     * <code>Builtin.T-Rex</code>, <code>Builtin.WomensEcommerceClothingReviews</code>
     * and <code>Builtin.Wikitext2</code>.</p>
     */
    inline EvaluationDataset& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Used to specify supported built-in prompt datasets. Valid values are
     * <code>Builtin.Bold</code>, <code>Builtin.BoolQ</code>,
     * <code>Builtin.NaturalQuestions</code>, <code>Builtin.Gigaword</code>,
     * <code>Builtin.RealToxicityPrompts</code>, <code>Builtin.TriviaQa</code>,
     * <code>Builtin.T-Rex</code>, <code>Builtin.WomensEcommerceClothingReviews</code>
     * and <code>Builtin.Wikitext2</code>.</p>
     */
    inline EvaluationDataset& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>For custom prompt datasets, you must specify the location in Amazon S3 where
     * the prompt dataset is saved.</p>
     */
    inline const EvaluationDatasetLocation& GetDatasetLocation() const{ return m_datasetLocation; }

    /**
     * <p>For custom prompt datasets, you must specify the location in Amazon S3 where
     * the prompt dataset is saved.</p>
     */
    inline bool DatasetLocationHasBeenSet() const { return m_datasetLocationHasBeenSet; }

    /**
     * <p>For custom prompt datasets, you must specify the location in Amazon S3 where
     * the prompt dataset is saved.</p>
     */
    inline void SetDatasetLocation(const EvaluationDatasetLocation& value) { m_datasetLocationHasBeenSet = true; m_datasetLocation = value; }

    /**
     * <p>For custom prompt datasets, you must specify the location in Amazon S3 where
     * the prompt dataset is saved.</p>
     */
    inline void SetDatasetLocation(EvaluationDatasetLocation&& value) { m_datasetLocationHasBeenSet = true; m_datasetLocation = std::move(value); }

    /**
     * <p>For custom prompt datasets, you must specify the location in Amazon S3 where
     * the prompt dataset is saved.</p>
     */
    inline EvaluationDataset& WithDatasetLocation(const EvaluationDatasetLocation& value) { SetDatasetLocation(value); return *this;}

    /**
     * <p>For custom prompt datasets, you must specify the location in Amazon S3 where
     * the prompt dataset is saved.</p>
     */
    inline EvaluationDataset& WithDatasetLocation(EvaluationDatasetLocation&& value) { SetDatasetLocation(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EvaluationDatasetLocation m_datasetLocation;
    bool m_datasetLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

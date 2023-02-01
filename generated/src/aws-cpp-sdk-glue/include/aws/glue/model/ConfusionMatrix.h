/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
namespace Glue
{
namespace Model
{

  /**
   * <p>The confusion matrix shows you what your transform is predicting accurately
   * and what types of errors it is making.</p> <p>For more information, see <a
   * href="https://en.wikipedia.org/wiki/Confusion_matrix">Confusion matrix</a> in
   * Wikipedia.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConfusionMatrix">AWS
   * API Reference</a></p>
   */
  class ConfusionMatrix
  {
  public:
    AWS_GLUE_API ConfusionMatrix();
    AWS_GLUE_API ConfusionMatrix(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConfusionMatrix& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of matches in the data that the transform correctly found, in the
     * confusion matrix for your transform.</p>
     */
    inline long long GetNumTruePositives() const{ return m_numTruePositives; }

    /**
     * <p>The number of matches in the data that the transform correctly found, in the
     * confusion matrix for your transform.</p>
     */
    inline bool NumTruePositivesHasBeenSet() const { return m_numTruePositivesHasBeenSet; }

    /**
     * <p>The number of matches in the data that the transform correctly found, in the
     * confusion matrix for your transform.</p>
     */
    inline void SetNumTruePositives(long long value) { m_numTruePositivesHasBeenSet = true; m_numTruePositives = value; }

    /**
     * <p>The number of matches in the data that the transform correctly found, in the
     * confusion matrix for your transform.</p>
     */
    inline ConfusionMatrix& WithNumTruePositives(long long value) { SetNumTruePositives(value); return *this;}


    /**
     * <p>The number of nonmatches in the data that the transform incorrectly
     * classified as a match, in the confusion matrix for your transform.</p>
     */
    inline long long GetNumFalsePositives() const{ return m_numFalsePositives; }

    /**
     * <p>The number of nonmatches in the data that the transform incorrectly
     * classified as a match, in the confusion matrix for your transform.</p>
     */
    inline bool NumFalsePositivesHasBeenSet() const { return m_numFalsePositivesHasBeenSet; }

    /**
     * <p>The number of nonmatches in the data that the transform incorrectly
     * classified as a match, in the confusion matrix for your transform.</p>
     */
    inline void SetNumFalsePositives(long long value) { m_numFalsePositivesHasBeenSet = true; m_numFalsePositives = value; }

    /**
     * <p>The number of nonmatches in the data that the transform incorrectly
     * classified as a match, in the confusion matrix for your transform.</p>
     */
    inline ConfusionMatrix& WithNumFalsePositives(long long value) { SetNumFalsePositives(value); return *this;}


    /**
     * <p>The number of nonmatches in the data that the transform correctly rejected,
     * in the confusion matrix for your transform.</p>
     */
    inline long long GetNumTrueNegatives() const{ return m_numTrueNegatives; }

    /**
     * <p>The number of nonmatches in the data that the transform correctly rejected,
     * in the confusion matrix for your transform.</p>
     */
    inline bool NumTrueNegativesHasBeenSet() const { return m_numTrueNegativesHasBeenSet; }

    /**
     * <p>The number of nonmatches in the data that the transform correctly rejected,
     * in the confusion matrix for your transform.</p>
     */
    inline void SetNumTrueNegatives(long long value) { m_numTrueNegativesHasBeenSet = true; m_numTrueNegatives = value; }

    /**
     * <p>The number of nonmatches in the data that the transform correctly rejected,
     * in the confusion matrix for your transform.</p>
     */
    inline ConfusionMatrix& WithNumTrueNegatives(long long value) { SetNumTrueNegatives(value); return *this;}


    /**
     * <p>The number of matches in the data that the transform didn't find, in the
     * confusion matrix for your transform.</p>
     */
    inline long long GetNumFalseNegatives() const{ return m_numFalseNegatives; }

    /**
     * <p>The number of matches in the data that the transform didn't find, in the
     * confusion matrix for your transform.</p>
     */
    inline bool NumFalseNegativesHasBeenSet() const { return m_numFalseNegativesHasBeenSet; }

    /**
     * <p>The number of matches in the data that the transform didn't find, in the
     * confusion matrix for your transform.</p>
     */
    inline void SetNumFalseNegatives(long long value) { m_numFalseNegativesHasBeenSet = true; m_numFalseNegatives = value; }

    /**
     * <p>The number of matches in the data that the transform didn't find, in the
     * confusion matrix for your transform.</p>
     */
    inline ConfusionMatrix& WithNumFalseNegatives(long long value) { SetNumFalseNegatives(value); return *this;}

  private:

    long long m_numTruePositives;
    bool m_numTruePositivesHasBeenSet = false;

    long long m_numFalsePositives;
    bool m_numFalsePositivesHasBeenSet = false;

    long long m_numTrueNegatives;
    bool m_numTrueNegativesHasBeenSet = false;

    long long m_numFalseNegatives;
    bool m_numFalseNegativesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

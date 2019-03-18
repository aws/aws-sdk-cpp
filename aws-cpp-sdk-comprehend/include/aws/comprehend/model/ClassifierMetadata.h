/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/ClassifierEvaluationMetrics.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Provides information about a document classifier.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ClassifierMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API ClassifierMetadata
  {
  public:
    ClassifierMetadata();
    ClassifierMetadata(Aws::Utils::Json::JsonView jsonValue);
    ClassifierMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of labels in the input data. </p>
     */
    inline int GetNumberOfLabels() const{ return m_numberOfLabels; }

    /**
     * <p>The number of labels in the input data. </p>
     */
    inline bool NumberOfLabelsHasBeenSet() const { return m_numberOfLabelsHasBeenSet; }

    /**
     * <p>The number of labels in the input data. </p>
     */
    inline void SetNumberOfLabels(int value) { m_numberOfLabelsHasBeenSet = true; m_numberOfLabels = value; }

    /**
     * <p>The number of labels in the input data. </p>
     */
    inline ClassifierMetadata& WithNumberOfLabels(int value) { SetNumberOfLabels(value); return *this;}


    /**
     * <p>The number of documents in the input data that were used to train the
     * classifier. Typically this is 80 to 90 percent of the input documents.</p>
     */
    inline int GetNumberOfTrainedDocuments() const{ return m_numberOfTrainedDocuments; }

    /**
     * <p>The number of documents in the input data that were used to train the
     * classifier. Typically this is 80 to 90 percent of the input documents.</p>
     */
    inline bool NumberOfTrainedDocumentsHasBeenSet() const { return m_numberOfTrainedDocumentsHasBeenSet; }

    /**
     * <p>The number of documents in the input data that were used to train the
     * classifier. Typically this is 80 to 90 percent of the input documents.</p>
     */
    inline void SetNumberOfTrainedDocuments(int value) { m_numberOfTrainedDocumentsHasBeenSet = true; m_numberOfTrainedDocuments = value; }

    /**
     * <p>The number of documents in the input data that were used to train the
     * classifier. Typically this is 80 to 90 percent of the input documents.</p>
     */
    inline ClassifierMetadata& WithNumberOfTrainedDocuments(int value) { SetNumberOfTrainedDocuments(value); return *this;}


    /**
     * <p>The number of documents in the input data that were used to test the
     * classifier. Typically this is 10 to 20 percent of the input documents.</p>
     */
    inline int GetNumberOfTestDocuments() const{ return m_numberOfTestDocuments; }

    /**
     * <p>The number of documents in the input data that were used to test the
     * classifier. Typically this is 10 to 20 percent of the input documents.</p>
     */
    inline bool NumberOfTestDocumentsHasBeenSet() const { return m_numberOfTestDocumentsHasBeenSet; }

    /**
     * <p>The number of documents in the input data that were used to test the
     * classifier. Typically this is 10 to 20 percent of the input documents.</p>
     */
    inline void SetNumberOfTestDocuments(int value) { m_numberOfTestDocumentsHasBeenSet = true; m_numberOfTestDocuments = value; }

    /**
     * <p>The number of documents in the input data that were used to test the
     * classifier. Typically this is 10 to 20 percent of the input documents.</p>
     */
    inline ClassifierMetadata& WithNumberOfTestDocuments(int value) { SetNumberOfTestDocuments(value); return *this;}


    /**
     * <p> Describes the result metrics for the test data associated with an
     * documentation classifier.</p>
     */
    inline const ClassifierEvaluationMetrics& GetEvaluationMetrics() const{ return m_evaluationMetrics; }

    /**
     * <p> Describes the result metrics for the test data associated with an
     * documentation classifier.</p>
     */
    inline bool EvaluationMetricsHasBeenSet() const { return m_evaluationMetricsHasBeenSet; }

    /**
     * <p> Describes the result metrics for the test data associated with an
     * documentation classifier.</p>
     */
    inline void SetEvaluationMetrics(const ClassifierEvaluationMetrics& value) { m_evaluationMetricsHasBeenSet = true; m_evaluationMetrics = value; }

    /**
     * <p> Describes the result metrics for the test data associated with an
     * documentation classifier.</p>
     */
    inline void SetEvaluationMetrics(ClassifierEvaluationMetrics&& value) { m_evaluationMetricsHasBeenSet = true; m_evaluationMetrics = std::move(value); }

    /**
     * <p> Describes the result metrics for the test data associated with an
     * documentation classifier.</p>
     */
    inline ClassifierMetadata& WithEvaluationMetrics(const ClassifierEvaluationMetrics& value) { SetEvaluationMetrics(value); return *this;}

    /**
     * <p> Describes the result metrics for the test data associated with an
     * documentation classifier.</p>
     */
    inline ClassifierMetadata& WithEvaluationMetrics(ClassifierEvaluationMetrics&& value) { SetEvaluationMetrics(std::move(value)); return *this;}

  private:

    int m_numberOfLabels;
    bool m_numberOfLabelsHasBeenSet;

    int m_numberOfTrainedDocuments;
    bool m_numberOfTrainedDocumentsHasBeenSet;

    int m_numberOfTestDocuments;
    bool m_numberOfTestDocumentsHasBeenSet;

    ClassifierEvaluationMetrics m_evaluationMetrics;
    bool m_evaluationMetricsHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

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
#include <aws/comprehend/model/EntityRecognizerEvaluationMetrics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/EntityRecognizerMetadataEntityTypesListItem.h>
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
   * <p>Detailed information about an entity recognizer.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityRecognizerMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API EntityRecognizerMetadata
  {
  public:
    EntityRecognizerMetadata();
    EntityRecognizerMetadata(Aws::Utils::Json::JsonView jsonValue);
    EntityRecognizerMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The number of documents in the input data that were used to train the entity
     * recognizer. Typically this is 80 to 90 percent of the input documents.</p>
     */
    inline int GetNumberOfTrainedDocuments() const{ return m_numberOfTrainedDocuments; }

    /**
     * <p> The number of documents in the input data that were used to train the entity
     * recognizer. Typically this is 80 to 90 percent of the input documents.</p>
     */
    inline bool NumberOfTrainedDocumentsHasBeenSet() const { return m_numberOfTrainedDocumentsHasBeenSet; }

    /**
     * <p> The number of documents in the input data that were used to train the entity
     * recognizer. Typically this is 80 to 90 percent of the input documents.</p>
     */
    inline void SetNumberOfTrainedDocuments(int value) { m_numberOfTrainedDocumentsHasBeenSet = true; m_numberOfTrainedDocuments = value; }

    /**
     * <p> The number of documents in the input data that were used to train the entity
     * recognizer. Typically this is 80 to 90 percent of the input documents.</p>
     */
    inline EntityRecognizerMetadata& WithNumberOfTrainedDocuments(int value) { SetNumberOfTrainedDocuments(value); return *this;}


    /**
     * <p> The number of documents in the input data that were used to test the entity
     * recognizer. Typically this is 10 to 20 percent of the input documents.</p>
     */
    inline int GetNumberOfTestDocuments() const{ return m_numberOfTestDocuments; }

    /**
     * <p> The number of documents in the input data that were used to test the entity
     * recognizer. Typically this is 10 to 20 percent of the input documents.</p>
     */
    inline bool NumberOfTestDocumentsHasBeenSet() const { return m_numberOfTestDocumentsHasBeenSet; }

    /**
     * <p> The number of documents in the input data that were used to test the entity
     * recognizer. Typically this is 10 to 20 percent of the input documents.</p>
     */
    inline void SetNumberOfTestDocuments(int value) { m_numberOfTestDocumentsHasBeenSet = true; m_numberOfTestDocuments = value; }

    /**
     * <p> The number of documents in the input data that were used to test the entity
     * recognizer. Typically this is 10 to 20 percent of the input documents.</p>
     */
    inline EntityRecognizerMetadata& WithNumberOfTestDocuments(int value) { SetNumberOfTestDocuments(value); return *this;}


    /**
     * <p> Detailed information about the accuracy of an entity recognizer.</p>
     */
    inline const EntityRecognizerEvaluationMetrics& GetEvaluationMetrics() const{ return m_evaluationMetrics; }

    /**
     * <p> Detailed information about the accuracy of an entity recognizer.</p>
     */
    inline bool EvaluationMetricsHasBeenSet() const { return m_evaluationMetricsHasBeenSet; }

    /**
     * <p> Detailed information about the accuracy of an entity recognizer.</p>
     */
    inline void SetEvaluationMetrics(const EntityRecognizerEvaluationMetrics& value) { m_evaluationMetricsHasBeenSet = true; m_evaluationMetrics = value; }

    /**
     * <p> Detailed information about the accuracy of an entity recognizer.</p>
     */
    inline void SetEvaluationMetrics(EntityRecognizerEvaluationMetrics&& value) { m_evaluationMetricsHasBeenSet = true; m_evaluationMetrics = std::move(value); }

    /**
     * <p> Detailed information about the accuracy of an entity recognizer.</p>
     */
    inline EntityRecognizerMetadata& WithEvaluationMetrics(const EntityRecognizerEvaluationMetrics& value) { SetEvaluationMetrics(value); return *this;}

    /**
     * <p> Detailed information about the accuracy of an entity recognizer.</p>
     */
    inline EntityRecognizerMetadata& WithEvaluationMetrics(EntityRecognizerEvaluationMetrics&& value) { SetEvaluationMetrics(std::move(value)); return *this;}


    /**
     * <p>Entity types from the metadata of an entity recognizer.</p>
     */
    inline const Aws::Vector<EntityRecognizerMetadataEntityTypesListItem>& GetEntityTypes() const{ return m_entityTypes; }

    /**
     * <p>Entity types from the metadata of an entity recognizer.</p>
     */
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }

    /**
     * <p>Entity types from the metadata of an entity recognizer.</p>
     */
    inline void SetEntityTypes(const Aws::Vector<EntityRecognizerMetadataEntityTypesListItem>& value) { m_entityTypesHasBeenSet = true; m_entityTypes = value; }

    /**
     * <p>Entity types from the metadata of an entity recognizer.</p>
     */
    inline void SetEntityTypes(Aws::Vector<EntityRecognizerMetadataEntityTypesListItem>&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::move(value); }

    /**
     * <p>Entity types from the metadata of an entity recognizer.</p>
     */
    inline EntityRecognizerMetadata& WithEntityTypes(const Aws::Vector<EntityRecognizerMetadataEntityTypesListItem>& value) { SetEntityTypes(value); return *this;}

    /**
     * <p>Entity types from the metadata of an entity recognizer.</p>
     */
    inline EntityRecognizerMetadata& WithEntityTypes(Aws::Vector<EntityRecognizerMetadataEntityTypesListItem>&& value) { SetEntityTypes(std::move(value)); return *this;}

    /**
     * <p>Entity types from the metadata of an entity recognizer.</p>
     */
    inline EntityRecognizerMetadata& AddEntityTypes(const EntityRecognizerMetadataEntityTypesListItem& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(value); return *this; }

    /**
     * <p>Entity types from the metadata of an entity recognizer.</p>
     */
    inline EntityRecognizerMetadata& AddEntityTypes(EntityRecognizerMetadataEntityTypesListItem&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(std::move(value)); return *this; }

  private:

    int m_numberOfTrainedDocuments;
    bool m_numberOfTrainedDocumentsHasBeenSet;

    int m_numberOfTestDocuments;
    bool m_numberOfTestDocumentsHasBeenSet;

    EntityRecognizerEvaluationMetrics m_evaluationMetrics;
    bool m_evaluationMetricsHasBeenSet;

    Aws::Vector<EntityRecognizerMetadataEntityTypesListItem> m_entityTypes;
    bool m_entityTypesHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

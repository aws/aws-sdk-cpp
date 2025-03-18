/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class EntityRecognizerMetadata
  {
  public:
    AWS_COMPREHEND_API EntityRecognizerMetadata() = default;
    AWS_COMPREHEND_API EntityRecognizerMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognizerMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The number of documents in the input data that were used to train the entity
     * recognizer. Typically this is 80 to 90 percent of the input documents.</p>
     */
    inline int GetNumberOfTrainedDocuments() const { return m_numberOfTrainedDocuments; }
    inline bool NumberOfTrainedDocumentsHasBeenSet() const { return m_numberOfTrainedDocumentsHasBeenSet; }
    inline void SetNumberOfTrainedDocuments(int value) { m_numberOfTrainedDocumentsHasBeenSet = true; m_numberOfTrainedDocuments = value; }
    inline EntityRecognizerMetadata& WithNumberOfTrainedDocuments(int value) { SetNumberOfTrainedDocuments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of documents in the input data that were used to test the entity
     * recognizer. Typically this is 10 to 20 percent of the input documents.</p>
     */
    inline int GetNumberOfTestDocuments() const { return m_numberOfTestDocuments; }
    inline bool NumberOfTestDocumentsHasBeenSet() const { return m_numberOfTestDocumentsHasBeenSet; }
    inline void SetNumberOfTestDocuments(int value) { m_numberOfTestDocumentsHasBeenSet = true; m_numberOfTestDocuments = value; }
    inline EntityRecognizerMetadata& WithNumberOfTestDocuments(int value) { SetNumberOfTestDocuments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the accuracy of an entity recognizer.</p>
     */
    inline const EntityRecognizerEvaluationMetrics& GetEvaluationMetrics() const { return m_evaluationMetrics; }
    inline bool EvaluationMetricsHasBeenSet() const { return m_evaluationMetricsHasBeenSet; }
    template<typename EvaluationMetricsT = EntityRecognizerEvaluationMetrics>
    void SetEvaluationMetrics(EvaluationMetricsT&& value) { m_evaluationMetricsHasBeenSet = true; m_evaluationMetrics = std::forward<EvaluationMetricsT>(value); }
    template<typename EvaluationMetricsT = EntityRecognizerEvaluationMetrics>
    EntityRecognizerMetadata& WithEvaluationMetrics(EvaluationMetricsT&& value) { SetEvaluationMetrics(std::forward<EvaluationMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Entity types from the metadata of an entity recognizer.</p>
     */
    inline const Aws::Vector<EntityRecognizerMetadataEntityTypesListItem>& GetEntityTypes() const { return m_entityTypes; }
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }
    template<typename EntityTypesT = Aws::Vector<EntityRecognizerMetadataEntityTypesListItem>>
    void SetEntityTypes(EntityTypesT&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::forward<EntityTypesT>(value); }
    template<typename EntityTypesT = Aws::Vector<EntityRecognizerMetadataEntityTypesListItem>>
    EntityRecognizerMetadata& WithEntityTypes(EntityTypesT&& value) { SetEntityTypes(std::forward<EntityTypesT>(value)); return *this;}
    template<typename EntityTypesT = EntityRecognizerMetadataEntityTypesListItem>
    EntityRecognizerMetadata& AddEntityTypes(EntityTypesT&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.emplace_back(std::forward<EntityTypesT>(value)); return *this; }
    ///@}
  private:

    int m_numberOfTrainedDocuments{0};
    bool m_numberOfTrainedDocumentsHasBeenSet = false;

    int m_numberOfTestDocuments{0};
    bool m_numberOfTestDocumentsHasBeenSet = false;

    EntityRecognizerEvaluationMetrics m_evaluationMetrics;
    bool m_evaluationMetricsHasBeenSet = false;

    Aws::Vector<EntityRecognizerMetadataEntityTypesListItem> m_entityTypes;
    bool m_entityTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

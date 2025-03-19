/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/EntityTypesEvaluationMetrics.h>
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
   * <p>Individual item from the list of entity types in the metadata of an entity
   * recognizer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityRecognizerMetadataEntityTypesListItem">AWS
   * API Reference</a></p>
   */
  class EntityRecognizerMetadataEntityTypesListItem
  {
  public:
    AWS_COMPREHEND_API EntityRecognizerMetadataEntityTypesListItem() = default;
    AWS_COMPREHEND_API EntityRecognizerMetadataEntityTypesListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognizerMetadataEntityTypesListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of entity from the list of entity types in the metadata of an entity
     * recognizer. </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    EntityRecognizerMetadataEntityTypesListItem& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the accuracy of the entity recognizer for a
     * specific item on the list of entity types. </p>
     */
    inline const EntityTypesEvaluationMetrics& GetEvaluationMetrics() const { return m_evaluationMetrics; }
    inline bool EvaluationMetricsHasBeenSet() const { return m_evaluationMetricsHasBeenSet; }
    template<typename EvaluationMetricsT = EntityTypesEvaluationMetrics>
    void SetEvaluationMetrics(EvaluationMetricsT&& value) { m_evaluationMetricsHasBeenSet = true; m_evaluationMetrics = std::forward<EvaluationMetricsT>(value); }
    template<typename EvaluationMetricsT = EntityTypesEvaluationMetrics>
    EntityRecognizerMetadataEntityTypesListItem& WithEvaluationMetrics(EvaluationMetricsT&& value) { SetEvaluationMetrics(std::forward<EvaluationMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the number of times the given entity type was seen in the training
     * data. </p>
     */
    inline int GetNumberOfTrainMentions() const { return m_numberOfTrainMentions; }
    inline bool NumberOfTrainMentionsHasBeenSet() const { return m_numberOfTrainMentionsHasBeenSet; }
    inline void SetNumberOfTrainMentions(int value) { m_numberOfTrainMentionsHasBeenSet = true; m_numberOfTrainMentions = value; }
    inline EntityRecognizerMetadataEntityTypesListItem& WithNumberOfTrainMentions(int value) { SetNumberOfTrainMentions(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    EntityTypesEvaluationMetrics m_evaluationMetrics;
    bool m_evaluationMetricsHasBeenSet = false;

    int m_numberOfTrainMentions{0};
    bool m_numberOfTrainMentionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

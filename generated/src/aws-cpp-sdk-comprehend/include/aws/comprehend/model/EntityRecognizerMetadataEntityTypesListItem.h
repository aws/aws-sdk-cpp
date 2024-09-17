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
    AWS_COMPREHEND_API EntityRecognizerMetadataEntityTypesListItem();
    AWS_COMPREHEND_API EntityRecognizerMetadataEntityTypesListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognizerMetadataEntityTypesListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of entity from the list of entity types in the metadata of an entity
     * recognizer. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline EntityRecognizerMetadataEntityTypesListItem& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline EntityRecognizerMetadataEntityTypesListItem& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline EntityRecognizerMetadataEntityTypesListItem& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the accuracy of the entity recognizer for a
     * specific item on the list of entity types. </p>
     */
    inline const EntityTypesEvaluationMetrics& GetEvaluationMetrics() const{ return m_evaluationMetrics; }
    inline bool EvaluationMetricsHasBeenSet() const { return m_evaluationMetricsHasBeenSet; }
    inline void SetEvaluationMetrics(const EntityTypesEvaluationMetrics& value) { m_evaluationMetricsHasBeenSet = true; m_evaluationMetrics = value; }
    inline void SetEvaluationMetrics(EntityTypesEvaluationMetrics&& value) { m_evaluationMetricsHasBeenSet = true; m_evaluationMetrics = std::move(value); }
    inline EntityRecognizerMetadataEntityTypesListItem& WithEvaluationMetrics(const EntityTypesEvaluationMetrics& value) { SetEvaluationMetrics(value); return *this;}
    inline EntityRecognizerMetadataEntityTypesListItem& WithEvaluationMetrics(EntityTypesEvaluationMetrics&& value) { SetEvaluationMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the number of times the given entity type was seen in the training
     * data. </p>
     */
    inline int GetNumberOfTrainMentions() const{ return m_numberOfTrainMentions; }
    inline bool NumberOfTrainMentionsHasBeenSet() const { return m_numberOfTrainMentionsHasBeenSet; }
    inline void SetNumberOfTrainMentions(int value) { m_numberOfTrainMentionsHasBeenSet = true; m_numberOfTrainMentions = value; }
    inline EntityRecognizerMetadataEntityTypesListItem& WithNumberOfTrainMentions(int value) { SetNumberOfTrainMentions(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    EntityTypesEvaluationMetrics m_evaluationMetrics;
    bool m_evaluationMetricsHasBeenSet = false;

    int m_numberOfTrainMentions;
    bool m_numberOfTrainMentionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

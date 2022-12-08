/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/TargetedSentimentEntity.h>
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
   * <p>Analysis results for one of the documents in the batch.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectTargetedSentimentItemResult">AWS
   * API Reference</a></p>
   */
  class BatchDetectTargetedSentimentItemResult
  {
  public:
    AWS_COMPREHEND_API BatchDetectTargetedSentimentItemResult();
    AWS_COMPREHEND_API BatchDetectTargetedSentimentItemResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API BatchDetectTargetedSentimentItemResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The zero-based index of this result in the input list.</p>
     */
    inline int GetIndex() const{ return m_index; }

    /**
     * <p>The zero-based index of this result in the input list.</p>
     */
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }

    /**
     * <p>The zero-based index of this result in the input list.</p>
     */
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }

    /**
     * <p>The zero-based index of this result in the input list.</p>
     */
    inline BatchDetectTargetedSentimentItemResult& WithIndex(int value) { SetIndex(value); return *this;}


    /**
     * <p>An array of targeted sentiment entities.</p>
     */
    inline const Aws::Vector<TargetedSentimentEntity>& GetEntities() const{ return m_entities; }

    /**
     * <p>An array of targeted sentiment entities.</p>
     */
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }

    /**
     * <p>An array of targeted sentiment entities.</p>
     */
    inline void SetEntities(const Aws::Vector<TargetedSentimentEntity>& value) { m_entitiesHasBeenSet = true; m_entities = value; }

    /**
     * <p>An array of targeted sentiment entities.</p>
     */
    inline void SetEntities(Aws::Vector<TargetedSentimentEntity>&& value) { m_entitiesHasBeenSet = true; m_entities = std::move(value); }

    /**
     * <p>An array of targeted sentiment entities.</p>
     */
    inline BatchDetectTargetedSentimentItemResult& WithEntities(const Aws::Vector<TargetedSentimentEntity>& value) { SetEntities(value); return *this;}

    /**
     * <p>An array of targeted sentiment entities.</p>
     */
    inline BatchDetectTargetedSentimentItemResult& WithEntities(Aws::Vector<TargetedSentimentEntity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>An array of targeted sentiment entities.</p>
     */
    inline BatchDetectTargetedSentimentItemResult& AddEntities(const TargetedSentimentEntity& value) { m_entitiesHasBeenSet = true; m_entities.push_back(value); return *this; }

    /**
     * <p>An array of targeted sentiment entities.</p>
     */
    inline BatchDetectTargetedSentimentItemResult& AddEntities(TargetedSentimentEntity&& value) { m_entitiesHasBeenSet = true; m_entities.push_back(std::move(value)); return *this; }

  private:

    int m_index;
    bool m_indexHasBeenSet = false;

    Aws::Vector<TargetedSentimentEntity> m_entities;
    bool m_entitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/Entity.h>
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
   * <p>The result of calling the operation. The operation returns one object for
   * each document that is successfully processed by the operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectEntitiesItemResult">AWS
   * API Reference</a></p>
   */
  class BatchDetectEntitiesItemResult
  {
  public:
    AWS_COMPREHEND_API BatchDetectEntitiesItemResult();
    AWS_COMPREHEND_API BatchDetectEntitiesItemResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API BatchDetectEntitiesItemResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline int GetIndex() const{ return m_index; }

    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }

    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }

    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline BatchDetectEntitiesItemResult& WithIndex(int value) { SetIndex(value); return *this;}


    /**
     * <p>One or more <a>Entity</a> objects, one for each entity detected in the
     * document.</p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const{ return m_entities; }

    /**
     * <p>One or more <a>Entity</a> objects, one for each entity detected in the
     * document.</p>
     */
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }

    /**
     * <p>One or more <a>Entity</a> objects, one for each entity detected in the
     * document.</p>
     */
    inline void SetEntities(const Aws::Vector<Entity>& value) { m_entitiesHasBeenSet = true; m_entities = value; }

    /**
     * <p>One or more <a>Entity</a> objects, one for each entity detected in the
     * document.</p>
     */
    inline void SetEntities(Aws::Vector<Entity>&& value) { m_entitiesHasBeenSet = true; m_entities = std::move(value); }

    /**
     * <p>One or more <a>Entity</a> objects, one for each entity detected in the
     * document.</p>
     */
    inline BatchDetectEntitiesItemResult& WithEntities(const Aws::Vector<Entity>& value) { SetEntities(value); return *this;}

    /**
     * <p>One or more <a>Entity</a> objects, one for each entity detected in the
     * document.</p>
     */
    inline BatchDetectEntitiesItemResult& WithEntities(Aws::Vector<Entity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>One or more <a>Entity</a> objects, one for each entity detected in the
     * document.</p>
     */
    inline BatchDetectEntitiesItemResult& AddEntities(const Entity& value) { m_entitiesHasBeenSet = true; m_entities.push_back(value); return *this; }

    /**
     * <p>One or more <a>Entity</a> objects, one for each entity detected in the
     * document.</p>
     */
    inline BatchDetectEntitiesItemResult& AddEntities(Entity&& value) { m_entitiesHasBeenSet = true; m_entities.push_back(std::move(value)); return *this; }

  private:

    int m_index;
    bool m_indexHasBeenSet = false;

    Aws::Vector<Entity> m_entities;
    bool m_entitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

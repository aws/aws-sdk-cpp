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
    AWS_COMPREHEND_API BatchDetectEntitiesItemResult() = default;
    AWS_COMPREHEND_API BatchDetectEntitiesItemResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API BatchDetectEntitiesItemResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline int GetIndex() const { return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }
    inline BatchDetectEntitiesItemResult& WithIndex(int value) { SetIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more <a>Entity</a> objects, one for each entity detected in the
     * document.</p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const { return m_entities; }
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
    template<typename EntitiesT = Aws::Vector<Entity>>
    void SetEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities = std::forward<EntitiesT>(value); }
    template<typename EntitiesT = Aws::Vector<Entity>>
    BatchDetectEntitiesItemResult& WithEntities(EntitiesT&& value) { SetEntities(std::forward<EntitiesT>(value)); return *this;}
    template<typename EntitiesT = Entity>
    BatchDetectEntitiesItemResult& AddEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities.emplace_back(std::forward<EntitiesT>(value)); return *this; }
    ///@}
  private:

    int m_index{0};
    bool m_indexHasBeenSet = false;

    Aws::Vector<Entity> m_entities;
    bool m_entitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

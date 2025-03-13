/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/EntityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/BlockReference.h>
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
   * <p>Provides information about an entity. </p> <p> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/Entity">AWS
   * API Reference</a></p>
   */
  class Entity
  {
  public:
    AWS_COMPREHEND_API Entity() = default;
    AWS_COMPREHEND_API Entity(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Entity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline Entity& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity type. For entity detection using the built-in model, this field
     * contains one of the standard entity types listed below.</p> <p>For custom entity
     * detection, this field contains one of the entity types that you specified when
     * you trained your custom model.</p>
     */
    inline EntityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EntityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Entity& WithType(EntityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the entity.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    Entity& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zero-based offset from the beginning of the source text to the first
     * character in the entity.</p> <p>This field is empty for non-text input.</p>
     */
    inline int GetBeginOffset() const { return m_beginOffset; }
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }
    inline Entity& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zero-based offset from the beginning of the source text to the last
     * character in the entity.</p> <p>This field is empty for non-text input.</p>
     */
    inline int GetEndOffset() const { return m_endOffset; }
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }
    inline Entity& WithEndOffset(int value) { SetEndOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to each block for this entity. This field is empty for plain-text
     * input.</p>
     */
    inline const Aws::Vector<BlockReference>& GetBlockReferences() const { return m_blockReferences; }
    inline bool BlockReferencesHasBeenSet() const { return m_blockReferencesHasBeenSet; }
    template<typename BlockReferencesT = Aws::Vector<BlockReference>>
    void SetBlockReferences(BlockReferencesT&& value) { m_blockReferencesHasBeenSet = true; m_blockReferences = std::forward<BlockReferencesT>(value); }
    template<typename BlockReferencesT = Aws::Vector<BlockReference>>
    Entity& WithBlockReferences(BlockReferencesT&& value) { SetBlockReferences(std::forward<BlockReferencesT>(value)); return *this;}
    template<typename BlockReferencesT = BlockReference>
    Entity& AddBlockReferences(BlockReferencesT&& value) { m_blockReferencesHasBeenSet = true; m_blockReferences.emplace_back(std::forward<BlockReferencesT>(value)); return *this; }
    ///@}
  private:

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;

    EntityType m_type{EntityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    int m_beginOffset{0};
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset{0};
    bool m_endOffsetHasBeenSet = false;

    Aws::Vector<BlockReference> m_blockReferences;
    bool m_blockReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

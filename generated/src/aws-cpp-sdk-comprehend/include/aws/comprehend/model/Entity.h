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
    AWS_COMPREHEND_API Entity();
    AWS_COMPREHEND_API Entity(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Entity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline Entity& WithScore(double value) { SetScore(value); return *this;}


    /**
     * <p>The entity type. For entity detection using the built-in model, this field
     * contains one of the standard entity types listed below.</p> <p>For custom entity
     * detection, this field contains one of the entity types that you specified when
     * you trained your custom model.</p>
     */
    inline const EntityType& GetType() const{ return m_type; }

    /**
     * <p>The entity type. For entity detection using the built-in model, this field
     * contains one of the standard entity types listed below.</p> <p>For custom entity
     * detection, this field contains one of the entity types that you specified when
     * you trained your custom model.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The entity type. For entity detection using the built-in model, this field
     * contains one of the standard entity types listed below.</p> <p>For custom entity
     * detection, this field contains one of the entity types that you specified when
     * you trained your custom model.</p>
     */
    inline void SetType(const EntityType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The entity type. For entity detection using the built-in model, this field
     * contains one of the standard entity types listed below.</p> <p>For custom entity
     * detection, this field contains one of the entity types that you specified when
     * you trained your custom model.</p>
     */
    inline void SetType(EntityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The entity type. For entity detection using the built-in model, this field
     * contains one of the standard entity types listed below.</p> <p>For custom entity
     * detection, this field contains one of the entity types that you specified when
     * you trained your custom model.</p>
     */
    inline Entity& WithType(const EntityType& value) { SetType(value); return *this;}

    /**
     * <p>The entity type. For entity detection using the built-in model, this field
     * contains one of the standard entity types listed below.</p> <p>For custom entity
     * detection, this field contains one of the entity types that you specified when
     * you trained your custom model.</p>
     */
    inline Entity& WithType(EntityType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The text of the entity.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text of the entity.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text of the entity.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text of the entity.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text of the entity.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text of the entity.</p>
     */
    inline Entity& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text of the entity.</p>
     */
    inline Entity& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text of the entity.</p>
     */
    inline Entity& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The zero-based offset from the beginning of the source text to the first
     * character in the entity.</p> <p>This field is empty for non-text input.</p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }

    /**
     * <p>The zero-based offset from the beginning of the source text to the first
     * character in the entity.</p> <p>This field is empty for non-text input.</p>
     */
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }

    /**
     * <p>The zero-based offset from the beginning of the source text to the first
     * character in the entity.</p> <p>This field is empty for non-text input.</p>
     */
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }

    /**
     * <p>The zero-based offset from the beginning of the source text to the first
     * character in the entity.</p> <p>This field is empty for non-text input.</p>
     */
    inline Entity& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


    /**
     * <p>The zero-based offset from the beginning of the source text to the last
     * character in the entity.</p> <p>This field is empty for non-text input.</p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }

    /**
     * <p>The zero-based offset from the beginning of the source text to the last
     * character in the entity.</p> <p>This field is empty for non-text input.</p>
     */
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }

    /**
     * <p>The zero-based offset from the beginning of the source text to the last
     * character in the entity.</p> <p>This field is empty for non-text input.</p>
     */
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }

    /**
     * <p>The zero-based offset from the beginning of the source text to the last
     * character in the entity.</p> <p>This field is empty for non-text input.</p>
     */
    inline Entity& WithEndOffset(int value) { SetEndOffset(value); return *this;}


    /**
     * <p>A reference to each block for this entity. This field is empty for plain-text
     * input.</p>
     */
    inline const Aws::Vector<BlockReference>& GetBlockReferences() const{ return m_blockReferences; }

    /**
     * <p>A reference to each block for this entity. This field is empty for plain-text
     * input.</p>
     */
    inline bool BlockReferencesHasBeenSet() const { return m_blockReferencesHasBeenSet; }

    /**
     * <p>A reference to each block for this entity. This field is empty for plain-text
     * input.</p>
     */
    inline void SetBlockReferences(const Aws::Vector<BlockReference>& value) { m_blockReferencesHasBeenSet = true; m_blockReferences = value; }

    /**
     * <p>A reference to each block for this entity. This field is empty for plain-text
     * input.</p>
     */
    inline void SetBlockReferences(Aws::Vector<BlockReference>&& value) { m_blockReferencesHasBeenSet = true; m_blockReferences = std::move(value); }

    /**
     * <p>A reference to each block for this entity. This field is empty for plain-text
     * input.</p>
     */
    inline Entity& WithBlockReferences(const Aws::Vector<BlockReference>& value) { SetBlockReferences(value); return *this;}

    /**
     * <p>A reference to each block for this entity. This field is empty for plain-text
     * input.</p>
     */
    inline Entity& WithBlockReferences(Aws::Vector<BlockReference>&& value) { SetBlockReferences(std::move(value)); return *this;}

    /**
     * <p>A reference to each block for this entity. This field is empty for plain-text
     * input.</p>
     */
    inline Entity& AddBlockReferences(const BlockReference& value) { m_blockReferencesHasBeenSet = true; m_blockReferences.push_back(value); return *this; }

    /**
     * <p>A reference to each block for this entity. This field is empty for plain-text
     * input.</p>
     */
    inline Entity& AddBlockReferences(BlockReference&& value) { m_blockReferencesHasBeenSet = true; m_blockReferences.push_back(std::move(value)); return *this; }

  private:

    double m_score;
    bool m_scoreHasBeenSet = false;

    EntityType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet = false;

    int m_endOffset;
    bool m_endOffsetHasBeenSet = false;

    Aws::Vector<BlockReference> m_blockReferences;
    bool m_blockReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

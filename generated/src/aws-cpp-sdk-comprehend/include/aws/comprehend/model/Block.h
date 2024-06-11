/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/BlockType.h>
#include <aws/comprehend/model/Geometry.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/RelationshipsListItem.h>
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
   * <p>Information about each word or line of text in the input document.</p> <p>For
   * additional information, see <a
   * href="https://docs.aws.amazon.com/textract/latest/dg/API_Block.html">Block</a>
   * in the Amazon Textract API reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/Block">AWS
   * API Reference</a></p>
   */
  class Block
  {
  public:
    AWS_COMPREHEND_API Block();
    AWS_COMPREHEND_API Block(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Block& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the block.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Block& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Block& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Block& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block represents a line of text or one word of text.</p> <ul> <li>
     * <p>WORD - A word that's detected on a document page. A word is one or more ISO
     * basic Latin script characters that aren't separated by spaces.</p> </li> <li>
     * <p>LINE - A string of tab-delimited, contiguous words that are detected on a
     * document page</p> </li> </ul>
     */
    inline const BlockType& GetBlockType() const{ return m_blockType; }
    inline bool BlockTypeHasBeenSet() const { return m_blockTypeHasBeenSet; }
    inline void SetBlockType(const BlockType& value) { m_blockTypeHasBeenSet = true; m_blockType = value; }
    inline void SetBlockType(BlockType&& value) { m_blockTypeHasBeenSet = true; m_blockType = std::move(value); }
    inline Block& WithBlockType(const BlockType& value) { SetBlockType(value); return *this;}
    inline Block& WithBlockType(BlockType&& value) { SetBlockType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word or line of text extracted from the block.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline Block& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline Block& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline Block& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Page number where the block appears.</p>
     */
    inline int GetPage() const{ return m_page; }
    inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }
    inline void SetPage(int value) { m_pageHasBeenSet = true; m_page = value; }
    inline Block& WithPage(int value) { SetPage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Co-ordinates of the rectangle or polygon that contains the text.</p>
     */
    inline const Geometry& GetGeometry() const{ return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    inline void SetGeometry(const Geometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }
    inline void SetGeometry(Geometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }
    inline Block& WithGeometry(const Geometry& value) { SetGeometry(value); return *this;}
    inline Block& WithGeometry(Geometry&& value) { SetGeometry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of child blocks of the current block. For example, a LINE object has
     * child blocks for each WORD block that's part of the line of text. </p>
     */
    inline const Aws::Vector<RelationshipsListItem>& GetRelationships() const{ return m_relationships; }
    inline bool RelationshipsHasBeenSet() const { return m_relationshipsHasBeenSet; }
    inline void SetRelationships(const Aws::Vector<RelationshipsListItem>& value) { m_relationshipsHasBeenSet = true; m_relationships = value; }
    inline void SetRelationships(Aws::Vector<RelationshipsListItem>&& value) { m_relationshipsHasBeenSet = true; m_relationships = std::move(value); }
    inline Block& WithRelationships(const Aws::Vector<RelationshipsListItem>& value) { SetRelationships(value); return *this;}
    inline Block& WithRelationships(Aws::Vector<RelationshipsListItem>&& value) { SetRelationships(std::move(value)); return *this;}
    inline Block& AddRelationships(const RelationshipsListItem& value) { m_relationshipsHasBeenSet = true; m_relationships.push_back(value); return *this; }
    inline Block& AddRelationships(RelationshipsListItem&& value) { m_relationshipsHasBeenSet = true; m_relationships.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    BlockType m_blockType;
    bool m_blockTypeHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    int m_page;
    bool m_pageHasBeenSet = false;

    Geometry m_geometry;
    bool m_geometryHasBeenSet = false;

    Aws::Vector<RelationshipsListItem> m_relationships;
    bool m_relationshipsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

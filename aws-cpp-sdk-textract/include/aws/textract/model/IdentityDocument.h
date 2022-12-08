/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/IdentityDocumentField.h>
#include <aws/textract/model/Block.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>The structure that lists each document processed in an AnalyzeID
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/IdentityDocument">AWS
   * API Reference</a></p>
   */
  class IdentityDocument
  {
  public:
    AWS_TEXTRACT_API IdentityDocument();
    AWS_TEXTRACT_API IdentityDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API IdentityDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Denotes the placement of a document in the IdentityDocument list. The first
     * document is marked 1, the second 2 and so on.</p>
     */
    inline int GetDocumentIndex() const{ return m_documentIndex; }

    /**
     * <p>Denotes the placement of a document in the IdentityDocument list. The first
     * document is marked 1, the second 2 and so on.</p>
     */
    inline bool DocumentIndexHasBeenSet() const { return m_documentIndexHasBeenSet; }

    /**
     * <p>Denotes the placement of a document in the IdentityDocument list. The first
     * document is marked 1, the second 2 and so on.</p>
     */
    inline void SetDocumentIndex(int value) { m_documentIndexHasBeenSet = true; m_documentIndex = value; }

    /**
     * <p>Denotes the placement of a document in the IdentityDocument list. The first
     * document is marked 1, the second 2 and so on.</p>
     */
    inline IdentityDocument& WithDocumentIndex(int value) { SetDocumentIndex(value); return *this;}


    /**
     * <p>The structure used to record information extracted from identity documents.
     * Contains both normalized field and value of the extracted text.</p>
     */
    inline const Aws::Vector<IdentityDocumentField>& GetIdentityDocumentFields() const{ return m_identityDocumentFields; }

    /**
     * <p>The structure used to record information extracted from identity documents.
     * Contains both normalized field and value of the extracted text.</p>
     */
    inline bool IdentityDocumentFieldsHasBeenSet() const { return m_identityDocumentFieldsHasBeenSet; }

    /**
     * <p>The structure used to record information extracted from identity documents.
     * Contains both normalized field and value of the extracted text.</p>
     */
    inline void SetIdentityDocumentFields(const Aws::Vector<IdentityDocumentField>& value) { m_identityDocumentFieldsHasBeenSet = true; m_identityDocumentFields = value; }

    /**
     * <p>The structure used to record information extracted from identity documents.
     * Contains both normalized field and value of the extracted text.</p>
     */
    inline void SetIdentityDocumentFields(Aws::Vector<IdentityDocumentField>&& value) { m_identityDocumentFieldsHasBeenSet = true; m_identityDocumentFields = std::move(value); }

    /**
     * <p>The structure used to record information extracted from identity documents.
     * Contains both normalized field and value of the extracted text.</p>
     */
    inline IdentityDocument& WithIdentityDocumentFields(const Aws::Vector<IdentityDocumentField>& value) { SetIdentityDocumentFields(value); return *this;}

    /**
     * <p>The structure used to record information extracted from identity documents.
     * Contains both normalized field and value of the extracted text.</p>
     */
    inline IdentityDocument& WithIdentityDocumentFields(Aws::Vector<IdentityDocumentField>&& value) { SetIdentityDocumentFields(std::move(value)); return *this;}

    /**
     * <p>The structure used to record information extracted from identity documents.
     * Contains both normalized field and value of the extracted text.</p>
     */
    inline IdentityDocument& AddIdentityDocumentFields(const IdentityDocumentField& value) { m_identityDocumentFieldsHasBeenSet = true; m_identityDocumentFields.push_back(value); return *this; }

    /**
     * <p>The structure used to record information extracted from identity documents.
     * Contains both normalized field and value of the extracted text.</p>
     */
    inline IdentityDocument& AddIdentityDocumentFields(IdentityDocumentField&& value) { m_identityDocumentFieldsHasBeenSet = true; m_identityDocumentFields.push_back(std::move(value)); return *this; }


    /**
     * <p>Individual word recognition, as returned by document detection.</p>
     */
    inline const Aws::Vector<Block>& GetBlocks() const{ return m_blocks; }

    /**
     * <p>Individual word recognition, as returned by document detection.</p>
     */
    inline bool BlocksHasBeenSet() const { return m_blocksHasBeenSet; }

    /**
     * <p>Individual word recognition, as returned by document detection.</p>
     */
    inline void SetBlocks(const Aws::Vector<Block>& value) { m_blocksHasBeenSet = true; m_blocks = value; }

    /**
     * <p>Individual word recognition, as returned by document detection.</p>
     */
    inline void SetBlocks(Aws::Vector<Block>&& value) { m_blocksHasBeenSet = true; m_blocks = std::move(value); }

    /**
     * <p>Individual word recognition, as returned by document detection.</p>
     */
    inline IdentityDocument& WithBlocks(const Aws::Vector<Block>& value) { SetBlocks(value); return *this;}

    /**
     * <p>Individual word recognition, as returned by document detection.</p>
     */
    inline IdentityDocument& WithBlocks(Aws::Vector<Block>&& value) { SetBlocks(std::move(value)); return *this;}

    /**
     * <p>Individual word recognition, as returned by document detection.</p>
     */
    inline IdentityDocument& AddBlocks(const Block& value) { m_blocksHasBeenSet = true; m_blocks.push_back(value); return *this; }

    /**
     * <p>Individual word recognition, as returned by document detection.</p>
     */
    inline IdentityDocument& AddBlocks(Block&& value) { m_blocksHasBeenSet = true; m_blocks.push_back(std::move(value)); return *this; }

  private:

    int m_documentIndex;
    bool m_documentIndexHasBeenSet = false;

    Aws::Vector<IdentityDocumentField> m_identityDocumentFields;
    bool m_identityDocumentFieldsHasBeenSet = false;

    Aws::Vector<Block> m_blocks;
    bool m_blocksHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws

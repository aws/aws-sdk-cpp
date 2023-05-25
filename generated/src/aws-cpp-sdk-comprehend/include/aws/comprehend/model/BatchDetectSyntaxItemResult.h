/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/SyntaxToken.h>
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
   * <p>The result of calling the operation. The operation returns one object that is
   * successfully processed by the operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectSyntaxItemResult">AWS
   * API Reference</a></p>
   */
  class BatchDetectSyntaxItemResult
  {
  public:
    AWS_COMPREHEND_API BatchDetectSyntaxItemResult();
    AWS_COMPREHEND_API BatchDetectSyntaxItemResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API BatchDetectSyntaxItemResult& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline BatchDetectSyntaxItemResult& WithIndex(int value) { SetIndex(value); return *this;}


    /**
     * <p>The syntax tokens for the words in the document, one token for each word.</p>
     */
    inline const Aws::Vector<SyntaxToken>& GetSyntaxTokens() const{ return m_syntaxTokens; }

    /**
     * <p>The syntax tokens for the words in the document, one token for each word.</p>
     */
    inline bool SyntaxTokensHasBeenSet() const { return m_syntaxTokensHasBeenSet; }

    /**
     * <p>The syntax tokens for the words in the document, one token for each word.</p>
     */
    inline void SetSyntaxTokens(const Aws::Vector<SyntaxToken>& value) { m_syntaxTokensHasBeenSet = true; m_syntaxTokens = value; }

    /**
     * <p>The syntax tokens for the words in the document, one token for each word.</p>
     */
    inline void SetSyntaxTokens(Aws::Vector<SyntaxToken>&& value) { m_syntaxTokensHasBeenSet = true; m_syntaxTokens = std::move(value); }

    /**
     * <p>The syntax tokens for the words in the document, one token for each word.</p>
     */
    inline BatchDetectSyntaxItemResult& WithSyntaxTokens(const Aws::Vector<SyntaxToken>& value) { SetSyntaxTokens(value); return *this;}

    /**
     * <p>The syntax tokens for the words in the document, one token for each word.</p>
     */
    inline BatchDetectSyntaxItemResult& WithSyntaxTokens(Aws::Vector<SyntaxToken>&& value) { SetSyntaxTokens(std::move(value)); return *this;}

    /**
     * <p>The syntax tokens for the words in the document, one token for each word.</p>
     */
    inline BatchDetectSyntaxItemResult& AddSyntaxTokens(const SyntaxToken& value) { m_syntaxTokensHasBeenSet = true; m_syntaxTokens.push_back(value); return *this; }

    /**
     * <p>The syntax tokens for the words in the document, one token for each word.</p>
     */
    inline BatchDetectSyntaxItemResult& AddSyntaxTokens(SyntaxToken&& value) { m_syntaxTokensHasBeenSet = true; m_syntaxTokens.push_back(std::move(value)); return *this; }

  private:

    int m_index;
    bool m_indexHasBeenSet = false;

    Aws::Vector<SyntaxToken> m_syntaxTokens;
    bool m_syntaxTokensHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

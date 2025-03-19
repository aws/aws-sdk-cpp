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
    AWS_COMPREHEND_API BatchDetectSyntaxItemResult() = default;
    AWS_COMPREHEND_API BatchDetectSyntaxItemResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API BatchDetectSyntaxItemResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline int GetIndex() const { return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }
    inline BatchDetectSyntaxItemResult& WithIndex(int value) { SetIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The syntax tokens for the words in the document, one token for each word.</p>
     */
    inline const Aws::Vector<SyntaxToken>& GetSyntaxTokens() const { return m_syntaxTokens; }
    inline bool SyntaxTokensHasBeenSet() const { return m_syntaxTokensHasBeenSet; }
    template<typename SyntaxTokensT = Aws::Vector<SyntaxToken>>
    void SetSyntaxTokens(SyntaxTokensT&& value) { m_syntaxTokensHasBeenSet = true; m_syntaxTokens = std::forward<SyntaxTokensT>(value); }
    template<typename SyntaxTokensT = Aws::Vector<SyntaxToken>>
    BatchDetectSyntaxItemResult& WithSyntaxTokens(SyntaxTokensT&& value) { SetSyntaxTokens(std::forward<SyntaxTokensT>(value)); return *this;}
    template<typename SyntaxTokensT = SyntaxToken>
    BatchDetectSyntaxItemResult& AddSyntaxTokens(SyntaxTokensT&& value) { m_syntaxTokensHasBeenSet = true; m_syntaxTokens.emplace_back(std::forward<SyntaxTokensT>(value)); return *this; }
    ///@}
  private:

    int m_index{0};
    bool m_indexHasBeenSet = false;

    Aws::Vector<SyntaxToken> m_syntaxTokens;
    bool m_syntaxTokensHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/SyntaxToken.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Comprehend
{
namespace Model
{
  class DetectSyntaxResult
  {
  public:
    AWS_COMPREHEND_API DetectSyntaxResult() = default;
    AWS_COMPREHEND_API DetectSyntaxResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DetectSyntaxResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline const Aws::Vector<SyntaxToken>& GetSyntaxTokens() const { return m_syntaxTokens; }
    template<typename SyntaxTokensT = Aws::Vector<SyntaxToken>>
    void SetSyntaxTokens(SyntaxTokensT&& value) { m_syntaxTokensHasBeenSet = true; m_syntaxTokens = std::forward<SyntaxTokensT>(value); }
    template<typename SyntaxTokensT = Aws::Vector<SyntaxToken>>
    DetectSyntaxResult& WithSyntaxTokens(SyntaxTokensT&& value) { SetSyntaxTokens(std::forward<SyntaxTokensT>(value)); return *this;}
    template<typename SyntaxTokensT = SyntaxToken>
    DetectSyntaxResult& AddSyntaxTokens(SyntaxTokensT&& value) { m_syntaxTokensHasBeenSet = true; m_syntaxTokens.emplace_back(std::forward<SyntaxTokensT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectSyntaxResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SyntaxToken> m_syntaxTokens;
    bool m_syntaxTokensHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

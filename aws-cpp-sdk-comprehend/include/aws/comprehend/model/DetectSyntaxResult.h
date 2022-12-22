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
    AWS_COMPREHEND_API DetectSyntaxResult();
    AWS_COMPREHEND_API DetectSyntaxResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DetectSyntaxResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline const Aws::Vector<SyntaxToken>& GetSyntaxTokens() const{ return m_syntaxTokens; }

    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline void SetSyntaxTokens(const Aws::Vector<SyntaxToken>& value) { m_syntaxTokens = value; }

    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline void SetSyntaxTokens(Aws::Vector<SyntaxToken>&& value) { m_syntaxTokens = std::move(value); }

    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline DetectSyntaxResult& WithSyntaxTokens(const Aws::Vector<SyntaxToken>& value) { SetSyntaxTokens(value); return *this;}

    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline DetectSyntaxResult& WithSyntaxTokens(Aws::Vector<SyntaxToken>&& value) { SetSyntaxTokens(std::move(value)); return *this;}

    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline DetectSyntaxResult& AddSyntaxTokens(const SyntaxToken& value) { m_syntaxTokens.push_back(value); return *this; }

    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/how-syntax.html">Syntax</a>
     * in the Comprehend Developer Guide. </p>
     */
    inline DetectSyntaxResult& AddSyntaxTokens(SyntaxToken&& value) { m_syntaxTokens.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SyntaxToken> m_syntaxTokens;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

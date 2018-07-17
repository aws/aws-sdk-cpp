/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COMPREHEND_API DetectSyntaxResult
  {
  public:
    DetectSyntaxResult();
    DetectSyntaxResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetectSyntaxResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a>how-syntax</a>.</p>
     */
    inline const Aws::Vector<SyntaxToken>& GetSyntaxTokens() const{ return m_syntaxTokens; }

    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a>how-syntax</a>.</p>
     */
    inline void SetSyntaxTokens(const Aws::Vector<SyntaxToken>& value) { m_syntaxTokens = value; }

    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a>how-syntax</a>.</p>
     */
    inline void SetSyntaxTokens(Aws::Vector<SyntaxToken>&& value) { m_syntaxTokens = std::move(value); }

    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a>how-syntax</a>.</p>
     */
    inline DetectSyntaxResult& WithSyntaxTokens(const Aws::Vector<SyntaxToken>& value) { SetSyntaxTokens(value); return *this;}

    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a>how-syntax</a>.</p>
     */
    inline DetectSyntaxResult& WithSyntaxTokens(Aws::Vector<SyntaxToken>&& value) { SetSyntaxTokens(std::move(value)); return *this;}

    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a>how-syntax</a>.</p>
     */
    inline DetectSyntaxResult& AddSyntaxTokens(const SyntaxToken& value) { m_syntaxTokens.push_back(value); return *this; }

    /**
     * <p>A collection of syntax tokens describing the text. For each token, the
     * response provides the text, the token type, where the text begins and ends, and
     * the level of confidence that Amazon Comprehend has that the token is correct.
     * For a list of token types, see <a>how-syntax</a>.</p>
     */
    inline DetectSyntaxResult& AddSyntaxTokens(SyntaxToken&& value) { m_syntaxTokens.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SyntaxToken> m_syntaxTokens;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

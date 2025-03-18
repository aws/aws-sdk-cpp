/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Glue
{
namespace Model
{
  class GetCustomEntityTypeResult
  {
  public:
    AWS_GLUE_API GetCustomEntityTypeResult() = default;
    AWS_GLUE_API GetCustomEntityTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetCustomEntityTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the custom pattern that you retrieved.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetCustomEntityTypeResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression string that is used for detecting sensitive data in a
     * custom pattern.</p>
     */
    inline const Aws::String& GetRegexString() const { return m_regexString; }
    template<typename RegexStringT = Aws::String>
    void SetRegexString(RegexStringT&& value) { m_regexStringHasBeenSet = true; m_regexString = std::forward<RegexStringT>(value); }
    template<typename RegexStringT = Aws::String>
    GetCustomEntityTypeResult& WithRegexString(RegexStringT&& value) { SetRegexString(std::forward<RegexStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of context words if specified when you created the custom pattern. If
     * none of these context words are found within the vicinity of the regular
     * expression the data will not be detected as sensitive data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContextWords() const { return m_contextWords; }
    template<typename ContextWordsT = Aws::Vector<Aws::String>>
    void SetContextWords(ContextWordsT&& value) { m_contextWordsHasBeenSet = true; m_contextWords = std::forward<ContextWordsT>(value); }
    template<typename ContextWordsT = Aws::Vector<Aws::String>>
    GetCustomEntityTypeResult& WithContextWords(ContextWordsT&& value) { SetContextWords(std::forward<ContextWordsT>(value)); return *this;}
    template<typename ContextWordsT = Aws::String>
    GetCustomEntityTypeResult& AddContextWords(ContextWordsT&& value) { m_contextWordsHasBeenSet = true; m_contextWords.emplace_back(std::forward<ContextWordsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCustomEntityTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_regexString;
    bool m_regexStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_contextWords;
    bool m_contextWordsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

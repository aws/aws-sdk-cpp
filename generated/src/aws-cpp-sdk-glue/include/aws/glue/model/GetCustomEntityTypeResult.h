﻿/**
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
    AWS_GLUE_API GetCustomEntityTypeResult();
    AWS_GLUE_API GetCustomEntityTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetCustomEntityTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the custom pattern that you retrieved.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetCustomEntityTypeResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetCustomEntityTypeResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetCustomEntityTypeResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression string that is used for detecting sensitive data in a
     * custom pattern.</p>
     */
    inline const Aws::String& GetRegexString() const{ return m_regexString; }
    inline void SetRegexString(const Aws::String& value) { m_regexString = value; }
    inline void SetRegexString(Aws::String&& value) { m_regexString = std::move(value); }
    inline void SetRegexString(const char* value) { m_regexString.assign(value); }
    inline GetCustomEntityTypeResult& WithRegexString(const Aws::String& value) { SetRegexString(value); return *this;}
    inline GetCustomEntityTypeResult& WithRegexString(Aws::String&& value) { SetRegexString(std::move(value)); return *this;}
    inline GetCustomEntityTypeResult& WithRegexString(const char* value) { SetRegexString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of context words if specified when you created the custom pattern. If
     * none of these context words are found within the vicinity of the regular
     * expression the data will not be detected as sensitive data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContextWords() const{ return m_contextWords; }
    inline void SetContextWords(const Aws::Vector<Aws::String>& value) { m_contextWords = value; }
    inline void SetContextWords(Aws::Vector<Aws::String>&& value) { m_contextWords = std::move(value); }
    inline GetCustomEntityTypeResult& WithContextWords(const Aws::Vector<Aws::String>& value) { SetContextWords(value); return *this;}
    inline GetCustomEntityTypeResult& WithContextWords(Aws::Vector<Aws::String>&& value) { SetContextWords(std::move(value)); return *this;}
    inline GetCustomEntityTypeResult& AddContextWords(const Aws::String& value) { m_contextWords.push_back(value); return *this; }
    inline GetCustomEntityTypeResult& AddContextWords(Aws::String&& value) { m_contextWords.push_back(std::move(value)); return *this; }
    inline GetCustomEntityTypeResult& AddContextWords(const char* value) { m_contextWords.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCustomEntityTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCustomEntityTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCustomEntityTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_regexString;

    Aws::Vector<Aws::String> m_contextWords;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

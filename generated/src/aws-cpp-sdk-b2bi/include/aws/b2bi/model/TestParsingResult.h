/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace B2BI
{
namespace Model
{
  class TestParsingResult
  {
  public:
    AWS_B2BI_API TestParsingResult() = default;
    AWS_B2BI_API TestParsingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API TestParsingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the contents of the input file being tested, parsed according to the
     * specified EDI (electronic data interchange) type.</p>
     */
    inline const Aws::String& GetParsedFileContent() const { return m_parsedFileContent; }
    template<typename ParsedFileContentT = Aws::String>
    void SetParsedFileContent(ParsedFileContentT&& value) { m_parsedFileContentHasBeenSet = true; m_parsedFileContent = std::forward<ParsedFileContentT>(value); }
    template<typename ParsedFileContentT = Aws::String>
    TestParsingResult& WithParsedFileContent(ParsedFileContentT&& value) { SetParsedFileContent(std::forward<ParsedFileContentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestParsingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parsedFileContent;
    bool m_parsedFileContentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws

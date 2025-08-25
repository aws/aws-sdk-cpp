/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
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
    /**
     * <p>Returns an array of parsed file contents when the input file is split
     * according to the specified split options. Each element in the array represents a
     * separate split file's parsed content.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParsedSplitFileContents() const { return m_parsedSplitFileContents; }
    template<typename ParsedSplitFileContentsT = Aws::Vector<Aws::String>>
    void SetParsedSplitFileContents(ParsedSplitFileContentsT&& value) { m_parsedSplitFileContentsHasBeenSet = true; m_parsedSplitFileContents = std::forward<ParsedSplitFileContentsT>(value); }
    template<typename ParsedSplitFileContentsT = Aws::Vector<Aws::String>>
    TestParsingResult& WithParsedSplitFileContents(ParsedSplitFileContentsT&& value) { SetParsedSplitFileContents(std::forward<ParsedSplitFileContentsT>(value)); return *this;}
    template<typename ParsedSplitFileContentsT = Aws::String>
    TestParsingResult& AddParsedSplitFileContents(ParsedSplitFileContentsT&& value) { m_parsedSplitFileContentsHasBeenSet = true; m_parsedSplitFileContents.emplace_back(std::forward<ParsedSplitFileContentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns an array of validation messages generated during EDI validation.
     * These messages provide detailed information about validation errors, warnings,
     * or confirmations based on the configured X12 validation rules such as element
     * length constraints, code list validations, and element requirement checks. This
     * field is populated when the <code>TestParsing</code> API validates EDI
     * documents.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidationMessages() const { return m_validationMessages; }
    template<typename ValidationMessagesT = Aws::Vector<Aws::String>>
    void SetValidationMessages(ValidationMessagesT&& value) { m_validationMessagesHasBeenSet = true; m_validationMessages = std::forward<ValidationMessagesT>(value); }
    template<typename ValidationMessagesT = Aws::Vector<Aws::String>>
    TestParsingResult& WithValidationMessages(ValidationMessagesT&& value) { SetValidationMessages(std::forward<ValidationMessagesT>(value)); return *this;}
    template<typename ValidationMessagesT = Aws::String>
    TestParsingResult& AddValidationMessages(ValidationMessagesT&& value) { m_validationMessagesHasBeenSet = true; m_validationMessages.emplace_back(std::forward<ValidationMessagesT>(value)); return *this; }
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

    Aws::Vector<Aws::String> m_parsedSplitFileContents;
    bool m_parsedSplitFileContentsHasBeenSet = false;

    Aws::Vector<Aws::String> m_validationMessages;
    bool m_validationMessagesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws

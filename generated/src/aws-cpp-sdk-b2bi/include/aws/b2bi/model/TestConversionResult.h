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
  class TestConversionResult
  {
  public:
    AWS_B2BI_API TestConversionResult() = default;
    AWS_B2BI_API TestConversionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API TestConversionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the converted file content.</p>
     */
    inline const Aws::String& GetConvertedFileContent() const { return m_convertedFileContent; }
    template<typename ConvertedFileContentT = Aws::String>
    void SetConvertedFileContent(ConvertedFileContentT&& value) { m_convertedFileContentHasBeenSet = true; m_convertedFileContent = std::forward<ConvertedFileContentT>(value); }
    template<typename ConvertedFileContentT = Aws::String>
    TestConversionResult& WithConvertedFileContent(ConvertedFileContentT&& value) { SetConvertedFileContent(std::forward<ConvertedFileContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an array of validation messages that Amazon Web Services B2B Data
     * Interchange generates during the conversion process. These messages include both
     * standard EDI validation results and custom validation messages when custom
     * validation rules are configured. Custom validation messages provide detailed
     * feedback on element length constraints, code list validations, and element
     * requirement checks applied during the outbound EDI generation process.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidationMessages() const { return m_validationMessages; }
    template<typename ValidationMessagesT = Aws::Vector<Aws::String>>
    void SetValidationMessages(ValidationMessagesT&& value) { m_validationMessagesHasBeenSet = true; m_validationMessages = std::forward<ValidationMessagesT>(value); }
    template<typename ValidationMessagesT = Aws::Vector<Aws::String>>
    TestConversionResult& WithValidationMessages(ValidationMessagesT&& value) { SetValidationMessages(std::forward<ValidationMessagesT>(value)); return *this;}
    template<typename ValidationMessagesT = Aws::String>
    TestConversionResult& AddValidationMessages(ValidationMessagesT&& value) { m_validationMessagesHasBeenSet = true; m_validationMessages.emplace_back(std::forward<ValidationMessagesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestConversionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_convertedFileContent;
    bool m_convertedFileContentHasBeenSet = false;

    Aws::Vector<Aws::String> m_validationMessages;
    bool m_validationMessagesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws

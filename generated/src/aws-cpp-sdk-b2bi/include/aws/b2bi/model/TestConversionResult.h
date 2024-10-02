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
    AWS_B2BI_API TestConversionResult();
    AWS_B2BI_API TestConversionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API TestConversionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the converted file content.</p>
     */
    inline const Aws::String& GetConvertedFileContent() const{ return m_convertedFileContent; }
    inline void SetConvertedFileContent(const Aws::String& value) { m_convertedFileContent = value; }
    inline void SetConvertedFileContent(Aws::String&& value) { m_convertedFileContent = std::move(value); }
    inline void SetConvertedFileContent(const char* value) { m_convertedFileContent.assign(value); }
    inline TestConversionResult& WithConvertedFileContent(const Aws::String& value) { SetConvertedFileContent(value); return *this;}
    inline TestConversionResult& WithConvertedFileContent(Aws::String&& value) { SetConvertedFileContent(std::move(value)); return *this;}
    inline TestConversionResult& WithConvertedFileContent(const char* value) { SetConvertedFileContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an array of strings, each containing a message that Amazon Web
     * Services B2B Data Interchange generates during the conversion.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidationMessages() const{ return m_validationMessages; }
    inline void SetValidationMessages(const Aws::Vector<Aws::String>& value) { m_validationMessages = value; }
    inline void SetValidationMessages(Aws::Vector<Aws::String>&& value) { m_validationMessages = std::move(value); }
    inline TestConversionResult& WithValidationMessages(const Aws::Vector<Aws::String>& value) { SetValidationMessages(value); return *this;}
    inline TestConversionResult& WithValidationMessages(Aws::Vector<Aws::String>&& value) { SetValidationMessages(std::move(value)); return *this;}
    inline TestConversionResult& AddValidationMessages(const Aws::String& value) { m_validationMessages.push_back(value); return *this; }
    inline TestConversionResult& AddValidationMessages(Aws::String&& value) { m_validationMessages.push_back(std::move(value)); return *this; }
    inline TestConversionResult& AddValidationMessages(const char* value) { m_validationMessages.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TestConversionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TestConversionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TestConversionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_convertedFileContent;

    Aws::Vector<Aws::String> m_validationMessages;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws

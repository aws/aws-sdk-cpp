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
    AWS_B2BI_API TestParsingResult();
    AWS_B2BI_API TestParsingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API TestParsingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the contents of the input file being tested, parsed according to the
     * specified EDI (electronic data interchange) type.</p>
     */
    inline const Aws::String& GetParsedFileContent() const{ return m_parsedFileContent; }

    /**
     * <p>Returns the contents of the input file being tested, parsed according to the
     * specified EDI (electronic data interchange) type.</p>
     */
    inline void SetParsedFileContent(const Aws::String& value) { m_parsedFileContent = value; }

    /**
     * <p>Returns the contents of the input file being tested, parsed according to the
     * specified EDI (electronic data interchange) type.</p>
     */
    inline void SetParsedFileContent(Aws::String&& value) { m_parsedFileContent = std::move(value); }

    /**
     * <p>Returns the contents of the input file being tested, parsed according to the
     * specified EDI (electronic data interchange) type.</p>
     */
    inline void SetParsedFileContent(const char* value) { m_parsedFileContent.assign(value); }

    /**
     * <p>Returns the contents of the input file being tested, parsed according to the
     * specified EDI (electronic data interchange) type.</p>
     */
    inline TestParsingResult& WithParsedFileContent(const Aws::String& value) { SetParsedFileContent(value); return *this;}

    /**
     * <p>Returns the contents of the input file being tested, parsed according to the
     * specified EDI (electronic data interchange) type.</p>
     */
    inline TestParsingResult& WithParsedFileContent(Aws::String&& value) { SetParsedFileContent(std::move(value)); return *this;}

    /**
     * <p>Returns the contents of the input file being tested, parsed according to the
     * specified EDI (electronic data interchange) type.</p>
     */
    inline TestParsingResult& WithParsedFileContent(const char* value) { SetParsedFileContent(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline TestParsingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline TestParsingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline TestParsingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_parsedFileContent;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws

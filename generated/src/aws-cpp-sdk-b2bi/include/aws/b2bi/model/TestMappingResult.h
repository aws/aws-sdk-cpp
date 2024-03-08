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
  class TestMappingResult
  {
  public:
    AWS_B2BI_API TestMappingResult();
    AWS_B2BI_API TestMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API TestMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a string for the mapping that can be used to identify the mapping.
     * Similar to a fingerprint</p>
     */
    inline const Aws::String& GetMappedFileContent() const{ return m_mappedFileContent; }

    /**
     * <p>Returns a string for the mapping that can be used to identify the mapping.
     * Similar to a fingerprint</p>
     */
    inline void SetMappedFileContent(const Aws::String& value) { m_mappedFileContent = value; }

    /**
     * <p>Returns a string for the mapping that can be used to identify the mapping.
     * Similar to a fingerprint</p>
     */
    inline void SetMappedFileContent(Aws::String&& value) { m_mappedFileContent = std::move(value); }

    /**
     * <p>Returns a string for the mapping that can be used to identify the mapping.
     * Similar to a fingerprint</p>
     */
    inline void SetMappedFileContent(const char* value) { m_mappedFileContent.assign(value); }

    /**
     * <p>Returns a string for the mapping that can be used to identify the mapping.
     * Similar to a fingerprint</p>
     */
    inline TestMappingResult& WithMappedFileContent(const Aws::String& value) { SetMappedFileContent(value); return *this;}

    /**
     * <p>Returns a string for the mapping that can be used to identify the mapping.
     * Similar to a fingerprint</p>
     */
    inline TestMappingResult& WithMappedFileContent(Aws::String&& value) { SetMappedFileContent(std::move(value)); return *this;}

    /**
     * <p>Returns a string for the mapping that can be used to identify the mapping.
     * Similar to a fingerprint</p>
     */
    inline TestMappingResult& WithMappedFileContent(const char* value) { SetMappedFileContent(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline TestMappingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline TestMappingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline TestMappingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_mappedFileContent;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws

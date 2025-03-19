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
    AWS_B2BI_API TestMappingResult() = default;
    AWS_B2BI_API TestMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API TestMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a string for the mapping that can be used to identify the mapping.
     * Similar to a fingerprint</p>
     */
    inline const Aws::String& GetMappedFileContent() const { return m_mappedFileContent; }
    template<typename MappedFileContentT = Aws::String>
    void SetMappedFileContent(MappedFileContentT&& value) { m_mappedFileContentHasBeenSet = true; m_mappedFileContent = std::forward<MappedFileContentT>(value); }
    template<typename MappedFileContentT = Aws::String>
    TestMappingResult& WithMappedFileContent(MappedFileContentT&& value) { SetMappedFileContent(std::forward<MappedFileContentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestMappingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mappedFileContent;
    bool m_mappedFileContentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws

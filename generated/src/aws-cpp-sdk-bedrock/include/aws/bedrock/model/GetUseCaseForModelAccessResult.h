/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace Bedrock
{
namespace Model
{
  class GetUseCaseForModelAccessResult
  {
  public:
    AWS_BEDROCK_API GetUseCaseForModelAccessResult() = default;
    AWS_BEDROCK_API GetUseCaseForModelAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetUseCaseForModelAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Get customer profile Response.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetFormData() const { return m_formData; }
    template<typename FormDataT = Aws::Utils::ByteBuffer>
    void SetFormData(FormDataT&& value) { m_formDataHasBeenSet = true; m_formData = std::forward<FormDataT>(value); }
    template<typename FormDataT = Aws::Utils::ByteBuffer>
    GetUseCaseForModelAccessResult& WithFormData(FormDataT&& value) { SetFormData(std::forward<FormDataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUseCaseForModelAccessResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_formData{};
    bool m_formDataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

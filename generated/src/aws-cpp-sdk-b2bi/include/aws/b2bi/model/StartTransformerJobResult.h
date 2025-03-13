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
  class StartTransformerJobResult
  {
  public:
    AWS_B2BI_API StartTransformerJobResult() = default;
    AWS_B2BI_API StartTransformerJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API StartTransformerJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the unique, system-generated identifier for a transformer run.</p>
     */
    inline const Aws::String& GetTransformerJobId() const { return m_transformerJobId; }
    template<typename TransformerJobIdT = Aws::String>
    void SetTransformerJobId(TransformerJobIdT&& value) { m_transformerJobIdHasBeenSet = true; m_transformerJobId = std::forward<TransformerJobIdT>(value); }
    template<typename TransformerJobIdT = Aws::String>
    StartTransformerJobResult& WithTransformerJobId(TransformerJobIdT&& value) { SetTransformerJobId(std::forward<TransformerJobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartTransformerJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transformerJobId;
    bool m_transformerJobIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/FoundationModelDetails.h>
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
  class GetFoundationModelResult
  {
  public:
    AWS_BEDROCK_API GetFoundationModelResult() = default;
    AWS_BEDROCK_API GetFoundationModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetFoundationModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the foundation model.</p>
     */
    inline const FoundationModelDetails& GetModelDetails() const { return m_modelDetails; }
    template<typename ModelDetailsT = FoundationModelDetails>
    void SetModelDetails(ModelDetailsT&& value) { m_modelDetailsHasBeenSet = true; m_modelDetails = std::forward<ModelDetailsT>(value); }
    template<typename ModelDetailsT = FoundationModelDetails>
    GetFoundationModelResult& WithModelDetails(ModelDetailsT&& value) { SetModelDetails(std::forward<ModelDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFoundationModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FoundationModelDetails m_modelDetails;
    bool m_modelDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

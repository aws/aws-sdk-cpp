/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/CodeSigningConfig.h>
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
namespace Lambda
{
namespace Model
{
  class GetCodeSigningConfigResult
  {
  public:
    AWS_LAMBDA_API GetCodeSigningConfigResult() = default;
    AWS_LAMBDA_API GetCodeSigningConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API GetCodeSigningConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The code signing configuration</p>
     */
    inline const CodeSigningConfig& GetCodeSigningConfig() const { return m_codeSigningConfig; }
    template<typename CodeSigningConfigT = CodeSigningConfig>
    void SetCodeSigningConfig(CodeSigningConfigT&& value) { m_codeSigningConfigHasBeenSet = true; m_codeSigningConfig = std::forward<CodeSigningConfigT>(value); }
    template<typename CodeSigningConfigT = CodeSigningConfig>
    GetCodeSigningConfigResult& WithCodeSigningConfig(CodeSigningConfigT&& value) { SetCodeSigningConfig(std::forward<CodeSigningConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCodeSigningConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CodeSigningConfig m_codeSigningConfig;
    bool m_codeSigningConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws

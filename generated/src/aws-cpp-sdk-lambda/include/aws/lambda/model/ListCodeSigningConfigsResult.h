/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/CodeSigningConfig.h>
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
  class ListCodeSigningConfigsResult
  {
  public:
    AWS_LAMBDA_API ListCodeSigningConfigsResult() = default;
    AWS_LAMBDA_API ListCodeSigningConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API ListCodeSigningConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListCodeSigningConfigsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code signing configurations</p>
     */
    inline const Aws::Vector<CodeSigningConfig>& GetCodeSigningConfigs() const { return m_codeSigningConfigs; }
    template<typename CodeSigningConfigsT = Aws::Vector<CodeSigningConfig>>
    void SetCodeSigningConfigs(CodeSigningConfigsT&& value) { m_codeSigningConfigsHasBeenSet = true; m_codeSigningConfigs = std::forward<CodeSigningConfigsT>(value); }
    template<typename CodeSigningConfigsT = Aws::Vector<CodeSigningConfig>>
    ListCodeSigningConfigsResult& WithCodeSigningConfigs(CodeSigningConfigsT&& value) { SetCodeSigningConfigs(std::forward<CodeSigningConfigsT>(value)); return *this;}
    template<typename CodeSigningConfigsT = CodeSigningConfig>
    ListCodeSigningConfigsResult& AddCodeSigningConfigs(CodeSigningConfigsT&& value) { m_codeSigningConfigsHasBeenSet = true; m_codeSigningConfigs.emplace_back(std::forward<CodeSigningConfigsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCodeSigningConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<CodeSigningConfig> m_codeSigningConfigs;
    bool m_codeSigningConfigsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws

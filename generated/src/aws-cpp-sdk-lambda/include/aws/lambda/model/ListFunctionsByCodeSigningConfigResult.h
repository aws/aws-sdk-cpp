/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
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
namespace Lambda
{
namespace Model
{
  class ListFunctionsByCodeSigningConfigResult
  {
  public:
    AWS_LAMBDA_API ListFunctionsByCodeSigningConfigResult() = default;
    AWS_LAMBDA_API ListFunctionsByCodeSigningConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API ListFunctionsByCodeSigningConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListFunctionsByCodeSigningConfigResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function ARNs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFunctionArns() const { return m_functionArns; }
    template<typename FunctionArnsT = Aws::Vector<Aws::String>>
    void SetFunctionArns(FunctionArnsT&& value) { m_functionArnsHasBeenSet = true; m_functionArns = std::forward<FunctionArnsT>(value); }
    template<typename FunctionArnsT = Aws::Vector<Aws::String>>
    ListFunctionsByCodeSigningConfigResult& WithFunctionArns(FunctionArnsT&& value) { SetFunctionArns(std::forward<FunctionArnsT>(value)); return *this;}
    template<typename FunctionArnsT = Aws::String>
    ListFunctionsByCodeSigningConfigResult& AddFunctionArns(FunctionArnsT&& value) { m_functionArnsHasBeenSet = true; m_functionArns.emplace_back(std::forward<FunctionArnsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFunctionsByCodeSigningConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<Aws::String> m_functionArns;
    bool m_functionArnsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws

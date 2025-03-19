/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/FunctionEventInvokeConfig.h>
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
  class ListFunctionEventInvokeConfigsResult
  {
  public:
    AWS_LAMBDA_API ListFunctionEventInvokeConfigsResult() = default;
    AWS_LAMBDA_API ListFunctionEventInvokeConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API ListFunctionEventInvokeConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of configurations.</p>
     */
    inline const Aws::Vector<FunctionEventInvokeConfig>& GetFunctionEventInvokeConfigs() const { return m_functionEventInvokeConfigs; }
    template<typename FunctionEventInvokeConfigsT = Aws::Vector<FunctionEventInvokeConfig>>
    void SetFunctionEventInvokeConfigs(FunctionEventInvokeConfigsT&& value) { m_functionEventInvokeConfigsHasBeenSet = true; m_functionEventInvokeConfigs = std::forward<FunctionEventInvokeConfigsT>(value); }
    template<typename FunctionEventInvokeConfigsT = Aws::Vector<FunctionEventInvokeConfig>>
    ListFunctionEventInvokeConfigsResult& WithFunctionEventInvokeConfigs(FunctionEventInvokeConfigsT&& value) { SetFunctionEventInvokeConfigs(std::forward<FunctionEventInvokeConfigsT>(value)); return *this;}
    template<typename FunctionEventInvokeConfigsT = FunctionEventInvokeConfig>
    ListFunctionEventInvokeConfigsResult& AddFunctionEventInvokeConfigs(FunctionEventInvokeConfigsT&& value) { m_functionEventInvokeConfigsHasBeenSet = true; m_functionEventInvokeConfigs.emplace_back(std::forward<FunctionEventInvokeConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListFunctionEventInvokeConfigsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFunctionEventInvokeConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FunctionEventInvokeConfig> m_functionEventInvokeConfigs;
    bool m_functionEventInvokeConfigsHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws

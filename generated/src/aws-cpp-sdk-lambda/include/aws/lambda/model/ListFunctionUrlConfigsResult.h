/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/FunctionUrlConfig.h>
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
  class ListFunctionUrlConfigsResult
  {
  public:
    AWS_LAMBDA_API ListFunctionUrlConfigsResult() = default;
    AWS_LAMBDA_API ListFunctionUrlConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API ListFunctionUrlConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of function URL configurations.</p>
     */
    inline const Aws::Vector<FunctionUrlConfig>& GetFunctionUrlConfigs() const { return m_functionUrlConfigs; }
    template<typename FunctionUrlConfigsT = Aws::Vector<FunctionUrlConfig>>
    void SetFunctionUrlConfigs(FunctionUrlConfigsT&& value) { m_functionUrlConfigsHasBeenSet = true; m_functionUrlConfigs = std::forward<FunctionUrlConfigsT>(value); }
    template<typename FunctionUrlConfigsT = Aws::Vector<FunctionUrlConfig>>
    ListFunctionUrlConfigsResult& WithFunctionUrlConfigs(FunctionUrlConfigsT&& value) { SetFunctionUrlConfigs(std::forward<FunctionUrlConfigsT>(value)); return *this;}
    template<typename FunctionUrlConfigsT = FunctionUrlConfig>
    ListFunctionUrlConfigsResult& AddFunctionUrlConfigs(FunctionUrlConfigsT&& value) { m_functionUrlConfigsHasBeenSet = true; m_functionUrlConfigs.emplace_back(std::forward<FunctionUrlConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListFunctionUrlConfigsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFunctionUrlConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FunctionUrlConfig> m_functionUrlConfigs;
    bool m_functionUrlConfigsHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws

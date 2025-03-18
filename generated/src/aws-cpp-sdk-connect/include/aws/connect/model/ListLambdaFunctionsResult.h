/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Connect
{
namespace Model
{
  class ListLambdaFunctionsResult
  {
  public:
    AWS_CONNECT_API ListLambdaFunctionsResult() = default;
    AWS_CONNECT_API ListLambdaFunctionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListLambdaFunctionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Lambdafunction ARNs associated with the specified instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLambdaFunctions() const { return m_lambdaFunctions; }
    template<typename LambdaFunctionsT = Aws::Vector<Aws::String>>
    void SetLambdaFunctions(LambdaFunctionsT&& value) { m_lambdaFunctionsHasBeenSet = true; m_lambdaFunctions = std::forward<LambdaFunctionsT>(value); }
    template<typename LambdaFunctionsT = Aws::Vector<Aws::String>>
    ListLambdaFunctionsResult& WithLambdaFunctions(LambdaFunctionsT&& value) { SetLambdaFunctions(std::forward<LambdaFunctionsT>(value)); return *this;}
    template<typename LambdaFunctionsT = Aws::String>
    ListLambdaFunctionsResult& AddLambdaFunctions(LambdaFunctionsT&& value) { m_lambdaFunctionsHasBeenSet = true; m_lambdaFunctions.emplace_back(std::forward<LambdaFunctionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLambdaFunctionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLambdaFunctionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_lambdaFunctions;
    bool m_lambdaFunctionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

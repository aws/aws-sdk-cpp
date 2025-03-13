/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuthResult.h>
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
namespace IoT
{
namespace Model
{
  class TestAuthorizationResult
  {
  public:
    AWS_IOT_API TestAuthorizationResult() = default;
    AWS_IOT_API TestAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API TestAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The authentication results.</p>
     */
    inline const Aws::Vector<AuthResult>& GetAuthResults() const { return m_authResults; }
    template<typename AuthResultsT = Aws::Vector<AuthResult>>
    void SetAuthResults(AuthResultsT&& value) { m_authResultsHasBeenSet = true; m_authResults = std::forward<AuthResultsT>(value); }
    template<typename AuthResultsT = Aws::Vector<AuthResult>>
    TestAuthorizationResult& WithAuthResults(AuthResultsT&& value) { SetAuthResults(std::forward<AuthResultsT>(value)); return *this;}
    template<typename AuthResultsT = AuthResult>
    TestAuthorizationResult& AddAuthResults(AuthResultsT&& value) { m_authResultsHasBeenSet = true; m_authResults.emplace_back(std::forward<AuthResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestAuthorizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuthResult> m_authResults;
    bool m_authResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

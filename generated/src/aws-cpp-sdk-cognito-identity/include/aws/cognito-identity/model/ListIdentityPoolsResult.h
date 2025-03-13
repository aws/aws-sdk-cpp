/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-identity/model/IdentityPoolShortDescription.h>
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
namespace CognitoIdentity
{
namespace Model
{
  /**
   * <p>The result of a successful ListIdentityPools action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/ListIdentityPoolsResponse">AWS
   * API Reference</a></p>
   */
  class ListIdentityPoolsResult
  {
  public:
    AWS_COGNITOIDENTITY_API ListIdentityPoolsResult() = default;
    AWS_COGNITOIDENTITY_API ListIdentityPoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITY_API ListIdentityPoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identity pools returned by the ListIdentityPools action.</p>
     */
    inline const Aws::Vector<IdentityPoolShortDescription>& GetIdentityPools() const { return m_identityPools; }
    template<typename IdentityPoolsT = Aws::Vector<IdentityPoolShortDescription>>
    void SetIdentityPools(IdentityPoolsT&& value) { m_identityPoolsHasBeenSet = true; m_identityPools = std::forward<IdentityPoolsT>(value); }
    template<typename IdentityPoolsT = Aws::Vector<IdentityPoolShortDescription>>
    ListIdentityPoolsResult& WithIdentityPools(IdentityPoolsT&& value) { SetIdentityPools(std::forward<IdentityPoolsT>(value)); return *this;}
    template<typename IdentityPoolsT = IdentityPoolShortDescription>
    ListIdentityPoolsResult& AddIdentityPools(IdentityPoolsT&& value) { m_identityPoolsHasBeenSet = true; m_identityPools.emplace_back(std::forward<IdentityPoolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIdentityPoolsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIdentityPoolsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IdentityPoolShortDescription> m_identityPools;
    bool m_identityPoolsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws

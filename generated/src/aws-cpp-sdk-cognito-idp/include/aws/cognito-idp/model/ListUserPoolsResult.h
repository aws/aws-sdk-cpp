/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/UserPoolDescriptionType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  /**
   * <p>Represents the response to list user pools.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserPoolsResponse">AWS
   * API Reference</a></p>
   */
  class ListUserPoolsResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ListUserPoolsResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API ListUserPoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ListUserPoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of user pools and their configuration details.</p>
     */
    inline const Aws::Vector<UserPoolDescriptionType>& GetUserPools() const { return m_userPools; }
    template<typename UserPoolsT = Aws::Vector<UserPoolDescriptionType>>
    void SetUserPools(UserPoolsT&& value) { m_userPoolsHasBeenSet = true; m_userPools = std::forward<UserPoolsT>(value); }
    template<typename UserPoolsT = Aws::Vector<UserPoolDescriptionType>>
    ListUserPoolsResult& WithUserPools(UserPoolsT&& value) { SetUserPools(std::forward<UserPoolsT>(value)); return *this;}
    template<typename UserPoolsT = UserPoolDescriptionType>
    ListUserPoolsResult& AddUserPools(UserPoolsT&& value) { m_userPoolsHasBeenSet = true; m_userPools.emplace_back(std::forward<UserPoolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier that Amazon Cognito returned with the previous request to this
     * operation. When you include a pagination token in your request, Amazon Cognito
     * returns the next set of items in the list. By use of this token, you can
     * paginate through the full list of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListUserPoolsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListUserPoolsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserPoolDescriptionType> m_userPools;
    bool m_userPoolsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

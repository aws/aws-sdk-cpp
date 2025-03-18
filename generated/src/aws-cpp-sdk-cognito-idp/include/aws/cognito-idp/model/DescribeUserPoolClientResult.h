/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/UserPoolClientType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  /**
   * <p>Represents the response from the server from a request to describe the user
   * pool client.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DescribeUserPoolClientResponse">AWS
   * API Reference</a></p>
   */
  class DescribeUserPoolClientResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserPoolClientResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserPoolClientResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserPoolClientResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the request app client.</p>
     */
    inline const UserPoolClientType& GetUserPoolClient() const { return m_userPoolClient; }
    template<typename UserPoolClientT = UserPoolClientType>
    void SetUserPoolClient(UserPoolClientT&& value) { m_userPoolClientHasBeenSet = true; m_userPoolClient = std::forward<UserPoolClientT>(value); }
    template<typename UserPoolClientT = UserPoolClientType>
    DescribeUserPoolClientResult& WithUserPoolClient(UserPoolClientT&& value) { SetUserPoolClient(std::forward<UserPoolClientT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeUserPoolClientResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UserPoolClientType m_userPoolClient;
    bool m_userPoolClientHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

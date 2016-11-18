/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/CodeDeliveryDetailsType.h>

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
   * <p>The response from the server for a registration request.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API SignUpResult
  {
  public:
    SignUpResult();
    SignUpResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SignUpResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A response from the server indicating that a user registration has been
     * confirmed.</p>
     */
    inline bool GetUserConfirmed() const{ return m_userConfirmed; }

    /**
     * <p>A response from the server indicating that a user registration has been
     * confirmed.</p>
     */
    inline void SetUserConfirmed(bool value) { m_userConfirmed = value; }

    /**
     * <p>A response from the server indicating that a user registration has been
     * confirmed.</p>
     */
    inline SignUpResult& WithUserConfirmed(bool value) { SetUserConfirmed(value); return *this;}

    /**
     * <p>The code delivery details returned by the server response to the user
     * registration request.</p>
     */
    inline const CodeDeliveryDetailsType& GetCodeDeliveryDetails() const{ return m_codeDeliveryDetails; }

    /**
     * <p>The code delivery details returned by the server response to the user
     * registration request.</p>
     */
    inline void SetCodeDeliveryDetails(const CodeDeliveryDetailsType& value) { m_codeDeliveryDetails = value; }

    /**
     * <p>The code delivery details returned by the server response to the user
     * registration request.</p>
     */
    inline void SetCodeDeliveryDetails(CodeDeliveryDetailsType&& value) { m_codeDeliveryDetails = value; }

    /**
     * <p>The code delivery details returned by the server response to the user
     * registration request.</p>
     */
    inline SignUpResult& WithCodeDeliveryDetails(const CodeDeliveryDetailsType& value) { SetCodeDeliveryDetails(value); return *this;}

    /**
     * <p>The code delivery details returned by the server response to the user
     * registration request.</p>
     */
    inline SignUpResult& WithCodeDeliveryDetails(CodeDeliveryDetailsType&& value) { SetCodeDeliveryDetails(value); return *this;}

  private:
    bool m_userConfirmed;
    CodeDeliveryDetailsType m_codeDeliveryDetails;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

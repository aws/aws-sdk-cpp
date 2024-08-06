/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/CodeDeliveryDetailsType.h>
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
   * <p>The response from the server for a registration request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SignUpResponse">AWS
   * API Reference</a></p>
   */
  class SignUpResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SignUpResult();
    AWS_COGNITOIDENTITYPROVIDER_API SignUpResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API SignUpResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A response from the server indicating that a user registration has been
     * confirmed.</p>
     */
    inline bool GetUserConfirmed() const{ return m_userConfirmed; }
    inline void SetUserConfirmed(bool value) { m_userConfirmed = value; }
    inline SignUpResult& WithUserConfirmed(bool value) { SetUserConfirmed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code delivery details returned by the server response to the user
     * registration request.</p>
     */
    inline const CodeDeliveryDetailsType& GetCodeDeliveryDetails() const{ return m_codeDeliveryDetails; }
    inline void SetCodeDeliveryDetails(const CodeDeliveryDetailsType& value) { m_codeDeliveryDetails = value; }
    inline void SetCodeDeliveryDetails(CodeDeliveryDetailsType&& value) { m_codeDeliveryDetails = std::move(value); }
    inline SignUpResult& WithCodeDeliveryDetails(const CodeDeliveryDetailsType& value) { SetCodeDeliveryDetails(value); return *this;}
    inline SignUpResult& WithCodeDeliveryDetails(CodeDeliveryDetailsType&& value) { SetCodeDeliveryDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 128-bit ID of the authenticated user. This isn't the same as
     * <code>username</code>.</p>
     */
    inline const Aws::String& GetUserSub() const{ return m_userSub; }
    inline void SetUserSub(const Aws::String& value) { m_userSub = value; }
    inline void SetUserSub(Aws::String&& value) { m_userSub = std::move(value); }
    inline void SetUserSub(const char* value) { m_userSub.assign(value); }
    inline SignUpResult& WithUserSub(const Aws::String& value) { SetUserSub(value); return *this;}
    inline SignUpResult& WithUserSub(Aws::String&& value) { SetUserSub(std::move(value)); return *this;}
    inline SignUpResult& WithUserSub(const char* value) { SetUserSub(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SignUpResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SignUpResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SignUpResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_userConfirmed;

    CodeDeliveryDetailsType m_codeDeliveryDetails;

    Aws::String m_userSub;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

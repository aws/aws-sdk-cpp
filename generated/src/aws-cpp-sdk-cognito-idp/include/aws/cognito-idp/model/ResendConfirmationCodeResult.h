﻿/**
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
   * <p>The response from the server when Amazon Cognito makes the request to resend
   * a confirmation code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ResendConfirmationCodeResponse">AWS
   * API Reference</a></p>
   */
  class ResendConfirmationCodeResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ResendConfirmationCodeResult();
    AWS_COGNITOIDENTITYPROVIDER_API ResendConfirmationCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ResendConfirmationCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The code delivery details returned by the server in response to the request
     * to resend the confirmation code.</p>
     */
    inline const CodeDeliveryDetailsType& GetCodeDeliveryDetails() const{ return m_codeDeliveryDetails; }

    /**
     * <p>The code delivery details returned by the server in response to the request
     * to resend the confirmation code.</p>
     */
    inline void SetCodeDeliveryDetails(const CodeDeliveryDetailsType& value) { m_codeDeliveryDetails = value; }

    /**
     * <p>The code delivery details returned by the server in response to the request
     * to resend the confirmation code.</p>
     */
    inline void SetCodeDeliveryDetails(CodeDeliveryDetailsType&& value) { m_codeDeliveryDetails = std::move(value); }

    /**
     * <p>The code delivery details returned by the server in response to the request
     * to resend the confirmation code.</p>
     */
    inline ResendConfirmationCodeResult& WithCodeDeliveryDetails(const CodeDeliveryDetailsType& value) { SetCodeDeliveryDetails(value); return *this;}

    /**
     * <p>The code delivery details returned by the server in response to the request
     * to resend the confirmation code.</p>
     */
    inline ResendConfirmationCodeResult& WithCodeDeliveryDetails(CodeDeliveryDetailsType&& value) { SetCodeDeliveryDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ResendConfirmationCodeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ResendConfirmationCodeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ResendConfirmationCodeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CodeDeliveryDetailsType m_codeDeliveryDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

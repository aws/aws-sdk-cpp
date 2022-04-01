﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/CodeDeliveryDetailsType.h>
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
   * <p>Respresents the response from the server regarding the request to reset a
   * password.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ForgotPasswordResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API ForgotPasswordResult
  {
  public:
    ForgotPasswordResult();
    ForgotPasswordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ForgotPasswordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The code delivery details returned by the server in response to the request
     * to reset a password.</p>
     */
    inline const CodeDeliveryDetailsType& GetCodeDeliveryDetails() const{ return m_codeDeliveryDetails; }

    /**
     * <p>The code delivery details returned by the server in response to the request
     * to reset a password.</p>
     */
    inline void SetCodeDeliveryDetails(const CodeDeliveryDetailsType& value) { m_codeDeliveryDetails = value; }

    /**
     * <p>The code delivery details returned by the server in response to the request
     * to reset a password.</p>
     */
    inline void SetCodeDeliveryDetails(CodeDeliveryDetailsType&& value) { m_codeDeliveryDetails = std::move(value); }

    /**
     * <p>The code delivery details returned by the server in response to the request
     * to reset a password.</p>
     */
    inline ForgotPasswordResult& WithCodeDeliveryDetails(const CodeDeliveryDetailsType& value) { SetCodeDeliveryDetails(value); return *this;}

    /**
     * <p>The code delivery details returned by the server in response to the request
     * to reset a password.</p>
     */
    inline ForgotPasswordResult& WithCodeDeliveryDetails(CodeDeliveryDetailsType&& value) { SetCodeDeliveryDetails(std::move(value)); return *this;}

  private:

    CodeDeliveryDetailsType m_codeDeliveryDetails;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

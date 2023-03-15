﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
   * <p>The response from the server that results from a user's request to retrieve a
   * forgotten password.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmForgotPasswordResponse">AWS
   * API Reference</a></p>
   */
  class ConfirmForgotPasswordResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmForgotPasswordResult();
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmForgotPasswordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmForgotPasswordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ConfirmForgotPasswordResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ConfirmForgotPasswordResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ConfirmForgotPasswordResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

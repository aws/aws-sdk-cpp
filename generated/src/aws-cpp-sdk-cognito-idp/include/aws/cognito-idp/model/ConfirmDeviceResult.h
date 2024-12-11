/**
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
   * <p>The confirm-device response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmDeviceResponse">AWS
   * API Reference</a></p>
   */
  class ConfirmDeviceResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmDeviceResult();
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When <code>true</code>, your user must confirm that they want to remember the
     * device. Prompt the user for an answer. You must then make an <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UpdateDeviceStatus.html">UpdateUserDevice</a>
     * request that sets the device to <code>remembered</code> or
     * <code>not_remembered</code>.</p> <p>When <code>false</code>, immediately sets
     * the device as remembered and eligible for device authentication.</p> <p>You can
     * configure your user pool to always remember devices, in which case this response
     * is <code>false</code>, or to allow users to opt in, in which case this response
     * is <code>true</code>. Configure this option under <i>Device tracking</i> in the
     * <i>Sign-in</i> menu of your user pool. You can also configure this option with
     * the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_CreateUserPool.html#CognitoUserPools-CreateUserPool-request-DeviceConfiguration">DeviceConfiguration</a>
     * parameter of a <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_CreateUserPool.html">CreateUserPool</a>
     * or <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UpdateUserPool.html">UpdateUserPool</a>
     * request.</p>
     */
    inline bool GetUserConfirmationNecessary() const{ return m_userConfirmationNecessary; }
    inline void SetUserConfirmationNecessary(bool value) { m_userConfirmationNecessary = value; }
    inline ConfirmDeviceResult& WithUserConfirmationNecessary(bool value) { SetUserConfirmationNecessary(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ConfirmDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ConfirmDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ConfirmDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_userConfirmationNecessary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

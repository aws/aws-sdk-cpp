/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>

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
   * <p>Confirms the device response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ConfirmDeviceResponse">AWS
   * API Reference</a></p>
   */
  class ConfirmDeviceResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmDeviceResult();
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether the user confirmation must confirm the device response.</p>
     */
    inline bool GetUserConfirmationNecessary() const{ return m_userConfirmationNecessary; }

    /**
     * <p>Indicates whether the user confirmation must confirm the device response.</p>
     */
    inline void SetUserConfirmationNecessary(bool value) { m_userConfirmationNecessary = value; }

    /**
     * <p>Indicates whether the user confirmation must confirm the device response.</p>
     */
    inline ConfirmDeviceResult& WithUserConfirmationNecessary(bool value) { SetUserConfirmationNecessary(value); return *this;}

  private:

    bool m_userConfirmationNecessary;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

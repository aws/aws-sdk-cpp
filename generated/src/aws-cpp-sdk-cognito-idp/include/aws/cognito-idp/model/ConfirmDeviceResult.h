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
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmDeviceResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ConfirmDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When <code>true</code>, your user must confirm that they want to remember the
     * device. Prompt the user for an answer.</p> <p>When <code>false</code>,
     * immediately sets the device as remembered and eligible for device
     * authentication.</p> <p>You can configure your user pool to always remember
     * devices, in which case this response is <code>false</code>, or to allow users to
     * opt in, in which case this response is <code>true</code>. Configure this option
     * under <i>Device tracking</i> in the <i>Sign-in</i> menu of your user pool.</p>
     */
    inline bool GetUserConfirmationNecessary() const { return m_userConfirmationNecessary; }
    inline void SetUserConfirmationNecessary(bool value) { m_userConfirmationNecessaryHasBeenSet = true; m_userConfirmationNecessary = value; }
    inline ConfirmDeviceResult& WithUserConfirmationNecessary(bool value) { SetUserConfirmationNecessary(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ConfirmDeviceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_userConfirmationNecessary{false};
    bool m_userConfirmationNecessaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

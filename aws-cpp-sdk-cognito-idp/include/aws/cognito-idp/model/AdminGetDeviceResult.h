/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/DeviceType.h>
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
   * <p>Gets the device response, as an administrator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminGetDeviceResponse">AWS
   * API Reference</a></p>
   */
  class AdminGetDeviceResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminGetDeviceResult();
    AWS_COGNITOIDENTITYPROVIDER_API AdminGetDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API AdminGetDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The device.</p>
     */
    inline const DeviceType& GetDevice() const{ return m_device; }

    /**
     * <p>The device.</p>
     */
    inline void SetDevice(const DeviceType& value) { m_device = value; }

    /**
     * <p>The device.</p>
     */
    inline void SetDevice(DeviceType&& value) { m_device = std::move(value); }

    /**
     * <p>The device.</p>
     */
    inline AdminGetDeviceResult& WithDevice(const DeviceType& value) { SetDevice(value); return *this;}

    /**
     * <p>The device.</p>
     */
    inline AdminGetDeviceResult& WithDevice(DeviceType&& value) { SetDevice(std::move(value)); return *this;}

  private:

    DeviceType m_device;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

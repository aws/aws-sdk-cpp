/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Gets the device response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetDeviceResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API GetDeviceResult
  {
  public:
    GetDeviceResult();
    GetDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetDeviceResult& WithDevice(const DeviceType& value) { SetDevice(value); return *this;}

    /**
     * <p>The device.</p>
     */
    inline GetDeviceResult& WithDevice(DeviceType&& value) { SetDevice(std::move(value)); return *this;}

  private:

    DeviceType m_device;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

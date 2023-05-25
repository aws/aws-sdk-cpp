/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/DeviceType.h>
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
   * <p>Gets the device response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetDeviceResponse">AWS
   * API Reference</a></p>
   */
  class GetDeviceResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetDeviceResult();
    AWS_COGNITOIDENTITYPROVIDER_API GetDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DeviceType m_device;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

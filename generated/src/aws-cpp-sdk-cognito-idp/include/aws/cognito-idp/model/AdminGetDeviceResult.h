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


    ///@{
    /**
     * <p>The device.</p>
     */
    inline const DeviceType& GetDevice() const{ return m_device; }
    inline void SetDevice(const DeviceType& value) { m_device = value; }
    inline void SetDevice(DeviceType&& value) { m_device = std::move(value); }
    inline AdminGetDeviceResult& WithDevice(const DeviceType& value) { SetDevice(value); return *this;}
    inline AdminGetDeviceResult& WithDevice(DeviceType&& value) { SetDevice(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AdminGetDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AdminGetDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AdminGetDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DeviceType m_device;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

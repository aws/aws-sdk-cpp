/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Lists the device's response, as an administrator.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminListDevicesResponse">AWS
   * API Reference</a></p>
   */
  class AdminListDevicesResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminListDevicesResult();
    AWS_COGNITOIDENTITYPROVIDER_API AdminListDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API AdminListDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The devices in the list of devices response.</p>
     */
    inline const Aws::Vector<DeviceType>& GetDevices() const{ return m_devices; }
    inline void SetDevices(const Aws::Vector<DeviceType>& value) { m_devices = value; }
    inline void SetDevices(Aws::Vector<DeviceType>&& value) { m_devices = std::move(value); }
    inline AdminListDevicesResult& WithDevices(const Aws::Vector<DeviceType>& value) { SetDevices(value); return *this;}
    inline AdminListDevicesResult& WithDevices(Aws::Vector<DeviceType>&& value) { SetDevices(std::move(value)); return *this;}
    inline AdminListDevicesResult& AddDevices(const DeviceType& value) { m_devices.push_back(value); return *this; }
    inline AdminListDevicesResult& AddDevices(DeviceType&& value) { m_devices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier that Amazon Cognito returned with the previous request to this
     * operation. When you include a pagination token in your request, Amazon Cognito
     * returns the next set of items in the list. By use of this token, you can
     * paginate through the full list of items.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }
    inline void SetPaginationToken(const Aws::String& value) { m_paginationToken = value; }
    inline void SetPaginationToken(Aws::String&& value) { m_paginationToken = std::move(value); }
    inline void SetPaginationToken(const char* value) { m_paginationToken.assign(value); }
    inline AdminListDevicesResult& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}
    inline AdminListDevicesResult& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}
    inline AdminListDevicesResult& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AdminListDevicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AdminListDevicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AdminListDevicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DeviceType> m_devices;

    Aws::String m_paginationToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

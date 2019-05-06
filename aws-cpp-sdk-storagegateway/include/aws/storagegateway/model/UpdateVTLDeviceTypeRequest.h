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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class AWS_STORAGEGATEWAY_API UpdateVTLDeviceTypeRequest : public StorageGatewayRequest
  {
  public:
    UpdateVTLDeviceTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVTLDeviceType"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline const Aws::String& GetVTLDeviceARN() const{ return m_vTLDeviceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline bool VTLDeviceARNHasBeenSet() const { return m_vTLDeviceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline void SetVTLDeviceARN(const Aws::String& value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline void SetVTLDeviceARN(Aws::String&& value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline void SetVTLDeviceARN(const char* value) { m_vTLDeviceARNHasBeenSet = true; m_vTLDeviceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline UpdateVTLDeviceTypeRequest& WithVTLDeviceARN(const Aws::String& value) { SetVTLDeviceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline UpdateVTLDeviceTypeRequest& WithVTLDeviceARN(Aws::String&& value) { SetVTLDeviceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the medium changer you want to select.</p>
     */
    inline UpdateVTLDeviceTypeRequest& WithVTLDeviceARN(const char* value) { SetVTLDeviceARN(value); return *this;}


    /**
     * <p>The type of medium changer you want to select.</p> <p> Valid Values:
     * "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline const Aws::String& GetDeviceType() const{ return m_deviceType; }

    /**
     * <p>The type of medium changer you want to select.</p> <p> Valid Values:
     * "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }

    /**
     * <p>The type of medium changer you want to select.</p> <p> Valid Values:
     * "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline void SetDeviceType(const Aws::String& value) { m_deviceTypeHasBeenSet = true; m_deviceType = value; }

    /**
     * <p>The type of medium changer you want to select.</p> <p> Valid Values:
     * "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline void SetDeviceType(Aws::String&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::move(value); }

    /**
     * <p>The type of medium changer you want to select.</p> <p> Valid Values:
     * "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline void SetDeviceType(const char* value) { m_deviceTypeHasBeenSet = true; m_deviceType.assign(value); }

    /**
     * <p>The type of medium changer you want to select.</p> <p> Valid Values:
     * "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline UpdateVTLDeviceTypeRequest& WithDeviceType(const Aws::String& value) { SetDeviceType(value); return *this;}

    /**
     * <p>The type of medium changer you want to select.</p> <p> Valid Values:
     * "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline UpdateVTLDeviceTypeRequest& WithDeviceType(Aws::String&& value) { SetDeviceType(std::move(value)); return *this;}

    /**
     * <p>The type of medium changer you want to select.</p> <p> Valid Values:
     * "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline UpdateVTLDeviceTypeRequest& WithDeviceType(const char* value) { SetDeviceType(value); return *this;}

  private:

    Aws::String m_vTLDeviceARN;
    bool m_vTLDeviceARNHasBeenSet;

    Aws::String m_deviceType;
    bool m_deviceTypeHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

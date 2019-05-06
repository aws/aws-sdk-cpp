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
  class AWS_STORAGEGATEWAY_API UpdateGatewayInformationRequest : public StorageGatewayRequest
  {
  public:
    UpdateGatewayInformationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGatewayInformation"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline UpdateGatewayInformationRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateGatewayInformationRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline UpdateGatewayInformationRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }

    
    inline bool GatewayNameHasBeenSet() const { return m_gatewayNameHasBeenSet; }

    
    inline void SetGatewayName(const Aws::String& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = value; }

    
    inline void SetGatewayName(Aws::String&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = std::move(value); }

    
    inline void SetGatewayName(const char* value) { m_gatewayNameHasBeenSet = true; m_gatewayName.assign(value); }

    
    inline UpdateGatewayInformationRequest& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}

    
    inline UpdateGatewayInformationRequest& WithGatewayName(Aws::String&& value) { SetGatewayName(std::move(value)); return *this;}

    
    inline UpdateGatewayInformationRequest& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}


    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline const Aws::String& GetGatewayTimezone() const{ return m_gatewayTimezone; }

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline bool GatewayTimezoneHasBeenSet() const { return m_gatewayTimezoneHasBeenSet; }

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline void SetGatewayTimezone(const Aws::String& value) { m_gatewayTimezoneHasBeenSet = true; m_gatewayTimezone = value; }

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline void SetGatewayTimezone(Aws::String&& value) { m_gatewayTimezoneHasBeenSet = true; m_gatewayTimezone = std::move(value); }

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline void SetGatewayTimezone(const char* value) { m_gatewayTimezoneHasBeenSet = true; m_gatewayTimezone.assign(value); }

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline UpdateGatewayInformationRequest& WithGatewayTimezone(const Aws::String& value) { SetGatewayTimezone(value); return *this;}

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline UpdateGatewayInformationRequest& WithGatewayTimezone(Aws::String&& value) { SetGatewayTimezone(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline UpdateGatewayInformationRequest& WithGatewayTimezone(const char* value) { SetGatewayTimezone(value); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;

    Aws::String m_gatewayName;
    bool m_gatewayNameHasBeenSet;

    Aws::String m_gatewayTimezone;
    bool m_gatewayTimezoneHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

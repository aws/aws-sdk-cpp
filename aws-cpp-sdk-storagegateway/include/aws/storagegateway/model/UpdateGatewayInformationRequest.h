/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline UpdateGatewayInformationRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateGatewayInformationRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateGatewayInformationRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }

    
    inline void SetGatewayName(const Aws::String& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = value; }

    
    inline void SetGatewayName(Aws::String&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = value; }

    
    inline void SetGatewayName(const char* value) { m_gatewayNameHasBeenSet = true; m_gatewayName.assign(value); }

    
    inline UpdateGatewayInformationRequest& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}

    
    inline UpdateGatewayInformationRequest& WithGatewayName(Aws::String&& value) { SetGatewayName(value); return *this;}

    
    inline UpdateGatewayInformationRequest& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}

    
    inline const Aws::String& GetGatewayTimezone() const{ return m_gatewayTimezone; }

    
    inline void SetGatewayTimezone(const Aws::String& value) { m_gatewayTimezoneHasBeenSet = true; m_gatewayTimezone = value; }

    
    inline void SetGatewayTimezone(Aws::String&& value) { m_gatewayTimezoneHasBeenSet = true; m_gatewayTimezone = value; }

    
    inline void SetGatewayTimezone(const char* value) { m_gatewayTimezoneHasBeenSet = true; m_gatewayTimezone.assign(value); }

    
    inline UpdateGatewayInformationRequest& WithGatewayTimezone(const Aws::String& value) { SetGatewayTimezone(value); return *this;}

    
    inline UpdateGatewayInformationRequest& WithGatewayTimezone(Aws::String&& value) { SetGatewayTimezone(value); return *this;}

    
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

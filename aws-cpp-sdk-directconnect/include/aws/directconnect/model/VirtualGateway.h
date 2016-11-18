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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>You can create one or more AWS Direct Connect private virtual interfaces
   * linking to your virtual private gateway.</p> <p>Virtual private gateways can be
   * managed using the Amazon Virtual Private Cloud (Amazon VPC) console or the <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-CreateVpnGateway.html">Amazon
   * EC2 CreateVpnGateway action</a>.</p>
   */
  class AWS_DIRECTCONNECT_API VirtualGateway
  {
  public:
    VirtualGateway();
    VirtualGateway(const Aws::Utils::Json::JsonValue& jsonValue);
    VirtualGateway& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }

    
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }

    
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }

    
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId.assign(value); }

    
    inline VirtualGateway& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}

    
    inline VirtualGateway& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(value); return *this;}

    
    inline VirtualGateway& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}

    
    inline const Aws::String& GetVirtualGatewayState() const{ return m_virtualGatewayState; }

    
    inline void SetVirtualGatewayState(const Aws::String& value) { m_virtualGatewayStateHasBeenSet = true; m_virtualGatewayState = value; }

    
    inline void SetVirtualGatewayState(Aws::String&& value) { m_virtualGatewayStateHasBeenSet = true; m_virtualGatewayState = value; }

    
    inline void SetVirtualGatewayState(const char* value) { m_virtualGatewayStateHasBeenSet = true; m_virtualGatewayState.assign(value); }

    
    inline VirtualGateway& WithVirtualGatewayState(const Aws::String& value) { SetVirtualGatewayState(value); return *this;}

    
    inline VirtualGateway& WithVirtualGatewayState(Aws::String&& value) { SetVirtualGatewayState(value); return *this;}

    
    inline VirtualGateway& WithVirtualGatewayState(const char* value) { SetVirtualGatewayState(value); return *this;}

  private:
    Aws::String m_virtualGatewayId;
    bool m_virtualGatewayIdHasBeenSet;
    Aws::String m_virtualGatewayState;
    bool m_virtualGatewayStateHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws

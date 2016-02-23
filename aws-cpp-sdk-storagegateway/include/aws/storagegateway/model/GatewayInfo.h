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
namespace StorageGateway
{
namespace Model
{

  class AWS_STORAGEGATEWAY_API GatewayInfo
  {
  public:
    GatewayInfo();
    GatewayInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    GatewayInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline GatewayInfo& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline GatewayInfo& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline GatewayInfo& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    
    inline const Aws::String& GetGatewayType() const{ return m_gatewayType; }

    
    inline void SetGatewayType(const Aws::String& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = value; }

    
    inline void SetGatewayType(Aws::String&& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = value; }

    
    inline void SetGatewayType(const char* value) { m_gatewayTypeHasBeenSet = true; m_gatewayType.assign(value); }

    
    inline GatewayInfo& WithGatewayType(const Aws::String& value) { SetGatewayType(value); return *this;}

    
    inline GatewayInfo& WithGatewayType(Aws::String&& value) { SetGatewayType(value); return *this;}

    
    inline GatewayInfo& WithGatewayType(const char* value) { SetGatewayType(value); return *this;}

    
    inline const Aws::String& GetGatewayOperationalState() const{ return m_gatewayOperationalState; }

    
    inline void SetGatewayOperationalState(const Aws::String& value) { m_gatewayOperationalStateHasBeenSet = true; m_gatewayOperationalState = value; }

    
    inline void SetGatewayOperationalState(Aws::String&& value) { m_gatewayOperationalStateHasBeenSet = true; m_gatewayOperationalState = value; }

    
    inline void SetGatewayOperationalState(const char* value) { m_gatewayOperationalStateHasBeenSet = true; m_gatewayOperationalState.assign(value); }

    
    inline GatewayInfo& WithGatewayOperationalState(const Aws::String& value) { SetGatewayOperationalState(value); return *this;}

    
    inline GatewayInfo& WithGatewayOperationalState(Aws::String&& value) { SetGatewayOperationalState(value); return *this;}

    
    inline GatewayInfo& WithGatewayOperationalState(const char* value) { SetGatewayOperationalState(value); return *this;}

    
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }

    
    inline void SetGatewayName(const Aws::String& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = value; }

    
    inline void SetGatewayName(Aws::String&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = value; }

    
    inline void SetGatewayName(const char* value) { m_gatewayNameHasBeenSet = true; m_gatewayName.assign(value); }

    
    inline GatewayInfo& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}

    
    inline GatewayInfo& WithGatewayName(Aws::String&& value) { SetGatewayName(value); return *this;}

    
    inline GatewayInfo& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}

  private:
    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;
    Aws::String m_gatewayType;
    bool m_gatewayTypeHasBeenSet;
    Aws::String m_gatewayOperationalState;
    bool m_gatewayOperationalStateHasBeenSet;
    Aws::String m_gatewayName;
    bool m_gatewayNameHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

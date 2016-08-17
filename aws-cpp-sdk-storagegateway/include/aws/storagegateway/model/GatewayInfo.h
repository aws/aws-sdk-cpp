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

  /**
   * <p>Describes a gateway object.</p>
   */
  class AWS_STORAGEGATEWAY_API GatewayInfo
  {
  public:
    GatewayInfo();
    GatewayInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    GatewayInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline GatewayInfo& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline GatewayInfo& WithGatewayId(Aws::String&& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline GatewayInfo& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a>ListGateways</a>
     * operation to return a list of gateways for your account and region.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a>ListGateways</a>
     * operation to return a list of gateways for your account and region.</p>
     */
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a>ListGateways</a>
     * operation to return a list of gateways for your account and region.</p>
     */
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a>ListGateways</a>
     * operation to return a list of gateways for your account and region.</p>
     */
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a>ListGateways</a>
     * operation to return a list of gateways for your account and region.</p>
     */
    inline GatewayInfo& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a>ListGateways</a>
     * operation to return a list of gateways for your account and region.</p>
     */
    inline GatewayInfo& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a>ListGateways</a>
     * operation to return a list of gateways for your account and region.</p>
     */
    inline GatewayInfo& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The type of the gateway.</p>
     */
    inline const Aws::String& GetGatewayType() const{ return m_gatewayType; }

    /**
     * <p>The type of the gateway.</p>
     */
    inline void SetGatewayType(const Aws::String& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = value; }

    /**
     * <p>The type of the gateway.</p>
     */
    inline void SetGatewayType(Aws::String&& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = value; }

    /**
     * <p>The type of the gateway.</p>
     */
    inline void SetGatewayType(const char* value) { m_gatewayTypeHasBeenSet = true; m_gatewayType.assign(value); }

    /**
     * <p>The type of the gateway.</p>
     */
    inline GatewayInfo& WithGatewayType(const Aws::String& value) { SetGatewayType(value); return *this;}

    /**
     * <p>The type of the gateway.</p>
     */
    inline GatewayInfo& WithGatewayType(Aws::String&& value) { SetGatewayType(value); return *this;}

    /**
     * <p>The type of the gateway.</p>
     */
    inline GatewayInfo& WithGatewayType(const char* value) { SetGatewayType(value); return *this;}

    /**
     * <p>The state of the gateway.</p> <p>Valid Values: DISABLED or ACTIVE</p>
     */
    inline const Aws::String& GetGatewayOperationalState() const{ return m_gatewayOperationalState; }

    /**
     * <p>The state of the gateway.</p> <p>Valid Values: DISABLED or ACTIVE</p>
     */
    inline void SetGatewayOperationalState(const Aws::String& value) { m_gatewayOperationalStateHasBeenSet = true; m_gatewayOperationalState = value; }

    /**
     * <p>The state of the gateway.</p> <p>Valid Values: DISABLED or ACTIVE</p>
     */
    inline void SetGatewayOperationalState(Aws::String&& value) { m_gatewayOperationalStateHasBeenSet = true; m_gatewayOperationalState = value; }

    /**
     * <p>The state of the gateway.</p> <p>Valid Values: DISABLED or ACTIVE</p>
     */
    inline void SetGatewayOperationalState(const char* value) { m_gatewayOperationalStateHasBeenSet = true; m_gatewayOperationalState.assign(value); }

    /**
     * <p>The state of the gateway.</p> <p>Valid Values: DISABLED or ACTIVE</p>
     */
    inline GatewayInfo& WithGatewayOperationalState(const Aws::String& value) { SetGatewayOperationalState(value); return *this;}

    /**
     * <p>The state of the gateway.</p> <p>Valid Values: DISABLED or ACTIVE</p>
     */
    inline GatewayInfo& WithGatewayOperationalState(Aws::String&& value) { SetGatewayOperationalState(value); return *this;}

    /**
     * <p>The state of the gateway.</p> <p>Valid Values: DISABLED or ACTIVE</p>
     */
    inline GatewayInfo& WithGatewayOperationalState(const char* value) { SetGatewayOperationalState(value); return *this;}

    /**
     * <p>The name of the gateway.</p>
     */
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }

    /**
     * <p>The name of the gateway.</p>
     */
    inline void SetGatewayName(const Aws::String& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = value; }

    /**
     * <p>The name of the gateway.</p>
     */
    inline void SetGatewayName(Aws::String&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = value; }

    /**
     * <p>The name of the gateway.</p>
     */
    inline void SetGatewayName(const char* value) { m_gatewayNameHasBeenSet = true; m_gatewayName.assign(value); }

    /**
     * <p>The name of the gateway.</p>
     */
    inline GatewayInfo& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}

    /**
     * <p>The name of the gateway.</p>
     */
    inline GatewayInfo& WithGatewayName(Aws::String&& value) { SetGatewayName(value); return *this;}

    /**
     * <p>The name of the gateway.</p>
     */
    inline GatewayInfo& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}

  private:
    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet;
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

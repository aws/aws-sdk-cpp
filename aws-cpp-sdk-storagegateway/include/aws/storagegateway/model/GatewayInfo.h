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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes a gateway object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/GatewayInfo">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API GatewayInfo
  {
  public:
    GatewayInfo();
    GatewayInfo(Aws::Utils::Json::JsonView jsonValue);
    GatewayInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }

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
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

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
    inline GatewayInfo& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

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
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a>ListGateways</a>
     * operation to return a list of gateways for your account and region.</p>
     */
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a>ListGateways</a>
     * operation to return a list of gateways for your account and region.</p>
     */
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

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
    inline GatewayInfo& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

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
    inline bool GatewayTypeHasBeenSet() const { return m_gatewayTypeHasBeenSet; }

    /**
     * <p>The type of the gateway.</p>
     */
    inline void SetGatewayType(const Aws::String& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = value; }

    /**
     * <p>The type of the gateway.</p>
     */
    inline void SetGatewayType(Aws::String&& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = std::move(value); }

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
    inline GatewayInfo& WithGatewayType(Aws::String&& value) { SetGatewayType(std::move(value)); return *this;}

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
    inline bool GatewayOperationalStateHasBeenSet() const { return m_gatewayOperationalStateHasBeenSet; }

    /**
     * <p>The state of the gateway.</p> <p>Valid Values: DISABLED or ACTIVE</p>
     */
    inline void SetGatewayOperationalState(const Aws::String& value) { m_gatewayOperationalStateHasBeenSet = true; m_gatewayOperationalState = value; }

    /**
     * <p>The state of the gateway.</p> <p>Valid Values: DISABLED or ACTIVE</p>
     */
    inline void SetGatewayOperationalState(Aws::String&& value) { m_gatewayOperationalStateHasBeenSet = true; m_gatewayOperationalState = std::move(value); }

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
    inline GatewayInfo& WithGatewayOperationalState(Aws::String&& value) { SetGatewayOperationalState(std::move(value)); return *this;}

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
    inline bool GatewayNameHasBeenSet() const { return m_gatewayNameHasBeenSet; }

    /**
     * <p>The name of the gateway.</p>
     */
    inline void SetGatewayName(const Aws::String& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = value; }

    /**
     * <p>The name of the gateway.</p>
     */
    inline void SetGatewayName(Aws::String&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = std::move(value); }

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
    inline GatewayInfo& WithGatewayName(Aws::String&& value) { SetGatewayName(std::move(value)); return *this;}

    /**
     * <p>The name of the gateway.</p>
     */
    inline GatewayInfo& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}


    /**
     * <p>The ID of the Amazon EC2 instance that was used to launch the gateway.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const{ return m_ec2InstanceId; }

    /**
     * <p>The ID of the Amazon EC2 instance that was used to launch the gateway.</p>
     */
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon EC2 instance that was used to launch the gateway.</p>
     */
    inline void SetEc2InstanceId(const Aws::String& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = value; }

    /**
     * <p>The ID of the Amazon EC2 instance that was used to launch the gateway.</p>
     */
    inline void SetEc2InstanceId(Aws::String&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::move(value); }

    /**
     * <p>The ID of the Amazon EC2 instance that was used to launch the gateway.</p>
     */
    inline void SetEc2InstanceId(const char* value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId.assign(value); }

    /**
     * <p>The ID of the Amazon EC2 instance that was used to launch the gateway.</p>
     */
    inline GatewayInfo& WithEc2InstanceId(const Aws::String& value) { SetEc2InstanceId(value); return *this;}

    /**
     * <p>The ID of the Amazon EC2 instance that was used to launch the gateway.</p>
     */
    inline GatewayInfo& WithEc2InstanceId(Aws::String&& value) { SetEc2InstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EC2 instance that was used to launch the gateway.</p>
     */
    inline GatewayInfo& WithEc2InstanceId(const char* value) { SetEc2InstanceId(value); return *this;}


    /**
     * <p>The AWS Region where the Amazon EC2 instance is located.</p>
     */
    inline const Aws::String& GetEc2InstanceRegion() const{ return m_ec2InstanceRegion; }

    /**
     * <p>The AWS Region where the Amazon EC2 instance is located.</p>
     */
    inline bool Ec2InstanceRegionHasBeenSet() const { return m_ec2InstanceRegionHasBeenSet; }

    /**
     * <p>The AWS Region where the Amazon EC2 instance is located.</p>
     */
    inline void SetEc2InstanceRegion(const Aws::String& value) { m_ec2InstanceRegionHasBeenSet = true; m_ec2InstanceRegion = value; }

    /**
     * <p>The AWS Region where the Amazon EC2 instance is located.</p>
     */
    inline void SetEc2InstanceRegion(Aws::String&& value) { m_ec2InstanceRegionHasBeenSet = true; m_ec2InstanceRegion = std::move(value); }

    /**
     * <p>The AWS Region where the Amazon EC2 instance is located.</p>
     */
    inline void SetEc2InstanceRegion(const char* value) { m_ec2InstanceRegionHasBeenSet = true; m_ec2InstanceRegion.assign(value); }

    /**
     * <p>The AWS Region where the Amazon EC2 instance is located.</p>
     */
    inline GatewayInfo& WithEc2InstanceRegion(const Aws::String& value) { SetEc2InstanceRegion(value); return *this;}

    /**
     * <p>The AWS Region where the Amazon EC2 instance is located.</p>
     */
    inline GatewayInfo& WithEc2InstanceRegion(Aws::String&& value) { SetEc2InstanceRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region where the Amazon EC2 instance is located.</p>
     */
    inline GatewayInfo& WithEc2InstanceRegion(const char* value) { SetEc2InstanceRegion(value); return *this;}

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

    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet;

    Aws::String m_ec2InstanceRegion;
    bool m_ec2InstanceRegionHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

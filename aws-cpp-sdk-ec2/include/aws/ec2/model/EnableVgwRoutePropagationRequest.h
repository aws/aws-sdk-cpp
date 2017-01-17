﻿/*
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for EnableVgwRoutePropagation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EnableVgwRoutePropagationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API EnableVgwRoutePropagationRequest : public EC2Request
  {
  public:
    EnableVgwRoutePropagationRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the route table.</p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }

    /**
     * <p>The ID of the route table.</p>
     */
    inline EnableVgwRoutePropagationRequest& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>The ID of the route table.</p>
     */
    inline EnableVgwRoutePropagationRequest& WithRouteTableId(Aws::String&& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>The ID of the route table.</p>
     */
    inline EnableVgwRoutePropagationRequest& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline EnableVgwRoutePropagationRequest& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline EnableVgwRoutePropagationRequest& WithGatewayId(Aws::String&& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline EnableVgwRoutePropagationRequest& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}

  private:
    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet;
    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

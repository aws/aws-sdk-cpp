/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>The structure of the transit gateway and network configuration that is used
   * to connect the kdb environment to an internal network.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/TransitGatewayConfiguration">AWS
   * API Reference</a></p>
   */
  class TransitGatewayConfiguration
  {
  public:
    AWS_FINSPACE_API TransitGatewayConfiguration();
    AWS_FINSPACE_API TransitGatewayConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API TransitGatewayConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the transit gateway created by the customer to connect
     * outbound traffics from kdb network to your internal network.</p>
     */
    inline const Aws::String& GetTransitGatewayID() const{ return m_transitGatewayID; }

    /**
     * <p>The identifier of the transit gateway created by the customer to connect
     * outbound traffics from kdb network to your internal network.</p>
     */
    inline bool TransitGatewayIDHasBeenSet() const { return m_transitGatewayIDHasBeenSet; }

    /**
     * <p>The identifier of the transit gateway created by the customer to connect
     * outbound traffics from kdb network to your internal network.</p>
     */
    inline void SetTransitGatewayID(const Aws::String& value) { m_transitGatewayIDHasBeenSet = true; m_transitGatewayID = value; }

    /**
     * <p>The identifier of the transit gateway created by the customer to connect
     * outbound traffics from kdb network to your internal network.</p>
     */
    inline void SetTransitGatewayID(Aws::String&& value) { m_transitGatewayIDHasBeenSet = true; m_transitGatewayID = std::move(value); }

    /**
     * <p>The identifier of the transit gateway created by the customer to connect
     * outbound traffics from kdb network to your internal network.</p>
     */
    inline void SetTransitGatewayID(const char* value) { m_transitGatewayIDHasBeenSet = true; m_transitGatewayID.assign(value); }

    /**
     * <p>The identifier of the transit gateway created by the customer to connect
     * outbound traffics from kdb network to your internal network.</p>
     */
    inline TransitGatewayConfiguration& WithTransitGatewayID(const Aws::String& value) { SetTransitGatewayID(value); return *this;}

    /**
     * <p>The identifier of the transit gateway created by the customer to connect
     * outbound traffics from kdb network to your internal network.</p>
     */
    inline TransitGatewayConfiguration& WithTransitGatewayID(Aws::String&& value) { SetTransitGatewayID(std::move(value)); return *this;}

    /**
     * <p>The identifier of the transit gateway created by the customer to connect
     * outbound traffics from kdb network to your internal network.</p>
     */
    inline TransitGatewayConfiguration& WithTransitGatewayID(const char* value) { SetTransitGatewayID(value); return *this;}


    /**
     * <p>The routing CIDR on behalf of kdb environment. It could be any "/26 range in
     * the 100.64.0.0 CIDR space. After providing, it will be added to the customer's
     * transit gateway routing table so that the traffics could be routed to kdb
     * network.</p>
     */
    inline const Aws::String& GetRoutableCIDRSpace() const{ return m_routableCIDRSpace; }

    /**
     * <p>The routing CIDR on behalf of kdb environment. It could be any "/26 range in
     * the 100.64.0.0 CIDR space. After providing, it will be added to the customer's
     * transit gateway routing table so that the traffics could be routed to kdb
     * network.</p>
     */
    inline bool RoutableCIDRSpaceHasBeenSet() const { return m_routableCIDRSpaceHasBeenSet; }

    /**
     * <p>The routing CIDR on behalf of kdb environment. It could be any "/26 range in
     * the 100.64.0.0 CIDR space. After providing, it will be added to the customer's
     * transit gateway routing table so that the traffics could be routed to kdb
     * network.</p>
     */
    inline void SetRoutableCIDRSpace(const Aws::String& value) { m_routableCIDRSpaceHasBeenSet = true; m_routableCIDRSpace = value; }

    /**
     * <p>The routing CIDR on behalf of kdb environment. It could be any "/26 range in
     * the 100.64.0.0 CIDR space. After providing, it will be added to the customer's
     * transit gateway routing table so that the traffics could be routed to kdb
     * network.</p>
     */
    inline void SetRoutableCIDRSpace(Aws::String&& value) { m_routableCIDRSpaceHasBeenSet = true; m_routableCIDRSpace = std::move(value); }

    /**
     * <p>The routing CIDR on behalf of kdb environment. It could be any "/26 range in
     * the 100.64.0.0 CIDR space. After providing, it will be added to the customer's
     * transit gateway routing table so that the traffics could be routed to kdb
     * network.</p>
     */
    inline void SetRoutableCIDRSpace(const char* value) { m_routableCIDRSpaceHasBeenSet = true; m_routableCIDRSpace.assign(value); }

    /**
     * <p>The routing CIDR on behalf of kdb environment. It could be any "/26 range in
     * the 100.64.0.0 CIDR space. After providing, it will be added to the customer's
     * transit gateway routing table so that the traffics could be routed to kdb
     * network.</p>
     */
    inline TransitGatewayConfiguration& WithRoutableCIDRSpace(const Aws::String& value) { SetRoutableCIDRSpace(value); return *this;}

    /**
     * <p>The routing CIDR on behalf of kdb environment. It could be any "/26 range in
     * the 100.64.0.0 CIDR space. After providing, it will be added to the customer's
     * transit gateway routing table so that the traffics could be routed to kdb
     * network.</p>
     */
    inline TransitGatewayConfiguration& WithRoutableCIDRSpace(Aws::String&& value) { SetRoutableCIDRSpace(std::move(value)); return *this;}

    /**
     * <p>The routing CIDR on behalf of kdb environment. It could be any "/26 range in
     * the 100.64.0.0 CIDR space. After providing, it will be added to the customer's
     * transit gateway routing table so that the traffics could be routed to kdb
     * network.</p>
     */
    inline TransitGatewayConfiguration& WithRoutableCIDRSpace(const char* value) { SetRoutableCIDRSpace(value); return *this;}

  private:

    Aws::String m_transitGatewayID;
    bool m_transitGatewayIDHasBeenSet = false;

    Aws::String m_routableCIDRSpace;
    bool m_routableCIDRSpaceHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws

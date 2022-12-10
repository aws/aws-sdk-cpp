/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/ActionTarget.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Information about the DeleteRoute action in Amazon EC2.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/EC2DeleteRouteAction">AWS
   * API Reference</a></p>
   */
  class EC2DeleteRouteAction
  {
  public:
    AWS_FMS_API EC2DeleteRouteAction();
    AWS_FMS_API EC2DeleteRouteAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API EC2DeleteRouteAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the DeleteRoute action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the DeleteRoute action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the DeleteRoute action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the DeleteRoute action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the DeleteRoute action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the DeleteRoute action.</p>
     */
    inline EC2DeleteRouteAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the DeleteRoute action.</p>
     */
    inline EC2DeleteRouteAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the DeleteRoute action.</p>
     */
    inline EC2DeleteRouteAction& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the IPv4 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }

    /**
     * <p>Information about the IPv4 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }

    /**
     * <p>Information about the IPv4 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>Information about the IPv4 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }

    /**
     * <p>Information about the IPv4 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }

    /**
     * <p>Information about the IPv4 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline EC2DeleteRouteAction& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>Information about the IPv4 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline EC2DeleteRouteAction& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}

    /**
     * <p>Information about the IPv4 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline EC2DeleteRouteAction& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}


    /**
     * <p>Information about the ID of the prefix list for the route.</p>
     */
    inline const Aws::String& GetDestinationPrefixListId() const{ return m_destinationPrefixListId; }

    /**
     * <p>Information about the ID of the prefix list for the route.</p>
     */
    inline bool DestinationPrefixListIdHasBeenSet() const { return m_destinationPrefixListIdHasBeenSet; }

    /**
     * <p>Information about the ID of the prefix list for the route.</p>
     */
    inline void SetDestinationPrefixListId(const Aws::String& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = value; }

    /**
     * <p>Information about the ID of the prefix list for the route.</p>
     */
    inline void SetDestinationPrefixListId(Aws::String&& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = std::move(value); }

    /**
     * <p>Information about the ID of the prefix list for the route.</p>
     */
    inline void SetDestinationPrefixListId(const char* value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId.assign(value); }

    /**
     * <p>Information about the ID of the prefix list for the route.</p>
     */
    inline EC2DeleteRouteAction& WithDestinationPrefixListId(const Aws::String& value) { SetDestinationPrefixListId(value); return *this;}

    /**
     * <p>Information about the ID of the prefix list for the route.</p>
     */
    inline EC2DeleteRouteAction& WithDestinationPrefixListId(Aws::String&& value) { SetDestinationPrefixListId(std::move(value)); return *this;}

    /**
     * <p>Information about the ID of the prefix list for the route.</p>
     */
    inline EC2DeleteRouteAction& WithDestinationPrefixListId(const char* value) { SetDestinationPrefixListId(value); return *this;}


    /**
     * <p>Information about the IPv6 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline const Aws::String& GetDestinationIpv6CidrBlock() const{ return m_destinationIpv6CidrBlock; }

    /**
     * <p>Information about the IPv6 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline bool DestinationIpv6CidrBlockHasBeenSet() const { return m_destinationIpv6CidrBlockHasBeenSet; }

    /**
     * <p>Information about the IPv6 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline void SetDestinationIpv6CidrBlock(const Aws::String& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = value; }

    /**
     * <p>Information about the IPv6 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline void SetDestinationIpv6CidrBlock(Aws::String&& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = std::move(value); }

    /**
     * <p>Information about the IPv6 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline void SetDestinationIpv6CidrBlock(const char* value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock.assign(value); }

    /**
     * <p>Information about the IPv6 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline EC2DeleteRouteAction& WithDestinationIpv6CidrBlock(const Aws::String& value) { SetDestinationIpv6CidrBlock(value); return *this;}

    /**
     * <p>Information about the IPv6 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline EC2DeleteRouteAction& WithDestinationIpv6CidrBlock(Aws::String&& value) { SetDestinationIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>Information about the IPv6 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline EC2DeleteRouteAction& WithDestinationIpv6CidrBlock(const char* value) { SetDestinationIpv6CidrBlock(value); return *this;}


    /**
     * <p>Information about the ID of the route table.</p>
     */
    inline const ActionTarget& GetRouteTableId() const{ return m_routeTableId; }

    /**
     * <p>Information about the ID of the route table.</p>
     */
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }

    /**
     * <p>Information about the ID of the route table.</p>
     */
    inline void SetRouteTableId(const ActionTarget& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p>Information about the ID of the route table.</p>
     */
    inline void SetRouteTableId(ActionTarget&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }

    /**
     * <p>Information about the ID of the route table.</p>
     */
    inline EC2DeleteRouteAction& WithRouteTableId(const ActionTarget& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>Information about the ID of the route table.</p>
     */
    inline EC2DeleteRouteAction& WithRouteTableId(ActionTarget&& value) { SetRouteTableId(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_destinationPrefixListId;
    bool m_destinationPrefixListIdHasBeenSet = false;

    Aws::String m_destinationIpv6CidrBlock;
    bool m_destinationIpv6CidrBlockHasBeenSet = false;

    ActionTarget m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws

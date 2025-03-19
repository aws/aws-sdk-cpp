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
    AWS_FMS_API EC2DeleteRouteAction() = default;
    AWS_FMS_API EC2DeleteRouteAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API EC2DeleteRouteAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of the DeleteRoute action.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    EC2DeleteRouteAction& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IPv4 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const { return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    template<typename DestinationCidrBlockT = Aws::String>
    void SetDestinationCidrBlock(DestinationCidrBlockT&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::forward<DestinationCidrBlockT>(value); }
    template<typename DestinationCidrBlockT = Aws::String>
    EC2DeleteRouteAction& WithDestinationCidrBlock(DestinationCidrBlockT&& value) { SetDestinationCidrBlock(std::forward<DestinationCidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ID of the prefix list for the route.</p>
     */
    inline const Aws::String& GetDestinationPrefixListId() const { return m_destinationPrefixListId; }
    inline bool DestinationPrefixListIdHasBeenSet() const { return m_destinationPrefixListIdHasBeenSet; }
    template<typename DestinationPrefixListIdT = Aws::String>
    void SetDestinationPrefixListId(DestinationPrefixListIdT&& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = std::forward<DestinationPrefixListIdT>(value); }
    template<typename DestinationPrefixListIdT = Aws::String>
    EC2DeleteRouteAction& WithDestinationPrefixListId(DestinationPrefixListIdT&& value) { SetDestinationPrefixListId(std::forward<DestinationPrefixListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IPv6 CIDR range for the route. The value you specify
     * must match the CIDR for the route exactly.</p>
     */
    inline const Aws::String& GetDestinationIpv6CidrBlock() const { return m_destinationIpv6CidrBlock; }
    inline bool DestinationIpv6CidrBlockHasBeenSet() const { return m_destinationIpv6CidrBlockHasBeenSet; }
    template<typename DestinationIpv6CidrBlockT = Aws::String>
    void SetDestinationIpv6CidrBlock(DestinationIpv6CidrBlockT&& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = std::forward<DestinationIpv6CidrBlockT>(value); }
    template<typename DestinationIpv6CidrBlockT = Aws::String>
    EC2DeleteRouteAction& WithDestinationIpv6CidrBlock(DestinationIpv6CidrBlockT&& value) { SetDestinationIpv6CidrBlock(std::forward<DestinationIpv6CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ID of the route table.</p>
     */
    inline const ActionTarget& GetRouteTableId() const { return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    template<typename RouteTableIdT = ActionTarget>
    void SetRouteTableId(RouteTableIdT&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::forward<RouteTableIdT>(value); }
    template<typename RouteTableIdT = ActionTarget>
    EC2DeleteRouteAction& WithRouteTableId(RouteTableIdT&& value) { SetRouteTableId(std::forward<RouteTableIdT>(value)); return *this;}
    ///@}
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

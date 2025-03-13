/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about the expected route in the route table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ExpectedRoute">AWS
   * API Reference</a></p>
   */
  class ExpectedRoute
  {
  public:
    AWS_FMS_API ExpectedRoute() = default;
    AWS_FMS_API ExpectedRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ExpectedRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the IPv4 CIDR block.</p>
     */
    inline const Aws::String& GetIpV4Cidr() const { return m_ipV4Cidr; }
    inline bool IpV4CidrHasBeenSet() const { return m_ipV4CidrHasBeenSet; }
    template<typename IpV4CidrT = Aws::String>
    void SetIpV4Cidr(IpV4CidrT&& value) { m_ipV4CidrHasBeenSet = true; m_ipV4Cidr = std::forward<IpV4CidrT>(value); }
    template<typename IpV4CidrT = Aws::String>
    ExpectedRoute& WithIpV4Cidr(IpV4CidrT&& value) { SetIpV4Cidr(std::forward<IpV4CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ID of the prefix list for the route.</p>
     */
    inline const Aws::String& GetPrefixListId() const { return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    template<typename PrefixListIdT = Aws::String>
    void SetPrefixListId(PrefixListIdT&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::forward<PrefixListIdT>(value); }
    template<typename PrefixListIdT = Aws::String>
    ExpectedRoute& WithPrefixListId(PrefixListIdT&& value) { SetPrefixListId(std::forward<PrefixListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IPv6 CIDR block.</p>
     */
    inline const Aws::String& GetIpV6Cidr() const { return m_ipV6Cidr; }
    inline bool IpV6CidrHasBeenSet() const { return m_ipV6CidrHasBeenSet; }
    template<typename IpV6CidrT = Aws::String>
    void SetIpV6Cidr(IpV6CidrT&& value) { m_ipV6CidrHasBeenSet = true; m_ipV6Cidr = std::forward<IpV6CidrT>(value); }
    template<typename IpV6CidrT = Aws::String>
    ExpectedRoute& WithIpV6Cidr(IpV6CidrT&& value) { SetIpV6Cidr(std::forward<IpV6CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the contributing subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContributingSubnets() const { return m_contributingSubnets; }
    inline bool ContributingSubnetsHasBeenSet() const { return m_contributingSubnetsHasBeenSet; }
    template<typename ContributingSubnetsT = Aws::Vector<Aws::String>>
    void SetContributingSubnets(ContributingSubnetsT&& value) { m_contributingSubnetsHasBeenSet = true; m_contributingSubnets = std::forward<ContributingSubnetsT>(value); }
    template<typename ContributingSubnetsT = Aws::Vector<Aws::String>>
    ExpectedRoute& WithContributingSubnets(ContributingSubnetsT&& value) { SetContributingSubnets(std::forward<ContributingSubnetsT>(value)); return *this;}
    template<typename ContributingSubnetsT = Aws::String>
    ExpectedRoute& AddContributingSubnets(ContributingSubnetsT&& value) { m_contributingSubnetsHasBeenSet = true; m_contributingSubnets.emplace_back(std::forward<ContributingSubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the allowed targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedTargets() const { return m_allowedTargets; }
    inline bool AllowedTargetsHasBeenSet() const { return m_allowedTargetsHasBeenSet; }
    template<typename AllowedTargetsT = Aws::Vector<Aws::String>>
    void SetAllowedTargets(AllowedTargetsT&& value) { m_allowedTargetsHasBeenSet = true; m_allowedTargets = std::forward<AllowedTargetsT>(value); }
    template<typename AllowedTargetsT = Aws::Vector<Aws::String>>
    ExpectedRoute& WithAllowedTargets(AllowedTargetsT&& value) { SetAllowedTargets(std::forward<AllowedTargetsT>(value)); return *this;}
    template<typename AllowedTargetsT = Aws::String>
    ExpectedRoute& AddAllowedTargets(AllowedTargetsT&& value) { m_allowedTargetsHasBeenSet = true; m_allowedTargets.emplace_back(std::forward<AllowedTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the route table ID.</p>
     */
    inline const Aws::String& GetRouteTableId() const { return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    template<typename RouteTableIdT = Aws::String>
    void SetRouteTableId(RouteTableIdT&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::forward<RouteTableIdT>(value); }
    template<typename RouteTableIdT = Aws::String>
    ExpectedRoute& WithRouteTableId(RouteTableIdT&& value) { SetRouteTableId(std::forward<RouteTableIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipV4Cidr;
    bool m_ipV4CidrHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    Aws::String m_ipV6Cidr;
    bool m_ipV6CidrHasBeenSet = false;

    Aws::Vector<Aws::String> m_contributingSubnets;
    bool m_contributingSubnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedTargets;
    bool m_allowedTargetsHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws

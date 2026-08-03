/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/AddressFamily.h>
#include <aws/directconnect/model/AsPathSegment.h>
#include <aws/directconnect/model/RouteDirection.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DirectConnect {
namespace Model {

/**
 * <p>Information about a route for a virtual interface.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Route">AWS
 * API Reference</a></p>
 */
class Route {
 public:
  AWS_DIRECTCONNECT_API Route() = default;
  AWS_DIRECTCONNECT_API Route(Aws::Utils::Json::JsonView jsonValue);
  AWS_DIRECTCONNECT_API Route& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The CIDR (prefix) of the route.</p>
   */
  inline const Aws::String& GetCidr() const { return m_cidr; }
  inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
  template <typename CidrT = Aws::String>
  void SetCidr(CidrT&& value) {
    m_cidrHasBeenSet = true;
    m_cidr = std::forward<CidrT>(value);
  }
  template <typename CidrT = Aws::String>
  Route& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The direction of the route.</p> <p>The valid values are <code>accepted</code>
   * (received from the customer network) and <code>advertised</code> (advertised to
   * the customer network).</p>
   */
  inline RouteDirection GetRouteDirection() const { return m_routeDirection; }
  inline bool RouteDirectionHasBeenSet() const { return m_routeDirectionHasBeenSet; }
  inline void SetRouteDirection(RouteDirection value) {
    m_routeDirectionHasBeenSet = true;
    m_routeDirection = value;
  }
  inline Route& WithRouteDirection(RouteDirection value) {
    SetRouteDirection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The address family of the route.</p> <p>The valid values are
   * <code>ipv4</code> and <code>ipv6</code>.</p>
   */
  inline AddressFamily GetAddressFamily() const { return m_addressFamily; }
  inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
  inline void SetAddressFamily(AddressFamily value) {
    m_addressFamilyHasBeenSet = true;
    m_addressFamily = value;
  }
  inline Route& WithAddressFamily(AddressFamily value) {
    SetAddressFamily(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The autonomous system (AS) path of the route.</p>
   */
  inline const Aws::Vector<AsPathSegment>& GetAsPath() const { return m_asPath; }
  inline bool AsPathHasBeenSet() const { return m_asPathHasBeenSet; }
  template <typename AsPathT = Aws::Vector<AsPathSegment>>
  void SetAsPath(AsPathT&& value) {
    m_asPathHasBeenSet = true;
    m_asPath = std::forward<AsPathT>(value);
  }
  template <typename AsPathT = Aws::Vector<AsPathSegment>>
  Route& WithAsPath(AsPathT&& value) {
    SetAsPath(std::forward<AsPathT>(value));
    return *this;
  }
  template <typename AsPathT = AsPathSegment>
  Route& AddAsPath(AsPathT&& value) {
    m_asPathHasBeenSet = true;
    m_asPath.emplace_back(std::forward<AsPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The BGP communities associated with the route.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCommunities() const { return m_communities; }
  inline bool CommunitiesHasBeenSet() const { return m_communitiesHasBeenSet; }
  template <typename CommunitiesT = Aws::Vector<Aws::String>>
  void SetCommunities(CommunitiesT&& value) {
    m_communitiesHasBeenSet = true;
    m_communities = std::forward<CommunitiesT>(value);
  }
  template <typename CommunitiesT = Aws::Vector<Aws::String>>
  Route& WithCommunities(CommunitiesT&& value) {
    SetCommunities(std::forward<CommunitiesT>(value));
    return *this;
  }
  template <typename CommunitiesT = Aws::String>
  Route& AddCommunities(CommunitiesT&& value) {
    m_communitiesHasBeenSet = true;
    m_communities.emplace_back(std::forward<CommunitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Direct Connect endpoint that terminates the logical connection. This
   * device might be different than the device that terminates the physical
   * connection.</p>
   */
  inline const Aws::String& GetAwsLogicalDeviceId() const { return m_awsLogicalDeviceId; }
  inline bool AwsLogicalDeviceIdHasBeenSet() const { return m_awsLogicalDeviceIdHasBeenSet; }
  template <typename AwsLogicalDeviceIdT = Aws::String>
  void SetAwsLogicalDeviceId(AwsLogicalDeviceIdT&& value) {
    m_awsLogicalDeviceIdHasBeenSet = true;
    m_awsLogicalDeviceId = std::forward<AwsLogicalDeviceIdT>(value);
  }
  template <typename AwsLogicalDeviceIdT = Aws::String>
  Route& WithAwsLogicalDeviceId(AwsLogicalDeviceIdT&& value) {
    SetAwsLogicalDeviceId(std::forward<AwsLogicalDeviceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the route was installed. The value is displayed in UTC
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetRouteInstalledAt() const { return m_routeInstalledAt; }
  inline bool RouteInstalledAtHasBeenSet() const { return m_routeInstalledAtHasBeenSet; }
  template <typename RouteInstalledAtT = Aws::Utils::DateTime>
  void SetRouteInstalledAt(RouteInstalledAtT&& value) {
    m_routeInstalledAtHasBeenSet = true;
    m_routeInstalledAt = std::forward<RouteInstalledAtT>(value);
  }
  template <typename RouteInstalledAtT = Aws::Utils::DateTime>
  Route& WithRouteInstalledAt(RouteInstalledAtT&& value) {
    SetRouteInstalledAt(std::forward<RouteInstalledAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cidr;

  RouteDirection m_routeDirection{RouteDirection::NOT_SET};

  AddressFamily m_addressFamily{AddressFamily::NOT_SET};

  Aws::Vector<AsPathSegment> m_asPath;

  Aws::Vector<Aws::String> m_communities;

  Aws::String m_awsLogicalDeviceId;

  Aws::Utils::DateTime m_routeInstalledAt{};
  bool m_cidrHasBeenSet = false;
  bool m_routeDirectionHasBeenSet = false;
  bool m_addressFamilyHasBeenSet = false;
  bool m_asPathHasBeenSet = false;
  bool m_communitiesHasBeenSet = false;
  bool m_awsLogicalDeviceIdHasBeenSet = false;
  bool m_routeInstalledAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws

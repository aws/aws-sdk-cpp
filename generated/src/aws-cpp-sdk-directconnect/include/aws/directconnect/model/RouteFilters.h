/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/AddressFamily.h>
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
 * <p>The filters used to limit the routes returned by
 * <a>ListVirtualInterfaceRoutes</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/RouteFilters">AWS
 * API Reference</a></p>
 */
class RouteFilters {
 public:
  AWS_DIRECTCONNECT_API RouteFilters() = default;
  AWS_DIRECTCONNECT_API RouteFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_DIRECTCONNECT_API RouteFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The direction of the routes to return.</p> <p>The valid values are
   * <code>accepted</code> (routes received from the customer network) and
   * <code>advertised</code> (routes advertised to the customer network).</p>
   */
  inline RouteDirection GetRouteDirection() const { return m_routeDirection; }
  inline bool RouteDirectionHasBeenSet() const { return m_routeDirectionHasBeenSet; }
  inline void SetRouteDirection(RouteDirection value) {
    m_routeDirectionHasBeenSet = true;
    m_routeDirection = value;
  }
  inline RouteFilters& WithRouteDirection(RouteDirection value) {
    SetRouteDirection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The address family of the routes to return.</p> <p>The valid values are
   * <code>ipv4</code> and <code>ipv6</code>.</p>
   */
  inline AddressFamily GetAddressFamily() const { return m_addressFamily; }
  inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
  inline void SetAddressFamily(AddressFamily value) {
    m_addressFamilyHasBeenSet = true;
    m_addressFamily = value;
  }
  inline RouteFilters& WithAddressFamily(AddressFamily value) {
    SetAddressFamily(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CIDRs (prefixes) used to filter the routes. You can specify up to 10
   * CIDRs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCidrs() const { return m_cidrs; }
  inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }
  template <typename CidrsT = Aws::Vector<Aws::String>>
  void SetCidrs(CidrsT&& value) {
    m_cidrsHasBeenSet = true;
    m_cidrs = std::forward<CidrsT>(value);
  }
  template <typename CidrsT = Aws::Vector<Aws::String>>
  RouteFilters& WithCidrs(CidrsT&& value) {
    SetCidrs(std::forward<CidrsT>(value));
    return *this;
  }
  template <typename CidrsT = Aws::String>
  RouteFilters& AddCidrs(CidrsT&& value) {
    m_cidrsHasBeenSet = true;
    m_cidrs.emplace_back(std::forward<CidrsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The autonomous system (AS) numbers used to filter the routes by their AS
   * path.</p>
   */
  inline const Aws::Vector<long long>& GetAsPath() const { return m_asPath; }
  inline bool AsPathHasBeenSet() const { return m_asPathHasBeenSet; }
  template <typename AsPathT = Aws::Vector<long long>>
  void SetAsPath(AsPathT&& value) {
    m_asPathHasBeenSet = true;
    m_asPath = std::forward<AsPathT>(value);
  }
  template <typename AsPathT = Aws::Vector<long long>>
  RouteFilters& WithAsPath(AsPathT&& value) {
    SetAsPath(std::forward<AsPathT>(value));
    return *this;
  }
  inline RouteFilters& AddAsPath(long long value) {
    m_asPathHasBeenSet = true;
    m_asPath.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The BGP communities used to filter the routes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCommunities() const { return m_communities; }
  inline bool CommunitiesHasBeenSet() const { return m_communitiesHasBeenSet; }
  template <typename CommunitiesT = Aws::Vector<Aws::String>>
  void SetCommunities(CommunitiesT&& value) {
    m_communitiesHasBeenSet = true;
    m_communities = std::forward<CommunitiesT>(value);
  }
  template <typename CommunitiesT = Aws::Vector<Aws::String>>
  RouteFilters& WithCommunities(CommunitiesT&& value) {
    SetCommunities(std::forward<CommunitiesT>(value));
    return *this;
  }
  template <typename CommunitiesT = Aws::String>
  RouteFilters& AddCommunities(CommunitiesT&& value) {
    m_communitiesHasBeenSet = true;
    m_communities.emplace_back(std::forward<CommunitiesT>(value));
    return *this;
  }
  ///@}
 private:
  RouteDirection m_routeDirection{RouteDirection::NOT_SET};

  AddressFamily m_addressFamily{AddressFamily::NOT_SET};

  Aws::Vector<Aws::String> m_cidrs;

  Aws::Vector<long long> m_asPath;

  Aws::Vector<Aws::String> m_communities;
  bool m_routeDirectionHasBeenSet = false;
  bool m_addressFamilyHasBeenSet = false;
  bool m_cidrsHasBeenSet = false;
  bool m_asPathHasBeenSet = false;
  bool m_communitiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws

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
    AWS_FMS_API ExpectedRoute();
    AWS_FMS_API ExpectedRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ExpectedRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the IPv4 CIDR block.</p>
     */
    inline const Aws::String& GetIpV4Cidr() const{ return m_ipV4Cidr; }
    inline bool IpV4CidrHasBeenSet() const { return m_ipV4CidrHasBeenSet; }
    inline void SetIpV4Cidr(const Aws::String& value) { m_ipV4CidrHasBeenSet = true; m_ipV4Cidr = value; }
    inline void SetIpV4Cidr(Aws::String&& value) { m_ipV4CidrHasBeenSet = true; m_ipV4Cidr = std::move(value); }
    inline void SetIpV4Cidr(const char* value) { m_ipV4CidrHasBeenSet = true; m_ipV4Cidr.assign(value); }
    inline ExpectedRoute& WithIpV4Cidr(const Aws::String& value) { SetIpV4Cidr(value); return *this;}
    inline ExpectedRoute& WithIpV4Cidr(Aws::String&& value) { SetIpV4Cidr(std::move(value)); return *this;}
    inline ExpectedRoute& WithIpV4Cidr(const char* value) { SetIpV4Cidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ID of the prefix list for the route.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }
    inline ExpectedRoute& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}
    inline ExpectedRoute& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}
    inline ExpectedRoute& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IPv6 CIDR block.</p>
     */
    inline const Aws::String& GetIpV6Cidr() const{ return m_ipV6Cidr; }
    inline bool IpV6CidrHasBeenSet() const { return m_ipV6CidrHasBeenSet; }
    inline void SetIpV6Cidr(const Aws::String& value) { m_ipV6CidrHasBeenSet = true; m_ipV6Cidr = value; }
    inline void SetIpV6Cidr(Aws::String&& value) { m_ipV6CidrHasBeenSet = true; m_ipV6Cidr = std::move(value); }
    inline void SetIpV6Cidr(const char* value) { m_ipV6CidrHasBeenSet = true; m_ipV6Cidr.assign(value); }
    inline ExpectedRoute& WithIpV6Cidr(const Aws::String& value) { SetIpV6Cidr(value); return *this;}
    inline ExpectedRoute& WithIpV6Cidr(Aws::String&& value) { SetIpV6Cidr(std::move(value)); return *this;}
    inline ExpectedRoute& WithIpV6Cidr(const char* value) { SetIpV6Cidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the contributing subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContributingSubnets() const{ return m_contributingSubnets; }
    inline bool ContributingSubnetsHasBeenSet() const { return m_contributingSubnetsHasBeenSet; }
    inline void SetContributingSubnets(const Aws::Vector<Aws::String>& value) { m_contributingSubnetsHasBeenSet = true; m_contributingSubnets = value; }
    inline void SetContributingSubnets(Aws::Vector<Aws::String>&& value) { m_contributingSubnetsHasBeenSet = true; m_contributingSubnets = std::move(value); }
    inline ExpectedRoute& WithContributingSubnets(const Aws::Vector<Aws::String>& value) { SetContributingSubnets(value); return *this;}
    inline ExpectedRoute& WithContributingSubnets(Aws::Vector<Aws::String>&& value) { SetContributingSubnets(std::move(value)); return *this;}
    inline ExpectedRoute& AddContributingSubnets(const Aws::String& value) { m_contributingSubnetsHasBeenSet = true; m_contributingSubnets.push_back(value); return *this; }
    inline ExpectedRoute& AddContributingSubnets(Aws::String&& value) { m_contributingSubnetsHasBeenSet = true; m_contributingSubnets.push_back(std::move(value)); return *this; }
    inline ExpectedRoute& AddContributingSubnets(const char* value) { m_contributingSubnetsHasBeenSet = true; m_contributingSubnets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the allowed targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedTargets() const{ return m_allowedTargets; }
    inline bool AllowedTargetsHasBeenSet() const { return m_allowedTargetsHasBeenSet; }
    inline void SetAllowedTargets(const Aws::Vector<Aws::String>& value) { m_allowedTargetsHasBeenSet = true; m_allowedTargets = value; }
    inline void SetAllowedTargets(Aws::Vector<Aws::String>&& value) { m_allowedTargetsHasBeenSet = true; m_allowedTargets = std::move(value); }
    inline ExpectedRoute& WithAllowedTargets(const Aws::Vector<Aws::String>& value) { SetAllowedTargets(value); return *this;}
    inline ExpectedRoute& WithAllowedTargets(Aws::Vector<Aws::String>&& value) { SetAllowedTargets(std::move(value)); return *this;}
    inline ExpectedRoute& AddAllowedTargets(const Aws::String& value) { m_allowedTargetsHasBeenSet = true; m_allowedTargets.push_back(value); return *this; }
    inline ExpectedRoute& AddAllowedTargets(Aws::String&& value) { m_allowedTargetsHasBeenSet = true; m_allowedTargets.push_back(std::move(value)); return *this; }
    inline ExpectedRoute& AddAllowedTargets(const char* value) { m_allowedTargetsHasBeenSet = true; m_allowedTargets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the route table ID.</p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }
    inline ExpectedRoute& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}
    inline ExpectedRoute& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}
    inline ExpectedRoute& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}
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

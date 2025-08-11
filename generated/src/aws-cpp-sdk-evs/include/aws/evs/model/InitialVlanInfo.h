/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
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
namespace EVS
{
namespace Model
{

  /**
   * <p>An object that represents an initial VLAN subnet for the Amazon EVS
   * environment. Amazon EVS creates initial VLAN subnets when you first create the
   * environment. Amazon EVS creates the following 10 VLAN subnets: host management
   * VLAN, vMotion VLAN, vSAN VLAN, VTEP VLAN, Edge VTEP VLAN, Management VM VLAN,
   * HCX uplink VLAN, NSX uplink VLAN, expansion VLAN 1, expansion VLAN 2.</p> 
   * <p>For each Amazon EVS VLAN subnet, you must specify a non-overlapping CIDR
   * block. Amazon EVS VLAN subnets have a minimum CIDR block size of /28 and a
   * maximum size of /24.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/InitialVlanInfo">AWS
   * API Reference</a></p>
   */
  class InitialVlanInfo
  {
  public:
    AWS_EVS_API InitialVlanInfo() = default;
    AWS_EVS_API InitialVlanInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API InitialVlanInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The CIDR block that you provide to create an Amazon EVS VLAN subnet. Amazon
     * EVS VLAN subnets have a minimum CIDR block size of /28 and a maximum size of
     * /24. Amazon EVS VLAN subnet CIDR blocks must not overlap with other subnets in
     * the VPC.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    InitialVlanInfo& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws

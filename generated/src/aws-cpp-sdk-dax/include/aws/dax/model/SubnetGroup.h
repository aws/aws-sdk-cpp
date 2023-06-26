/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dax/model/Subnet.h>
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
namespace DAX
{
namespace Model
{

  /**
   * <p>Represents the output of one of the following actions:</p> <ul> <li> <p>
   * <i>CreateSubnetGroup</i> </p> </li> <li> <p> <i>ModifySubnetGroup</i> </p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/SubnetGroup">AWS API
   * Reference</a></p>
   */
  class SubnetGroup
  {
  public:
    AWS_DAX_API SubnetGroup();
    AWS_DAX_API SubnetGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API SubnetGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the subnet group.</p>
     */
    inline const Aws::String& GetSubnetGroupName() const{ return m_subnetGroupName; }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline bool SubnetGroupNameHasBeenSet() const { return m_subnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline void SetSubnetGroupName(const Aws::String& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = value; }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline void SetSubnetGroupName(Aws::String&& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = std::move(value); }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline void SetSubnetGroupName(const char* value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName.assign(value); }

    /**
     * <p>The name of the subnet group.</p>
     */
    inline SubnetGroup& WithSubnetGroupName(const Aws::String& value) { SetSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the subnet group.</p>
     */
    inline SubnetGroup& WithSubnetGroupName(Aws::String&& value) { SetSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the subnet group.</p>
     */
    inline SubnetGroup& WithSubnetGroupName(const char* value) { SetSubnetGroupName(value); return *this;}


    /**
     * <p>The description of the subnet group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the subnet group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the subnet group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the subnet group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the subnet group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the subnet group.</p>
     */
    inline SubnetGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the subnet group.</p>
     */
    inline SubnetGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the subnet group.</p>
     */
    inline SubnetGroup& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the subnet group.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the subnet group.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the subnet group.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the subnet group.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the subnet group.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the subnet group.</p>
     */
    inline SubnetGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the subnet group.</p>
     */
    inline SubnetGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the subnet group.</p>
     */
    inline SubnetGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>A list of subnets associated with the subnet group. </p>
     */
    inline const Aws::Vector<Subnet>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>A list of subnets associated with the subnet group. </p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>A list of subnets associated with the subnet group. </p>
     */
    inline void SetSubnets(const Aws::Vector<Subnet>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>A list of subnets associated with the subnet group. </p>
     */
    inline void SetSubnets(Aws::Vector<Subnet>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>A list of subnets associated with the subnet group. </p>
     */
    inline SubnetGroup& WithSubnets(const Aws::Vector<Subnet>& value) { SetSubnets(value); return *this;}

    /**
     * <p>A list of subnets associated with the subnet group. </p>
     */
    inline SubnetGroup& WithSubnets(Aws::Vector<Subnet>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>A list of subnets associated with the subnet group. </p>
     */
    inline SubnetGroup& AddSubnets(const Subnet& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>A list of subnets associated with the subnet group. </p>
     */
    inline SubnetGroup& AddSubnets(Subnet&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_subnetGroupName;
    bool m_subnetGroupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Subnet> m_subnets;
    bool m_subnetsHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws

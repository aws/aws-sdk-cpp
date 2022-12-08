/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * The properties for a private VPC Output
When this property is specified, the
   * output egress addresses will be created in a user specified VPC
<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VpcOutputSettings">AWS
   * API Reference</a></p>
   */
  class VpcOutputSettings
  {
  public:
    AWS_MEDIALIVE_API VpcOutputSettings();
    AWS_MEDIALIVE_API VpcOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API VpcOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * List of public address allocation ids to associate with ENIs that will be
     * created in Output VPC.
Must specify one for SINGLE_PIPELINE, two for STANDARD
     * channels

     */
    inline const Aws::Vector<Aws::String>& GetPublicAddressAllocationIds() const{ return m_publicAddressAllocationIds; }

    /**
     * List of public address allocation ids to associate with ENIs that will be
     * created in Output VPC.
Must specify one for SINGLE_PIPELINE, two for STANDARD
     * channels

     */
    inline bool PublicAddressAllocationIdsHasBeenSet() const { return m_publicAddressAllocationIdsHasBeenSet; }

    /**
     * List of public address allocation ids to associate with ENIs that will be
     * created in Output VPC.
Must specify one for SINGLE_PIPELINE, two for STANDARD
     * channels

     */
    inline void SetPublicAddressAllocationIds(const Aws::Vector<Aws::String>& value) { m_publicAddressAllocationIdsHasBeenSet = true; m_publicAddressAllocationIds = value; }

    /**
     * List of public address allocation ids to associate with ENIs that will be
     * created in Output VPC.
Must specify one for SINGLE_PIPELINE, two for STANDARD
     * channels

     */
    inline void SetPublicAddressAllocationIds(Aws::Vector<Aws::String>&& value) { m_publicAddressAllocationIdsHasBeenSet = true; m_publicAddressAllocationIds = std::move(value); }

    /**
     * List of public address allocation ids to associate with ENIs that will be
     * created in Output VPC.
Must specify one for SINGLE_PIPELINE, two for STANDARD
     * channels

     */
    inline VpcOutputSettings& WithPublicAddressAllocationIds(const Aws::Vector<Aws::String>& value) { SetPublicAddressAllocationIds(value); return *this;}

    /**
     * List of public address allocation ids to associate with ENIs that will be
     * created in Output VPC.
Must specify one for SINGLE_PIPELINE, two for STANDARD
     * channels

     */
    inline VpcOutputSettings& WithPublicAddressAllocationIds(Aws::Vector<Aws::String>&& value) { SetPublicAddressAllocationIds(std::move(value)); return *this;}

    /**
     * List of public address allocation ids to associate with ENIs that will be
     * created in Output VPC.
Must specify one for SINGLE_PIPELINE, two for STANDARD
     * channels

     */
    inline VpcOutputSettings& AddPublicAddressAllocationIds(const Aws::String& value) { m_publicAddressAllocationIdsHasBeenSet = true; m_publicAddressAllocationIds.push_back(value); return *this; }

    /**
     * List of public address allocation ids to associate with ENIs that will be
     * created in Output VPC.
Must specify one for SINGLE_PIPELINE, two for STANDARD
     * channels

     */
    inline VpcOutputSettings& AddPublicAddressAllocationIds(Aws::String&& value) { m_publicAddressAllocationIdsHasBeenSet = true; m_publicAddressAllocationIds.push_back(std::move(value)); return *this; }

    /**
     * List of public address allocation ids to associate with ENIs that will be
     * created in Output VPC.
Must specify one for SINGLE_PIPELINE, two for STANDARD
     * channels

     */
    inline VpcOutputSettings& AddPublicAddressAllocationIds(const char* value) { m_publicAddressAllocationIdsHasBeenSet = true; m_publicAddressAllocationIds.push_back(value); return *this; }


    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Output VPC network
     * interfaces.
If none are specified then the VPC default security group will be
     * used

     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Output VPC network
     * interfaces.
If none are specified then the VPC default security group will be
     * used

     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Output VPC network
     * interfaces.
If none are specified then the VPC default security group will be
     * used

     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Output VPC network
     * interfaces.
If none are specified then the VPC default security group will be
     * used

     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Output VPC network
     * interfaces.
If none are specified then the VPC default security group will be
     * used

     */
    inline VpcOutputSettings& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Output VPC network
     * interfaces.
If none are specified then the VPC default security group will be
     * used

     */
    inline VpcOutputSettings& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Output VPC network
     * interfaces.
If none are specified then the VPC default security group will be
     * used

     */
    inline VpcOutputSettings& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Output VPC network
     * interfaces.
If none are specified then the VPC default security group will be
     * used

     */
    inline VpcOutputSettings& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * A list of up to 5 EC2 VPC security group IDs to attach to the Output VPC network
     * interfaces.
If none are specified then the VPC default security group will be
     * used

     */
    inline VpcOutputSettings& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * A list of VPC subnet IDs from the same VPC.
If STANDARD channel, subnet IDs must
     * be mapped to two unique availability zones (AZ).

     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * A list of VPC subnet IDs from the same VPC.
If STANDARD channel, subnet IDs must
     * be mapped to two unique availability zones (AZ).

     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * A list of VPC subnet IDs from the same VPC.
If STANDARD channel, subnet IDs must
     * be mapped to two unique availability zones (AZ).

     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * A list of VPC subnet IDs from the same VPC.
If STANDARD channel, subnet IDs must
     * be mapped to two unique availability zones (AZ).

     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * A list of VPC subnet IDs from the same VPC.
If STANDARD channel, subnet IDs must
     * be mapped to two unique availability zones (AZ).

     */
    inline VpcOutputSettings& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * A list of VPC subnet IDs from the same VPC.
If STANDARD channel, subnet IDs must
     * be mapped to two unique availability zones (AZ).

     */
    inline VpcOutputSettings& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * A list of VPC subnet IDs from the same VPC.
If STANDARD channel, subnet IDs must
     * be mapped to two unique availability zones (AZ).

     */
    inline VpcOutputSettings& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * A list of VPC subnet IDs from the same VPC.
If STANDARD channel, subnet IDs must
     * be mapped to two unique availability zones (AZ).

     */
    inline VpcOutputSettings& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * A list of VPC subnet IDs from the same VPC.
If STANDARD channel, subnet IDs must
     * be mapped to two unique availability zones (AZ).

     */
    inline VpcOutputSettings& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_publicAddressAllocationIds;
    bool m_publicAddressAllocationIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

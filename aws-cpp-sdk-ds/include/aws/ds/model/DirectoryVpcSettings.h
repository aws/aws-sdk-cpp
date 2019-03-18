/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains VPC information for the <a>CreateDirectory</a> or
   * <a>CreateMicrosoftAD</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DirectoryVpcSettings">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API DirectoryVpcSettings
  {
  public:
    DirectoryVpcSettings();
    DirectoryVpcSettings(Aws::Utils::Json::JsonView jsonValue);
    DirectoryVpcSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the VPC in which to create the directory.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The identifier of the VPC in which to create the directory.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The identifier of the VPC in which to create the directory.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the VPC in which to create the directory.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The identifier of the VPC in which to create the directory.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The identifier of the VPC in which to create the directory.</p>
     */
    inline DirectoryVpcSettings& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the VPC in which to create the directory.</p>
     */
    inline DirectoryVpcSettings& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the VPC in which to create the directory.</p>
     */
    inline DirectoryVpcSettings& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The identifiers of the subnets for the directory servers. The two subnets
     * must be in different Availability Zones. AWS Directory Service creates a
     * directory server and a DNS server in each of these subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The identifiers of the subnets for the directory servers. The two subnets
     * must be in different Availability Zones. AWS Directory Service creates a
     * directory server and a DNS server in each of these subnets.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The identifiers of the subnets for the directory servers. The two subnets
     * must be in different Availability Zones. AWS Directory Service creates a
     * directory server and a DNS server in each of these subnets.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The identifiers of the subnets for the directory servers. The two subnets
     * must be in different Availability Zones. AWS Directory Service creates a
     * directory server and a DNS server in each of these subnets.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The identifiers of the subnets for the directory servers. The two subnets
     * must be in different Availability Zones. AWS Directory Service creates a
     * directory server and a DNS server in each of these subnets.</p>
     */
    inline DirectoryVpcSettings& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The identifiers of the subnets for the directory servers. The two subnets
     * must be in different Availability Zones. AWS Directory Service creates a
     * directory server and a DNS server in each of these subnets.</p>
     */
    inline DirectoryVpcSettings& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the subnets for the directory servers. The two subnets
     * must be in different Availability Zones. AWS Directory Service creates a
     * directory server and a DNS server in each of these subnets.</p>
     */
    inline DirectoryVpcSettings& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the subnets for the directory servers. The two subnets
     * must be in different Availability Zones. AWS Directory Service creates a
     * directory server and a DNS server in each of these subnets.</p>
     */
    inline DirectoryVpcSettings& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the subnets for the directory servers. The two subnets
     * must be in different Availability Zones. AWS Directory Service creates a
     * directory server and a DNS server in each of these subnets.</p>
     */
    inline DirectoryVpcSettings& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws

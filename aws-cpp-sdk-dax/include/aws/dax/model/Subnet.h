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
#include <aws/dax/DAX_EXPORTS.h>
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
namespace DAX
{
namespace Model
{

  /**
   * <p>Represents the subnet associated with a DAX cluster. This parameter refers to
   * subnets defined in Amazon Virtual Private Cloud (Amazon VPC) and used with
   * DAX.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/Subnet">AWS API
   * Reference</a></p>
   */
  class AWS_DAX_API Subnet
  {
  public:
    Subnet();
    Subnet(Aws::Utils::Json::JsonView jsonValue);
    Subnet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system-assigned identifier for the subnet.</p>
     */
    inline const Aws::String& GetSubnetIdentifier() const{ return m_subnetIdentifier; }

    /**
     * <p>The system-assigned identifier for the subnet.</p>
     */
    inline bool SubnetIdentifierHasBeenSet() const { return m_subnetIdentifierHasBeenSet; }

    /**
     * <p>The system-assigned identifier for the subnet.</p>
     */
    inline void SetSubnetIdentifier(const Aws::String& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = value; }

    /**
     * <p>The system-assigned identifier for the subnet.</p>
     */
    inline void SetSubnetIdentifier(Aws::String&& value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier = std::move(value); }

    /**
     * <p>The system-assigned identifier for the subnet.</p>
     */
    inline void SetSubnetIdentifier(const char* value) { m_subnetIdentifierHasBeenSet = true; m_subnetIdentifier.assign(value); }

    /**
     * <p>The system-assigned identifier for the subnet.</p>
     */
    inline Subnet& WithSubnetIdentifier(const Aws::String& value) { SetSubnetIdentifier(value); return *this;}

    /**
     * <p>The system-assigned identifier for the subnet.</p>
     */
    inline Subnet& WithSubnetIdentifier(Aws::String&& value) { SetSubnetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The system-assigned identifier for the subnet.</p>
     */
    inline Subnet& WithSubnetIdentifier(const char* value) { SetSubnetIdentifier(value); return *this;}


    /**
     * <p>The Availability Zone (AZ) for subnet subnet.</p>
     */
    inline const Aws::String& GetSubnetAvailabilityZone() const{ return m_subnetAvailabilityZone; }

    /**
     * <p>The Availability Zone (AZ) for subnet subnet.</p>
     */
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone (AZ) for subnet subnet.</p>
     */
    inline void SetSubnetAvailabilityZone(const Aws::String& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = value; }

    /**
     * <p>The Availability Zone (AZ) for subnet subnet.</p>
     */
    inline void SetSubnetAvailabilityZone(Aws::String&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone (AZ) for subnet subnet.</p>
     */
    inline void SetSubnetAvailabilityZone(const char* value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone.assign(value); }

    /**
     * <p>The Availability Zone (AZ) for subnet subnet.</p>
     */
    inline Subnet& WithSubnetAvailabilityZone(const Aws::String& value) { SetSubnetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone (AZ) for subnet subnet.</p>
     */
    inline Subnet& WithSubnetAvailabilityZone(Aws::String&& value) { SetSubnetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone (AZ) for subnet subnet.</p>
     */
    inline Subnet& WithSubnetAvailabilityZone(const char* value) { SetSubnetAvailabilityZone(value); return *this;}

  private:

    Aws::String m_subnetIdentifier;
    bool m_subnetIdentifierHasBeenSet;

    Aws::String m_subnetAvailabilityZone;
    bool m_subnetAvailabilityZoneHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws

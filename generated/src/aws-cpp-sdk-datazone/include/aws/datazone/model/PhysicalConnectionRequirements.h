/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>Physical connection requirements of a connection.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/PhysicalConnectionRequirements">AWS
   * API Reference</a></p>
   */
  class PhysicalConnectionRequirements
  {
  public:
    AWS_DATAZONE_API PhysicalConnectionRequirements();
    AWS_DATAZONE_API PhysicalConnectionRequirements(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API PhysicalConnectionRequirements& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The availability zone of the physical connection requirements of a
     * connection. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline PhysicalConnectionRequirements& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline PhysicalConnectionRequirements& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline PhysicalConnectionRequirements& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group ID list of the physical connection requirements of a connection.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIdList() const{ return m_securityGroupIdList; }
    inline bool SecurityGroupIdListHasBeenSet() const { return m_securityGroupIdListHasBeenSet; }
    inline void SetSecurityGroupIdList(const Aws::Vector<Aws::String>& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList = value; }
    inline void SetSecurityGroupIdList(Aws::Vector<Aws::String>&& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList = std::move(value); }
    inline PhysicalConnectionRequirements& WithSecurityGroupIdList(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIdList(value); return *this;}
    inline PhysicalConnectionRequirements& WithSecurityGroupIdList(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIdList(std::move(value)); return *this;}
    inline PhysicalConnectionRequirements& AddSecurityGroupIdList(const Aws::String& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList.push_back(value); return *this; }
    inline PhysicalConnectionRequirements& AddSecurityGroupIdList(Aws::String&& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList.push_back(std::move(value)); return *this; }
    inline PhysicalConnectionRequirements& AddSecurityGroupIdList(const char* value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subnet ID of the physical connection requirements of a connection. </p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline PhysicalConnectionRequirements& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline PhysicalConnectionRequirements& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline PhysicalConnectionRequirements& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet ID list of the physical connection requirements of a connection.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIdList() const{ return m_subnetIdList; }
    inline bool SubnetIdListHasBeenSet() const { return m_subnetIdListHasBeenSet; }
    inline void SetSubnetIdList(const Aws::Vector<Aws::String>& value) { m_subnetIdListHasBeenSet = true; m_subnetIdList = value; }
    inline void SetSubnetIdList(Aws::Vector<Aws::String>&& value) { m_subnetIdListHasBeenSet = true; m_subnetIdList = std::move(value); }
    inline PhysicalConnectionRequirements& WithSubnetIdList(const Aws::Vector<Aws::String>& value) { SetSubnetIdList(value); return *this;}
    inline PhysicalConnectionRequirements& WithSubnetIdList(Aws::Vector<Aws::String>&& value) { SetSubnetIdList(std::move(value)); return *this;}
    inline PhysicalConnectionRequirements& AddSubnetIdList(const Aws::String& value) { m_subnetIdListHasBeenSet = true; m_subnetIdList.push_back(value); return *this; }
    inline PhysicalConnectionRequirements& AddSubnetIdList(Aws::String&& value) { m_subnetIdListHasBeenSet = true; m_subnetIdList.push_back(std::move(value)); return *this; }
    inline PhysicalConnectionRequirements& AddSubnetIdList(const char* value) { m_subnetIdListHasBeenSet = true; m_subnetIdList.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIdList;
    bool m_securityGroupIdListHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIdList;
    bool m_subnetIdListHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

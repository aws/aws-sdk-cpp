/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/CreateMountTargetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateMountTargetResult::CreateMountTargetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateMountTargetResult& CreateMountTargetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");
    m_ownerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MountTargetId"))
  {
    m_mountTargetId = jsonValue.GetString("MountTargetId");
    m_mountTargetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");
    m_fileSystemIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");
    m_subnetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LifeCycleState"))
  {
    m_lifeCycleState = LifeCycleStateMapper::GetLifeCycleStateForName(jsonValue.GetString("LifeCycleState"));
    m_lifeCycleStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");
    m_ipAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ipv6Address"))
  {
    m_ipv6Address = jsonValue.GetString("Ipv6Address");
    m_ipv6AddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("NetworkInterfaceId");
    m_networkInterfaceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("AvailabilityZoneId");
    m_availabilityZoneIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailabilityZoneName"))
  {
    m_availabilityZoneName = jsonValue.GetString("AvailabilityZoneName");
    m_availabilityZoneNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");
    m_vpcIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}

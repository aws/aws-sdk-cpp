/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/RequestSpotInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

RequestSpotInstancesRequest::RequestSpotInstancesRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_type(SpotInstanceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_validFromHasBeenSet(false),
    m_validUntilHasBeenSet(false),
    m_launchGroupHasBeenSet(false),
    m_availabilityZoneGroupHasBeenSet(false),
    m_blockDurationMinutes(0),
    m_blockDurationMinutesHasBeenSet(false),
    m_launchSpecificationHasBeenSet(false)
{
}

Aws::String RequestSpotInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SpotInstances&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_spotPriceHasBeenSet)
  {
    ss << "SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_instanceCountHasBeenSet)
  {
    ss << "InstanceCount=" << m_instanceCount << "&";
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << SpotInstanceTypeMapper::GetNameForSpotInstanceType(m_type) << "&";
  }

  if(m_validFromHasBeenSet)
  {
    ss << "ValidFrom=" << StringUtils::URLEncode(m_validFrom.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_validUntilHasBeenSet)
  {
    ss << "ValidUntil=" << StringUtils::URLEncode(m_validUntil.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_launchGroupHasBeenSet)
  {
    ss << "LaunchGroup=" << StringUtils::URLEncode(m_launchGroup.c_str()) << "&";
  }

  if(m_availabilityZoneGroupHasBeenSet)
  {
    ss << "AvailabilityZoneGroup=" << StringUtils::URLEncode(m_availabilityZoneGroup.c_str()) << "&";
  }

  if(m_blockDurationMinutesHasBeenSet)
  {
    ss << "BlockDurationMinutes=" << m_blockDurationMinutes << "&";
  }

  if(m_launchSpecificationHasBeenSet)
  {
    m_launchSpecification.OutputToStream(ss, "LaunchSpecification");
  }

  ss << "Version=2015-10-01";
  return ss.str();
}


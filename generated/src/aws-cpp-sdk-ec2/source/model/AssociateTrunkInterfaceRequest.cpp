/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssociateTrunkInterfaceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AssociateTrunkInterfaceRequest::AssociateTrunkInterfaceRequest() : 
    m_branchInterfaceIdHasBeenSet(false),
    m_trunkInterfaceIdHasBeenSet(false),
    m_vlanId(0),
    m_vlanIdHasBeenSet(false),
    m_greKey(0),
    m_greKeyHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String AssociateTrunkInterfaceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssociateTrunkInterface&";
  if(m_branchInterfaceIdHasBeenSet)
  {
    ss << "BranchInterfaceId=" << StringUtils::URLEncode(m_branchInterfaceId.c_str()) << "&";
  }

  if(m_trunkInterfaceIdHasBeenSet)
  {
    ss << "TrunkInterfaceId=" << StringUtils::URLEncode(m_trunkInterfaceId.c_str()) << "&";
  }

  if(m_vlanIdHasBeenSet)
  {
    ss << "VlanId=" << m_vlanId << "&";
  }

  if(m_greKeyHasBeenSet)
  {
    ss << "GreKey=" << m_greKey << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AssociateTrunkInterfaceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

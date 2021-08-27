/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ProvisionByoipCidrRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ProvisionByoipCidrRequest::ProvisionByoipCidrRequest() : 
    m_cidrHasBeenSet(false),
    m_cidrAuthorizationContextHasBeenSet(false),
    m_publiclyAdvertisable(false),
    m_publiclyAdvertisableHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_poolTagSpecificationsHasBeenSet(false)
{
}

Aws::String ProvisionByoipCidrRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ProvisionByoipCidr&";
  if(m_cidrHasBeenSet)
  {
    ss << "Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if(m_cidrAuthorizationContextHasBeenSet)
  {
    m_cidrAuthorizationContext.OutputToStream(ss, "CidrAuthorizationContext");
  }

  if(m_publiclyAdvertisableHasBeenSet)
  {
    ss << "PubliclyAdvertisable=" << std::boolalpha << m_publiclyAdvertisable << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_poolTagSpecificationsHasBeenSet)
  {
    unsigned poolTagSpecificationsCount = 1;
    for(auto& item : m_poolTagSpecifications)
    {
      item.OutputToStream(ss, "PoolTagSpecification.", poolTagSpecificationsCount, "");
      poolTagSpecificationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ProvisionByoipCidrRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

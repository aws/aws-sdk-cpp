/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateVerifiedAccessEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateVerifiedAccessEndpointRequest::CreateVerifiedAccessEndpointRequest() : 
    m_verifiedAccessGroupIdHasBeenSet(false),
    m_endpointType(VerifiedAccessEndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_attachmentType(VerifiedAccessEndpointAttachmentType::NOT_SET),
    m_attachmentTypeHasBeenSet(false),
    m_domainCertificateArnHasBeenSet(false),
    m_applicationDomainHasBeenSet(false),
    m_endpointDomainPrefixHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_loadBalancerOptionsHasBeenSet(false),
    m_networkInterfaceOptionsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateVerifiedAccessEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateVerifiedAccessEndpoint&";
  if(m_verifiedAccessGroupIdHasBeenSet)
  {
    ss << "VerifiedAccessGroupId=" << StringUtils::URLEncode(m_verifiedAccessGroupId.c_str()) << "&";
  }

  if(m_endpointTypeHasBeenSet)
  {
    ss << "EndpointType=" << VerifiedAccessEndpointTypeMapper::GetNameForVerifiedAccessEndpointType(m_endpointType) << "&";
  }

  if(m_attachmentTypeHasBeenSet)
  {
    ss << "AttachmentType=" << VerifiedAccessEndpointAttachmentTypeMapper::GetNameForVerifiedAccessEndpointAttachmentType(m_attachmentType) << "&";
  }

  if(m_domainCertificateArnHasBeenSet)
  {
    ss << "DomainCertificateArn=" << StringUtils::URLEncode(m_domainCertificateArn.c_str()) << "&";
  }

  if(m_applicationDomainHasBeenSet)
  {
    ss << "ApplicationDomain=" << StringUtils::URLEncode(m_applicationDomain.c_str()) << "&";
  }

  if(m_endpointDomainPrefixHasBeenSet)
  {
    ss << "EndpointDomainPrefix=" << StringUtils::URLEncode(m_endpointDomainPrefix.c_str()) << "&";
  }

  if(m_securityGroupIdsHasBeenSet)
  {
    unsigned securityGroupIdsCount = 1;
    for(auto& item : m_securityGroupIds)
    {
      ss << "SecurityGroupId." << securityGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      securityGroupIdsCount++;
    }
  }

  if(m_loadBalancerOptionsHasBeenSet)
  {
    m_loadBalancerOptions.OutputToStream(ss, "LoadBalancerOptions");
  }

  if(m_networkInterfaceOptionsHasBeenSet)
  {
    m_networkInterfaceOptions.OutputToStream(ss, "NetworkInterfaceOptions");
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_policyDocumentHasBeenSet)
  {
    ss << "PolicyDocument=" << StringUtils::URLEncode(m_policyDocument.c_str()) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
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


void  CreateVerifiedAccessEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

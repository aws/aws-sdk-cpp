/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateIpamPoolRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateIpamPoolRequest::CreateIpamPoolRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ipamScopeIdHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_sourceIpamPoolIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_addressFamily(AddressFamily::NOT_SET),
    m_addressFamilyHasBeenSet(false),
    m_autoImport(false),
    m_autoImportHasBeenSet(false),
    m_publiclyAdvertisable(false),
    m_publiclyAdvertisableHasBeenSet(false),
    m_allocationMinNetmaskLength(0),
    m_allocationMinNetmaskLengthHasBeenSet(false),
    m_allocationMaxNetmaskLength(0),
    m_allocationMaxNetmaskLengthHasBeenSet(false),
    m_allocationDefaultNetmaskLength(0),
    m_allocationDefaultNetmaskLengthHasBeenSet(false),
    m_allocationResourceTagsHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_awsService(IpamPoolAwsService::NOT_SET),
    m_awsServiceHasBeenSet(false),
    m_publicIpSource(IpamPoolPublicIpSource::NOT_SET),
    m_publicIpSourceHasBeenSet(false),
    m_sourceResourceHasBeenSet(false)
{
}

Aws::String CreateIpamPoolRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateIpamPool&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamScopeIdHasBeenSet)
  {
    ss << "IpamScopeId=" << StringUtils::URLEncode(m_ipamScopeId.c_str()) << "&";
  }

  if(m_localeHasBeenSet)
  {
    ss << "Locale=" << StringUtils::URLEncode(m_locale.c_str()) << "&";
  }

  if(m_sourceIpamPoolIdHasBeenSet)
  {
    ss << "SourceIpamPoolId=" << StringUtils::URLEncode(m_sourceIpamPoolId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_addressFamilyHasBeenSet)
  {
    ss << "AddressFamily=" << AddressFamilyMapper::GetNameForAddressFamily(m_addressFamily) << "&";
  }

  if(m_autoImportHasBeenSet)
  {
    ss << "AutoImport=" << std::boolalpha << m_autoImport << "&";
  }

  if(m_publiclyAdvertisableHasBeenSet)
  {
    ss << "PubliclyAdvertisable=" << std::boolalpha << m_publiclyAdvertisable << "&";
  }

  if(m_allocationMinNetmaskLengthHasBeenSet)
  {
    ss << "AllocationMinNetmaskLength=" << m_allocationMinNetmaskLength << "&";
  }

  if(m_allocationMaxNetmaskLengthHasBeenSet)
  {
    ss << "AllocationMaxNetmaskLength=" << m_allocationMaxNetmaskLength << "&";
  }

  if(m_allocationDefaultNetmaskLengthHasBeenSet)
  {
    ss << "AllocationDefaultNetmaskLength=" << m_allocationDefaultNetmaskLength << "&";
  }

  if(m_allocationResourceTagsHasBeenSet)
  {
    unsigned allocationResourceTagsCount = 1;
    for(auto& item : m_allocationResourceTags)
    {
      item.OutputToStream(ss, "AllocationResourceTag.", allocationResourceTagsCount, "");
      allocationResourceTagsCount++;
    }
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

  if(m_awsServiceHasBeenSet)
  {
    ss << "AwsService=" << IpamPoolAwsServiceMapper::GetNameForIpamPoolAwsService(m_awsService) << "&";
  }

  if(m_publicIpSourceHasBeenSet)
  {
    ss << "PublicIpSource=" << IpamPoolPublicIpSourceMapper::GetNameForIpamPoolPublicIpSource(m_publicIpSource) << "&";
  }

  if(m_sourceResourceHasBeenSet)
  {
    m_sourceResource.OutputToStream(ss, "SourceResource");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateIpamPoolRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

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
#include <aws/redshift/model/CreateHsmConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

CreateHsmConfigurationRequest::CreateHsmConfigurationRequest() : 
    m_hsmConfigurationIdentifierHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hsmIpAddressHasBeenSet(false),
    m_hsmPartitionNameHasBeenSet(false),
    m_hsmPartitionPasswordHasBeenSet(false),
    m_hsmServerPublicCertificateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateHsmConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateHsmConfiguration&";
  if(m_hsmConfigurationIdentifierHasBeenSet)
  {
    ss << "HsmConfigurationIdentifier=" << StringUtils::URLEncode(m_hsmConfigurationIdentifier.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_hsmIpAddressHasBeenSet)
  {
    ss << "HsmIpAddress=" << StringUtils::URLEncode(m_hsmIpAddress.c_str()) << "&";
  }

  if(m_hsmPartitionNameHasBeenSet)
  {
    ss << "HsmPartitionName=" << StringUtils::URLEncode(m_hsmPartitionName.c_str()) << "&";
  }

  if(m_hsmPartitionPasswordHasBeenSet)
  {
    ss << "HsmPartitionPassword=" << StringUtils::URLEncode(m_hsmPartitionPassword.c_str()) << "&";
  }

  if(m_hsmServerPublicCertificateHasBeenSet)
  {
    ss << "HsmServerPublicCertificate=" << StringUtils::URLEncode(m_hsmServerPublicCertificate.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateHsmConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateHsmConfiguration&";
  ss << "HsmConfigurationIdentifier=" << StringUtils::URLEncode(m_hsmConfigurationIdentifier.c_str()) << "&";
  ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  ss << "HsmIpAddress=" << StringUtils::URLEncode(m_hsmIpAddress.c_str()) << "&";
  ss << "HsmPartitionName=" << StringUtils::URLEncode(m_hsmPartitionName.c_str()) << "&";
  ss << "HsmPartitionPassword=" << StringUtils::URLEncode(m_hsmPartitionPassword.c_str()) << "&";
  ss << "HsmServerPublicCertificate=" << StringUtils::URLEncode(m_hsmServerPublicCertificate.c_str()) << "&";
  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tag.", tagsCount, "");
      tagsCount++;
    }
  }
  ss << "Version=2012-12-01";
  return ss.str();
}


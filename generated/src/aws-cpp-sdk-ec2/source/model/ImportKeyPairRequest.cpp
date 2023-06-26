/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImportKeyPairRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ImportKeyPairRequest::ImportKeyPairRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_publicKeyMaterialHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false)
{
}

Aws::String ImportKeyPairRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ImportKeyPair&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_keyNameHasBeenSet)
  {
    ss << "KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }

  if(m_publicKeyMaterialHasBeenSet)
  {
    ss << "PublicKeyMaterial=" << HashingUtils::Base64Encode(m_publicKeyMaterial) << "&";
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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ImportKeyPairRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

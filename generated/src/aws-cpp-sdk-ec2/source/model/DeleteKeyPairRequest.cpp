/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteKeyPairRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteKeyPairRequest::DeleteKeyPairRequest() : 
    m_keyNameHasBeenSet(false),
    m_keyPairIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DeleteKeyPairRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteKeyPair&";
  if(m_keyNameHasBeenSet)
  {
    ss << "KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }

  if(m_keyPairIdHasBeenSet)
  {
    ss << "KeyPairId=" << StringUtils::URLEncode(m_keyPairId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteKeyPairRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

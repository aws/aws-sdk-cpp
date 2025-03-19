/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetInstanceTpmEkPubRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String GetInstanceTpmEkPubRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetInstanceTpmEkPub&";
  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_keyTypeHasBeenSet)
  {
    ss << "KeyType=" << StringUtils::URLEncode(EkPubKeyTypeMapper::GetNameForEkPubKeyType(m_keyType)) << "&";
  }

  if(m_keyFormatHasBeenSet)
  {
    ss << "KeyFormat=" << StringUtils::URLEncode(EkPubKeyFormatMapper::GetNameForEkPubKeyFormat(m_keyFormat)) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetInstanceTpmEkPubRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

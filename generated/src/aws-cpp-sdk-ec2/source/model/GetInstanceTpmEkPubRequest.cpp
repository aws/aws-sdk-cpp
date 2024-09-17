/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetInstanceTpmEkPubRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

GetInstanceTpmEkPubRequest::GetInstanceTpmEkPubRequest() : 
    m_instanceIdHasBeenSet(false),
    m_keyType(EkPubKeyType::NOT_SET),
    m_keyTypeHasBeenSet(false),
    m_keyFormat(EkPubKeyFormat::NOT_SET),
    m_keyFormatHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

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
    ss << "KeyType=" << EkPubKeyTypeMapper::GetNameForEkPubKeyType(m_keyType) << "&";
  }

  if(m_keyFormatHasBeenSet)
  {
    ss << "KeyFormat=" << EkPubKeyFormatMapper::GetNameForEkPubKeyFormat(m_keyFormat) << "&";
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

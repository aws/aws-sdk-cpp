/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/AssumeRoleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

AssumeRoleRequest::AssumeRoleRequest() : 
    m_roleArnHasBeenSet(false),
    m_roleSessionNameHasBeenSet(false),
    m_policyArnsHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_transitiveTagKeysHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_tokenCodeHasBeenSet(false)
{
}

Aws::String AssumeRoleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssumeRole&";
  if(m_roleArnHasBeenSet)
  {
    ss << "RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_roleSessionNameHasBeenSet)
  {
    ss << "RoleSessionName=" << StringUtils::URLEncode(m_roleSessionName.c_str()) << "&";
  }

  if(m_policyArnsHasBeenSet)
  {
    unsigned policyArnsCount = 1;
    for(auto& item : m_policyArns)
    {
      item.OutputToStream(ss, "PolicyArns.member.", policyArnsCount, "");
      policyArnsCount++;
    }
  }

  if(m_policyHasBeenSet)
  {
    ss << "Policy=" << StringUtils::URLEncode(m_policy.c_str()) << "&";
  }

  if(m_durationSecondsHasBeenSet)
  {
    ss << "DurationSeconds=" << m_durationSeconds << "&";
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

  if(m_transitiveTagKeysHasBeenSet)
  {
    unsigned transitiveTagKeysCount = 1;
    for(auto& item : m_transitiveTagKeys)
    {
      ss << "TransitiveTagKeys.member." << transitiveTagKeysCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      transitiveTagKeysCount++;
    }
  }

  if(m_externalIdHasBeenSet)
  {
    ss << "ExternalId=" << StringUtils::URLEncode(m_externalId.c_str()) << "&";
  }

  if(m_serialNumberHasBeenSet)
  {
    ss << "SerialNumber=" << StringUtils::URLEncode(m_serialNumber.c_str()) << "&";
  }

  if(m_tokenCodeHasBeenSet)
  {
    ss << "TokenCode=" << StringUtils::URLEncode(m_tokenCode.c_str()) << "&";
  }

  ss << "Version=2011-06-15";
  return ss.str();
}


void  AssumeRoleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

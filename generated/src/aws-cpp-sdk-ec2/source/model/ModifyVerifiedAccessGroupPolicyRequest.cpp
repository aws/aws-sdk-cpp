/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVerifiedAccessGroupPolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVerifiedAccessGroupPolicyRequest::ModifyVerifiedAccessGroupPolicyRequest() : 
    m_verifiedAccessGroupIdHasBeenSet(false),
    m_policyEnabled(false),
    m_policyEnabledHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_sseSpecificationHasBeenSet(false)
{
}

Aws::String ModifyVerifiedAccessGroupPolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVerifiedAccessGroupPolicy&";
  if(m_verifiedAccessGroupIdHasBeenSet)
  {
    ss << "VerifiedAccessGroupId=" << StringUtils::URLEncode(m_verifiedAccessGroupId.c_str()) << "&";
  }

  if(m_policyEnabledHasBeenSet)
  {
    ss << "PolicyEnabled=" << std::boolalpha << m_policyEnabled << "&";
  }

  if(m_policyDocumentHasBeenSet)
  {
    ss << "PolicyDocument=" << StringUtils::URLEncode(m_policyDocument.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_sseSpecificationHasBeenSet)
  {
    m_sseSpecification.OutputToStream(ss, "SseSpecification");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVerifiedAccessGroupPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

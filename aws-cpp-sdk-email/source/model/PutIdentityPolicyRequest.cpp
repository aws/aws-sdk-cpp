/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/PutIdentityPolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

PutIdentityPolicyRequest::PutIdentityPolicyRequest() : 
    m_identityHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

Aws::String PutIdentityPolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutIdentityPolicy&";
  if(m_identityHasBeenSet)
  {
    ss << "Identity=" << StringUtils::URLEncode(m_identity.c_str()) << "&";
  }

  if(m_policyNameHasBeenSet)
  {
    ss << "PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }

  if(m_policyHasBeenSet)
  {
    ss << "Policy=" << StringUtils::URLEncode(m_policy.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  PutIdentityPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

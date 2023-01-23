/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/SetIdentityMailFromDomainRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

SetIdentityMailFromDomainRequest::SetIdentityMailFromDomainRequest() : 
    m_identityHasBeenSet(false),
    m_mailFromDomainHasBeenSet(false),
    m_behaviorOnMXFailure(BehaviorOnMXFailure::NOT_SET),
    m_behaviorOnMXFailureHasBeenSet(false)
{
}

Aws::String SetIdentityMailFromDomainRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetIdentityMailFromDomain&";
  if(m_identityHasBeenSet)
  {
    ss << "Identity=" << StringUtils::URLEncode(m_identity.c_str()) << "&";
  }

  if(m_mailFromDomainHasBeenSet)
  {
    ss << "MailFromDomain=" << StringUtils::URLEncode(m_mailFromDomain.c_str()) << "&";
  }

  if(m_behaviorOnMXFailureHasBeenSet)
  {
    ss << "BehaviorOnMXFailure=" << BehaviorOnMXFailureMapper::GetNameForBehaviorOnMXFailure(m_behaviorOnMXFailure) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  SetIdentityMailFromDomainRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

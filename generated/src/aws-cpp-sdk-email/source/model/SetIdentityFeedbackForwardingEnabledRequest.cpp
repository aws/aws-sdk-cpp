/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/SetIdentityFeedbackForwardingEnabledRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

SetIdentityFeedbackForwardingEnabledRequest::SetIdentityFeedbackForwardingEnabledRequest() : 
    m_identityHasBeenSet(false),
    m_forwardingEnabled(false),
    m_forwardingEnabledHasBeenSet(false)
{
}

Aws::String SetIdentityFeedbackForwardingEnabledRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetIdentityFeedbackForwardingEnabled&";
  if(m_identityHasBeenSet)
  {
    ss << "Identity=" << StringUtils::URLEncode(m_identity.c_str()) << "&";
  }

  if(m_forwardingEnabledHasBeenSet)
  {
    ss << "ForwardingEnabled=" << std::boolalpha << m_forwardingEnabled << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  SetIdentityFeedbackForwardingEnabledRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

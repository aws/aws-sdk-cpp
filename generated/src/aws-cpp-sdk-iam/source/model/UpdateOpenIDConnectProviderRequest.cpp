/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iam/model/UpdateOpenIDConnectProviderRequest.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

Aws::String UpdateOpenIDConnectProviderRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=UpdateOpenIDConnectProvider&";
  if (m_openIDConnectProviderArnHasBeenSet) {
    ss << "OpenIDConnectProviderArn=" << StringUtils::URLEncode(m_openIDConnectProviderArn.c_str()) << "&";
  }

  if (m_contextProviderHasBeenSet) {
    m_contextProvider.OutputToStream(ss, "ContextProvider");
  }

  if (m_identityCenterInstanceArnHasBeenSet) {
    ss << "IdentityCenterInstanceArn=" << StringUtils::URLEncode(m_identityCenterInstanceArn.c_str()) << "&";
  }

  if (m_removeContextProviderHasBeenSet) {
    ss << "RemoveContextProvider=" << std::boolalpha << m_removeContextProvider << "&";
  }

  if (m_removeIdentityCenterInstanceHasBeenSet) {
    ss << "RemoveIdentityCenterInstance=" << std::boolalpha << m_removeIdentityCenterInstance << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

void UpdateOpenIDConnectProviderRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }

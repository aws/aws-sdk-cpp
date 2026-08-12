/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iam/model/GetRoleTemplateVersionRequest.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

Aws::String GetRoleTemplateVersionRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=GetRoleTemplateVersion&";
  if (m_templateArnHasBeenSet) {
    ss << "TemplateArn=" << StringUtils::URLEncode(m_templateArn.c_str()) << "&";
  }

  if (m_minorVersionHasBeenSet) {
    ss << "MinorVersion=" << m_minorVersion << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

void GetRoleTemplateVersionRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }

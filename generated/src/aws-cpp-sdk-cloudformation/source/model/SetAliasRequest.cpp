/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/SetAliasRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String SetAliasRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=SetAlias&";
  if (m_stackNameHasBeenSet) {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if (m_aliasNameHasBeenSet) {
    ss << "AliasName=" << StringUtils::URLEncode(m_aliasName.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}

void SetAliasRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iam/model/AcquireRoleRequest.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

Aws::String AcquireRoleRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=AcquireRole&";
  if (m_templateArnHasBeenSet) {
    ss << "TemplateArn=" << StringUtils::URLEncode(m_templateArn.c_str()) << "&";
  }

  if (m_templateMinorVersionHasBeenSet) {
    ss << "TemplateMinorVersion=" << m_templateMinorVersion << "&";
  }

  if (m_replacementValuesHasBeenSet) {
    unsigned replacementValuesCount = 1;
    for (auto& item : m_replacementValues) {
      ss << "ReplacementValues.entry." << replacementValuesCount << ".key=" << StringUtils::URLEncode(item.first.c_str()) << "&";
      item.second.OutputToStream(ss, "ReplacementValues.entry.", replacementValuesCount, ".value");
      replacementValuesCount++;
    }
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

void AcquireRoleRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }

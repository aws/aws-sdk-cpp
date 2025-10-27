/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/email/model/SetActiveReceiptRuleSetRequest.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

Aws::String SetActiveReceiptRuleSetRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=SetActiveReceiptRuleSet&";
  if (m_ruleSetNameHasBeenSet) {
    ss << "RuleSetName=" << StringUtils::URLEncode(m_ruleSetName.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}

void SetActiveReceiptRuleSetRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }

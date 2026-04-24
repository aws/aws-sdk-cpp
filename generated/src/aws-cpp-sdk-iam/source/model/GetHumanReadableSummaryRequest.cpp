/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iam/model/GetHumanReadableSummaryRequest.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

Aws::String GetHumanReadableSummaryRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=GetHumanReadableSummary&";
  if (m_entityArnHasBeenSet) {
    ss << "EntityArn=" << StringUtils::URLEncode(m_entityArn.c_str()) << "&";
  }

  if (m_localeHasBeenSet) {
    ss << "Locale=" << StringUtils::URLEncode(m_locale.c_str()) << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

void GetHumanReadableSummaryRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }

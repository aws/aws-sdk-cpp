/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iam/model/PutAccountPropertiesRequest.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

Aws::String PutAccountPropertiesRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=PutAccountProperties&";
  if (m_propertiesHasBeenSet) {
    unsigned propertiesCount = 1;
    for (auto& item : m_properties) {
      ss << "Properties.entry." << propertiesCount << ".key=" << StringUtils::URLEncode(item.first.c_str()) << "&";
      ss << "Properties.entry." << propertiesCount << ".value=" << StringUtils::URLEncode(item.second.c_str()) << "&";
      propertiesCount++;
    }
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

void PutAccountPropertiesRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }

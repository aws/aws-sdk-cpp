/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2-protocol/model/QueryListsRequest.h>

using namespace Aws::EC2Protocol::Model;
using namespace Aws::Utils;

Aws::String QueryListsRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=QueryLists&";
  if (m_listArgHasBeenSet) {
    unsigned listArgCount = 1;
    for (auto& item : m_listArg) {
      ss << "ListArg." << listArgCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      listArgCount++;
    }
  }

  if (m_complexListArgHasBeenSet) {
    unsigned complexListArgCount = 1;
    for (auto& item : m_complexListArg) {
      item.OutputToStream(ss, "ComplexListArg.", complexListArgCount, "");
      complexListArgCount++;
    }
  }

  if (m_listArgWithXmlNameMemberHasBeenSet) {
    unsigned listArgWithXmlNameMemberCount = 1;
    for (auto& item : m_listArgWithXmlNameMember) {
      ss << "ListArgWithXmlNameMember." << listArgWithXmlNameMemberCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      listArgWithXmlNameMemberCount++;
    }
  }

  if (m_listArgWithXmlNameHasBeenSet) {
    unsigned listArgWithXmlNameCount = 1;
    for (auto& item : m_listArgWithXmlName) {
      ss << "Hi." << listArgWithXmlNameCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      listArgWithXmlNameCount++;
    }
  }

  if (m_nestedWithListHasBeenSet) {
    m_nestedWithList.OutputToStream(ss, "NestedWithList");
  }

  ss << "Version=2020-01-08";
  return ss.str();
}

void QueryListsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }

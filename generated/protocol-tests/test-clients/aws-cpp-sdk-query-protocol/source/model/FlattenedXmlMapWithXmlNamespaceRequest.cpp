/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-protocol/model/FlattenedXmlMapWithXmlNamespaceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

FlattenedXmlMapWithXmlNamespaceRequest::FlattenedXmlMapWithXmlNamespaceRequest()
{
}

Aws::String FlattenedXmlMapWithXmlNamespaceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=FlattenedXmlMapWithXmlNamespace&";
  ss << "Version=2020-01-08";
  return ss.str();
}


void  FlattenedXmlMapWithXmlNamespaceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

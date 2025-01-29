/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/HttpRequestWithGreedyLabelInPathRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

HttpRequestWithGreedyLabelInPathRequest::HttpRequestWithGreedyLabelInPathRequest() : 
    m_fooHasBeenSet(false),
    m_bazHasBeenSet(false)
{
}

Aws::String HttpRequestWithGreedyLabelInPathRequest::SerializePayload() const
{
  return {};
}



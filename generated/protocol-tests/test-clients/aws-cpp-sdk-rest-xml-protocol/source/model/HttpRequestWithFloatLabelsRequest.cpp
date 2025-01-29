/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/HttpRequestWithFloatLabelsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

HttpRequestWithFloatLabelsRequest::HttpRequestWithFloatLabelsRequest() : 
    m_float(0.0),
    m_floatHasBeenSet(false),
    m_double(0.0),
    m_doubleHasBeenSet(false)
{
}

Aws::String HttpRequestWithFloatLabelsRequest::SerializePayload() const
{
  return {};
}



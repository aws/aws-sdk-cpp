﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/ConstantAndVariableQueryStringRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ConstantAndVariableQueryStringRequest::ConstantAndVariableQueryStringRequest() : 
    m_bazHasBeenSet(false),
    m_maybeSetHasBeenSet(false)
{
}

Aws::String ConstantAndVariableQueryStringRequest::SerializePayload() const
{
  return {};
}

void ConstantAndVariableQueryStringRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_bazHasBeenSet)
    {
      ss << m_baz;
      uri.AddQueryStringParameter("baz", ss.str());
      ss.str("");
    }

    if(m_maybeSetHasBeenSet)
    {
      ss << m_maybeSet;
      uri.AddQueryStringParameter("maybeSet", ss.str());
      ss.str("");
    }

}


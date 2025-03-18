﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>
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


Aws::String QueryIdempotencyTokenAutoFillRequest::SerializePayload() const
{
  return {};
}

void QueryIdempotencyTokenAutoFillRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_tokenHasBeenSet)
    {
      ss << m_token;
      uri.AddQueryStringParameter("token", ss.str());
      ss.str("");
    }

}


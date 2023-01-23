/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetComponentRequest::GetComponentRequest() : 
    m_componentBuildVersionArnHasBeenSet(false)
{
}

Aws::String GetComponentRequest::SerializePayload() const
{
  return {};
}

void GetComponentRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_componentBuildVersionArnHasBeenSet)
    {
      ss << m_componentBuildVersionArn;
      uri.AddQueryStringParameter("componentBuildVersionArn", ss.str());
      ss.str("");
    }

}




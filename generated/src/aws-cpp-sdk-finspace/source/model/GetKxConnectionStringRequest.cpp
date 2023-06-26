/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/GetKxConnectionStringRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetKxConnectionStringRequest::GetKxConnectionStringRequest() : 
    m_userArnHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

Aws::String GetKxConnectionStringRequest::SerializePayload() const
{
  return {};
}

void GetKxConnectionStringRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_userArnHasBeenSet)
    {
      ss << m_userArn;
      uri.AddQueryStringParameter("userArn", ss.str());
      ss.str("");
    }

    if(m_clusterNameHasBeenSet)
    {
      ss << m_clusterName;
      uri.AddQueryStringParameter("clusterName", ss.str());
      ss.str("");
    }

}




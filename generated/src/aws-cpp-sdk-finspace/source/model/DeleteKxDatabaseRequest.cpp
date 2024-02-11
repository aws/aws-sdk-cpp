/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/DeleteKxDatabaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteKxDatabaseRequest::DeleteKxDatabaseRequest() : 
    m_environmentIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String DeleteKxDatabaseRequest::SerializePayload() const
{
  return {};
}

void DeleteKxDatabaseRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clientTokenHasBeenSet)
    {
      ss << m_clientToken;
      uri.AddQueryStringParameter("clientToken", ss.str());
      ss.str("");
    }

}




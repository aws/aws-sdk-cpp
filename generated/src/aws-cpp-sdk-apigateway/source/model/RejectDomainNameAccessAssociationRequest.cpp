/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/RejectDomainNameAccessAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String RejectDomainNameAccessAssociationRequest::SerializePayload() const
{
  return {};
}

void RejectDomainNameAccessAssociationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_domainNameAccessAssociationArnHasBeenSet)
    {
      ss << m_domainNameAccessAssociationArn;
      uri.AddQueryStringParameter("domainNameAccessAssociationArn", ss.str());
      ss.str("");
    }

    if(m_domainNameArnHasBeenSet)
    {
      ss << m_domainNameArn;
      uri.AddQueryStringParameter("domainNameArn", ss.str());
      ss.str("");
    }

}




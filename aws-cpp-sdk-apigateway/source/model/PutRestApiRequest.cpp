/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/PutRestApiRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

PutRestApiRequest::PutRestApiRequest() : 
    m_restApiIdHasBeenSet(false),
    m_mode(PutMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_failOnWarnings(false),
    m_failOnWarningsHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}


void PutRestApiRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_modeHasBeenSet)
    {
      ss << PutModeMapper::GetNameForPutMode(m_mode);
      uri.AddQueryStringParameter("mode", ss.str());
      ss.str("");
    }

    if(m_failOnWarningsHasBeenSet)
    {
      ss << m_failOnWarnings;
      uri.AddQueryStringParameter("failonwarnings", ss.str());
      ss.str("");
    }

    if(m_parametersHasBeenSet)
    {
      for(auto& item : m_parameters)
      {
        ss << item.second;
        uri.AddQueryStringParameter(item.first.c_str(), ss.str());
        ss.str("");
      }
    }

}


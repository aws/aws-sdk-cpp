﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/apigateway/model/ImportDocumentationPartsRequest.h>
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

ImportDocumentationPartsRequest::ImportDocumentationPartsRequest() : 
    m_restApiIdHasBeenSet(false),
    m_mode(PutMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_failOnWarnings(false),
    m_failOnWarningsHasBeenSet(false)
{
}

void ImportDocumentationPartsRequest::AddQueryStringParameters(URI& uri) const
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

}

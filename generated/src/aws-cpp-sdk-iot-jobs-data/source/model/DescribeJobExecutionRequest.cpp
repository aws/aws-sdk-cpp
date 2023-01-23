/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-jobs-data/model/DescribeJobExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTJobsDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeJobExecutionRequest::DescribeJobExecutionRequest() : 
    m_jobIdHasBeenSet(false),
    m_thingNameHasBeenSet(false),
    m_includeJobDocument(false),
    m_includeJobDocumentHasBeenSet(false),
    m_executionNumber(0),
    m_executionNumberHasBeenSet(false)
{
}

Aws::String DescribeJobExecutionRequest::SerializePayload() const
{
  return {};
}

void DescribeJobExecutionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_includeJobDocumentHasBeenSet)
    {
      ss << m_includeJobDocument;
      uri.AddQueryStringParameter("includeJobDocument", ss.str());
      ss.str("");
    }

    if(m_executionNumberHasBeenSet)
    {
      ss << m_executionNumber;
      uri.AddQueryStringParameter("executionNumber", ss.str());
      ss.str("");
    }

}




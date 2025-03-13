/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetTimeSeriesDataPointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetTimeSeriesDataPointRequest::SerializePayload() const
{
  return {};
}

void GetTimeSeriesDataPointRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_formNameHasBeenSet)
    {
      ss << m_formName;
      uri.AddQueryStringParameter("formName", ss.str());
      ss.str("");
    }

}




/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/GetJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetJobRequest::GetJobRequest() : 
    m_additionalAttributeNamesHasBeenSet(false),
    m_jobArnHasBeenSet(false)
{
}

Aws::String GetJobRequest::SerializePayload() const
{
  return {};
}

void GetJobRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_additionalAttributeNamesHasBeenSet)
    {
      for(const auto& item : m_additionalAttributeNames)
      {
        ss << HybridJobAdditionalAttributeNameMapper::GetNameForHybridJobAdditionalAttributeName(item);
        uri.AddQueryStringParameter("additionalAttributeNames", ss.str());
        ss.str("");
      }
    }

}




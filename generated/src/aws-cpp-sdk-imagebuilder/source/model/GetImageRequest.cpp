/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetImageRequest::GetImageRequest() : 
    m_imageBuildVersionArnHasBeenSet(false)
{
}

Aws::String GetImageRequest::SerializePayload() const
{
  return {};
}

void GetImageRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_imageBuildVersionArnHasBeenSet)
    {
      ss << m_imageBuildVersionArn;
      uri.AddQueryStringParameter("imageBuildVersionArn", ss.str());
      ss.str("");
    }

}




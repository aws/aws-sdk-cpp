/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetImagePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetImagePipelineRequest::GetImagePipelineRequest() : 
    m_imagePipelineArnHasBeenSet(false)
{
}

Aws::String GetImagePipelineRequest::SerializePayload() const
{
  return {};
}

void GetImagePipelineRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_imagePipelineArnHasBeenSet)
    {
      ss << m_imagePipelineArn;
      uri.AddQueryStringParameter("imagePipelineArn", ss.str());
      ss.str("");
    }

}




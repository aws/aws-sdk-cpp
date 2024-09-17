/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/GetComponentVersionArtifactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetComponentVersionArtifactRequest::GetComponentVersionArtifactRequest() : 
    m_arnHasBeenSet(false),
    m_artifactNameHasBeenSet(false),
    m_s3EndpointType(S3EndpointType::NOT_SET),
    m_s3EndpointTypeHasBeenSet(false),
    m_iotEndpointType(IotEndpointType::NOT_SET),
    m_iotEndpointTypeHasBeenSet(false)
{
}

Aws::String GetComponentVersionArtifactRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetComponentVersionArtifactRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_iotEndpointTypeHasBeenSet && m_iotEndpointType != IotEndpointType::NOT_SET)
  {
    headers.emplace("x-amz-iot-endpoint-type", IotEndpointTypeMapper::GetNameForIotEndpointType(m_iotEndpointType));
  }

  return headers;

}

void GetComponentVersionArtifactRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_s3EndpointTypeHasBeenSet)
    {
      ss << S3EndpointTypeMapper::GetNameForS3EndpointType(m_s3EndpointType);
      uri.AddQueryStringParameter("s3EndpointType", ss.str());
      ss.str("");
    }

}




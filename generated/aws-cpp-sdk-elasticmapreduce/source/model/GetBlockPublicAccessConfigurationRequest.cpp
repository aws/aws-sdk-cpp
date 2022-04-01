/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/GetBlockPublicAccessConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBlockPublicAccessConfigurationRequest::GetBlockPublicAccessConfigurationRequest()
{
}

Aws::String GetBlockPublicAccessConfigurationRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetBlockPublicAccessConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.GetBlockPublicAccessConfiguration"));
  return headers;

}





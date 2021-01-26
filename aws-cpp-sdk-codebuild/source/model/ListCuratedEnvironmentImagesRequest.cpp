/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ListCuratedEnvironmentImagesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListCuratedEnvironmentImagesRequest::ListCuratedEnvironmentImagesRequest()
{
}

Aws::String ListCuratedEnvironmentImagesRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection ListCuratedEnvironmentImagesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.ListCuratedEnvironmentImages"));
  return headers;

}





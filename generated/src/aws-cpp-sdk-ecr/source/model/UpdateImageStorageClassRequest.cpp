/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/UpdateImageStorageClassRequest.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateImageStorageClassRequest::SerializePayload() const {
  JsonValue payload;

  if (m_registryIdHasBeenSet) {
    payload.WithString("registryId", m_registryId);
  }

  if (m_repositoryNameHasBeenSet) {
    payload.WithString("repositoryName", m_repositoryName);
  }

  if (m_imageIdHasBeenSet) {
    payload.WithObject("imageId", m_imageId.Jsonize());
  }

  if (m_targetStorageClassHasBeenSet) {
    payload.WithString("targetStorageClass", TargetStorageClassMapper::GetNameForTargetStorageClass(m_targetStorageClass));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateImageStorageClassRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.UpdateImageStorageClass"));
  return headers;
}

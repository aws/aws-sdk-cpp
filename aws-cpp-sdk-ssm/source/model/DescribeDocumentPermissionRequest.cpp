/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeDocumentPermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDocumentPermissionRequest::DescribeDocumentPermissionRequest() : 
    m_nameHasBeenSet(false),
    m_permissionType(DocumentPermissionType::NOT_SET),
    m_permissionTypeHasBeenSet(false)
{
}

Aws::String DescribeDocumentPermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_permissionTypeHasBeenSet)
  {
   payload.WithString("PermissionType", DocumentPermissionTypeMapper::GetNameForDocumentPermissionType(m_permissionType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDocumentPermissionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DescribeDocumentPermission"));
  return headers;

}





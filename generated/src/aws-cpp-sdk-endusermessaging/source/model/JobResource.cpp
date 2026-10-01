/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/JobResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

JobResource::JobResource(JsonView jsonValue) { *this = jsonValue; }

JobResource& JobResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = JobResourceTypeMapper::GetJobResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceId")) {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceArn")) {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue JobResource::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", JobResourceTypeMapper::GetNameForJobResourceType(m_resourceType));
  }

  if (m_resourceIdHasBeenSet) {
    payload.WithString("resourceId", m_resourceId);
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("resourceArn", m_resourceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws

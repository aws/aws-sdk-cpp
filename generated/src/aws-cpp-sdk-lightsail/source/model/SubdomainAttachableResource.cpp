/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/SubdomainAttachableResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {

SubdomainAttachableResource::SubdomainAttachableResource(JsonView jsonValue) { *this = jsonValue; }

SubdomainAttachableResource& SubdomainAttachableResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attachedAt")) {
    m_attachedAt = jsonValue.GetDouble("attachedAt");
    m_attachedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue SubdomainAttachableResource::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_attachedAtHasBeenSet) {
    payload.WithDouble("attachedAt", m_attachedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws

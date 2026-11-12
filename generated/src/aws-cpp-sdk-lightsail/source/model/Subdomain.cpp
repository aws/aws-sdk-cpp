/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/Subdomain.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {

Subdomain::Subdomain(JsonView jsonValue) { *this = jsonValue; }

Subdomain& Subdomain::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("subdomainName")) {
    m_subdomainName = jsonValue.GetString("subdomainName");
    m_subdomainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fqdn")) {
    m_fqdn = jsonValue.GetString("fqdn");
    m_fqdnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("depth")) {
    m_depth = jsonValue.GetInteger("depth");
    m_depthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = SubdomainStateMapper::GetSubdomainStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attachedResource")) {
    m_attachedResource = jsonValue.GetObject("attachedResource");
    m_attachedResourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attachingResource")) {
    m_attachingResource = jsonValue.GetObject("attachingResource");
    m_attachingResourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("location")) {
    m_location = jsonValue.GetObject("location");
    m_locationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parentFqdn")) {
    m_parentFqdn = jsonValue.GetString("parentFqdn");
    m_parentFqdnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("children")) {
    Aws::Utils::Array<JsonView> childrenJsonList = jsonValue.GetArray("children");
    for (unsigned childrenIndex = 0; childrenIndex < childrenJsonList.GetLength(); ++childrenIndex) {
      m_children.push_back(childrenJsonList[childrenIndex].AsObject());
    }
    m_childrenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue Subdomain::Jsonize() const {
  JsonValue payload;

  if (m_subdomainNameHasBeenSet) {
    payload.WithString("subdomainName", m_subdomainName);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_fqdnHasBeenSet) {
    payload.WithString("fqdn", m_fqdn);
  }

  if (m_depthHasBeenSet) {
    payload.WithInteger("depth", m_depth);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", SubdomainStateMapper::GetNameForSubdomainState(m_state));
  }

  if (m_attachedResourceHasBeenSet) {
    payload.WithObject("attachedResource", m_attachedResource.Jsonize());
  }

  if (m_attachingResourceHasBeenSet) {
    payload.WithObject("attachingResource", m_attachingResource.Jsonize());
  }

  if (m_locationHasBeenSet) {
    payload.WithObject("location", m_location.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_parentFqdnHasBeenSet) {
    payload.WithString("parentFqdn", m_parentFqdn);
  }

  if (m_childrenHasBeenSet) {
    Aws::Utils::Array<JsonValue> childrenJsonList(m_children.size());
    for (unsigned childrenIndex = 0; childrenIndex < childrenJsonList.GetLength(); ++childrenIndex) {
      childrenJsonList[childrenIndex].AsObject(m_children[childrenIndex].Jsonize());
    }
    payload.WithArray("children", std::move(childrenJsonList));
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws

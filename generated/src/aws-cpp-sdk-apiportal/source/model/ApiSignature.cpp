/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ApiSignature.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ApiSignature::ApiSignature(JsonView jsonValue) { *this = jsonValue; }

ApiSignature& ApiSignature::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceArn")) {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("method")) {
    m_method = HttpMethodMapper::GetHttpMethodForName(jsonValue.GetString("method"));
    m_methodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hostname")) {
    m_hostname = jsonValue.GetString("hostname");
    m_hostnameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("path")) {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiSignature::Jsonize() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("resourceArn", m_resourceArn);
  }

  if (m_methodHasBeenSet) {
    payload.WithString("method", HttpMethodMapper::GetNameForHttpMethod(m_method));
  }

  if (m_hostnameHasBeenSet) {
    payload.WithString("hostname", m_hostname);
  }

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_pathHasBeenSet) {
    payload.WithString("path", m_path);
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws

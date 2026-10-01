/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/RevisionConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

RevisionConfig::RevisionConfig(JsonView jsonValue) { *this = jsonValue; }

RevisionConfig& RevisionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("buildConfig")) {
    m_buildConfig = jsonValue.GetObject("buildConfig");
    m_buildConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceConfig")) {
    m_serviceConfig = jsonValue.GetObject("serviceConfig");
    m_serviceConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue RevisionConfig::Jsonize() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("kmsKeyArn", m_kmsKeyArn);
  }

  if (m_buildConfigHasBeenSet) {
    payload.WithObject("buildConfig", m_buildConfig.Jsonize());
  }

  if (m_serviceConfigHasBeenSet) {
    payload.WithObject("serviceConfig", m_serviceConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws

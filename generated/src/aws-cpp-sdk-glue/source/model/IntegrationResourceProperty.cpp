/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/IntegrationResourceProperty.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

IntegrationResourceProperty::IntegrationResourceProperty(JsonView jsonValue) { *this = jsonValue; }

IntegrationResourceProperty& IntegrationResourceProperty::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourcePropertyArn")) {
    m_resourcePropertyArn = jsonValue.GetString("ResourcePropertyArn");
    m_resourcePropertyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceProcessingProperties")) {
    m_sourceProcessingProperties = jsonValue.GetObject("SourceProcessingProperties");
    m_sourceProcessingPropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetProcessingProperties")) {
    m_targetProcessingProperties = jsonValue.GetObject("TargetProcessingProperties");
    m_targetProcessingPropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue IntegrationResourceProperty::Jsonize() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_resourcePropertyArnHasBeenSet) {
    payload.WithString("ResourcePropertyArn", m_resourcePropertyArn);
  }

  if (m_sourceProcessingPropertiesHasBeenSet) {
    payload.WithObject("SourceProcessingProperties", m_sourceProcessingProperties.Jsonize());
  }

  if (m_targetProcessingPropertiesHasBeenSet) {
    payload.WithObject("TargetProcessingProperties", m_targetProcessingProperties.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

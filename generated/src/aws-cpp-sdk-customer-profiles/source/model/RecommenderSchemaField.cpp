/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/RecommenderSchemaField.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

RecommenderSchemaField::RecommenderSchemaField(JsonView jsonValue) { *this = jsonValue; }

RecommenderSchemaField& RecommenderSchemaField::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TargetFieldName")) {
    m_targetFieldName = jsonValue.GetString("TargetFieldName");
    m_targetFieldNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContentType")) {
    m_contentType = ContentTypeMapper::GetContentTypeForName(jsonValue.GetString("ContentType"));
    m_contentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FeatureType")) {
    m_featureType = FeatureTypeMapper::GetFeatureTypeForName(jsonValue.GetString("FeatureType"));
    m_featureTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommenderSchemaField::Jsonize() const {
  JsonValue payload;

  if (m_targetFieldNameHasBeenSet) {
    payload.WithString("TargetFieldName", m_targetFieldName);
  }

  if (m_contentTypeHasBeenSet) {
    payload.WithString("ContentType", ContentTypeMapper::GetNameForContentType(m_contentType));
  }

  if (m_featureTypeHasBeenSet) {
    payload.WithString("FeatureType", FeatureTypeMapper::GetNameForFeatureType(m_featureType));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws

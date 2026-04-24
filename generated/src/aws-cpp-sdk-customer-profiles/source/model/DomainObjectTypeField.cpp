/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/DomainObjectTypeField.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

DomainObjectTypeField::DomainObjectTypeField(JsonView jsonValue) { *this = jsonValue; }

DomainObjectTypeField& DomainObjectTypeField::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Source")) {
    m_source = jsonValue.GetString("Source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Target")) {
    m_target = jsonValue.GetString("Target");
    m_targetHasBeenSet = true;
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

JsonValue DomainObjectTypeField::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithString("Source", m_source);
  }

  if (m_targetHasBeenSet) {
    payload.WithString("Target", m_target);
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

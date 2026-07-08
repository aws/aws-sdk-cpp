/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContentAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContentAttributes::ContentAttributes(JsonView jsonValue) { *this = jsonValue; }

ContentAttributes& ContentAttributes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RecommenderConfig")) {
    m_recommenderConfig = jsonValue.GetObject("RecommenderConfig");
    m_recommenderConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentAttributes::Jsonize() const {
  JsonValue payload;

  if (m_recommenderConfigHasBeenSet) {
    payload.WithObject("RecommenderConfig", m_recommenderConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

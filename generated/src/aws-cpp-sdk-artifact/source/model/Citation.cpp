/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/Citation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {

Citation::Citation(JsonView jsonValue) { *this = jsonValue; }

Citation& Citation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceLabel")) {
    m_sourceLabel = jsonValue.GetString("sourceLabel");
    m_sourceLabelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceContent")) {
    m_sourceContent = jsonValue.GetString("sourceContent");
    m_sourceContentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceLink")) {
    m_sourceLink = jsonValue.GetString("sourceLink");
    m_sourceLinkHasBeenSet = true;
  }
  return *this;
}

JsonValue Citation::Jsonize() const {
  JsonValue payload;

  if (m_sourceLabelHasBeenSet) {
    payload.WithString("sourceLabel", m_sourceLabel);
  }

  if (m_sourceContentHasBeenSet) {
    payload.WithString("sourceContent", m_sourceContent);
  }

  if (m_sourceLinkHasBeenSet) {
    payload.WithString("sourceLink", m_sourceLink);
  }

  return payload;
}

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws

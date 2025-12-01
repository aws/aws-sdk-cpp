/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/WorkspacePage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

WorkspacePage::WorkspacePage(JsonView jsonValue) { *this = jsonValue; }

WorkspacePage& WorkspacePage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Page")) {
    m_page = jsonValue.GetString("Page");
    m_pageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Slug")) {
    m_slug = jsonValue.GetString("Slug");
    m_slugHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InputData")) {
    m_inputData = jsonValue.GetString("InputData");
    m_inputDataHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkspacePage::Jsonize() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_pageHasBeenSet) {
    payload.WithString("Page", m_page);
  }

  if (m_slugHasBeenSet) {
    payload.WithString("Slug", m_slug);
  }

  if (m_inputDataHasBeenSet) {
    payload.WithString("InputData", m_inputData);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

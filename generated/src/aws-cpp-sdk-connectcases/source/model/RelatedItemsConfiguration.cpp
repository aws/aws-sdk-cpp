/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/RelatedItemsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

RelatedItemsConfiguration::RelatedItemsConfiguration(JsonView jsonValue) { *this = jsonValue; }

RelatedItemsConfiguration& RelatedItemsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("comment")) {
    m_comment = jsonValue.GetBool("comment");
    m_commentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectCase")) {
    m_connectCase = jsonValue.GetBool("connectCase");
    m_connectCaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contact")) {
    m_contact = jsonValue.GetBool("contact");
    m_contactHasBeenSet = true;
  }
  if (jsonValue.ValueExists("custom")) {
    m_custom = jsonValue.GetBool("custom");
    m_customHasBeenSet = true;
  }
  return *this;
}

JsonValue RelatedItemsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_commentHasBeenSet) {
    payload.WithBool("comment", m_comment);
  }

  if (m_connectCaseHasBeenSet) {
    payload.WithBool("connectCase", m_connectCase);
  }

  if (m_contactHasBeenSet) {
    payload.WithBool("contact", m_contact);
  }

  if (m_customHasBeenSet) {
    payload.WithBool("custom", m_custom);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws

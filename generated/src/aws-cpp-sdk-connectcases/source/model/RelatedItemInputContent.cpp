﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/RelatedItemInputContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

RelatedItemInputContent::RelatedItemInputContent(JsonView jsonValue) { *this = jsonValue; }

RelatedItemInputContent& RelatedItemInputContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contact")) {
    m_contact = jsonValue.GetObject("contact");
    m_contactHasBeenSet = true;
  }
  if (jsonValue.ValueExists("comment")) {
    m_comment = jsonValue.GetObject("comment");
    m_commentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("file")) {
    m_file = jsonValue.GetObject("file");
    m_fileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sla")) {
    m_sla = jsonValue.GetObject("sla");
    m_slaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectCase")) {
    m_connectCase = jsonValue.GetObject("connectCase");
    m_connectCaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("custom")) {
    m_custom = jsonValue.GetObject("custom");
    m_customHasBeenSet = true;
  }
  return *this;
}

JsonValue RelatedItemInputContent::Jsonize() const {
  JsonValue payload;

  if (m_contactHasBeenSet) {
    payload.WithObject("contact", m_contact.Jsonize());
  }

  if (m_commentHasBeenSet) {
    payload.WithObject("comment", m_comment.Jsonize());
  }

  if (m_fileHasBeenSet) {
    payload.WithObject("file", m_file.Jsonize());
  }

  if (m_slaHasBeenSet) {
    payload.WithObject("sla", m_sla.Jsonize());
  }

  if (m_connectCaseHasBeenSet) {
    payload.WithObject("connectCase", m_connectCase.Jsonize());
  }

  if (m_customHasBeenSet) {
    payload.WithObject("custom", m_custom.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws

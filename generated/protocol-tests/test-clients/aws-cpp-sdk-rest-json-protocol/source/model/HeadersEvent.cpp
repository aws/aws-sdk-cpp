/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/HeadersEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

HeadersEvent::HeadersEvent(JsonView jsonValue) { *this = jsonValue; }

HeadersEvent& HeadersEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("booleanHeader")) {
    m_booleanHeader = jsonValue.GetBool("booleanHeader");
    m_booleanHeaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("byteHeader")) {
    m_byteHeader = jsonValue.GetInteger("byteHeader");
    m_byteHeaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shortHeader")) {
    m_shortHeader = jsonValue.GetInteger("shortHeader");
    m_shortHeaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intHeader")) {
    m_intHeader = jsonValue.GetInteger("intHeader");
    m_intHeaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("longHeader")) {
    m_longHeader = jsonValue.GetInt64("longHeader");
    m_longHeaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blobHeader")) {
    m_blobHeader = HashingUtils::Base64Decode(jsonValue.GetString("blobHeader"));
    m_blobHeaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stringHeader")) {
    m_stringHeader = jsonValue.GetString("stringHeader");
    m_stringHeaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestampHeader")) {
    m_timestampHeader = jsonValue.GetString("timestampHeader");
    m_timestampHeaderHasBeenSet = true;
  }
  return *this;
}

JsonValue HeadersEvent::Jsonize() const {
  JsonValue payload;

  if (m_booleanHeaderHasBeenSet) {
    payload.WithBool("booleanHeader", m_booleanHeader);
  }

  if (m_byteHeaderHasBeenSet) {
    payload.WithInteger("byteHeader", m_byteHeader);
  }

  if (m_shortHeaderHasBeenSet) {
    payload.WithInteger("shortHeader", m_shortHeader);
  }

  if (m_intHeaderHasBeenSet) {
    payload.WithInteger("intHeader", m_intHeader);
  }

  if (m_longHeaderHasBeenSet) {
    payload.WithInt64("longHeader", m_longHeader);
  }

  if (m_blobHeaderHasBeenSet) {
    payload.WithString("blobHeader", HashingUtils::Base64Encode(m_blobHeader));
  }

  if (m_stringHeaderHasBeenSet) {
    payload.WithString("stringHeader", m_stringHeader);
  }

  if (m_timestampHeaderHasBeenSet) {
    payload.WithString("timestampHeader", m_timestampHeader.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

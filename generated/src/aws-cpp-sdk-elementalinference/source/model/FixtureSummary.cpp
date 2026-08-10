/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/FixtureSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

FixtureSummary::FixtureSummary(JsonView jsonValue) { *this = jsonValue; }

FixtureSummary& FixtureSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fixtureId")) {
    m_fixtureId = jsonValue.GetString("fixtureId");
    m_fixtureIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fixtureGroup")) {
    m_fixtureGroup = jsonValue.GetString("fixtureGroup");
    m_fixtureGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduledStart")) {
    m_scheduledStart = jsonValue.GetString("scheduledStart");
    m_scheduledStartHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("competitors")) {
    Aws::Utils::Array<JsonView> competitorsJsonList = jsonValue.GetArray("competitors");
    for (unsigned competitorsIndex = 0; competitorsIndex < competitorsJsonList.GetLength(); ++competitorsIndex) {
      m_competitors.push_back(competitorsJsonList[competitorsIndex].AsObject());
    }
    m_competitorsHasBeenSet = true;
  }
  return *this;
}

JsonValue FixtureSummary::Jsonize() const {
  JsonValue payload;

  if (m_fixtureIdHasBeenSet) {
    payload.WithString("fixtureId", m_fixtureId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_fixtureGroupHasBeenSet) {
    payload.WithString("fixtureGroup", m_fixtureGroup);
  }

  if (m_scheduledStartHasBeenSet) {
    payload.WithString("scheduledStart", m_scheduledStart.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", m_status);
  }

  if (m_competitorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> competitorsJsonList(m_competitors.size());
    for (unsigned competitorsIndex = 0; competitorsIndex < competitorsJsonList.GetLength(); ++competitorsIndex) {
      competitorsJsonList[competitorsIndex].AsObject(m_competitors[competitorsIndex].Jsonize());
    }
    payload.WithArray("competitors", std::move(competitorsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dsql/model/StreamSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DSQL {
namespace Model {

StreamSummary::StreamSummary(JsonView jsonValue) { *this = jsonValue; }

StreamSummary& StreamSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("clusterIdentifier")) {
    m_clusterIdentifier = jsonValue.GetString("clusterIdentifier");
    m_clusterIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamIdentifier")) {
    m_streamIdentifier = jsonValue.GetString("streamIdentifier");
    m_streamIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = StreamStatusMapper::GetStreamStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue StreamSummary::Jsonize() const {
  JsonValue payload;

  if (m_clusterIdentifierHasBeenSet) {
    payload.WithString("clusterIdentifier", m_clusterIdentifier);
  }

  if (m_streamIdentifierHasBeenSet) {
    payload.WithString("streamIdentifier", m_streamIdentifier);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", StreamStatusMapper::GetNameForStreamStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws

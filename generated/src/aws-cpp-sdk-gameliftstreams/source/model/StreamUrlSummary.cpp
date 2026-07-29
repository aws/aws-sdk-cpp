/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gameliftstreams/model/StreamUrlSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GameLiftStreams {
namespace Model {

StreamUrlSummary::StreamUrlSummary(JsonView jsonValue) { *this = jsonValue; }

StreamUrlSummary& StreamUrlSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StreamUrlId")) {
    m_streamUrlId = jsonValue.GetString("StreamUrlId");
    m_streamUrlIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StreamUrl")) {
    m_streamUrl = jsonValue.GetString("StreamUrl");
    m_streamUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = StreamUrlStatusMapper::GetStreamUrlStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusReason")) {
    m_statusReason = StreamUrlStatusReasonMapper::GetStreamUrlStatusReasonForName(jsonValue.GetString("StatusReason"));
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetDouble("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UsageLimit")) {
    m_usageLimit = jsonValue.GetInteger("UsageLimit");
    m_usageLimitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RemainingUses")) {
    m_remainingUses = jsonValue.GetInteger("RemainingUses");
    m_remainingUsesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StreamGroupArn")) {
    m_streamGroupArn = jsonValue.GetString("StreamGroupArn");
    m_streamGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApplicationArn")) {
    m_applicationArn = jsonValue.GetString("ApplicationArn");
    m_applicationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SessionLengthSeconds")) {
    m_sessionLengthSeconds = jsonValue.GetInteger("SessionLengthSeconds");
    m_sessionLengthSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue StreamUrlSummary::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_streamUrlIdHasBeenSet) {
    payload.WithString("StreamUrlId", m_streamUrlId);
  }

  if (m_streamUrlHasBeenSet) {
    payload.WithString("StreamUrl", m_streamUrl);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", StreamUrlStatusMapper::GetNameForStreamUrlStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("StatusReason", StreamUrlStatusReasonMapper::GetNameForStreamUrlStatusReason(m_statusReason));
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithDouble("ExpiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_usageLimitHasBeenSet) {
    payload.WithInteger("UsageLimit", m_usageLimit);
  }

  if (m_remainingUsesHasBeenSet) {
    payload.WithInteger("RemainingUses", m_remainingUses);
  }

  if (m_streamGroupArnHasBeenSet) {
    payload.WithString("StreamGroupArn", m_streamGroupArn);
  }

  if (m_applicationArnHasBeenSet) {
    payload.WithString("ApplicationArn", m_applicationArn);
  }

  if (m_sessionLengthSecondsHasBeenSet) {
    payload.WithInteger("SessionLengthSeconds", m_sessionLengthSeconds);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws

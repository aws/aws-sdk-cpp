/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/S3Activity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

S3Activity::S3Activity(JsonView jsonValue) { *this = jsonValue; }

S3Activity& S3Activity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("api")) {
    m_api = jsonValue.GetString("api");
    m_apiHasBeenSet = true;
  }
  if (jsonValue.ValueExists("affectedBucket")) {
    m_affectedBucket = jsonValue.GetString("affectedBucket");
    m_affectedBucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("otherS3Activity")) {
    m_otherS3Activity = jsonValue.GetString("otherS3Activity");
    m_otherS3ActivityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nonS3Activity")) {
    m_nonS3Activity = jsonValue.GetString("nonS3Activity");
    m_nonS3ActivityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionAssessment")) {
    m_sessionAssessment = jsonValue.GetString("sessionAssessment");
    m_sessionAssessmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventCount")) {
    m_eventCount = jsonValue.GetInt64("eventCount");
    m_eventCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actor")) {
    m_actor = jsonValue.GetObject("actor");
    m_actorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceIp")) {
    m_sourceIp = jsonValue.GetString("sourceIp");
    m_sourceIpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enrichment")) {
    m_enrichment = jsonValue.GetObject("enrichment");
    m_enrichmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("activityWindow")) {
    m_activityWindow = jsonValue.GetObject("activityWindow");
    m_activityWindowHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Activity::Jsonize() const {
  JsonValue payload;

  if (m_apiHasBeenSet) {
    payload.WithString("api", m_api);
  }

  if (m_affectedBucketHasBeenSet) {
    payload.WithString("affectedBucket", m_affectedBucket);
  }

  if (m_otherS3ActivityHasBeenSet) {
    payload.WithString("otherS3Activity", m_otherS3Activity);
  }

  if (m_nonS3ActivityHasBeenSet) {
    payload.WithString("nonS3Activity", m_nonS3Activity);
  }

  if (m_sessionAssessmentHasBeenSet) {
    payload.WithString("sessionAssessment", m_sessionAssessment);
  }

  if (m_eventCountHasBeenSet) {
    payload.WithInt64("eventCount", m_eventCount);
  }

  if (m_actorHasBeenSet) {
    payload.WithObject("actor", m_actor.Jsonize());
  }

  if (m_sourceIpHasBeenSet) {
    payload.WithString("sourceIp", m_sourceIp);
  }

  if (m_enrichmentHasBeenSet) {
    payload.WithObject("enrichment", m_enrichment.Jsonize());
  }

  if (m_activityWindowHasBeenSet) {
    payload.WithObject("activityWindow", m_activityWindow.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws

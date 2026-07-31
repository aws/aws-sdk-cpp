/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/S3DestinationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

S3DestinationConfiguration::S3DestinationConfiguration(JsonView jsonValue) { *this = jsonValue; }

S3DestinationConfiguration& S3DestinationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dataFreshnessInSeconds")) {
    m_dataFreshnessInSeconds = jsonValue.GetInteger("dataFreshnessInSeconds");
    m_dataFreshnessInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deadLetterQueueS3")) {
    m_deadLetterQueueS3 = jsonValue.GetObject("deadLetterQueueS3");
    m_deadLetterQueueS3HasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceExecutionRoleArn")) {
    m_serviceExecutionRoleArn = jsonValue.GetString("serviceExecutionRoleArn");
    m_serviceExecutionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("storage")) {
    m_storage = jsonValue.GetObject("storage");
    m_storageHasBeenSet = true;
  }
  return *this;
}

JsonValue S3DestinationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_dataFreshnessInSecondsHasBeenSet) {
    payload.WithInteger("dataFreshnessInSeconds", m_dataFreshnessInSeconds);
  }

  if (m_deadLetterQueueS3HasBeenSet) {
    payload.WithObject("deadLetterQueueS3", m_deadLetterQueueS3.Jsonize());
  }

  if (m_serviceExecutionRoleArnHasBeenSet) {
    payload.WithString("serviceExecutionRoleArn", m_serviceExecutionRoleArn);
  }

  if (m_storageHasBeenSet) {
    payload.WithObject("storage", m_storage.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws

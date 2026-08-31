/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/S3DestinationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

S3DestinationConfiguration::S3DestinationConfiguration(JsonView jsonValue) { *this = jsonValue; }

S3DestinationConfiguration& S3DestinationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DataFreshnessInSeconds")) {
    m_dataFreshnessInSeconds = jsonValue.GetInteger("DataFreshnessInSeconds");
    m_dataFreshnessInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeadLetterQueueS3Configuration")) {
    m_deadLetterQueueS3Configuration = jsonValue.GetObject("DeadLetterQueueS3Configuration");
    m_deadLetterQueueS3ConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StorageConfiguration")) {
    m_storageConfiguration = jsonValue.GetObject("StorageConfiguration");
    m_storageConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue S3DestinationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_dataFreshnessInSecondsHasBeenSet) {
    payload.WithInteger("DataFreshnessInSeconds", m_dataFreshnessInSeconds);
  }

  if (m_deadLetterQueueS3ConfigurationHasBeenSet) {
    payload.WithObject("DeadLetterQueueS3Configuration", m_deadLetterQueueS3Configuration.Jsonize());
  }

  if (m_storageConfigurationHasBeenSet) {
    payload.WithObject("StorageConfiguration", m_storageConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws

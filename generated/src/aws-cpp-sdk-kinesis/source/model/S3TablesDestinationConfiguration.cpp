/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/S3TablesDestinationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

S3TablesDestinationConfiguration::S3TablesDestinationConfiguration(JsonView jsonValue) { *this = jsonValue; }

S3TablesDestinationConfiguration& S3TablesDestinationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DataFreshnessInSeconds")) {
    m_dataFreshnessInSeconds = jsonValue.GetInteger("DataFreshnessInSeconds");
    m_dataFreshnessInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeadLetterQueueS3Configuration")) {
    m_deadLetterQueueS3Configuration = jsonValue.GetObject("DeadLetterQueueS3Configuration");
    m_deadLetterQueueS3ConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3TablesConfigurationList")) {
    Aws::Utils::Array<JsonView> s3TablesConfigurationListJsonList = jsonValue.GetArray("S3TablesConfigurationList");
    for (unsigned s3TablesConfigurationListIndex = 0; s3TablesConfigurationListIndex < s3TablesConfigurationListJsonList.GetLength();
         ++s3TablesConfigurationListIndex) {
      m_s3TablesConfigurationList.push_back(s3TablesConfigurationListJsonList[s3TablesConfigurationListIndex].AsObject());
    }
    m_s3TablesConfigurationListHasBeenSet = true;
  }
  return *this;
}

JsonValue S3TablesDestinationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_dataFreshnessInSecondsHasBeenSet) {
    payload.WithInteger("DataFreshnessInSeconds", m_dataFreshnessInSeconds);
  }

  if (m_deadLetterQueueS3ConfigurationHasBeenSet) {
    payload.WithObject("DeadLetterQueueS3Configuration", m_deadLetterQueueS3Configuration.Jsonize());
  }

  if (m_s3TablesConfigurationListHasBeenSet) {
    Aws::Utils::Array<JsonValue> s3TablesConfigurationListJsonList(m_s3TablesConfigurationList.size());
    for (unsigned s3TablesConfigurationListIndex = 0; s3TablesConfigurationListIndex < s3TablesConfigurationListJsonList.GetLength();
         ++s3TablesConfigurationListIndex) {
      s3TablesConfigurationListJsonList[s3TablesConfigurationListIndex].AsObject(
          m_s3TablesConfigurationList[s3TablesConfigurationListIndex].Jsonize());
    }
    payload.WithArray("S3TablesConfigurationList", std::move(s3TablesConfigurationListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws

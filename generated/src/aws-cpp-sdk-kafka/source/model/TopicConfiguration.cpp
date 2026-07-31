/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/TopicConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

TopicConfiguration::TopicConfiguration(JsonView jsonValue) { *this = jsonValue; }

TopicConfiguration& TopicConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recordConverter")) {
    m_recordConverter = jsonValue.GetObject("recordConverter");
    m_recordConverterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recordSchema")) {
    m_recordSchema = jsonValue.GetObject("recordSchema");
    m_recordSchemaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topicArn")) {
    m_topicArn = jsonValue.GetString("topicArn");
    m_topicArnHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_recordConverterHasBeenSet) {
    payload.WithObject("recordConverter", m_recordConverter.Jsonize());
  }

  if (m_recordSchemaHasBeenSet) {
    payload.WithObject("recordSchema", m_recordSchema.Jsonize());
  }

  if (m_topicArnHasBeenSet) {
    payload.WithString("topicArn", m_topicArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws

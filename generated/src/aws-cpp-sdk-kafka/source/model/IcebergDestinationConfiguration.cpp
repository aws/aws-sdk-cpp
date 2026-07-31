/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/IcebergDestinationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

IcebergDestinationConfiguration::IcebergDestinationConfiguration(JsonView jsonValue) { *this = jsonValue; }

IcebergDestinationConfiguration& IcebergDestinationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("appendOnly")) {
    m_appendOnly = jsonValue.GetBool("appendOnly");
    m_appendOnlyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("catalog")) {
    m_catalog = jsonValue.GetObject("catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataFreshnessInSeconds")) {
    m_dataFreshnessInSeconds = jsonValue.GetInteger("dataFreshnessInSeconds");
    m_dataFreshnessInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deadLetterQueueS3")) {
    m_deadLetterQueueS3 = jsonValue.GetObject("deadLetterQueueS3");
    m_deadLetterQueueS3HasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationTableList")) {
    Aws::Utils::Array<JsonView> destinationTableListJsonList = jsonValue.GetArray("destinationTableList");
    for (unsigned destinationTableListIndex = 0; destinationTableListIndex < destinationTableListJsonList.GetLength();
         ++destinationTableListIndex) {
      m_destinationTableList.push_back(destinationTableListJsonList[destinationTableListIndex].AsObject());
    }
    m_destinationTableListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schemaEvolution")) {
    m_schemaEvolution = jsonValue.GetObject("schemaEvolution");
    m_schemaEvolutionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceExecutionRoleArn")) {
    m_serviceExecutionRoleArn = jsonValue.GetString("serviceExecutionRoleArn");
    m_serviceExecutionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tableCreation")) {
    m_tableCreation = jsonValue.GetObject("tableCreation");
    m_tableCreationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("compressionType")) {
    m_compressionType = IcebergCompressionTypeMapper::GetIcebergCompressionTypeForName(jsonValue.GetString("compressionType"));
    m_compressionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergDestinationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_appendOnlyHasBeenSet) {
    payload.WithBool("appendOnly", m_appendOnly);
  }

  if (m_catalogHasBeenSet) {
    payload.WithObject("catalog", m_catalog.Jsonize());
  }

  if (m_dataFreshnessInSecondsHasBeenSet) {
    payload.WithInteger("dataFreshnessInSeconds", m_dataFreshnessInSeconds);
  }

  if (m_deadLetterQueueS3HasBeenSet) {
    payload.WithObject("deadLetterQueueS3", m_deadLetterQueueS3.Jsonize());
  }

  if (m_destinationTableListHasBeenSet) {
    Aws::Utils::Array<JsonValue> destinationTableListJsonList(m_destinationTableList.size());
    for (unsigned destinationTableListIndex = 0; destinationTableListIndex < destinationTableListJsonList.GetLength();
         ++destinationTableListIndex) {
      destinationTableListJsonList[destinationTableListIndex].AsObject(m_destinationTableList[destinationTableListIndex].Jsonize());
    }
    payload.WithArray("destinationTableList", std::move(destinationTableListJsonList));
  }

  if (m_schemaEvolutionHasBeenSet) {
    payload.WithObject("schemaEvolution", m_schemaEvolution.Jsonize());
  }

  if (m_serviceExecutionRoleArnHasBeenSet) {
    payload.WithString("serviceExecutionRoleArn", m_serviceExecutionRoleArn);
  }

  if (m_tableCreationHasBeenSet) {
    payload.WithObject("tableCreation", m_tableCreation.Jsonize());
  }

  if (m_compressionTypeHasBeenSet) {
    payload.WithString("compressionType", IcebergCompressionTypeMapper::GetNameForIcebergCompressionType(m_compressionType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws

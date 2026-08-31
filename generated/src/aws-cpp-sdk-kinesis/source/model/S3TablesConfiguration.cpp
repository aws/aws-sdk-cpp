/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/S3TablesConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

S3TablesConfiguration::S3TablesConfiguration(JsonView jsonValue) { *this = jsonValue; }

S3TablesConfiguration& S3TablesConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TableBucketARN")) {
    m_tableBucketARN = jsonValue.GetString("TableBucketARN");
    m_tableBucketARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Namespace")) {
    m_namespace = jsonValue.GetString("Namespace");
    m_namespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TableName")) {
    m_tableName = jsonValue.GetString("TableName");
    m_tableNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompressionType")) {
    m_compressionType = S3TablesCompressionTypeMapper::GetS3TablesCompressionTypeForName(jsonValue.GetString("CompressionType"));
    m_compressionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PartitionSpec")) {
    m_partitionSpec = jsonValue.GetObject("PartitionSpec");
    m_partitionSpecHasBeenSet = true;
  }
  return *this;
}

JsonValue S3TablesConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_tableBucketARNHasBeenSet) {
    payload.WithString("TableBucketARN", m_tableBucketARN);
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("Namespace", m_namespace);
  }

  if (m_tableNameHasBeenSet) {
    payload.WithString("TableName", m_tableName);
  }

  if (m_compressionTypeHasBeenSet) {
    payload.WithString("CompressionType", S3TablesCompressionTypeMapper::GetNameForS3TablesCompressionType(m_compressionType));
  }

  if (m_partitionSpecHasBeenSet) {
    payload.WithObject("PartitionSpec", m_partitionSpec.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws

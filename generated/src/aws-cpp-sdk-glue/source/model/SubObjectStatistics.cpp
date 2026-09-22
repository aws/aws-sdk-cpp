/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/SubObjectStatistics.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

SubObjectStatistics::SubObjectStatistics(JsonView jsonValue) { *this = jsonValue; }

SubObjectStatistics& SubObjectStatistics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceType")) {
    m_sourceType = SubObjectSourceTypeMapper::GetSubObjectSourceTypeForName(jsonValue.GetString("SourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GlueVersionId")) {
    m_glueVersionId = jsonValue.GetString("GlueVersionId");
    m_glueVersionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PartitionCount")) {
    m_partitionCount = jsonValue.GetInt64("PartitionCount");
    m_partitionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FileCount")) {
    m_fileCount = jsonValue.GetInt64("FileCount");
    m_fileCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalFileBytes")) {
    m_totalFileBytes = jsonValue.GetInt64("TotalFileBytes");
    m_totalFileBytesHasBeenSet = true;
  }
  return *this;
}

JsonValue SubObjectStatistics::Jsonize() const {
  JsonValue payload;

  if (m_sourceTypeHasBeenSet) {
    payload.WithString("SourceType", SubObjectSourceTypeMapper::GetNameForSubObjectSourceType(m_sourceType));
  }

  if (m_glueVersionIdHasBeenSet) {
    payload.WithString("GlueVersionId", m_glueVersionId);
  }

  if (m_partitionCountHasBeenSet) {
    payload.WithInt64("PartitionCount", m_partitionCount);
  }

  if (m_fileCountHasBeenSet) {
    payload.WithInt64("FileCount", m_fileCount);
  }

  if (m_totalFileBytesHasBeenSet) {
    payload.WithInt64("TotalFileBytes", m_totalFileBytes);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

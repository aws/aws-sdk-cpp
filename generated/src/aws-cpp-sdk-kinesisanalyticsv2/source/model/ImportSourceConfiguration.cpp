/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/ImportSourceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

ImportSourceConfiguration::ImportSourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

ImportSourceConfiguration& ImportSourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourceType")) {
    m_sourceType = StorageLocationTypeMapper::GetStorageLocationTypeForName(jsonValue.GetString("SourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ImportRoleArn")) {
    m_importRoleArn = jsonValue.GetString("ImportRoleArn");
    m_importRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceEncryptionConfiguration")) {
    m_sourceEncryptionConfiguration = jsonValue.GetObject("SourceEncryptionConfiguration");
    m_sourceEncryptionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceS3PrefixLocation")) {
    m_sourceS3PrefixLocation = jsonValue.GetObject("SourceS3PrefixLocation");
    m_sourceS3PrefixLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportSourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceTypeHasBeenSet) {
    payload.WithString("SourceType", StorageLocationTypeMapper::GetNameForStorageLocationType(m_sourceType));
  }

  if (m_importRoleArnHasBeenSet) {
    payload.WithString("ImportRoleArn", m_importRoleArn);
  }

  if (m_sourceEncryptionConfigurationHasBeenSet) {
    payload.WithObject("SourceEncryptionConfiguration", m_sourceEncryptionConfiguration.Jsonize());
  }

  if (m_sourceS3PrefixLocationHasBeenSet) {
    payload.WithObject("SourceS3PrefixLocation", m_sourceS3PrefixLocation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws

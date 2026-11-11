/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/ExportDestinationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

ExportDestinationConfiguration::ExportDestinationConfiguration(JsonView jsonValue) { *this = jsonValue; }

ExportDestinationConfiguration& ExportDestinationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DestinationType")) {
    m_destinationType = StorageLocationTypeMapper::GetStorageLocationTypeForName(jsonValue.GetString("DestinationType"));
    m_destinationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExportRoleArn")) {
    m_exportRoleArn = jsonValue.GetString("ExportRoleArn");
    m_exportRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DestinationEncryptionConfiguration")) {
    m_destinationEncryptionConfiguration = jsonValue.GetObject("DestinationEncryptionConfiguration");
    m_destinationEncryptionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DestinationS3PrefixLocation")) {
    m_destinationS3PrefixLocation = jsonValue.GetObject("DestinationS3PrefixLocation");
    m_destinationS3PrefixLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportDestinationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_destinationTypeHasBeenSet) {
    payload.WithString("DestinationType", StorageLocationTypeMapper::GetNameForStorageLocationType(m_destinationType));
  }

  if (m_exportRoleArnHasBeenSet) {
    payload.WithString("ExportRoleArn", m_exportRoleArn);
  }

  if (m_destinationEncryptionConfigurationHasBeenSet) {
    payload.WithObject("DestinationEncryptionConfiguration", m_destinationEncryptionConfiguration.Jsonize());
  }

  if (m_destinationS3PrefixLocationHasBeenSet) {
    payload.WithObject("DestinationS3PrefixLocation", m_destinationS3PrefixLocation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws

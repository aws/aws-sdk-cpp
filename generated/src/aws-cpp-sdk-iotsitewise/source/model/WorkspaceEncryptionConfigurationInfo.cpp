/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/WorkspaceEncryptionConfigurationInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

WorkspaceEncryptionConfigurationInfo::WorkspaceEncryptionConfigurationInfo(JsonView jsonValue) { *this = jsonValue; }

WorkspaceEncryptionConfigurationInfo& WorkspaceEncryptionConfigurationInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("encryptionType")) {
    m_encryptionType = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("encryptionType"));
    m_encryptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkspaceEncryptionConfigurationInfo::Jsonize() const {
  JsonValue payload;

  if (m_encryptionTypeHasBeenSet) {
    payload.WithString("encryptionType", EncryptionTypeMapper::GetNameForEncryptionType(m_encryptionType));
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("kmsKeyArn", m_kmsKeyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

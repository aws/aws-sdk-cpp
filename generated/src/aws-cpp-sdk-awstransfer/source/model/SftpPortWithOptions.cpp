/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/SftpPortWithOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Transfer {
namespace Model {

SftpPortWithOptions::SftpPortWithOptions(JsonView jsonValue) { *this = jsonValue; }

SftpPortWithOptions& SftpPortWithOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SftpPort")) {
    m_sftpPort = jsonValue.GetInteger("SftpPort");
    m_sftpPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CommunicationMode")) {
    m_communicationMode = CommunicationModeMapper::GetCommunicationModeForName(jsonValue.GetString("CommunicationMode"));
    m_communicationModeHasBeenSet = true;
  }
  return *this;
}

JsonValue SftpPortWithOptions::Jsonize() const {
  JsonValue payload;

  if (m_sftpPortHasBeenSet) {
    payload.WithInteger("SftpPort", m_sftpPort);
  }

  if (m_communicationModeHasBeenSet) {
    payload.WithString("CommunicationMode", CommunicationModeMapper::GetNameForCommunicationMode(m_communicationMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws

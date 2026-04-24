/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AttachedFilesConfigurationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

AttachedFilesConfigurationSummary::AttachedFilesConfigurationSummary(JsonView jsonValue) { *this = jsonValue; }

AttachedFilesConfigurationSummary& AttachedFilesConfigurationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceId")) {
    m_instanceId = jsonValue.GetString("InstanceId");
    m_instanceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttachmentScope")) {
    m_attachmentScope = AttachmentScopeMapper::GetAttachmentScopeForName(jsonValue.GetString("AttachmentScope"));
    m_attachmentScopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaximumSizeLimitInBytes")) {
    m_maximumSizeLimitInBytes = jsonValue.GetInt64("MaximumSizeLimitInBytes");
    m_maximumSizeLimitInBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExtensionConfiguration")) {
    m_extensionConfiguration = jsonValue.GetObject("ExtensionConfiguration");
    m_extensionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AttachedFilesConfigurationSummary::Jsonize() const {
  JsonValue payload;

  if (m_instanceIdHasBeenSet) {
    payload.WithString("InstanceId", m_instanceId);
  }

  if (m_attachmentScopeHasBeenSet) {
    payload.WithString("AttachmentScope", AttachmentScopeMapper::GetNameForAttachmentScope(m_attachmentScope));
  }

  if (m_maximumSizeLimitInBytesHasBeenSet) {
    payload.WithInt64("MaximumSizeLimitInBytes", m_maximumSizeLimitInBytes);
  }

  if (m_extensionConfigurationHasBeenSet) {
    payload.WithObject("ExtensionConfiguration", m_extensionConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/RegistryRecordSynchronizedSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

RegistryRecordSynchronizedSource::RegistryRecordSynchronizedSource(JsonView jsonValue) { *this = jsonValue; }

RegistryRecordSynchronizedSource& RegistryRecordSynchronizedSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3")) {
    m_s3 = jsonValue.GetObject("s3");
    m_s3HasBeenSet = true;
  }
  if (jsonValue.ValueExists("gitHub")) {
    m_gitHub = jsonValue.GetObject("gitHub");
    m_gitHubHasBeenSet = true;
  }
  return *this;
}

JsonValue RegistryRecordSynchronizedSource::Jsonize() const {
  JsonValue payload;

  if (m_s3HasBeenSet) {
    payload.WithObject("s3", m_s3.Jsonize());
  }

  if (m_gitHubHasBeenSet) {
    payload.WithObject("gitHub", m_gitHub.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws

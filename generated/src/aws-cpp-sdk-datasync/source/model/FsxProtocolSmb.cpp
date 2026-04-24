/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datasync/model/FsxProtocolSmb.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {

FsxProtocolSmb::FsxProtocolSmb(JsonView jsonValue) { *this = jsonValue; }

FsxProtocolSmb& FsxProtocolSmb::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Domain")) {
    m_domain = jsonValue.GetString("Domain");
    m_domainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MountOptions")) {
    m_mountOptions = jsonValue.GetObject("MountOptions");
    m_mountOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Password")) {
    m_password = jsonValue.GetString("Password");
    m_passwordHasBeenSet = true;
  }
  if (jsonValue.ValueExists("User")) {
    m_user = jsonValue.GetString("User");
    m_userHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ManagedSecretConfig")) {
    m_managedSecretConfig = jsonValue.GetObject("ManagedSecretConfig");
    m_managedSecretConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CmkSecretConfig")) {
    m_cmkSecretConfig = jsonValue.GetObject("CmkSecretConfig");
    m_cmkSecretConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomSecretConfig")) {
    m_customSecretConfig = jsonValue.GetObject("CustomSecretConfig");
    m_customSecretConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue FsxProtocolSmb::Jsonize() const {
  JsonValue payload;

  if (m_domainHasBeenSet) {
    payload.WithString("Domain", m_domain);
  }

  if (m_mountOptionsHasBeenSet) {
    payload.WithObject("MountOptions", m_mountOptions.Jsonize());
  }

  if (m_passwordHasBeenSet) {
    payload.WithString("Password", m_password);
  }

  if (m_userHasBeenSet) {
    payload.WithString("User", m_user);
  }

  if (m_managedSecretConfigHasBeenSet) {
    payload.WithObject("ManagedSecretConfig", m_managedSecretConfig.Jsonize());
  }

  if (m_cmkSecretConfigHasBeenSet) {
    payload.WithObject("CmkSecretConfig", m_cmkSecretConfig.Jsonize());
  }

  if (m_customSecretConfigHasBeenSet) {
    payload.WithObject("CustomSecretConfig", m_customSecretConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws

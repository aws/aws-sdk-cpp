/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/OntapFileSystemIdentity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

OntapFileSystemIdentity::OntapFileSystemIdentity(JsonView jsonValue) { *this = jsonValue; }

OntapFileSystemIdentity& OntapFileSystemIdentity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = OntapFileSystemUserTypeMapper::GetOntapFileSystemUserTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UnixUser")) {
    m_unixUser = jsonValue.GetObject("UnixUser");
    m_unixUserHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WindowsUser")) {
    m_windowsUser = jsonValue.GetObject("WindowsUser");
    m_windowsUserHasBeenSet = true;
  }
  return *this;
}

JsonValue OntapFileSystemIdentity::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", OntapFileSystemUserTypeMapper::GetNameForOntapFileSystemUserType(m_type));
  }

  if (m_unixUserHasBeenSet) {
    payload.WithObject("UnixUser", m_unixUser.Jsonize());
  }

  if (m_windowsUserHasBeenSet) {
    payload.WithObject("WindowsUser", m_windowsUser.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OpenZFSFileSystemIdentity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

OpenZFSFileSystemIdentity::OpenZFSFileSystemIdentity(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenZFSFileSystemIdentity& OpenZFSFileSystemIdentity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = OpenZFSFileSystemUserTypeMapper::GetOpenZFSFileSystemUserTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PosixUser"))
  {
    m_posixUser = jsonValue.GetObject("PosixUser");
    m_posixUserHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenZFSFileSystemIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", OpenZFSFileSystemUserTypeMapper::GetNameForOpenZFSFileSystemUserType(m_type));
  }

  if(m_posixUserHasBeenSet)
  {
   payload.WithObject("PosixUser", m_posixUser.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws

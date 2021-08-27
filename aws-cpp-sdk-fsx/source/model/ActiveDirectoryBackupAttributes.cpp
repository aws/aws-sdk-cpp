/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/ActiveDirectoryBackupAttributes.h>
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

ActiveDirectoryBackupAttributes::ActiveDirectoryBackupAttributes() : 
    m_domainNameHasBeenSet(false),
    m_activeDirectoryIdHasBeenSet(false)
{
}

ActiveDirectoryBackupAttributes::ActiveDirectoryBackupAttributes(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_activeDirectoryIdHasBeenSet(false)
{
  *this = jsonValue;
}

ActiveDirectoryBackupAttributes& ActiveDirectoryBackupAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveDirectoryId"))
  {
    m_activeDirectoryId = jsonValue.GetString("ActiveDirectoryId");

    m_activeDirectoryIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ActiveDirectoryBackupAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_activeDirectoryIdHasBeenSet)
  {
   payload.WithString("ActiveDirectoryId", m_activeDirectoryId);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws

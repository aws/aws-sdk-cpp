/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

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

#include <aws/awstransfer/model/SshPublicKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

SshPublicKey::SshPublicKey() : 
    m_dateImportedHasBeenSet(false),
    m_sshPublicKeyBodyHasBeenSet(false),
    m_sshPublicKeyIdHasBeenSet(false)
{
}

SshPublicKey::SshPublicKey(JsonView jsonValue) : 
    m_dateImportedHasBeenSet(false),
    m_sshPublicKeyBodyHasBeenSet(false),
    m_sshPublicKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

SshPublicKey& SshPublicKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DateImported"))
  {
    m_dateImported = jsonValue.GetDouble("DateImported");

    m_dateImportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SshPublicKeyBody"))
  {
    m_sshPublicKeyBody = jsonValue.GetString("SshPublicKeyBody");

    m_sshPublicKeyBodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SshPublicKeyId"))
  {
    m_sshPublicKeyId = jsonValue.GetString("SshPublicKeyId");

    m_sshPublicKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SshPublicKey::Jsonize() const
{
  JsonValue payload;

  if(m_dateImportedHasBeenSet)
  {
   payload.WithDouble("DateImported", m_dateImported.SecondsWithMSPrecision());
  }

  if(m_sshPublicKeyBodyHasBeenSet)
  {
   payload.WithString("SshPublicKeyBody", m_sshPublicKeyBody);

  }

  if(m_sshPublicKeyIdHasBeenSet)
  {
   payload.WithString("SshPublicKeyId", m_sshPublicKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws

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

#include <aws/lightsail/model/HostKeyAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

HostKeyAttributes::HostKeyAttributes() : 
    m_algorithmHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_witnessedAtHasBeenSet(false),
    m_fingerprintSHA1HasBeenSet(false),
    m_fingerprintSHA256HasBeenSet(false),
    m_notValidBeforeHasBeenSet(false),
    m_notValidAfterHasBeenSet(false)
{
}

HostKeyAttributes::HostKeyAttributes(JsonView jsonValue) : 
    m_algorithmHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_witnessedAtHasBeenSet(false),
    m_fingerprintSHA1HasBeenSet(false),
    m_fingerprintSHA256HasBeenSet(false),
    m_notValidBeforeHasBeenSet(false),
    m_notValidAfterHasBeenSet(false)
{
  *this = jsonValue;
}

HostKeyAttributes& HostKeyAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("algorithm"))
  {
    m_algorithm = jsonValue.GetString("algorithm");

    m_algorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicKey"))
  {
    m_publicKey = jsonValue.GetString("publicKey");

    m_publicKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("witnessedAt"))
  {
    m_witnessedAt = jsonValue.GetDouble("witnessedAt");

    m_witnessedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fingerprintSHA1"))
  {
    m_fingerprintSHA1 = jsonValue.GetString("fingerprintSHA1");

    m_fingerprintSHA1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("fingerprintSHA256"))
  {
    m_fingerprintSHA256 = jsonValue.GetString("fingerprintSHA256");

    m_fingerprintSHA256HasBeenSet = true;
  }

  if(jsonValue.ValueExists("notValidBefore"))
  {
    m_notValidBefore = jsonValue.GetDouble("notValidBefore");

    m_notValidBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notValidAfter"))
  {
    m_notValidAfter = jsonValue.GetDouble("notValidAfter");

    m_notValidAfterHasBeenSet = true;
  }

  return *this;
}

JsonValue HostKeyAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmHasBeenSet)
  {
   payload.WithString("algorithm", m_algorithm);

  }

  if(m_publicKeyHasBeenSet)
  {
   payload.WithString("publicKey", m_publicKey);

  }

  if(m_witnessedAtHasBeenSet)
  {
   payload.WithDouble("witnessedAt", m_witnessedAt.SecondsWithMSPrecision());
  }

  if(m_fingerprintSHA1HasBeenSet)
  {
   payload.WithString("fingerprintSHA1", m_fingerprintSHA1);

  }

  if(m_fingerprintSHA256HasBeenSet)
  {
   payload.WithString("fingerprintSHA256", m_fingerprintSHA256);

  }

  if(m_notValidBeforeHasBeenSet)
  {
   payload.WithDouble("notValidBefore", m_notValidBefore.SecondsWithMSPrecision());
  }

  if(m_notValidAfterHasBeenSet)
  {
   payload.WithDouble("notValidAfter", m_notValidAfter.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws

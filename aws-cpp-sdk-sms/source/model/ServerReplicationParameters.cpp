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

#include <aws/sms/model/ServerReplicationParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

ServerReplicationParameters::ServerReplicationParameters() : 
    m_seedTimeHasBeenSet(false),
    m_frequency(0),
    m_frequencyHasBeenSet(false),
    m_runOnce(false),
    m_runOnceHasBeenSet(false),
    m_licenseType(LicenseType::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_numberOfRecentAmisToKeep(0),
    m_numberOfRecentAmisToKeepHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

ServerReplicationParameters::ServerReplicationParameters(JsonView jsonValue) : 
    m_seedTimeHasBeenSet(false),
    m_frequency(0),
    m_frequencyHasBeenSet(false),
    m_runOnce(false),
    m_runOnceHasBeenSet(false),
    m_licenseType(LicenseType::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_numberOfRecentAmisToKeep(0),
    m_numberOfRecentAmisToKeepHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

ServerReplicationParameters& ServerReplicationParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("seedTime"))
  {
    m_seedTime = jsonValue.GetDouble("seedTime");

    m_seedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frequency"))
  {
    m_frequency = jsonValue.GetInteger("frequency");

    m_frequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runOnce"))
  {
    m_runOnce = jsonValue.GetBool("runOnce");

    m_runOnceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseType"))
  {
    m_licenseType = LicenseTypeMapper::GetLicenseTypeForName(jsonValue.GetString("licenseType"));

    m_licenseTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfRecentAmisToKeep"))
  {
    m_numberOfRecentAmisToKeep = jsonValue.GetInteger("numberOfRecentAmisToKeep");

    m_numberOfRecentAmisToKeepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encrypted"))
  {
    m_encrypted = jsonValue.GetBool("encrypted");

    m_encryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerReplicationParameters::Jsonize() const
{
  JsonValue payload;

  if(m_seedTimeHasBeenSet)
  {
   payload.WithDouble("seedTime", m_seedTime.SecondsWithMSPrecision());
  }

  if(m_frequencyHasBeenSet)
  {
   payload.WithInteger("frequency", m_frequency);

  }

  if(m_runOnceHasBeenSet)
  {
   payload.WithBool("runOnce", m_runOnce);

  }

  if(m_licenseTypeHasBeenSet)
  {
   payload.WithString("licenseType", LicenseTypeMapper::GetNameForLicenseType(m_licenseType));
  }

  if(m_numberOfRecentAmisToKeepHasBeenSet)
  {
   payload.WithInteger("numberOfRecentAmisToKeep", m_numberOfRecentAmisToKeep);

  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("encrypted", m_encrypted);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws

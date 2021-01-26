/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/IssuerDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

IssuerDetails::IssuerDetails() : 
    m_nameHasBeenSet(false),
    m_signKeyHasBeenSet(false),
    m_keyFingerprintHasBeenSet(false)
{
}

IssuerDetails::IssuerDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_signKeyHasBeenSet(false),
    m_keyFingerprintHasBeenSet(false)
{
  *this = jsonValue;
}

IssuerDetails& IssuerDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SignKey"))
  {
    m_signKey = jsonValue.GetString("SignKey");

    m_signKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyFingerprint"))
  {
    m_keyFingerprint = jsonValue.GetString("KeyFingerprint");

    m_keyFingerprintHasBeenSet = true;
  }

  return *this;
}

JsonValue IssuerDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_signKeyHasBeenSet)
  {
   payload.WithString("SignKey", m_signKey);

  }

  if(m_keyFingerprintHasBeenSet)
  {
   payload.WithString("KeyFingerprint", m_keyFingerprint);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws

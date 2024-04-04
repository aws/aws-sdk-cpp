/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/Srt.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

Srt::Srt() : 
    m_endpointHasBeenSet(false),
    m_passphraseHasBeenSet(false)
{
}

Srt::Srt(JsonView jsonValue) : 
    m_endpointHasBeenSet(false),
    m_passphraseHasBeenSet(false)
{
  *this = jsonValue;
}

Srt& Srt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("passphrase"))
  {
    m_passphrase = jsonValue.GetString("passphrase");

    m_passphraseHasBeenSet = true;
  }

  return *this;
}

JsonValue Srt::Jsonize() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_passphraseHasBeenSet)
  {
   payload.WithString("passphrase", m_passphrase);

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws

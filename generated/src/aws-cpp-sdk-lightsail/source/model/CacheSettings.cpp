/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CacheSettings.h>
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

CacheSettings::CacheSettings() : 
    m_defaultTTL(0),
    m_defaultTTLHasBeenSet(false),
    m_minimumTTL(0),
    m_minimumTTLHasBeenSet(false),
    m_maximumTTL(0),
    m_maximumTTLHasBeenSet(false),
    m_allowedHTTPMethodsHasBeenSet(false),
    m_cachedHTTPMethodsHasBeenSet(false),
    m_forwardedCookiesHasBeenSet(false),
    m_forwardedHeadersHasBeenSet(false),
    m_forwardedQueryStringsHasBeenSet(false)
{
}

CacheSettings::CacheSettings(JsonView jsonValue) : 
    m_defaultTTL(0),
    m_defaultTTLHasBeenSet(false),
    m_minimumTTL(0),
    m_minimumTTLHasBeenSet(false),
    m_maximumTTL(0),
    m_maximumTTLHasBeenSet(false),
    m_allowedHTTPMethodsHasBeenSet(false),
    m_cachedHTTPMethodsHasBeenSet(false),
    m_forwardedCookiesHasBeenSet(false),
    m_forwardedHeadersHasBeenSet(false),
    m_forwardedQueryStringsHasBeenSet(false)
{
  *this = jsonValue;
}

CacheSettings& CacheSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultTTL"))
  {
    m_defaultTTL = jsonValue.GetInt64("defaultTTL");

    m_defaultTTLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimumTTL"))
  {
    m_minimumTTL = jsonValue.GetInt64("minimumTTL");

    m_minimumTTLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximumTTL"))
  {
    m_maximumTTL = jsonValue.GetInt64("maximumTTL");

    m_maximumTTLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowedHTTPMethods"))
  {
    m_allowedHTTPMethods = jsonValue.GetString("allowedHTTPMethods");

    m_allowedHTTPMethodsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cachedHTTPMethods"))
  {
    m_cachedHTTPMethods = jsonValue.GetString("cachedHTTPMethods");

    m_cachedHTTPMethodsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("forwardedCookies"))
  {
    m_forwardedCookies = jsonValue.GetObject("forwardedCookies");

    m_forwardedCookiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("forwardedHeaders"))
  {
    m_forwardedHeaders = jsonValue.GetObject("forwardedHeaders");

    m_forwardedHeadersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("forwardedQueryStrings"))
  {
    m_forwardedQueryStrings = jsonValue.GetObject("forwardedQueryStrings");

    m_forwardedQueryStringsHasBeenSet = true;
  }

  return *this;
}

JsonValue CacheSettings::Jsonize() const
{
  JsonValue payload;

  if(m_defaultTTLHasBeenSet)
  {
   payload.WithInt64("defaultTTL", m_defaultTTL);

  }

  if(m_minimumTTLHasBeenSet)
  {
   payload.WithInt64("minimumTTL", m_minimumTTL);

  }

  if(m_maximumTTLHasBeenSet)
  {
   payload.WithInt64("maximumTTL", m_maximumTTL);

  }

  if(m_allowedHTTPMethodsHasBeenSet)
  {
   payload.WithString("allowedHTTPMethods", m_allowedHTTPMethods);

  }

  if(m_cachedHTTPMethodsHasBeenSet)
  {
   payload.WithString("cachedHTTPMethods", m_cachedHTTPMethods);

  }

  if(m_forwardedCookiesHasBeenSet)
  {
   payload.WithObject("forwardedCookies", m_forwardedCookies.Jsonize());

  }

  if(m_forwardedHeadersHasBeenSet)
  {
   payload.WithObject("forwardedHeaders", m_forwardedHeaders.Jsonize());

  }

  if(m_forwardedQueryStringsHasBeenSet)
  {
   payload.WithObject("forwardedQueryStrings", m_forwardedQueryStrings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws

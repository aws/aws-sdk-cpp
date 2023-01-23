/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/Name.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

Name::Name() : 
    m_formattedHasBeenSet(false),
    m_familyNameHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_middleNameHasBeenSet(false),
    m_honorificPrefixHasBeenSet(false),
    m_honorificSuffixHasBeenSet(false)
{
}

Name::Name(JsonView jsonValue) : 
    m_formattedHasBeenSet(false),
    m_familyNameHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_middleNameHasBeenSet(false),
    m_honorificPrefixHasBeenSet(false),
    m_honorificSuffixHasBeenSet(false)
{
  *this = jsonValue;
}

Name& Name::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Formatted"))
  {
    m_formatted = jsonValue.GetString("Formatted");

    m_formattedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FamilyName"))
  {
    m_familyName = jsonValue.GetString("FamilyName");

    m_familyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GivenName"))
  {
    m_givenName = jsonValue.GetString("GivenName");

    m_givenNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MiddleName"))
  {
    m_middleName = jsonValue.GetString("MiddleName");

    m_middleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HonorificPrefix"))
  {
    m_honorificPrefix = jsonValue.GetString("HonorificPrefix");

    m_honorificPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HonorificSuffix"))
  {
    m_honorificSuffix = jsonValue.GetString("HonorificSuffix");

    m_honorificSuffixHasBeenSet = true;
  }

  return *this;
}

JsonValue Name::Jsonize() const
{
  JsonValue payload;

  if(m_formattedHasBeenSet)
  {
   payload.WithString("Formatted", m_formatted);

  }

  if(m_familyNameHasBeenSet)
  {
   payload.WithString("FamilyName", m_familyName);

  }

  if(m_givenNameHasBeenSet)
  {
   payload.WithString("GivenName", m_givenName);

  }

  if(m_middleNameHasBeenSet)
  {
   payload.WithString("MiddleName", m_middleName);

  }

  if(m_honorificPrefixHasBeenSet)
  {
   payload.WithString("HonorificPrefix", m_honorificPrefix);

  }

  if(m_honorificSuffixHasBeenSet)
  {
   payload.WithString("HonorificSuffix", m_honorificSuffix);

  }

  return payload;
}

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

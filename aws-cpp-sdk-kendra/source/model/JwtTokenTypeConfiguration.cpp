/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/JwtTokenTypeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

JwtTokenTypeConfiguration::JwtTokenTypeConfiguration() : 
    m_keyLocation(KeyLocation::NOT_SET),
    m_keyLocationHasBeenSet(false),
    m_uRLHasBeenSet(false),
    m_secretManagerArnHasBeenSet(false),
    m_userNameAttributeFieldHasBeenSet(false),
    m_groupAttributeFieldHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_claimRegexHasBeenSet(false)
{
}

JwtTokenTypeConfiguration::JwtTokenTypeConfiguration(JsonView jsonValue) : 
    m_keyLocation(KeyLocation::NOT_SET),
    m_keyLocationHasBeenSet(false),
    m_uRLHasBeenSet(false),
    m_secretManagerArnHasBeenSet(false),
    m_userNameAttributeFieldHasBeenSet(false),
    m_groupAttributeFieldHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_claimRegexHasBeenSet(false)
{
  *this = jsonValue;
}

JwtTokenTypeConfiguration& JwtTokenTypeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyLocation"))
  {
    m_keyLocation = KeyLocationMapper::GetKeyLocationForName(jsonValue.GetString("KeyLocation"));

    m_keyLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("URL"))
  {
    m_uRL = jsonValue.GetString("URL");

    m_uRLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretManagerArn"))
  {
    m_secretManagerArn = jsonValue.GetString("SecretManagerArn");

    m_secretManagerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserNameAttributeField"))
  {
    m_userNameAttributeField = jsonValue.GetString("UserNameAttributeField");

    m_userNameAttributeFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupAttributeField"))
  {
    m_groupAttributeField = jsonValue.GetString("GroupAttributeField");

    m_groupAttributeFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Issuer"))
  {
    m_issuer = jsonValue.GetString("Issuer");

    m_issuerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClaimRegex"))
  {
    m_claimRegex = jsonValue.GetString("ClaimRegex");

    m_claimRegexHasBeenSet = true;
  }

  return *this;
}

JsonValue JwtTokenTypeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_keyLocationHasBeenSet)
  {
   payload.WithString("KeyLocation", KeyLocationMapper::GetNameForKeyLocation(m_keyLocation));
  }

  if(m_uRLHasBeenSet)
  {
   payload.WithString("URL", m_uRL);

  }

  if(m_secretManagerArnHasBeenSet)
  {
   payload.WithString("SecretManagerArn", m_secretManagerArn);

  }

  if(m_userNameAttributeFieldHasBeenSet)
  {
   payload.WithString("UserNameAttributeField", m_userNameAttributeField);

  }

  if(m_groupAttributeFieldHasBeenSet)
  {
   payload.WithString("GroupAttributeField", m_groupAttributeField);

  }

  if(m_issuerHasBeenSet)
  {
   payload.WithString("Issuer", m_issuer);

  }

  if(m_claimRegexHasBeenSet)
  {
   payload.WithString("ClaimRegex", m_claimRegex);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws

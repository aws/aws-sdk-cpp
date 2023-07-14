/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ConferencePreference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

ConferencePreference::ConferencePreference() : 
    m_defaultConferenceProviderArnHasBeenSet(false)
{
}

ConferencePreference::ConferencePreference(JsonView jsonValue) : 
    m_defaultConferenceProviderArnHasBeenSet(false)
{
  *this = jsonValue;
}

ConferencePreference& ConferencePreference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultConferenceProviderArn"))
  {
    m_defaultConferenceProviderArn = jsonValue.GetString("DefaultConferenceProviderArn");

    m_defaultConferenceProviderArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ConferencePreference::Jsonize() const
{
  JsonValue payload;

  if(m_defaultConferenceProviderArnHasBeenSet)
  {
   payload.WithString("DefaultConferenceProviderArn", m_defaultConferenceProviderArn);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws

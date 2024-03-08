/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/AccountPreferences.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace chatbot
{
namespace Model
{

AccountPreferences::AccountPreferences() : 
    m_userAuthorizationRequired(false),
    m_userAuthorizationRequiredHasBeenSet(false),
    m_trainingDataCollectionEnabled(false),
    m_trainingDataCollectionEnabledHasBeenSet(false)
{
}

AccountPreferences::AccountPreferences(JsonView jsonValue) : 
    m_userAuthorizationRequired(false),
    m_userAuthorizationRequiredHasBeenSet(false),
    m_trainingDataCollectionEnabled(false),
    m_trainingDataCollectionEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

AccountPreferences& AccountPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserAuthorizationRequired"))
  {
    m_userAuthorizationRequired = jsonValue.GetBool("UserAuthorizationRequired");

    m_userAuthorizationRequiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingDataCollectionEnabled"))
  {
    m_trainingDataCollectionEnabled = jsonValue.GetBool("TrainingDataCollectionEnabled");

    m_trainingDataCollectionEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_userAuthorizationRequiredHasBeenSet)
  {
   payload.WithBool("UserAuthorizationRequired", m_userAuthorizationRequired);

  }

  if(m_trainingDataCollectionEnabledHasBeenSet)
  {
   payload.WithBool("TrainingDataCollectionEnabled", m_trainingDataCollectionEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace chatbot
} // namespace Aws

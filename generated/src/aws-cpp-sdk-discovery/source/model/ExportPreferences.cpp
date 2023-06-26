/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/ExportPreferences.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

ExportPreferences::ExportPreferences() : 
    m_ec2RecommendationsPreferencesHasBeenSet(false)
{
}

ExportPreferences::ExportPreferences(JsonView jsonValue) : 
    m_ec2RecommendationsPreferencesHasBeenSet(false)
{
  *this = jsonValue;
}

ExportPreferences& ExportPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ec2RecommendationsPreferences"))
  {
    m_ec2RecommendationsPreferences = jsonValue.GetObject("ec2RecommendationsPreferences");

    m_ec2RecommendationsPreferencesHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_ec2RecommendationsPreferencesHasBeenSet)
  {
   payload.WithObject("ec2RecommendationsPreferences", m_ec2RecommendationsPreferences.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws

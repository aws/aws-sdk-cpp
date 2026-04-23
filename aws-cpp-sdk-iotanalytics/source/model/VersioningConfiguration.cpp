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

#include <aws/iotanalytics/model/VersioningConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

VersioningConfiguration::VersioningConfiguration() : 
    m_unlimited(false),
    m_unlimitedHasBeenSet(false),
    m_maxVersions(0),
    m_maxVersionsHasBeenSet(false)
{
}

VersioningConfiguration::VersioningConfiguration(JsonView jsonValue) : 
    m_unlimited(false),
    m_unlimitedHasBeenSet(false),
    m_maxVersions(0),
    m_maxVersionsHasBeenSet(false)
{
  *this = jsonValue;
}

VersioningConfiguration& VersioningConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unlimited"))
  {
    m_unlimited = jsonValue.GetBool("unlimited");

    m_unlimitedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxVersions"))
  {
    m_maxVersions = jsonValue.GetInteger("maxVersions");

    m_maxVersionsHasBeenSet = true;
  }

  return *this;
}

JsonValue VersioningConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_unlimitedHasBeenSet)
  {
   payload.WithBool("unlimited", m_unlimited);

  }

  if(m_maxVersionsHasBeenSet)
  {
   payload.WithInteger("maxVersions", m_maxVersions);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

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

#include <aws/synthetics/model/RuntimeVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

RuntimeVersion::RuntimeVersion() : 
    m_versionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_releaseDateHasBeenSet(false),
    m_deprecationDateHasBeenSet(false)
{
}

RuntimeVersion::RuntimeVersion(JsonView jsonValue) : 
    m_versionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_releaseDateHasBeenSet(false),
    m_deprecationDateHasBeenSet(false)
{
  *this = jsonValue;
}

RuntimeVersion& RuntimeVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VersionName"))
  {
    m_versionName = jsonValue.GetString("VersionName");

    m_versionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReleaseDate"))
  {
    m_releaseDate = jsonValue.GetDouble("ReleaseDate");

    m_releaseDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeprecationDate"))
  {
    m_deprecationDate = jsonValue.GetDouble("DeprecationDate");

    m_deprecationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue RuntimeVersion::Jsonize() const
{
  JsonValue payload;

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("VersionName", m_versionName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_releaseDateHasBeenSet)
  {
   payload.WithDouble("ReleaseDate", m_releaseDate.SecondsWithMSPrecision());
  }

  if(m_deprecationDateHasBeenSet)
  {
   payload.WithDouble("DeprecationDate", m_deprecationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws

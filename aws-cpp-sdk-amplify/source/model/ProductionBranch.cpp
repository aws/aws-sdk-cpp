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

#include <aws/amplify/model/ProductionBranch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

ProductionBranch::ProductionBranch() : 
    m_lastDeployTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_thumbnailUrlHasBeenSet(false),
    m_branchNameHasBeenSet(false)
{
}

ProductionBranch::ProductionBranch(JsonView jsonValue) : 
    m_lastDeployTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_thumbnailUrlHasBeenSet(false),
    m_branchNameHasBeenSet(false)
{
  *this = jsonValue;
}

ProductionBranch& ProductionBranch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lastDeployTime"))
  {
    m_lastDeployTime = jsonValue.GetDouble("lastDeployTime");

    m_lastDeployTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thumbnailUrl"))
  {
    m_thumbnailUrl = jsonValue.GetString("thumbnailUrl");

    m_thumbnailUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("branchName"))
  {
    m_branchName = jsonValue.GetString("branchName");

    m_branchNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductionBranch::Jsonize() const
{
  JsonValue payload;

  if(m_lastDeployTimeHasBeenSet)
  {
   payload.WithDouble("lastDeployTime", m_lastDeployTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_thumbnailUrlHasBeenSet)
  {
   payload.WithString("thumbnailUrl", m_thumbnailUrl);

  }

  if(m_branchNameHasBeenSet)
  {
   payload.WithString("branchName", m_branchName);

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws

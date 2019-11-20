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

#include <aws/quicksight/model/JiraParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

JiraParameters::JiraParameters() : 
    m_siteBaseUrlHasBeenSet(false)
{
}

JiraParameters::JiraParameters(JsonView jsonValue) : 
    m_siteBaseUrlHasBeenSet(false)
{
  *this = jsonValue;
}

JiraParameters& JiraParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SiteBaseUrl"))
  {
    m_siteBaseUrl = jsonValue.GetString("SiteBaseUrl");

    m_siteBaseUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue JiraParameters::Jsonize() const
{
  JsonValue payload;

  if(m_siteBaseUrlHasBeenSet)
  {
   payload.WithString("SiteBaseUrl", m_siteBaseUrl);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws

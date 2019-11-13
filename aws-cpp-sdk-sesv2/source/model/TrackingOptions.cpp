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

#include <aws/sesv2/model/TrackingOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

TrackingOptions::TrackingOptions() : 
    m_customRedirectDomainHasBeenSet(false)
{
}

TrackingOptions::TrackingOptions(JsonView jsonValue) : 
    m_customRedirectDomainHasBeenSet(false)
{
  *this = jsonValue;
}

TrackingOptions& TrackingOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomRedirectDomain"))
  {
    m_customRedirectDomain = jsonValue.GetString("CustomRedirectDomain");

    m_customRedirectDomainHasBeenSet = true;
  }

  return *this;
}

JsonValue TrackingOptions::Jsonize() const
{
  JsonValue payload;

  if(m_customRedirectDomainHasBeenSet)
  {
   payload.WithString("CustomRedirectDomain", m_customRedirectDomain);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws

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

#include <aws/datasync/model/EndpointOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

EndpointOptions::EndpointOptions() : 
    m_fips(false),
    m_fipsHasBeenSet(false),
    m_privateLink(false),
    m_privateLinkHasBeenSet(false)
{
}

EndpointOptions::EndpointOptions(JsonView jsonValue) : 
    m_fips(false),
    m_fipsHasBeenSet(false),
    m_privateLink(false),
    m_privateLinkHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointOptions& EndpointOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Fips"))
  {
    m_fips = jsonValue.GetBool("Fips");

    m_fipsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateLink"))
  {
    m_privateLink = jsonValue.GetBool("PrivateLink");

    m_privateLinkHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointOptions::Jsonize() const
{
  JsonValue payload;

  if(m_fipsHasBeenSet)
  {
   payload.WithBool("Fips", m_fips);

  }

  if(m_privateLinkHasBeenSet)
  {
   payload.WithBool("PrivateLink", m_privateLink);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws

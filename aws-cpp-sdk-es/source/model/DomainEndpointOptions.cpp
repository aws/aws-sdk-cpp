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

#include <aws/es/model/DomainEndpointOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

DomainEndpointOptions::DomainEndpointOptions() : 
    m_enforceHTTPS(false),
    m_enforceHTTPSHasBeenSet(false),
    m_tLSSecurityPolicy(TLSSecurityPolicy::NOT_SET),
    m_tLSSecurityPolicyHasBeenSet(false)
{
}

DomainEndpointOptions::DomainEndpointOptions(JsonView jsonValue) : 
    m_enforceHTTPS(false),
    m_enforceHTTPSHasBeenSet(false),
    m_tLSSecurityPolicy(TLSSecurityPolicy::NOT_SET),
    m_tLSSecurityPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

DomainEndpointOptions& DomainEndpointOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnforceHTTPS"))
  {
    m_enforceHTTPS = jsonValue.GetBool("EnforceHTTPS");

    m_enforceHTTPSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TLSSecurityPolicy"))
  {
    m_tLSSecurityPolicy = TLSSecurityPolicyMapper::GetTLSSecurityPolicyForName(jsonValue.GetString("TLSSecurityPolicy"));

    m_tLSSecurityPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainEndpointOptions::Jsonize() const
{
  JsonValue payload;

  if(m_enforceHTTPSHasBeenSet)
  {
   payload.WithBool("EnforceHTTPS", m_enforceHTTPS);

  }

  if(m_tLSSecurityPolicyHasBeenSet)
  {
   payload.WithString("TLSSecurityPolicy", TLSSecurityPolicyMapper::GetNameForTLSSecurityPolicy(m_tLSSecurityPolicy));
  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws

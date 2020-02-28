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

#include <aws/appmesh/model/ClientPolicyTls.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

ClientPolicyTls::ClientPolicyTls() : 
    m_enforce(false),
    m_enforceHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_validationHasBeenSet(false)
{
}

ClientPolicyTls::ClientPolicyTls(JsonView jsonValue) : 
    m_enforce(false),
    m_enforceHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_validationHasBeenSet(false)
{
  *this = jsonValue;
}

ClientPolicyTls& ClientPolicyTls::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enforce"))
  {
    m_enforce = jsonValue.GetBool("enforce");

    m_enforceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ports"))
  {
    Array<JsonView> portsJsonList = jsonValue.GetArray("ports");
    for(unsigned portsIndex = 0; portsIndex < portsJsonList.GetLength(); ++portsIndex)
    {
      m_ports.push_back(portsJsonList[portsIndex].AsInteger());
    }
    m_portsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validation"))
  {
    m_validation = jsonValue.GetObject("validation");

    m_validationHasBeenSet = true;
  }

  return *this;
}

JsonValue ClientPolicyTls::Jsonize() const
{
  JsonValue payload;

  if(m_enforceHasBeenSet)
  {
   payload.WithBool("enforce", m_enforce);

  }

  if(m_portsHasBeenSet)
  {
   Array<JsonValue> portsJsonList(m_ports.size());
   for(unsigned portsIndex = 0; portsIndex < portsJsonList.GetLength(); ++portsIndex)
   {
     portsJsonList[portsIndex].AsInteger(m_ports[portsIndex]);
   }
   payload.WithArray("ports", std::move(portsJsonList));

  }

  if(m_validationHasBeenSet)
  {
   payload.WithObject("validation", m_validation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

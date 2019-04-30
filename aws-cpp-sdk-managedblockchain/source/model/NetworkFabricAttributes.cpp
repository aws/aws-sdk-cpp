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

#include <aws/managedblockchain/model/NetworkFabricAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

NetworkFabricAttributes::NetworkFabricAttributes() : 
    m_orderingServiceEndpointHasBeenSet(false),
    m_edition(Edition::NOT_SET),
    m_editionHasBeenSet(false)
{
}

NetworkFabricAttributes::NetworkFabricAttributes(JsonView jsonValue) : 
    m_orderingServiceEndpointHasBeenSet(false),
    m_edition(Edition::NOT_SET),
    m_editionHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFabricAttributes& NetworkFabricAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrderingServiceEndpoint"))
  {
    m_orderingServiceEndpoint = jsonValue.GetString("OrderingServiceEndpoint");

    m_orderingServiceEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Edition"))
  {
    m_edition = EditionMapper::GetEditionForName(jsonValue.GetString("Edition"));

    m_editionHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFabricAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_orderingServiceEndpointHasBeenSet)
  {
   payload.WithString("OrderingServiceEndpoint", m_orderingServiceEndpoint);

  }

  if(m_editionHasBeenSet)
  {
   payload.WithString("Edition", EditionMapper::GetNameForEdition(m_edition));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

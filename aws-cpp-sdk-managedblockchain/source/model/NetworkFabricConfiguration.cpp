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

#include <aws/managedblockchain/model/NetworkFabricConfiguration.h>
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

NetworkFabricConfiguration::NetworkFabricConfiguration() : 
    m_edition(Edition::NOT_SET),
    m_editionHasBeenSet(false)
{
}

NetworkFabricConfiguration::NetworkFabricConfiguration(JsonView jsonValue) : 
    m_edition(Edition::NOT_SET),
    m_editionHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFabricConfiguration& NetworkFabricConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Edition"))
  {
    m_edition = EditionMapper::GetEditionForName(jsonValue.GetString("Edition"));

    m_editionHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFabricConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_editionHasBeenSet)
  {
   payload.WithString("Edition", EditionMapper::GetNameForEdition(m_edition));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

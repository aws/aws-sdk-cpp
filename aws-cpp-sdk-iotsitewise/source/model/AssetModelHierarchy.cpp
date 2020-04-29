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

#include <aws/iotsitewise/model/AssetModelHierarchy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

AssetModelHierarchy::AssetModelHierarchy() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_childAssetModelIdHasBeenSet(false)
{
}

AssetModelHierarchy::AssetModelHierarchy(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_childAssetModelIdHasBeenSet(false)
{
  *this = jsonValue;
}

AssetModelHierarchy& AssetModelHierarchy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("childAssetModelId"))
  {
    m_childAssetModelId = jsonValue.GetString("childAssetModelId");

    m_childAssetModelIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetModelHierarchy::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_childAssetModelIdHasBeenSet)
  {
   payload.WithString("childAssetModelId", m_childAssetModelId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

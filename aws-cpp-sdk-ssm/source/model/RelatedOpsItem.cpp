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

#include <aws/ssm/model/RelatedOpsItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

RelatedOpsItem::RelatedOpsItem() : 
    m_opsItemIdHasBeenSet(false)
{
}

RelatedOpsItem::RelatedOpsItem(JsonView jsonValue) : 
    m_opsItemIdHasBeenSet(false)
{
  *this = jsonValue;
}

RelatedOpsItem& RelatedOpsItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OpsItemId"))
  {
    m_opsItemId = jsonValue.GetString("OpsItemId");

    m_opsItemIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RelatedOpsItem::Jsonize() const
{
  JsonValue payload;

  if(m_opsItemIdHasBeenSet)
  {
   payload.WithString("OpsItemId", m_opsItemId);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws

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

#include <aws/route53domains/model/DomainTransferability.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

DomainTransferability::DomainTransferability() : 
    m_transferable(Transferable::NOT_SET),
    m_transferableHasBeenSet(false)
{
}

DomainTransferability::DomainTransferability(const JsonValue& jsonValue) : 
    m_transferable(Transferable::NOT_SET),
    m_transferableHasBeenSet(false)
{
  *this = jsonValue;
}

DomainTransferability& DomainTransferability::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Transferable"))
  {
    m_transferable = TransferableMapper::GetTransferableForName(jsonValue.GetString("Transferable"));

    m_transferableHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainTransferability::Jsonize() const
{
  JsonValue payload;

  if(m_transferableHasBeenSet)
  {
   payload.WithString("Transferable", TransferableMapper::GetNameForTransferable(m_transferable));
  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws

/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kms/model/GrantListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KMS
{
namespace Model
{

GrantListEntry::GrantListEntry() : 
    m_keyIdHasBeenSet(false),
    m_grantIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_granteePrincipalHasBeenSet(false),
    m_retiringPrincipalHasBeenSet(false),
    m_issuingAccountHasBeenSet(false),
    m_operationsHasBeenSet(false),
    m_constraintsHasBeenSet(false)
{
}

GrantListEntry::GrantListEntry(const JsonValue& jsonValue) : 
    m_keyIdHasBeenSet(false),
    m_grantIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_granteePrincipalHasBeenSet(false),
    m_retiringPrincipalHasBeenSet(false),
    m_issuingAccountHasBeenSet(false),
    m_operationsHasBeenSet(false),
    m_constraintsHasBeenSet(false)
{
  *this = jsonValue;
}

GrantListEntry& GrantListEntry::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GrantId"))
  {
    m_grantId = jsonValue.GetString("GrantId");

    m_grantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GranteePrincipal"))
  {
    m_granteePrincipal = jsonValue.GetString("GranteePrincipal");

    m_granteePrincipalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetiringPrincipal"))
  {
    m_retiringPrincipal = jsonValue.GetString("RetiringPrincipal");

    m_retiringPrincipalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IssuingAccount"))
  {
    m_issuingAccount = jsonValue.GetString("IssuingAccount");

    m_issuingAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Operations"))
  {
    Array<JsonValue> operationsJsonList = jsonValue.GetArray("Operations");
    for(unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex)
    {
      m_operations.push_back(GrantOperationMapper::GetGrantOperationForName(operationsJsonList[operationsIndex].AsString()));
    }
    m_operationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Constraints"))
  {
    m_constraints = jsonValue.GetObject("Constraints");

    m_constraintsHasBeenSet = true;
  }

  return *this;
}

JsonValue GrantListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_grantIdHasBeenSet)
  {
   payload.WithString("GrantId", m_grantId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_granteePrincipalHasBeenSet)
  {
   payload.WithString("GranteePrincipal", m_granteePrincipal);

  }

  if(m_retiringPrincipalHasBeenSet)
  {
   payload.WithString("RetiringPrincipal", m_retiringPrincipal);

  }

  if(m_issuingAccountHasBeenSet)
  {
   payload.WithString("IssuingAccount", m_issuingAccount);

  }

  if(m_operationsHasBeenSet)
  {
   Array<JsonValue> operationsJsonList(m_operations.size());
   for(unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex)
   {
     operationsJsonList[operationsIndex].AsString(GrantOperationMapper::GetNameForGrantOperation(m_operations[operationsIndex]));
   }
   payload.WithArray("Operations", std::move(operationsJsonList));

  }

  if(m_constraintsHasBeenSet)
  {
   payload.WithObject("Constraints", m_constraints.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws
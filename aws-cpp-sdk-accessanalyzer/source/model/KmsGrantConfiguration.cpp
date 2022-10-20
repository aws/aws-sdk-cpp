/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/KmsGrantConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

KmsGrantConfiguration::KmsGrantConfiguration() : 
    m_operationsHasBeenSet(false),
    m_granteePrincipalHasBeenSet(false),
    m_retiringPrincipalHasBeenSet(false),
    m_constraintsHasBeenSet(false),
    m_issuingAccountHasBeenSet(false)
{
}

KmsGrantConfiguration::KmsGrantConfiguration(JsonView jsonValue) : 
    m_operationsHasBeenSet(false),
    m_granteePrincipalHasBeenSet(false),
    m_retiringPrincipalHasBeenSet(false),
    m_constraintsHasBeenSet(false),
    m_issuingAccountHasBeenSet(false)
{
  *this = jsonValue;
}

KmsGrantConfiguration& KmsGrantConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("operations"))
  {
    Aws::Utils::Array<JsonView> operationsJsonList = jsonValue.GetArray("operations");
    for(unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex)
    {
      m_operations.push_back(KmsGrantOperationMapper::GetKmsGrantOperationForName(operationsJsonList[operationsIndex].AsString()));
    }
    m_operationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("granteePrincipal"))
  {
    m_granteePrincipal = jsonValue.GetString("granteePrincipal");

    m_granteePrincipalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retiringPrincipal"))
  {
    m_retiringPrincipal = jsonValue.GetString("retiringPrincipal");

    m_retiringPrincipalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("constraints"))
  {
    m_constraints = jsonValue.GetObject("constraints");

    m_constraintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("issuingAccount"))
  {
    m_issuingAccount = jsonValue.GetString("issuingAccount");

    m_issuingAccountHasBeenSet = true;
  }

  return *this;
}

JsonValue KmsGrantConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_operationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operationsJsonList(m_operations.size());
   for(unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex)
   {
     operationsJsonList[operationsIndex].AsString(KmsGrantOperationMapper::GetNameForKmsGrantOperation(m_operations[operationsIndex]));
   }
   payload.WithArray("operations", std::move(operationsJsonList));

  }

  if(m_granteePrincipalHasBeenSet)
  {
   payload.WithString("granteePrincipal", m_granteePrincipal);

  }

  if(m_retiringPrincipalHasBeenSet)
  {
   payload.WithString("retiringPrincipal", m_retiringPrincipal);

  }

  if(m_constraintsHasBeenSet)
  {
   payload.WithObject("constraints", m_constraints.Jsonize());

  }

  if(m_issuingAccountHasBeenSet)
  {
   payload.WithString("issuingAccount", m_issuingAccount);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/HumanLoopQuotaExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

HumanLoopQuotaExceededException::HumanLoopQuotaExceededException() : 
    m_resourceTypeHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_serviceCodeHasBeenSet(false)
{
}

HumanLoopQuotaExceededException::HumanLoopQuotaExceededException(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_quotaCodeHasBeenSet(false),
    m_serviceCodeHasBeenSet(false)
{
  *this = jsonValue;
}

HumanLoopQuotaExceededException& HumanLoopQuotaExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuotaCode"))
  {
    m_quotaCode = jsonValue.GetString("QuotaCode");

    m_quotaCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceCode"))
  {
    m_serviceCode = jsonValue.GetString("ServiceCode");

    m_serviceCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue HumanLoopQuotaExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_quotaCodeHasBeenSet)
  {
   payload.WithString("QuotaCode", m_quotaCode);

  }

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("ServiceCode", m_serviceCode);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws

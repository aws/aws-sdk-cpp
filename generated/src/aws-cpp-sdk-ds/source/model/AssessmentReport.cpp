/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/AssessmentReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

AssessmentReport::AssessmentReport(JsonView jsonValue)
{
  *this = jsonValue;
}

AssessmentReport& AssessmentReport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainControllerIp"))
  {
    m_domainControllerIp = jsonValue.GetString("DomainControllerIp");
    m_domainControllerIpHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Validations"))
  {
    Aws::Utils::Array<JsonView> validationsJsonList = jsonValue.GetArray("Validations");
    for(unsigned validationsIndex = 0; validationsIndex < validationsJsonList.GetLength(); ++validationsIndex)
    {
      m_validations.push_back(validationsJsonList[validationsIndex].AsObject());
    }
    m_validationsHasBeenSet = true;
  }
  return *this;
}

JsonValue AssessmentReport::Jsonize() const
{
  JsonValue payload;

  if(m_domainControllerIpHasBeenSet)
  {
   payload.WithString("DomainControllerIp", m_domainControllerIp);

  }

  if(m_validationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validationsJsonList(m_validations.size());
   for(unsigned validationsIndex = 0; validationsIndex < validationsJsonList.GetLength(); ++validationsIndex)
   {
     validationsJsonList[validationsIndex].AsObject(m_validations[validationsIndex].Jsonize());
   }
   payload.WithArray("Validations", std::move(validationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws

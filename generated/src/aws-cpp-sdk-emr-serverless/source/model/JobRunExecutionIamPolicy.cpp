/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/JobRunExecutionIamPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

JobRunExecutionIamPolicy::JobRunExecutionIamPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

JobRunExecutionIamPolicy& JobRunExecutionIamPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policy"))
  {
    m_policy = jsonValue.GetString("policy");
    m_policyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policyArns"))
  {
    Aws::Utils::Array<JsonView> policyArnsJsonList = jsonValue.GetArray("policyArns");
    for(unsigned policyArnsIndex = 0; policyArnsIndex < policyArnsJsonList.GetLength(); ++policyArnsIndex)
    {
      m_policyArns.push_back(policyArnsJsonList[policyArnsIndex].AsString());
    }
    m_policyArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue JobRunExecutionIamPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  if(m_policyArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policyArnsJsonList(m_policyArns.size());
   for(unsigned policyArnsIndex = 0; policyArnsIndex < policyArnsJsonList.GetLength(); ++policyArnsIndex)
   {
     policyArnsJsonList[policyArnsIndex].AsString(m_policyArns[policyArnsIndex]);
   }
   payload.WithArray("policyArns", std::move(policyArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws

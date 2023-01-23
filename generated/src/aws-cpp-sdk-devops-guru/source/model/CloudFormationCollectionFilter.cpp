/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/CloudFormationCollectionFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

CloudFormationCollectionFilter::CloudFormationCollectionFilter() : 
    m_stackNamesHasBeenSet(false)
{
}

CloudFormationCollectionFilter::CloudFormationCollectionFilter(JsonView jsonValue) : 
    m_stackNamesHasBeenSet(false)
{
  *this = jsonValue;
}

CloudFormationCollectionFilter& CloudFormationCollectionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StackNames"))
  {
    Aws::Utils::Array<JsonView> stackNamesJsonList = jsonValue.GetArray("StackNames");
    for(unsigned stackNamesIndex = 0; stackNamesIndex < stackNamesJsonList.GetLength(); ++stackNamesIndex)
    {
      m_stackNames.push_back(stackNamesJsonList[stackNamesIndex].AsString());
    }
    m_stackNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudFormationCollectionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_stackNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stackNamesJsonList(m_stackNames.size());
   for(unsigned stackNamesIndex = 0; stackNamesIndex < stackNamesJsonList.GetLength(); ++stackNamesIndex)
   {
     stackNamesJsonList[stackNamesIndex].AsString(m_stackNames[stackNamesIndex]);
   }
   payload.WithArray("StackNames", std::move(stackNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

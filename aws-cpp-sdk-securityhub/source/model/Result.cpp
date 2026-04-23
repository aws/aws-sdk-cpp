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

#include <aws/securityhub/model/Result.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Result::Result() : 
    m_accountIdHasBeenSet(false),
    m_processingResultHasBeenSet(false)
{
}

Result::Result(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_processingResultHasBeenSet(false)
{
  *this = jsonValue;
}

Result& Result::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingResult"))
  {
    m_processingResult = jsonValue.GetString("ProcessingResult");

    m_processingResultHasBeenSet = true;
  }

  return *this;
}

JsonValue Result::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_processingResultHasBeenSet)
  {
   payload.WithString("ProcessingResult", m_processingResult);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

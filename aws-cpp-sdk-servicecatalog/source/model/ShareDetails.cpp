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

#include <aws/servicecatalog/model/ShareDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ShareDetails::ShareDetails() : 
    m_successfulSharesHasBeenSet(false),
    m_shareErrorsHasBeenSet(false)
{
}

ShareDetails::ShareDetails(JsonView jsonValue) : 
    m_successfulSharesHasBeenSet(false),
    m_shareErrorsHasBeenSet(false)
{
  *this = jsonValue;
}

ShareDetails& ShareDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SuccessfulShares"))
  {
    Array<JsonView> successfulSharesJsonList = jsonValue.GetArray("SuccessfulShares");
    for(unsigned successfulSharesIndex = 0; successfulSharesIndex < successfulSharesJsonList.GetLength(); ++successfulSharesIndex)
    {
      m_successfulShares.push_back(successfulSharesJsonList[successfulSharesIndex].AsString());
    }
    m_successfulSharesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareErrors"))
  {
    Array<JsonView> shareErrorsJsonList = jsonValue.GetArray("ShareErrors");
    for(unsigned shareErrorsIndex = 0; shareErrorsIndex < shareErrorsJsonList.GetLength(); ++shareErrorsIndex)
    {
      m_shareErrors.push_back(shareErrorsJsonList[shareErrorsIndex].AsObject());
    }
    m_shareErrorsHasBeenSet = true;
  }

  return *this;
}

JsonValue ShareDetails::Jsonize() const
{
  JsonValue payload;

  if(m_successfulSharesHasBeenSet)
  {
   Array<JsonValue> successfulSharesJsonList(m_successfulShares.size());
   for(unsigned successfulSharesIndex = 0; successfulSharesIndex < successfulSharesJsonList.GetLength(); ++successfulSharesIndex)
   {
     successfulSharesJsonList[successfulSharesIndex].AsString(m_successfulShares[successfulSharesIndex]);
   }
   payload.WithArray("SuccessfulShares", std::move(successfulSharesJsonList));

  }

  if(m_shareErrorsHasBeenSet)
  {
   Array<JsonValue> shareErrorsJsonList(m_shareErrors.size());
   for(unsigned shareErrorsIndex = 0; shareErrorsIndex < shareErrorsJsonList.GetLength(); ++shareErrorsIndex)
   {
     shareErrorsJsonList[shareErrorsIndex].AsObject(m_shareErrors[shareErrorsIndex].Jsonize());
   }
   payload.WithArray("ShareErrors", std::move(shareErrorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws

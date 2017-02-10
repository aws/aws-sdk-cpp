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
#include <aws/clouddirectory/model/BatchDetachObjectResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchDetachObjectResponse::BatchDetachObjectResponse() : 
    m_detachedObjectIdentifierHasBeenSet(false)
{
}

BatchDetachObjectResponse::BatchDetachObjectResponse(const JsonValue& jsonValue) : 
    m_detachedObjectIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetachObjectResponse& BatchDetachObjectResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("detachedObjectIdentifier"))
  {
    m_detachedObjectIdentifier = jsonValue.GetString("detachedObjectIdentifier");

    m_detachedObjectIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDetachObjectResponse::Jsonize() const
{
  JsonValue payload;

  if(m_detachedObjectIdentifierHasBeenSet)
  {
   payload.WithString("detachedObjectIdentifier", m_detachedObjectIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
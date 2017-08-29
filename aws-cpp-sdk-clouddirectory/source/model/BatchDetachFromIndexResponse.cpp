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

#include <aws/clouddirectory/model/BatchDetachFromIndexResponse.h>
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

BatchDetachFromIndexResponse::BatchDetachFromIndexResponse() : 
    m_detachedObjectIdentifierHasBeenSet(false)
{
}

BatchDetachFromIndexResponse::BatchDetachFromIndexResponse(const JsonValue& jsonValue) : 
    m_detachedObjectIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDetachFromIndexResponse& BatchDetachFromIndexResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DetachedObjectIdentifier"))
  {
    m_detachedObjectIdentifier = jsonValue.GetString("DetachedObjectIdentifier");

    m_detachedObjectIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDetachFromIndexResponse::Jsonize() const
{
  JsonValue payload;

  if(m_detachedObjectIdentifierHasBeenSet)
  {
   payload.WithString("DetachedObjectIdentifier", m_detachedObjectIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

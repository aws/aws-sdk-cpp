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

#include <aws/clouddirectory/model/BatchAttachToIndexResponse.h>
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

BatchAttachToIndexResponse::BatchAttachToIndexResponse() : 
    m_attachedObjectIdentifierHasBeenSet(false)
{
}

BatchAttachToIndexResponse::BatchAttachToIndexResponse(const JsonValue& jsonValue) : 
    m_attachedObjectIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

BatchAttachToIndexResponse& BatchAttachToIndexResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AttachedObjectIdentifier"))
  {
    m_attachedObjectIdentifier = jsonValue.GetString("AttachedObjectIdentifier");

    m_attachedObjectIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchAttachToIndexResponse::Jsonize() const
{
  JsonValue payload;

  if(m_attachedObjectIdentifierHasBeenSet)
  {
   payload.WithString("AttachedObjectIdentifier", m_attachedObjectIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws

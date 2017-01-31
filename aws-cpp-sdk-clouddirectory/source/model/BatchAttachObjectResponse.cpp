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
#include <aws/clouddirectory/model/BatchAttachObjectResponse.h>
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

BatchAttachObjectResponse::BatchAttachObjectResponse() : 
    m_attachedObjectIdentifierHasBeenSet(false)
{
}

BatchAttachObjectResponse::BatchAttachObjectResponse(const JsonValue& jsonValue) : 
    m_attachedObjectIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

BatchAttachObjectResponse& BatchAttachObjectResponse::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("attachedObjectIdentifier"))
  {
    m_attachedObjectIdentifier = jsonValue.GetString("attachedObjectIdentifier");

    m_attachedObjectIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchAttachObjectResponse::Jsonize() const
{
  JsonValue payload;

  if(m_attachedObjectIdentifierHasBeenSet)
  {
   payload.WithString("attachedObjectIdentifier", m_attachedObjectIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
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
#include <aws/ssm/model/PutParameterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutParameterRequest::PutParameterRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_type(ParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_overwrite(false),
    m_overwriteHasBeenSet(false)
{
}

Aws::String PutParameterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ParameterTypeMapper::GetNameForParameterType(m_type));
  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_overwriteHasBeenSet)
  {
   payload.WithBool("Overwrite", m_overwrite);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection PutParameterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.PutParameter"));
  return headers;

}





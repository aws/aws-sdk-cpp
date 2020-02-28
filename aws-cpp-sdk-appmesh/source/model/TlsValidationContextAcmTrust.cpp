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

#include <aws/appmesh/model/TlsValidationContextAcmTrust.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

TlsValidationContextAcmTrust::TlsValidationContextAcmTrust() : 
    m_certificateAuthorityArnsHasBeenSet(false)
{
}

TlsValidationContextAcmTrust::TlsValidationContextAcmTrust(JsonView jsonValue) : 
    m_certificateAuthorityArnsHasBeenSet(false)
{
  *this = jsonValue;
}

TlsValidationContextAcmTrust& TlsValidationContextAcmTrust::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateAuthorityArns"))
  {
    Array<JsonView> certificateAuthorityArnsJsonList = jsonValue.GetArray("certificateAuthorityArns");
    for(unsigned certificateAuthorityArnsIndex = 0; certificateAuthorityArnsIndex < certificateAuthorityArnsJsonList.GetLength(); ++certificateAuthorityArnsIndex)
    {
      m_certificateAuthorityArns.push_back(certificateAuthorityArnsJsonList[certificateAuthorityArnsIndex].AsString());
    }
    m_certificateAuthorityArnsHasBeenSet = true;
  }

  return *this;
}

JsonValue TlsValidationContextAcmTrust::Jsonize() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnsHasBeenSet)
  {
   Array<JsonValue> certificateAuthorityArnsJsonList(m_certificateAuthorityArns.size());
   for(unsigned certificateAuthorityArnsIndex = 0; certificateAuthorityArnsIndex < certificateAuthorityArnsJsonList.GetLength(); ++certificateAuthorityArnsIndex)
   {
     certificateAuthorityArnsJsonList[certificateAuthorityArnsIndex].AsString(m_certificateAuthorityArns[certificateAuthorityArnsIndex]);
   }
   payload.WithArray("certificateAuthorityArns", std::move(certificateAuthorityArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws

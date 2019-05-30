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

#include <aws/kafka/model/Tls.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

Tls::Tls() : 
    m_certificateAuthorityArnListHasBeenSet(false)
{
}

Tls::Tls(JsonView jsonValue) : 
    m_certificateAuthorityArnListHasBeenSet(false)
{
  *this = jsonValue;
}

Tls& Tls::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateAuthorityArnList"))
  {
    Array<JsonView> certificateAuthorityArnListJsonList = jsonValue.GetArray("certificateAuthorityArnList");
    for(unsigned certificateAuthorityArnListIndex = 0; certificateAuthorityArnListIndex < certificateAuthorityArnListJsonList.GetLength(); ++certificateAuthorityArnListIndex)
    {
      m_certificateAuthorityArnList.push_back(certificateAuthorityArnListJsonList[certificateAuthorityArnListIndex].AsString());
    }
    m_certificateAuthorityArnListHasBeenSet = true;
  }

  return *this;
}

JsonValue Tls::Jsonize() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnListHasBeenSet)
  {
   Array<JsonValue> certificateAuthorityArnListJsonList(m_certificateAuthorityArnList.size());
   for(unsigned certificateAuthorityArnListIndex = 0; certificateAuthorityArnListIndex < certificateAuthorityArnListJsonList.GetLength(); ++certificateAuthorityArnListIndex)
   {
     certificateAuthorityArnListJsonList[certificateAuthorityArnListIndex].AsString(m_certificateAuthorityArnList[certificateAuthorityArnListIndex]);
   }
   payload.WithArray("certificateAuthorityArnList", std::move(certificateAuthorityArnListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws

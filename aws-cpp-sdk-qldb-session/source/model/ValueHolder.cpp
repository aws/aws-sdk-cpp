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

#include <aws/qldb-session/model/ValueHolder.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

ValueHolder::ValueHolder() : 
    m_ionBinaryHasBeenSet(false),
    m_ionTextHasBeenSet(false)
{
}

ValueHolder::ValueHolder(JsonView jsonValue) : 
    m_ionBinaryHasBeenSet(false),
    m_ionTextHasBeenSet(false)
{
  *this = jsonValue;
}

ValueHolder& ValueHolder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IonBinary"))
  {
    m_ionBinary = HashingUtils::Base64Decode(jsonValue.GetString("IonBinary"));
    m_ionBinaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IonText"))
  {
    m_ionText = jsonValue.GetString("IonText");

    m_ionTextHasBeenSet = true;
  }

  return *this;
}

JsonValue ValueHolder::Jsonize() const
{
  JsonValue payload;

  if(m_ionBinaryHasBeenSet)
  {
   payload.WithString("IonBinary", HashingUtils::Base64Encode(m_ionBinary));
  }

  if(m_ionTextHasBeenSet)
  {
   payload.WithString("IonText", m_ionText);

  }

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws

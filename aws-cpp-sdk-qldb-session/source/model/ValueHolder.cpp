/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

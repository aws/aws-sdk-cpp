/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/PutItemInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

PutItemInput::PutItemInput() : 
    m_tableNameHasBeenSet(false)
{
}

PutItemInput::PutItemInput(JsonView jsonValue) : 
    m_tableNameHasBeenSet(false)
{
  *this = jsonValue;
}

PutItemInput& PutItemInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");

    m_tableNameHasBeenSet = true;
  }

  return *this;
}

JsonValue PutItemInput::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws

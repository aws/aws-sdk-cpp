/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/BatchPutPropertyErrorEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

BatchPutPropertyErrorEntry::BatchPutPropertyErrorEntry() : 
    m_errorsHasBeenSet(false)
{
}

BatchPutPropertyErrorEntry::BatchPutPropertyErrorEntry(JsonView jsonValue) : 
    m_errorsHasBeenSet(false)
{
  *this = jsonValue;
}

BatchPutPropertyErrorEntry& BatchPutPropertyErrorEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchPutPropertyErrorEntry::Jsonize() const
{
  JsonValue payload;

  if(m_errorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorsJsonList(m_errors.size());
   for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
   {
     errorsJsonList[errorsIndex].AsObject(m_errors[errorsIndex].Jsonize());
   }
   payload.WithArray("errors", std::move(errorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws

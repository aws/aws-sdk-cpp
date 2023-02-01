/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/BatchPutPropertyError.h>
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

BatchPutPropertyError::BatchPutPropertyError() : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_entryHasBeenSet(false)
{
}

BatchPutPropertyError::BatchPutPropertyError(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_entryHasBeenSet(false)
{
  *this = jsonValue;
}

BatchPutPropertyError& BatchPutPropertyError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entry"))
  {
    m_entry = jsonValue.GetObject("entry");

    m_entryHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchPutPropertyError::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_entryHasBeenSet)
  {
   payload.WithObject("entry", m_entry.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws

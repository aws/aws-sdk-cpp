/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DataAlreadyAcceptedException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

DataAlreadyAcceptedException::DataAlreadyAcceptedException() : 
    m_expectedSequenceTokenHasBeenSet(false)
{
}

DataAlreadyAcceptedException::DataAlreadyAcceptedException(JsonView jsonValue) : 
    m_expectedSequenceTokenHasBeenSet(false)
{
  *this = jsonValue;
}

DataAlreadyAcceptedException& DataAlreadyAcceptedException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expectedSequenceToken"))
  {
    m_expectedSequenceToken = jsonValue.GetString("expectedSequenceToken");

    m_expectedSequenceTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue DataAlreadyAcceptedException::Jsonize() const
{
  JsonValue payload;

  if(m_expectedSequenceTokenHasBeenSet)
  {
   payload.WithString("expectedSequenceToken", m_expectedSequenceToken);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

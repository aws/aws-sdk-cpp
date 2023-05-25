/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DataRepositoryFailureDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

DataRepositoryFailureDetails::DataRepositoryFailureDetails() : 
    m_messageHasBeenSet(false)
{
}

DataRepositoryFailureDetails::DataRepositoryFailureDetails(JsonView jsonValue) : 
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

DataRepositoryFailureDetails& DataRepositoryFailureDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue DataRepositoryFailureDetails::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws

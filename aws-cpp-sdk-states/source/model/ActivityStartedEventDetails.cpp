/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ActivityStartedEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

ActivityStartedEventDetails::ActivityStartedEventDetails() : 
    m_workerNameHasBeenSet(false)
{
}

ActivityStartedEventDetails::ActivityStartedEventDetails(JsonView jsonValue) : 
    m_workerNameHasBeenSet(false)
{
  *this = jsonValue;
}

ActivityStartedEventDetails& ActivityStartedEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workerName"))
  {
    m_workerName = jsonValue.GetString("workerName");

    m_workerNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivityStartedEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_workerNameHasBeenSet)
  {
   payload.WithString("workerName", m_workerName);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws

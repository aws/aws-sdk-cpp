/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/LifeCycleLastCutoverInitiated.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

LifeCycleLastCutoverInitiated::LifeCycleLastCutoverInitiated() : 
    m_apiCallDateTimeHasBeenSet(false),
    m_jobIDHasBeenSet(false)
{
}

LifeCycleLastCutoverInitiated::LifeCycleLastCutoverInitiated(JsonView jsonValue) : 
    m_apiCallDateTimeHasBeenSet(false),
    m_jobIDHasBeenSet(false)
{
  *this = jsonValue;
}

LifeCycleLastCutoverInitiated& LifeCycleLastCutoverInitiated::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiCallDateTime"))
  {
    m_apiCallDateTime = jsonValue.GetString("apiCallDateTime");

    m_apiCallDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobID"))
  {
    m_jobID = jsonValue.GetString("jobID");

    m_jobIDHasBeenSet = true;
  }

  return *this;
}

JsonValue LifeCycleLastCutoverInitiated::Jsonize() const
{
  JsonValue payload;

  if(m_apiCallDateTimeHasBeenSet)
  {
   payload.WithString("apiCallDateTime", m_apiCallDateTime);

  }

  if(m_jobIDHasBeenSet)
  {
   payload.WithString("jobID", m_jobID);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws

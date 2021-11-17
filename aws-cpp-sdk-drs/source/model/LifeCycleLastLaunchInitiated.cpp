/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LifeCycleLastLaunchInitiated.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

LifeCycleLastLaunchInitiated::LifeCycleLastLaunchInitiated() : 
    m_apiCallDateTimeHasBeenSet(false),
    m_jobIDHasBeenSet(false),
    m_type(LastLaunchType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

LifeCycleLastLaunchInitiated::LifeCycleLastLaunchInitiated(JsonView jsonValue) : 
    m_apiCallDateTimeHasBeenSet(false),
    m_jobIDHasBeenSet(false),
    m_type(LastLaunchType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

LifeCycleLastLaunchInitiated& LifeCycleLastLaunchInitiated::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("type"))
  {
    m_type = LastLaunchTypeMapper::GetLastLaunchTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue LifeCycleLastLaunchInitiated::Jsonize() const
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

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", LastLaunchTypeMapper::GetNameForLastLaunchType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws

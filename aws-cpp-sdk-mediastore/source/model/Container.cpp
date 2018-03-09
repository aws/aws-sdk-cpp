﻿/*
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

#include <aws/mediastore/model/Container.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaStore
{
namespace Model
{

Container::Container() : 
    m_endpointHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ContainerStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Container::Container(const JsonValue& jsonValue) : 
    m_endpointHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ContainerStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

Container& Container::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ContainerStatusMapper::GetContainerStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue Container::Jsonize() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ContainerStatusMapper::GetNameForContainerStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace MediaStore
} // namespace Aws

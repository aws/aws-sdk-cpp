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

#include <aws/AWSMigrationHub/model/ProgressUpdateStreamSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

ProgressUpdateStreamSummary::ProgressUpdateStreamSummary() : 
    m_progressUpdateStreamNameHasBeenSet(false)
{
}

ProgressUpdateStreamSummary::ProgressUpdateStreamSummary(JsonView jsonValue) : 
    m_progressUpdateStreamNameHasBeenSet(false)
{
  *this = jsonValue;
}

ProgressUpdateStreamSummary& ProgressUpdateStreamSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProgressUpdateStreamName"))
  {
    m_progressUpdateStreamName = jsonValue.GetString("ProgressUpdateStreamName");

    m_progressUpdateStreamNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ProgressUpdateStreamSummary::Jsonize() const
{
  JsonValue payload;

  if(m_progressUpdateStreamNameHasBeenSet)
  {
   payload.WithString("ProgressUpdateStreamName", m_progressUpdateStreamName);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHub
} // namespace Aws

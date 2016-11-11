/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesisanalytics/model/KinesisFirehoseInputUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

KinesisFirehoseInputUpdate::KinesisFirehoseInputUpdate() : 
    m_resourceARNUpdateHasBeenSet(false),
    m_roleARNUpdateHasBeenSet(false)
{
}

KinesisFirehoseInputUpdate::KinesisFirehoseInputUpdate(const JsonValue& jsonValue) : 
    m_resourceARNUpdateHasBeenSet(false),
    m_roleARNUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisFirehoseInputUpdate& KinesisFirehoseInputUpdate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ResourceARNUpdate"))
  {
    m_resourceARNUpdate = jsonValue.GetString("ResourceARNUpdate");

    m_resourceARNUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleARNUpdate"))
  {
    m_roleARNUpdate = jsonValue.GetString("RoleARNUpdate");

    m_roleARNUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisFirehoseInputUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_resourceARNUpdateHasBeenSet)
  {
   payload.WithString("ResourceARNUpdate", m_resourceARNUpdate);

  }

  if(m_roleARNUpdateHasBeenSet)
  {
   payload.WithString("RoleARNUpdate", m_roleARNUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
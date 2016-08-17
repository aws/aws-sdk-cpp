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
#include <aws/elastictranscoder/model/Notifications.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

Notifications::Notifications() : 
    m_progressingHasBeenSet(false),
    m_completedHasBeenSet(false),
    m_warningHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

Notifications::Notifications(const JsonValue& jsonValue) : 
    m_progressingHasBeenSet(false),
    m_completedHasBeenSet(false),
    m_warningHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

Notifications& Notifications::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Progressing"))
  {
    m_progressing = jsonValue.GetString("Progressing");

    m_progressingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Completed"))
  {
    m_completed = jsonValue.GetString("Completed");

    m_completedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Warning"))
  {
    m_warning = jsonValue.GetString("Warning");

    m_warningHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetString("Error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue Notifications::Jsonize() const
{
  JsonValue payload;

  if(m_progressingHasBeenSet)
  {
   payload.WithString("Progressing", m_progressing);

  }

  if(m_completedHasBeenSet)
  {
   payload.WithString("Completed", m_completed);

  }

  if(m_warningHasBeenSet)
  {
   payload.WithString("Warning", m_warning);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("Error", m_error);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
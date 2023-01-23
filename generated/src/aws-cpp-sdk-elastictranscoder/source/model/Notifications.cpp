/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

Notifications::Notifications(JsonView jsonValue) : 
    m_progressingHasBeenSet(false),
    m_completedHasBeenSet(false),
    m_warningHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

Notifications& Notifications::operator =(JsonView jsonValue)
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

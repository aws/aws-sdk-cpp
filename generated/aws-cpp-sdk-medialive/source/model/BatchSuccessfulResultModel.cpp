/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BatchSuccessfulResultModel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

BatchSuccessfulResultModel::BatchSuccessfulResultModel() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

BatchSuccessfulResultModel::BatchSuccessfulResultModel(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

BatchSuccessfulResultModel& BatchSuccessfulResultModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetString("state");

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchSuccessfulResultModel::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", m_state);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ScriptDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

ScriptDetails::ScriptDetails() : 
    m_scriptS3LocationHasBeenSet(false),
    m_executablePathHasBeenSet(false),
    m_executableParametersHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false)
{
}

ScriptDetails::ScriptDetails(JsonView jsonValue) : 
    m_scriptS3LocationHasBeenSet(false),
    m_executablePathHasBeenSet(false),
    m_executableParametersHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

ScriptDetails& ScriptDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScriptS3Location"))
  {
    m_scriptS3Location = jsonValue.GetObject("ScriptS3Location");

    m_scriptS3LocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutablePath"))
  {
    m_executablePath = jsonValue.GetString("ExecutablePath");

    m_executablePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutableParameters"))
  {
    m_executableParameters = jsonValue.GetString("ExecutableParameters");

    m_executableParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeoutInSeconds"))
  {
    m_timeoutInSeconds = jsonValue.GetInteger("TimeoutInSeconds");

    m_timeoutInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScriptDetails::Jsonize() const
{
  JsonValue payload;

  if(m_scriptS3LocationHasBeenSet)
  {
   payload.WithObject("ScriptS3Location", m_scriptS3Location.Jsonize());

  }

  if(m_executablePathHasBeenSet)
  {
   payload.WithString("ExecutablePath", m_executablePath);

  }

  if(m_executableParametersHasBeenSet)
  {
   payload.WithString("ExecutableParameters", m_executableParameters);

  }

  if(m_timeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("TimeoutInSeconds", m_timeoutInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws

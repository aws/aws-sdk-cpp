/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/JobCommand.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

JobCommand::JobCommand() : 
    m_nameHasBeenSet(false),
    m_scriptLocationHasBeenSet(false),
    m_pythonVersionHasBeenSet(false)
{
}

JobCommand::JobCommand(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_scriptLocationHasBeenSet(false),
    m_pythonVersionHasBeenSet(false)
{
  *this = jsonValue;
}

JobCommand& JobCommand::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScriptLocation"))
  {
    m_scriptLocation = jsonValue.GetString("ScriptLocation");

    m_scriptLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PythonVersion"))
  {
    m_pythonVersion = jsonValue.GetString("PythonVersion");

    m_pythonVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue JobCommand::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_scriptLocationHasBeenSet)
  {
   payload.WithString("ScriptLocation", m_scriptLocation);

  }

  if(m_pythonVersionHasBeenSet)
  {
   payload.WithString("PythonVersion", m_pythonVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

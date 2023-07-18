/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SessionCommand.h>
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

SessionCommand::SessionCommand() : 
    m_nameHasBeenSet(false),
    m_pythonVersionHasBeenSet(false)
{
}

SessionCommand::SessionCommand(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_pythonVersionHasBeenSet(false)
{
  *this = jsonValue;
}

SessionCommand& SessionCommand::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PythonVersion"))
  {
    m_pythonVersion = jsonValue.GetString("PythonVersion");

    m_pythonVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionCommand::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

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

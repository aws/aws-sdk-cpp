/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/Command.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

Command::Command() : 
    m_nameHasBeenSet(false),
    m_scriptPathHasBeenSet(false),
    m_argsHasBeenSet(false)
{
}

Command::Command(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_scriptPathHasBeenSet(false),
    m_argsHasBeenSet(false)
{
  *this = jsonValue;
}

Command& Command::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScriptPath"))
  {
    m_scriptPath = jsonValue.GetString("ScriptPath");

    m_scriptPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Args"))
  {
    Aws::Utils::Array<JsonView> argsJsonList = jsonValue.GetArray("Args");
    for(unsigned argsIndex = 0; argsIndex < argsJsonList.GetLength(); ++argsIndex)
    {
      m_args.push_back(argsJsonList[argsIndex].AsString());
    }
    m_argsHasBeenSet = true;
  }

  return *this;
}

JsonValue Command::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_scriptPathHasBeenSet)
  {
   payload.WithString("ScriptPath", m_scriptPath);

  }

  if(m_argsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> argsJsonList(m_args.size());
   for(unsigned argsIndex = 0; argsIndex < argsJsonList.GetLength(); ++argsIndex)
   {
     argsJsonList[argsIndex].AsString(m_args[argsIndex]);
   }
   payload.WithArray("Args", std::move(argsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws

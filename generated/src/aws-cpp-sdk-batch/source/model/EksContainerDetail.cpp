/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksContainerDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EksContainerDetail::EksContainerDetail() : 
    m_nameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_envHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_volumeMountsHasBeenSet(false),
    m_securityContextHasBeenSet(false)
{
}

EksContainerDetail::EksContainerDetail(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_envHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_volumeMountsHasBeenSet(false),
    m_securityContextHasBeenSet(false)
{
  *this = jsonValue;
}

EksContainerDetail& EksContainerDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imagePullPolicy"))
  {
    m_imagePullPolicy = jsonValue.GetString("imagePullPolicy");

    m_imagePullPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("command"))
  {
    Aws::Utils::Array<JsonView> commandJsonList = jsonValue.GetArray("command");
    for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
    {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("args"))
  {
    Aws::Utils::Array<JsonView> argsJsonList = jsonValue.GetArray("args");
    for(unsigned argsIndex = 0; argsIndex < argsJsonList.GetLength(); ++argsIndex)
    {
      m_args.push_back(argsJsonList[argsIndex].AsString());
    }
    m_argsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("env"))
  {
    Aws::Utils::Array<JsonView> envJsonList = jsonValue.GetArray("env");
    for(unsigned envIndex = 0; envIndex < envJsonList.GetLength(); ++envIndex)
    {
      m_env.push_back(envJsonList[envIndex].AsObject());
    }
    m_envHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resources"))
  {
    m_resources = jsonValue.GetObject("resources");

    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exitCode"))
  {
    m_exitCode = jsonValue.GetInteger("exitCode");

    m_exitCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeMounts"))
  {
    Aws::Utils::Array<JsonView> volumeMountsJsonList = jsonValue.GetArray("volumeMounts");
    for(unsigned volumeMountsIndex = 0; volumeMountsIndex < volumeMountsJsonList.GetLength(); ++volumeMountsIndex)
    {
      m_volumeMounts.push_back(volumeMountsJsonList[volumeMountsIndex].AsObject());
    }
    m_volumeMountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityContext"))
  {
    m_securityContext = jsonValue.GetObject("securityContext");

    m_securityContextHasBeenSet = true;
  }

  return *this;
}

JsonValue EksContainerDetail::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_imagePullPolicyHasBeenSet)
  {
   payload.WithString("imagePullPolicy", m_imagePullPolicy);

  }

  if(m_commandHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandJsonList(m_command.size());
   for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
   {
     commandJsonList[commandIndex].AsString(m_command[commandIndex]);
   }
   payload.WithArray("command", std::move(commandJsonList));

  }

  if(m_argsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> argsJsonList(m_args.size());
   for(unsigned argsIndex = 0; argsIndex < argsJsonList.GetLength(); ++argsIndex)
   {
     argsJsonList[argsIndex].AsString(m_args[argsIndex]);
   }
   payload.WithArray("args", std::move(argsJsonList));

  }

  if(m_envHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> envJsonList(m_env.size());
   for(unsigned envIndex = 0; envIndex < envJsonList.GetLength(); ++envIndex)
   {
     envJsonList[envIndex].AsObject(m_env[envIndex].Jsonize());
   }
   payload.WithArray("env", std::move(envJsonList));

  }

  if(m_resourcesHasBeenSet)
  {
   payload.WithObject("resources", m_resources.Jsonize());

  }

  if(m_exitCodeHasBeenSet)
  {
   payload.WithInteger("exitCode", m_exitCode);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_volumeMountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumeMountsJsonList(m_volumeMounts.size());
   for(unsigned volumeMountsIndex = 0; volumeMountsIndex < volumeMountsJsonList.GetLength(); ++volumeMountsIndex)
   {
     volumeMountsJsonList[volumeMountsIndex].AsObject(m_volumeMounts[volumeMountsIndex].Jsonize());
   }
   payload.WithArray("volumeMounts", std::move(volumeMountsJsonList));

  }

  if(m_securityContextHasBeenSet)
  {
   payload.WithObject("securityContext", m_securityContext.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws

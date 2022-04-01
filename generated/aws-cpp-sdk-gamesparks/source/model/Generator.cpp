/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/Generator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameSparks
{
namespace Model
{

Generator::Generator() : 
    m_gameSdkVersionHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_targetPlatformHasBeenSet(false)
{
}

Generator::Generator(JsonView jsonValue) : 
    m_gameSdkVersionHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_targetPlatformHasBeenSet(false)
{
  *this = jsonValue;
}

Generator& Generator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GameSdkVersion"))
  {
    m_gameSdkVersion = jsonValue.GetString("GameSdkVersion");

    m_gameSdkVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Language"))
  {
    m_language = jsonValue.GetString("Language");

    m_languageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetPlatform"))
  {
    m_targetPlatform = jsonValue.GetString("TargetPlatform");

    m_targetPlatformHasBeenSet = true;
  }

  return *this;
}

JsonValue Generator::Jsonize() const
{
  JsonValue payload;

  if(m_gameSdkVersionHasBeenSet)
  {
   payload.WithString("GameSdkVersion", m_gameSdkVersion);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  if(m_targetPlatformHasBeenSet)
  {
   payload.WithString("TargetPlatform", m_targetPlatform);

  }

  return payload;
}

} // namespace Model
} // namespace GameSparks
} // namespace Aws

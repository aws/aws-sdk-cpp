/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/ImportGameConfigurationSource.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameSparks
{
namespace Model
{

ImportGameConfigurationSource::ImportGameConfigurationSource() : 
    m_fileHasBeenSet(false)
{
}

ImportGameConfigurationSource::ImportGameConfigurationSource(JsonView jsonValue) : 
    m_fileHasBeenSet(false)
{
  *this = jsonValue;
}

ImportGameConfigurationSource& ImportGameConfigurationSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("File"))
  {
    m_file = HashingUtils::Base64Decode(jsonValue.GetString("File"));
    m_fileHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportGameConfigurationSource::Jsonize() const
{
  JsonValue payload;

  if(m_fileHasBeenSet)
  {
   payload.WithString("File", HashingUtils::Base64Encode(m_file));
  }

  return payload;
}

} // namespace Model
} // namespace GameSparks
} // namespace Aws

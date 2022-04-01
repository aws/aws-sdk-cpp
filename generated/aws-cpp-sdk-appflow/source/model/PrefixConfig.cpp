/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/PrefixConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

PrefixConfig::PrefixConfig() : 
    m_prefixType(PrefixType::NOT_SET),
    m_prefixTypeHasBeenSet(false),
    m_prefixFormat(PrefixFormat::NOT_SET),
    m_prefixFormatHasBeenSet(false)
{
}

PrefixConfig::PrefixConfig(JsonView jsonValue) : 
    m_prefixType(PrefixType::NOT_SET),
    m_prefixTypeHasBeenSet(false),
    m_prefixFormat(PrefixFormat::NOT_SET),
    m_prefixFormatHasBeenSet(false)
{
  *this = jsonValue;
}

PrefixConfig& PrefixConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("prefixType"))
  {
    m_prefixType = PrefixTypeMapper::GetPrefixTypeForName(jsonValue.GetString("prefixType"));

    m_prefixTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prefixFormat"))
  {
    m_prefixFormat = PrefixFormatMapper::GetPrefixFormatForName(jsonValue.GetString("prefixFormat"));

    m_prefixFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue PrefixConfig::Jsonize() const
{
  JsonValue payload;

  if(m_prefixTypeHasBeenSet)
  {
   payload.WithString("prefixType", PrefixTypeMapper::GetNameForPrefixType(m_prefixType));
  }

  if(m_prefixFormatHasBeenSet)
  {
   payload.WithString("prefixFormat", PrefixFormatMapper::GetNameForPrefixFormat(m_prefixFormat));
  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws

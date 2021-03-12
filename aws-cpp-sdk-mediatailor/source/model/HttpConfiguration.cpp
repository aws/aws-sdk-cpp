/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/HttpConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

HttpConfiguration::HttpConfiguration() : 
    m_baseUrlHasBeenSet(false)
{
}

HttpConfiguration::HttpConfiguration(JsonView jsonValue) : 
    m_baseUrlHasBeenSet(false)
{
  *this = jsonValue;
}

HttpConfiguration& HttpConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaseUrl"))
  {
    m_baseUrl = jsonValue.GetString("BaseUrl");

    m_baseUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_baseUrlHasBeenSet)
  {
   payload.WithString("BaseUrl", m_baseUrl);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws

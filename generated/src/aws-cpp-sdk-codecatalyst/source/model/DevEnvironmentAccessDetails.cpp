/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/DevEnvironmentAccessDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

DevEnvironmentAccessDetails::DevEnvironmentAccessDetails() : 
    m_streamUrlHasBeenSet(false),
    m_tokenValueHasBeenSet(false)
{
}

DevEnvironmentAccessDetails::DevEnvironmentAccessDetails(JsonView jsonValue) : 
    m_streamUrlHasBeenSet(false),
    m_tokenValueHasBeenSet(false)
{
  *this = jsonValue;
}

DevEnvironmentAccessDetails& DevEnvironmentAccessDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("streamUrl"))
  {
    m_streamUrl = jsonValue.GetString("streamUrl");

    m_streamUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tokenValue"))
  {
    m_tokenValue = jsonValue.GetString("tokenValue");

    m_tokenValueHasBeenSet = true;
  }

  return *this;
}

JsonValue DevEnvironmentAccessDetails::Jsonize() const
{
  JsonValue payload;

  if(m_streamUrlHasBeenSet)
  {
   payload.WithString("streamUrl", m_streamUrl);

  }

  if(m_tokenValueHasBeenSet)
  {
   payload.WithString("tokenValue", m_tokenValue);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws

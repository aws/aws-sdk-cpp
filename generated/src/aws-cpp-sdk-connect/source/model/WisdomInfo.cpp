/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/WisdomInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

WisdomInfo::WisdomInfo() : 
    m_sessionArnHasBeenSet(false)
{
}

WisdomInfo::WisdomInfo(JsonView jsonValue) : 
    m_sessionArnHasBeenSet(false)
{
  *this = jsonValue;
}

WisdomInfo& WisdomInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SessionArn"))
  {
    m_sessionArn = jsonValue.GetString("SessionArn");

    m_sessionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue WisdomInfo::Jsonize() const
{
  JsonValue payload;

  if(m_sessionArnHasBeenSet)
  {
   payload.WithString("SessionArn", m_sessionArn);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

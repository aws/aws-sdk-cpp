/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/HandlerConfigs.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

HandlerConfigs::HandlerConfigs(JsonView jsonValue)
{
  *this = jsonValue;
}

HandlerConfigs& HandlerConfigs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("onPublish"))
  {
    m_onPublish = jsonValue.GetObject("onPublish");
    m_onPublishHasBeenSet = true;
  }
  if(jsonValue.ValueExists("onSubscribe"))
  {
    m_onSubscribe = jsonValue.GetObject("onSubscribe");
    m_onSubscribeHasBeenSet = true;
  }
  return *this;
}

JsonValue HandlerConfigs::Jsonize() const
{
  JsonValue payload;

  if(m_onPublishHasBeenSet)
  {
   payload.WithObject("onPublish", m_onPublish.Jsonize());

  }

  if(m_onSubscribeHasBeenSet)
  {
   payload.WithObject("onSubscribe", m_onSubscribe.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws

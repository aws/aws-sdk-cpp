﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/BatchStartViewerSessionRevocationError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

BatchStartViewerSessionRevocationError::BatchStartViewerSessionRevocationError() : 
    m_channelArnHasBeenSet(false),
    m_viewerIdHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

BatchStartViewerSessionRevocationError::BatchStartViewerSessionRevocationError(JsonView jsonValue)
  : BatchStartViewerSessionRevocationError()
{
  *this = jsonValue;
}

BatchStartViewerSessionRevocationError& BatchStartViewerSessionRevocationError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelArn"))
  {
    m_channelArn = jsonValue.GetString("channelArn");

    m_channelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("viewerId"))
  {
    m_viewerId = jsonValue.GetString("viewerId");

    m_viewerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchStartViewerSessionRevocationError::Jsonize() const
{
  JsonValue payload;

  if(m_channelArnHasBeenSet)
  {
   payload.WithString("channelArn", m_channelArn);

  }

  if(m_viewerIdHasBeenSet)
  {
   payload.WithString("viewerId", m_viewerId);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws

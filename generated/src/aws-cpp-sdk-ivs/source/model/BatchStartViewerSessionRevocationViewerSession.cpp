/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/BatchStartViewerSessionRevocationViewerSession.h>
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

BatchStartViewerSessionRevocationViewerSession::BatchStartViewerSessionRevocationViewerSession() : 
    m_channelArnHasBeenSet(false),
    m_viewerIdHasBeenSet(false),
    m_viewerSessionVersionsLessThanOrEqualTo(0),
    m_viewerSessionVersionsLessThanOrEqualToHasBeenSet(false)
{
}

BatchStartViewerSessionRevocationViewerSession::BatchStartViewerSessionRevocationViewerSession(JsonView jsonValue) : 
    m_channelArnHasBeenSet(false),
    m_viewerIdHasBeenSet(false),
    m_viewerSessionVersionsLessThanOrEqualTo(0),
    m_viewerSessionVersionsLessThanOrEqualToHasBeenSet(false)
{
  *this = jsonValue;
}

BatchStartViewerSessionRevocationViewerSession& BatchStartViewerSessionRevocationViewerSession::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("viewerSessionVersionsLessThanOrEqualTo"))
  {
    m_viewerSessionVersionsLessThanOrEqualTo = jsonValue.GetInteger("viewerSessionVersionsLessThanOrEqualTo");

    m_viewerSessionVersionsLessThanOrEqualToHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchStartViewerSessionRevocationViewerSession::Jsonize() const
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

  if(m_viewerSessionVersionsLessThanOrEqualToHasBeenSet)
  {
   payload.WithInteger("viewerSessionVersionsLessThanOrEqualTo", m_viewerSessionVersionsLessThanOrEqualTo);

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws

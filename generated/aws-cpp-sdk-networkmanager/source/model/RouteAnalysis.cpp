/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/RouteAnalysis.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

RouteAnalysis::RouteAnalysis() : 
    m_globalNetworkIdHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_routeAnalysisIdHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_status(RouteAnalysisStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_includeReturnPath(false),
    m_includeReturnPathHasBeenSet(false),
    m_useMiddleboxes(false),
    m_useMiddleboxesHasBeenSet(false),
    m_forwardPathHasBeenSet(false),
    m_returnPathHasBeenSet(false)
{
}

RouteAnalysis::RouteAnalysis(JsonView jsonValue) : 
    m_globalNetworkIdHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_routeAnalysisIdHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_status(RouteAnalysisStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_includeReturnPath(false),
    m_includeReturnPathHasBeenSet(false),
    m_useMiddleboxes(false),
    m_useMiddleboxesHasBeenSet(false),
    m_forwardPathHasBeenSet(false),
    m_returnPathHasBeenSet(false)
{
  *this = jsonValue;
}

RouteAnalysis& RouteAnalysis::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GlobalNetworkId"))
  {
    m_globalNetworkId = jsonValue.GetString("GlobalNetworkId");

    m_globalNetworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

    m_ownerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteAnalysisId"))
  {
    m_routeAnalysisId = jsonValue.GetString("RouteAnalysisId");

    m_routeAnalysisIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTimestamp"))
  {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");

    m_startTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RouteAnalysisStatusMapper::GetRouteAnalysisStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetObject("Destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeReturnPath"))
  {
    m_includeReturnPath = jsonValue.GetBool("IncludeReturnPath");

    m_includeReturnPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseMiddleboxes"))
  {
    m_useMiddleboxes = jsonValue.GetBool("UseMiddleboxes");

    m_useMiddleboxesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForwardPath"))
  {
    m_forwardPath = jsonValue.GetObject("ForwardPath");

    m_forwardPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReturnPath"))
  {
    m_returnPath = jsonValue.GetObject("ReturnPath");

    m_returnPathHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteAnalysis::Jsonize() const
{
  JsonValue payload;

  if(m_globalNetworkIdHasBeenSet)
  {
   payload.WithString("GlobalNetworkId", m_globalNetworkId);

  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("OwnerAccountId", m_ownerAccountId);

  }

  if(m_routeAnalysisIdHasBeenSet)
  {
   payload.WithString("RouteAnalysisId", m_routeAnalysisId);

  }

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RouteAnalysisStatusMapper::GetNameForRouteAnalysisStatus(m_status));
  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("Destination", m_destination.Jsonize());

  }

  if(m_includeReturnPathHasBeenSet)
  {
   payload.WithBool("IncludeReturnPath", m_includeReturnPath);

  }

  if(m_useMiddleboxesHasBeenSet)
  {
   payload.WithBool("UseMiddleboxes", m_useMiddleboxes);

  }

  if(m_forwardPathHasBeenSet)
  {
   payload.WithObject("ForwardPath", m_forwardPath.Jsonize());

  }

  if(m_returnPathHasBeenSet)
  {
   payload.WithObject("ReturnPath", m_returnPath.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws

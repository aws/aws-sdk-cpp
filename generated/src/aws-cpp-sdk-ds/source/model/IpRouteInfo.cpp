/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/IpRouteInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

IpRouteInfo::IpRouteInfo() : 
    m_directoryIdHasBeenSet(false),
    m_cidrIpHasBeenSet(false),
    m_ipRouteStatusMsg(IpRouteStatusMsg::NOT_SET),
    m_ipRouteStatusMsgHasBeenSet(false),
    m_addedDateTimeHasBeenSet(false),
    m_ipRouteStatusReasonHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

IpRouteInfo::IpRouteInfo(JsonView jsonValue) : 
    m_directoryIdHasBeenSet(false),
    m_cidrIpHasBeenSet(false),
    m_ipRouteStatusMsg(IpRouteStatusMsg::NOT_SET),
    m_ipRouteStatusMsgHasBeenSet(false),
    m_addedDateTimeHasBeenSet(false),
    m_ipRouteStatusReasonHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

IpRouteInfo& IpRouteInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CidrIp"))
  {
    m_cidrIp = jsonValue.GetString("CidrIp");

    m_cidrIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpRouteStatusMsg"))
  {
    m_ipRouteStatusMsg = IpRouteStatusMsgMapper::GetIpRouteStatusMsgForName(jsonValue.GetString("IpRouteStatusMsg"));

    m_ipRouteStatusMsgHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddedDateTime"))
  {
    m_addedDateTime = jsonValue.GetDouble("AddedDateTime");

    m_addedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpRouteStatusReason"))
  {
    m_ipRouteStatusReason = jsonValue.GetString("IpRouteStatusReason");

    m_ipRouteStatusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue IpRouteInfo::Jsonize() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_cidrIpHasBeenSet)
  {
   payload.WithString("CidrIp", m_cidrIp);

  }

  if(m_ipRouteStatusMsgHasBeenSet)
  {
   payload.WithString("IpRouteStatusMsg", IpRouteStatusMsgMapper::GetNameForIpRouteStatusMsg(m_ipRouteStatusMsg));
  }

  if(m_addedDateTimeHasBeenSet)
  {
   payload.WithDouble("AddedDateTime", m_addedDateTime.SecondsWithMSPrecision());
  }

  if(m_ipRouteStatusReasonHasBeenSet)
  {
   payload.WithString("IpRouteStatusReason", m_ipRouteStatusReason);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws

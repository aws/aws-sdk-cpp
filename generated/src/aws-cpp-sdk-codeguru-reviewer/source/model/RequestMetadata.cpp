/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/RequestMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

RequestMetadata::RequestMetadata() : 
    m_requestIdHasBeenSet(false),
    m_requesterHasBeenSet(false),
    m_eventInfoHasBeenSet(false),
    m_vendorName(VendorName::NOT_SET),
    m_vendorNameHasBeenSet(false)
{
}

RequestMetadata::RequestMetadata(JsonView jsonValue) : 
    m_requestIdHasBeenSet(false),
    m_requesterHasBeenSet(false),
    m_eventInfoHasBeenSet(false),
    m_vendorName(VendorName::NOT_SET),
    m_vendorNameHasBeenSet(false)
{
  *this = jsonValue;
}

RequestMetadata& RequestMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

    m_requestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Requester"))
  {
    m_requester = jsonValue.GetString("Requester");

    m_requesterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventInfo"))
  {
    m_eventInfo = jsonValue.GetObject("EventInfo");

    m_eventInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VendorName"))
  {
    m_vendorName = VendorNameMapper::GetVendorNameForName(jsonValue.GetString("VendorName"));

    m_vendorNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RequestMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("RequestId", m_requestId);

  }

  if(m_requesterHasBeenSet)
  {
   payload.WithString("Requester", m_requester);

  }

  if(m_eventInfoHasBeenSet)
  {
   payload.WithObject("EventInfo", m_eventInfo.Jsonize());

  }

  if(m_vendorNameHasBeenSet)
  {
   payload.WithString("VendorName", VendorNameMapper::GetNameForVendorName(m_vendorName));
  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws

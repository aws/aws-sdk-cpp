/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/NewGeolocationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

NewGeolocationDetail::NewGeolocationDetail() : 
    m_locationHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_isNewForEntireAccount(false),
    m_isNewForEntireAccountHasBeenSet(false)
{
}

NewGeolocationDetail::NewGeolocationDetail(JsonView jsonValue) : 
    m_locationHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_isNewForEntireAccount(false),
    m_isNewForEntireAccountHasBeenSet(false)
{
  *this = jsonValue;
}

NewGeolocationDetail& NewGeolocationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsNewForEntireAccount"))
  {
    m_isNewForEntireAccount = jsonValue.GetBool("IsNewForEntireAccount");

    m_isNewForEntireAccountHasBeenSet = true;
  }

  return *this;
}

JsonValue NewGeolocationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_isNewForEntireAccountHasBeenSet)
  {
   payload.WithBool("IsNewForEntireAccount", m_isNewForEntireAccount);

  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/IdentificationHints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

IdentificationHints::IdentificationHints() : 
    m_awsInstanceIDHasBeenSet(false),
    m_fqdnHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_vmWareUuidHasBeenSet(false)
{
}

IdentificationHints::IdentificationHints(JsonView jsonValue) : 
    m_awsInstanceIDHasBeenSet(false),
    m_fqdnHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_vmWareUuidHasBeenSet(false)
{
  *this = jsonValue;
}

IdentificationHints& IdentificationHints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsInstanceID"))
  {
    m_awsInstanceID = jsonValue.GetString("awsInstanceID");

    m_awsInstanceIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fqdn"))
  {
    m_fqdn = jsonValue.GetString("fqdn");

    m_fqdnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetString("hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vmWareUuid"))
  {
    m_vmWareUuid = jsonValue.GetString("vmWareUuid");

    m_vmWareUuidHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentificationHints::Jsonize() const
{
  JsonValue payload;

  if(m_awsInstanceIDHasBeenSet)
  {
   payload.WithString("awsInstanceID", m_awsInstanceID);

  }

  if(m_fqdnHasBeenSet)
  {
   payload.WithString("fqdn", m_fqdn);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  if(m_vmWareUuidHasBeenSet)
  {
   payload.WithString("vmWareUuid", m_vmWareUuid);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws

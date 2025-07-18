/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressPoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

IngressPoint::IngressPoint(JsonView jsonValue)
{
  *this = jsonValue;
}

IngressPoint& IngressPoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IngressPointName"))
  {
    m_ingressPointName = jsonValue.GetString("IngressPointName");
    m_ingressPointNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IngressPointId"))
  {
    m_ingressPointId = jsonValue.GetString("IngressPointId");
    m_ingressPointIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = IngressPointStatusMapper::GetIngressPointStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = IngressPointTypeMapper::GetIngressPointTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ARecord"))
  {
    m_aRecord = jsonValue.GetString("ARecord");
    m_aRecordHasBeenSet = true;
  }
  return *this;
}

JsonValue IngressPoint::Jsonize() const
{
  JsonValue payload;

  if(m_ingressPointNameHasBeenSet)
  {
   payload.WithString("IngressPointName", m_ingressPointName);

  }

  if(m_ingressPointIdHasBeenSet)
  {
   payload.WithString("IngressPointId", m_ingressPointId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", IngressPointStatusMapper::GetNameForIngressPointStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", IngressPointTypeMapper::GetNameForIngressPointType(m_type));
  }

  if(m_aRecordHasBeenSet)
  {
   payload.WithString("ARecord", m_aRecord);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws

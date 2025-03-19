/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ExportSummary.h>
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

ExportSummary::ExportSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ExportSummary& ExportSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExportId"))
  {
    m_exportId = jsonValue.GetString("ExportId");
    m_exportIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportSummary::Jsonize() const
{
  JsonValue payload;

  if(m_exportIdHasBeenSet)
  {
   payload.WithString("ExportId", m_exportId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws

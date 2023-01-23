/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/AuditContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

AuditContext::AuditContext() : 
    m_additionalAuditContextHasBeenSet(false),
    m_requestedColumnsHasBeenSet(false),
    m_allColumnsRequested(false),
    m_allColumnsRequestedHasBeenSet(false)
{
}

AuditContext::AuditContext(JsonView jsonValue) : 
    m_additionalAuditContextHasBeenSet(false),
    m_requestedColumnsHasBeenSet(false),
    m_allColumnsRequested(false),
    m_allColumnsRequestedHasBeenSet(false)
{
  *this = jsonValue;
}

AuditContext& AuditContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdditionalAuditContext"))
  {
    m_additionalAuditContext = jsonValue.GetString("AdditionalAuditContext");

    m_additionalAuditContextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestedColumns"))
  {
    Aws::Utils::Array<JsonView> requestedColumnsJsonList = jsonValue.GetArray("RequestedColumns");
    for(unsigned requestedColumnsIndex = 0; requestedColumnsIndex < requestedColumnsJsonList.GetLength(); ++requestedColumnsIndex)
    {
      m_requestedColumns.push_back(requestedColumnsJsonList[requestedColumnsIndex].AsString());
    }
    m_requestedColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllColumnsRequested"))
  {
    m_allColumnsRequested = jsonValue.GetBool("AllColumnsRequested");

    m_allColumnsRequestedHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditContext::Jsonize() const
{
  JsonValue payload;

  if(m_additionalAuditContextHasBeenSet)
  {
   payload.WithString("AdditionalAuditContext", m_additionalAuditContext);

  }

  if(m_requestedColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requestedColumnsJsonList(m_requestedColumns.size());
   for(unsigned requestedColumnsIndex = 0; requestedColumnsIndex < requestedColumnsJsonList.GetLength(); ++requestedColumnsIndex)
   {
     requestedColumnsJsonList[requestedColumnsIndex].AsString(m_requestedColumns[requestedColumnsIndex]);
   }
   payload.WithArray("RequestedColumns", std::move(requestedColumnsJsonList));

  }

  if(m_allColumnsRequestedHasBeenSet)
  {
   payload.WithBool("AllColumnsRequested", m_allColumnsRequested);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

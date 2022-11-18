/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProductViewDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ProductViewDetail::ProductViewDetail() : 
    m_productViewSummaryHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_productARNHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_sourceConnectionHasBeenSet(false)
{
}

ProductViewDetail::ProductViewDetail(JsonView jsonValue) : 
    m_productViewSummaryHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_productARNHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_sourceConnectionHasBeenSet(false)
{
  *this = jsonValue;
}

ProductViewDetail& ProductViewDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductViewSummary"))
  {
    m_productViewSummary = jsonValue.GetObject("ProductViewSummary");

    m_productViewSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductARN"))
  {
    m_productARN = jsonValue.GetString("ProductARN");

    m_productARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceConnection"))
  {
    m_sourceConnection = jsonValue.GetObject("SourceConnection");

    m_sourceConnectionHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductViewDetail::Jsonize() const
{
  JsonValue payload;

  if(m_productViewSummaryHasBeenSet)
  {
   payload.WithObject("ProductViewSummary", m_productViewSummary.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_productARNHasBeenSet)
  {
   payload.WithString("ProductARN", m_productARN);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_sourceConnectionHasBeenSet)
  {
   payload.WithObject("SourceConnection", m_sourceConnection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws

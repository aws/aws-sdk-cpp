/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_createdTimeHasBeenSet(false)
{
}

ProductViewDetail::ProductViewDetail(const JsonValue& jsonValue) : 
    m_productViewSummaryHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_productARNHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ProductViewDetail& ProductViewDetail::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
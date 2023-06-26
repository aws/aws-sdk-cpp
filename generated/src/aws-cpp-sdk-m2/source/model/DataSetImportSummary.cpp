/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/DataSetImportSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

DataSetImportSummary::DataSetImportSummary() : 
    m_failed(0),
    m_failedHasBeenSet(false),
    m_inProgress(0),
    m_inProgressHasBeenSet(false),
    m_pending(0),
    m_pendingHasBeenSet(false),
    m_succeeded(0),
    m_succeededHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false)
{
}

DataSetImportSummary::DataSetImportSummary(JsonView jsonValue) : 
    m_failed(0),
    m_failedHasBeenSet(false),
    m_inProgress(0),
    m_inProgressHasBeenSet(false),
    m_pending(0),
    m_pendingHasBeenSet(false),
    m_succeeded(0),
    m_succeededHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false)
{
  *this = jsonValue;
}

DataSetImportSummary& DataSetImportSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failed"))
  {
    m_failed = jsonValue.GetInteger("failed");

    m_failedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inProgress"))
  {
    m_inProgress = jsonValue.GetInteger("inProgress");

    m_inProgressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pending"))
  {
    m_pending = jsonValue.GetInteger("pending");

    m_pendingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("succeeded"))
  {
    m_succeeded = jsonValue.GetInteger("succeeded");

    m_succeededHasBeenSet = true;
  }

  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetInteger("total");

    m_totalHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSetImportSummary::Jsonize() const
{
  JsonValue payload;

  if(m_failedHasBeenSet)
  {
   payload.WithInteger("failed", m_failed);

  }

  if(m_inProgressHasBeenSet)
  {
   payload.WithInteger("inProgress", m_inProgress);

  }

  if(m_pendingHasBeenSet)
  {
   payload.WithInteger("pending", m_pending);

  }

  if(m_succeededHasBeenSet)
  {
   payload.WithInteger("succeeded", m_succeeded);

  }

  if(m_totalHasBeenSet)
  {
   payload.WithInteger("total", m_total);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws

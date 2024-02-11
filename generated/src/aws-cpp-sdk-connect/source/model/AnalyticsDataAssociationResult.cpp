/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AnalyticsDataAssociationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AnalyticsDataAssociationResult::AnalyticsDataAssociationResult() : 
    m_dataSetIdHasBeenSet(false),
    m_targetAccountIdHasBeenSet(false),
    m_resourceShareIdHasBeenSet(false),
    m_resourceShareArnHasBeenSet(false)
{
}

AnalyticsDataAssociationResult::AnalyticsDataAssociationResult(JsonView jsonValue) : 
    m_dataSetIdHasBeenSet(false),
    m_targetAccountIdHasBeenSet(false),
    m_resourceShareIdHasBeenSet(false),
    m_resourceShareArnHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsDataAssociationResult& AnalyticsDataAssociationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetAccountId"))
  {
    m_targetAccountId = jsonValue.GetString("TargetAccountId");

    m_targetAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceShareId"))
  {
    m_resourceShareId = jsonValue.GetString("ResourceShareId");

    m_resourceShareIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceShareArn"))
  {
    m_resourceShareArn = jsonValue.GetString("ResourceShareArn");

    m_resourceShareArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsDataAssociationResult::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_targetAccountIdHasBeenSet)
  {
   payload.WithString("TargetAccountId", m_targetAccountId);

  }

  if(m_resourceShareIdHasBeenSet)
  {
   payload.WithString("ResourceShareId", m_resourceShareId);

  }

  if(m_resourceShareArnHasBeenSet)
  {
   payload.WithString("ResourceShareArn", m_resourceShareArn);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/MetadataTransferJobProgress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

MetadataTransferJobProgress::MetadataTransferJobProgress() : 
    m_totalCount(0),
    m_totalCountHasBeenSet(false),
    m_succeededCount(0),
    m_succeededCountHasBeenSet(false),
    m_skippedCount(0),
    m_skippedCountHasBeenSet(false),
    m_failedCount(0),
    m_failedCountHasBeenSet(false)
{
}

MetadataTransferJobProgress::MetadataTransferJobProgress(JsonView jsonValue) : 
    m_totalCount(0),
    m_totalCountHasBeenSet(false),
    m_succeededCount(0),
    m_succeededCountHasBeenSet(false),
    m_skippedCount(0),
    m_skippedCountHasBeenSet(false),
    m_failedCount(0),
    m_failedCountHasBeenSet(false)
{
  *this = jsonValue;
}

MetadataTransferJobProgress& MetadataTransferJobProgress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("totalCount"))
  {
    m_totalCount = jsonValue.GetInteger("totalCount");

    m_totalCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("succeededCount"))
  {
    m_succeededCount = jsonValue.GetInteger("succeededCount");

    m_succeededCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("skippedCount"))
  {
    m_skippedCount = jsonValue.GetInteger("skippedCount");

    m_skippedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failedCount"))
  {
    m_failedCount = jsonValue.GetInteger("failedCount");

    m_failedCountHasBeenSet = true;
  }

  return *this;
}

JsonValue MetadataTransferJobProgress::Jsonize() const
{
  JsonValue payload;

  if(m_totalCountHasBeenSet)
  {
   payload.WithInteger("totalCount", m_totalCount);

  }

  if(m_succeededCountHasBeenSet)
  {
   payload.WithInteger("succeededCount", m_succeededCount);

  }

  if(m_skippedCountHasBeenSet)
  {
   payload.WithInteger("skippedCount", m_skippedCount);

  }

  if(m_failedCountHasBeenSet)
  {
   payload.WithInteger("failedCount", m_failedCount);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws

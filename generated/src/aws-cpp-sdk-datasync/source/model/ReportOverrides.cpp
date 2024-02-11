/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ReportOverrides.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

ReportOverrides::ReportOverrides() : 
    m_transferredHasBeenSet(false),
    m_verifiedHasBeenSet(false),
    m_deletedHasBeenSet(false),
    m_skippedHasBeenSet(false)
{
}

ReportOverrides::ReportOverrides(JsonView jsonValue) : 
    m_transferredHasBeenSet(false),
    m_verifiedHasBeenSet(false),
    m_deletedHasBeenSet(false),
    m_skippedHasBeenSet(false)
{
  *this = jsonValue;
}

ReportOverrides& ReportOverrides::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Transferred"))
  {
    m_transferred = jsonValue.GetObject("Transferred");

    m_transferredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Verified"))
  {
    m_verified = jsonValue.GetObject("Verified");

    m_verifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Deleted"))
  {
    m_deleted = jsonValue.GetObject("Deleted");

    m_deletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Skipped"))
  {
    m_skipped = jsonValue.GetObject("Skipped");

    m_skippedHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportOverrides::Jsonize() const
{
  JsonValue payload;

  if(m_transferredHasBeenSet)
  {
   payload.WithObject("Transferred", m_transferred.Jsonize());

  }

  if(m_verifiedHasBeenSet)
  {
   payload.WithObject("Verified", m_verified.Jsonize());

  }

  if(m_deletedHasBeenSet)
  {
   payload.WithObject("Deleted", m_deleted.Jsonize());

  }

  if(m_skippedHasBeenSet)
  {
   payload.WithObject("Skipped", m_skipped.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws

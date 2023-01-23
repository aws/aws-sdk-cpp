/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ImportFailureListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

ImportFailureListItem::ImportFailureListItem() : 
    m_locationHasBeenSet(false),
    m_status(ImportFailureStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorTypeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

ImportFailureListItem::ImportFailureListItem(JsonView jsonValue) : 
    m_locationHasBeenSet(false),
    m_status(ImportFailureStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorTypeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ImportFailureListItem& ImportFailureListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ImportFailureStatusMapper::GetImportFailureStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorType"))
  {
    m_errorType = jsonValue.GetString("ErrorType");

    m_errorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportFailureListItem::Jsonize() const
{
  JsonValue payload;

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ImportFailureStatusMapper::GetNameForImportFailureStatus(m_status));
  }

  if(m_errorTypeHasBeenSet)
  {
   payload.WithString("ErrorType", m_errorType);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

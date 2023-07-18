/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/StagingArea.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

StagingArea::StagingArea() : 
    m_errorMessageHasBeenSet(false),
    m_stagingAccountIDHasBeenSet(false),
    m_stagingSourceServerArnHasBeenSet(false),
    m_status(ExtensionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

StagingArea::StagingArea(JsonView jsonValue) : 
    m_errorMessageHasBeenSet(false),
    m_stagingAccountIDHasBeenSet(false),
    m_stagingSourceServerArnHasBeenSet(false),
    m_status(ExtensionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

StagingArea& StagingArea::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stagingAccountID"))
  {
    m_stagingAccountID = jsonValue.GetString("stagingAccountID");

    m_stagingAccountIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stagingSourceServerArn"))
  {
    m_stagingSourceServerArn = jsonValue.GetString("stagingSourceServerArn");

    m_stagingSourceServerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ExtensionStatusMapper::GetExtensionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue StagingArea::Jsonize() const
{
  JsonValue payload;

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_stagingAccountIDHasBeenSet)
  {
   payload.WithString("stagingAccountID", m_stagingAccountID);

  }

  if(m_stagingSourceServerArnHasBeenSet)
  {
   payload.WithString("stagingSourceServerArn", m_stagingSourceServerArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ExtensionStatusMapper::GetNameForExtensionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws

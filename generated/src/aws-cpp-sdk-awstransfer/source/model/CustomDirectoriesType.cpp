/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CustomDirectoriesType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

CustomDirectoriesType::CustomDirectoriesType(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomDirectoriesType& CustomDirectoriesType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FailedFilesDirectory"))
  {
    m_failedFilesDirectory = jsonValue.GetString("FailedFilesDirectory");
    m_failedFilesDirectoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MdnFilesDirectory"))
  {
    m_mdnFilesDirectory = jsonValue.GetString("MdnFilesDirectory");
    m_mdnFilesDirectoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PayloadFilesDirectory"))
  {
    m_payloadFilesDirectory = jsonValue.GetString("PayloadFilesDirectory");
    m_payloadFilesDirectoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusFilesDirectory"))
  {
    m_statusFilesDirectory = jsonValue.GetString("StatusFilesDirectory");
    m_statusFilesDirectoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TemporaryFilesDirectory"))
  {
    m_temporaryFilesDirectory = jsonValue.GetString("TemporaryFilesDirectory");
    m_temporaryFilesDirectoryHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomDirectoriesType::Jsonize() const
{
  JsonValue payload;

  if(m_failedFilesDirectoryHasBeenSet)
  {
   payload.WithString("FailedFilesDirectory", m_failedFilesDirectory);

  }

  if(m_mdnFilesDirectoryHasBeenSet)
  {
   payload.WithString("MdnFilesDirectory", m_mdnFilesDirectory);

  }

  if(m_payloadFilesDirectoryHasBeenSet)
  {
   payload.WithString("PayloadFilesDirectory", m_payloadFilesDirectory);

  }

  if(m_statusFilesDirectoryHasBeenSet)
  {
   payload.WithString("StatusFilesDirectory", m_statusFilesDirectory);

  }

  if(m_temporaryFilesDirectoryHasBeenSet)
  {
   payload.WithString("TemporaryFilesDirectory", m_temporaryFilesDirectory);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws

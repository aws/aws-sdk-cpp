/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/SftpConnectorConnectionDetails.h>
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

SftpConnectorConnectionDetails::SftpConnectorConnectionDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

SftpConnectorConnectionDetails& SftpConnectorConnectionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HostKey"))
  {
    m_hostKey = jsonValue.GetString("HostKey");
    m_hostKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue SftpConnectorConnectionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_hostKeyHasBeenSet)
  {
   payload.WithString("HostKey", m_hostKey);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws

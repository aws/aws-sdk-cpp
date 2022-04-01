/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ClientCertAuthSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

ClientCertAuthSettings::ClientCertAuthSettings() : 
    m_oCSPUrlHasBeenSet(false)
{
}

ClientCertAuthSettings::ClientCertAuthSettings(JsonView jsonValue) : 
    m_oCSPUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ClientCertAuthSettings& ClientCertAuthSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OCSPUrl"))
  {
    m_oCSPUrl = jsonValue.GetString("OCSPUrl");

    m_oCSPUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue ClientCertAuthSettings::Jsonize() const
{
  JsonValue payload;

  if(m_oCSPUrlHasBeenSet)
  {
   payload.WithString("OCSPUrl", m_oCSPUrl);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws

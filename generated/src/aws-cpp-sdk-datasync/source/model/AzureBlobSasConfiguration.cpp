/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/AzureBlobSasConfiguration.h>
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

AzureBlobSasConfiguration::AzureBlobSasConfiguration() : 
    m_tokenHasBeenSet(false)
{
}

AzureBlobSasConfiguration::AzureBlobSasConfiguration(JsonView jsonValue) : 
    m_tokenHasBeenSet(false)
{
  *this = jsonValue;
}

AzureBlobSasConfiguration& AzureBlobSasConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Token"))
  {
    m_token = jsonValue.GetString("Token");

    m_tokenHasBeenSet = true;
  }

  return *this;
}

JsonValue AzureBlobSasConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_tokenHasBeenSet)
  {
   payload.WithString("Token", m_token);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws

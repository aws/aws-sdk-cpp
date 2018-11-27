/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kms/model/CustomKeyStoresListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KMS
{
namespace Model
{

CustomKeyStoresListEntry::CustomKeyStoresListEntry() : 
    m_customKeyStoreIdHasBeenSet(false),
    m_customKeyStoreNameHasBeenSet(false),
    m_cloudHsmClusterIdHasBeenSet(false),
    m_trustAnchorCertificateHasBeenSet(false),
    m_connectionState(ConnectionStateType::NOT_SET),
    m_connectionStateHasBeenSet(false),
    m_connectionErrorCode(ConnectionErrorCodeType::NOT_SET),
    m_connectionErrorCodeHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

CustomKeyStoresListEntry::CustomKeyStoresListEntry(JsonView jsonValue) : 
    m_customKeyStoreIdHasBeenSet(false),
    m_customKeyStoreNameHasBeenSet(false),
    m_cloudHsmClusterIdHasBeenSet(false),
    m_trustAnchorCertificateHasBeenSet(false),
    m_connectionState(ConnectionStateType::NOT_SET),
    m_connectionStateHasBeenSet(false),
    m_connectionErrorCode(ConnectionErrorCodeType::NOT_SET),
    m_connectionErrorCodeHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

CustomKeyStoresListEntry& CustomKeyStoresListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomKeyStoreId"))
  {
    m_customKeyStoreId = jsonValue.GetString("CustomKeyStoreId");

    m_customKeyStoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomKeyStoreName"))
  {
    m_customKeyStoreName = jsonValue.GetString("CustomKeyStoreName");

    m_customKeyStoreNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudHsmClusterId"))
  {
    m_cloudHsmClusterId = jsonValue.GetString("CloudHsmClusterId");

    m_cloudHsmClusterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrustAnchorCertificate"))
  {
    m_trustAnchorCertificate = jsonValue.GetString("TrustAnchorCertificate");

    m_trustAnchorCertificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionState"))
  {
    m_connectionState = ConnectionStateTypeMapper::GetConnectionStateTypeForName(jsonValue.GetString("ConnectionState"));

    m_connectionStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionErrorCode"))
  {
    m_connectionErrorCode = ConnectionErrorCodeTypeMapper::GetConnectionErrorCodeTypeForName(jsonValue.GetString("ConnectionErrorCode"));

    m_connectionErrorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomKeyStoresListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_customKeyStoreIdHasBeenSet)
  {
   payload.WithString("CustomKeyStoreId", m_customKeyStoreId);

  }

  if(m_customKeyStoreNameHasBeenSet)
  {
   payload.WithString("CustomKeyStoreName", m_customKeyStoreName);

  }

  if(m_cloudHsmClusterIdHasBeenSet)
  {
   payload.WithString("CloudHsmClusterId", m_cloudHsmClusterId);

  }

  if(m_trustAnchorCertificateHasBeenSet)
  {
   payload.WithString("TrustAnchorCertificate", m_trustAnchorCertificate);

  }

  if(m_connectionStateHasBeenSet)
  {
   payload.WithString("ConnectionState", ConnectionStateTypeMapper::GetNameForConnectionStateType(m_connectionState));
  }

  if(m_connectionErrorCodeHasBeenSet)
  {
   payload.WithString("ConnectionErrorCode", ConnectionErrorCodeTypeMapper::GetNameForConnectionErrorCodeType(m_connectionErrorCode));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws

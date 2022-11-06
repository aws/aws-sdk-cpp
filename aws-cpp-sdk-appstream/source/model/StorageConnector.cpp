/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/StorageConnector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

StorageConnector::StorageConnector() : 
    m_connectorType(StorageConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_domainsHasBeenSet(false)
{
}

StorageConnector::StorageConnector(JsonView jsonValue) : 
    m_connectorType(StorageConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_domainsHasBeenSet(false)
{
  *this = jsonValue;
}

StorageConnector& StorageConnector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectorType"))
  {
    m_connectorType = StorageConnectorTypeMapper::GetStorageConnectorTypeForName(jsonValue.GetString("ConnectorType"));

    m_connectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetString("ResourceIdentifier");

    m_resourceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Domains"))
  {
    Aws::Utils::Array<JsonView> domainsJsonList = jsonValue.GetArray("Domains");
    for(unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex)
    {
      m_domains.push_back(domainsJsonList[domainsIndex].AsString());
    }
    m_domainsHasBeenSet = true;
  }

  return *this;
}

JsonValue StorageConnector::Jsonize() const
{
  JsonValue payload;

  if(m_connectorTypeHasBeenSet)
  {
   payload.WithString("ConnectorType", StorageConnectorTypeMapper::GetNameForStorageConnectorType(m_connectorType));
  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("ResourceIdentifier", m_resourceIdentifier);

  }

  if(m_domainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainsJsonList(m_domains.size());
   for(unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex)
   {
     domainsJsonList[domainsIndex].AsString(m_domains[domainsIndex]);
   }
   payload.WithArray("Domains", std::move(domainsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws

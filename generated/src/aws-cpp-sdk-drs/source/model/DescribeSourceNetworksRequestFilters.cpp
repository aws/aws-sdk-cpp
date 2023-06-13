/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/DescribeSourceNetworksRequestFilters.h>
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

DescribeSourceNetworksRequestFilters::DescribeSourceNetworksRequestFilters() : 
    m_originAccountIDHasBeenSet(false),
    m_originRegionHasBeenSet(false),
    m_sourceNetworkIDsHasBeenSet(false)
{
}

DescribeSourceNetworksRequestFilters::DescribeSourceNetworksRequestFilters(JsonView jsonValue) : 
    m_originAccountIDHasBeenSet(false),
    m_originRegionHasBeenSet(false),
    m_sourceNetworkIDsHasBeenSet(false)
{
  *this = jsonValue;
}

DescribeSourceNetworksRequestFilters& DescribeSourceNetworksRequestFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("originAccountID"))
  {
    m_originAccountID = jsonValue.GetString("originAccountID");

    m_originAccountIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("originRegion"))
  {
    m_originRegion = jsonValue.GetString("originRegion");

    m_originRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceNetworkIDs"))
  {
    Aws::Utils::Array<JsonView> sourceNetworkIDsJsonList = jsonValue.GetArray("sourceNetworkIDs");
    for(unsigned sourceNetworkIDsIndex = 0; sourceNetworkIDsIndex < sourceNetworkIDsJsonList.GetLength(); ++sourceNetworkIDsIndex)
    {
      m_sourceNetworkIDs.push_back(sourceNetworkIDsJsonList[sourceNetworkIDsIndex].AsString());
    }
    m_sourceNetworkIDsHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribeSourceNetworksRequestFilters::Jsonize() const
{
  JsonValue payload;

  if(m_originAccountIDHasBeenSet)
  {
   payload.WithString("originAccountID", m_originAccountID);

  }

  if(m_originRegionHasBeenSet)
  {
   payload.WithString("originRegion", m_originRegion);

  }

  if(m_sourceNetworkIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceNetworkIDsJsonList(m_sourceNetworkIDs.size());
   for(unsigned sourceNetworkIDsIndex = 0; sourceNetworkIDsIndex < sourceNetworkIDsJsonList.GetLength(); ++sourceNetworkIDsIndex)
   {
     sourceNetworkIDsJsonList[sourceNetworkIDsIndex].AsString(m_sourceNetworkIDs[sourceNetworkIDsIndex]);
   }
   payload.WithArray("sourceNetworkIDs", std::move(sourceNetworkIDsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws

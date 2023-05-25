/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/RdsDbInstanceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

RdsDbInstanceDetails::RdsDbInstanceDetails() : 
    m_dbInstanceIdentifierHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dbClusterIdentifierHasBeenSet(false),
    m_dbInstanceArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

RdsDbInstanceDetails::RdsDbInstanceDetails(JsonView jsonValue) : 
    m_dbInstanceIdentifierHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dbClusterIdentifierHasBeenSet(false),
    m_dbInstanceArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

RdsDbInstanceDetails& RdsDbInstanceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dbInstanceIdentifier"))
  {
    m_dbInstanceIdentifier = jsonValue.GetString("dbInstanceIdentifier");

    m_dbInstanceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engine"))
  {
    m_engine = jsonValue.GetString("engine");

    m_engineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dbClusterIdentifier"))
  {
    m_dbClusterIdentifier = jsonValue.GetString("dbClusterIdentifier");

    m_dbClusterIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dbInstanceArn"))
  {
    m_dbInstanceArn = jsonValue.GetString("dbInstanceArn");

    m_dbInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue RdsDbInstanceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dbInstanceIdentifierHasBeenSet)
  {
   payload.WithString("dbInstanceIdentifier", m_dbInstanceIdentifier);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("engine", m_engine);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_dbClusterIdentifierHasBeenSet)
  {
   payload.WithString("dbClusterIdentifier", m_dbClusterIdentifier);

  }

  if(m_dbInstanceArnHasBeenSet)
  {
   payload.WithString("dbInstanceArn", m_dbInstanceArn);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

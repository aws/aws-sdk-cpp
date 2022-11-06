/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/EnvironmentVpc.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

EnvironmentVpc::EnvironmentVpc() : 
    m_accountIdHasBeenSet(false),
    m_cidrBlocksHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false)
{
}

EnvironmentVpc::EnvironmentVpc(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_cidrBlocksHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentVpc& EnvironmentVpc::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CidrBlocks"))
  {
    Aws::Utils::Array<JsonView> cidrBlocksJsonList = jsonValue.GetArray("CidrBlocks");
    for(unsigned cidrBlocksIndex = 0; cidrBlocksIndex < cidrBlocksJsonList.GetLength(); ++cidrBlocksIndex)
    {
      m_cidrBlocks.push_back(cidrBlocksJsonList[cidrBlocksIndex].AsString());
    }
    m_cidrBlocksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentId"))
  {
    m_environmentId = jsonValue.GetString("EnvironmentId");

    m_environmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcName"))
  {
    m_vpcName = jsonValue.GetString("VpcName");

    m_vpcNameHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentVpc::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_cidrBlocksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cidrBlocksJsonList(m_cidrBlocks.size());
   for(unsigned cidrBlocksIndex = 0; cidrBlocksIndex < cidrBlocksJsonList.GetLength(); ++cidrBlocksIndex)
   {
     cidrBlocksJsonList[cidrBlocksIndex].AsString(m_cidrBlocks[cidrBlocksIndex]);
   }
   payload.WithArray("CidrBlocks", std::move(cidrBlocksJsonList));

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("EnvironmentId", m_environmentId);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_vpcNameHasBeenSet)
  {
   payload.WithString("VpcName", m_vpcName);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws

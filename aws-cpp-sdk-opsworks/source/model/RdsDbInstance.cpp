/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/RdsDbInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

RdsDbInstance::RdsDbInstance() : 
    m_rdsDbInstanceArnHasBeenSet(false),
    m_dbInstanceIdentifierHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_dbPasswordHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_missingOnRds(false),
    m_missingOnRdsHasBeenSet(false)
{
}

RdsDbInstance::RdsDbInstance(const JsonValue& jsonValue) : 
    m_rdsDbInstanceArnHasBeenSet(false),
    m_dbInstanceIdentifierHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_dbPasswordHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_missingOnRds(false),
    m_missingOnRdsHasBeenSet(false)
{
  *this = jsonValue;
}

RdsDbInstance& RdsDbInstance::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RdsDbInstanceArn"))
  {
    m_rdsDbInstanceArn = jsonValue.GetString("RdsDbInstanceArn");

    m_rdsDbInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbInstanceIdentifier"))
  {
    m_dbInstanceIdentifier = jsonValue.GetString("DbInstanceIdentifier");

    m_dbInstanceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbUser"))
  {
    m_dbUser = jsonValue.GetString("DbUser");

    m_dbUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbPassword"))
  {
    m_dbPassword = jsonValue.GetString("DbPassword");

    m_dbPasswordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");

    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Engine"))
  {
    m_engine = jsonValue.GetString("Engine");

    m_engineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");

    m_stackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MissingOnRds"))
  {
    m_missingOnRds = jsonValue.GetBool("MissingOnRds");

    m_missingOnRdsHasBeenSet = true;
  }

  return *this;
}

JsonValue RdsDbInstance::Jsonize() const
{
  JsonValue payload;

  if(m_rdsDbInstanceArnHasBeenSet)
  {
   payload.WithString("RdsDbInstanceArn", m_rdsDbInstanceArn);

  }

  if(m_dbInstanceIdentifierHasBeenSet)
  {
   payload.WithString("DbInstanceIdentifier", m_dbInstanceIdentifier);

  }

  if(m_dbUserHasBeenSet)
  {
   payload.WithString("DbUser", m_dbUser);

  }

  if(m_dbPasswordHasBeenSet)
  {
   payload.WithString("DbPassword", m_dbPassword);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", m_engine);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_missingOnRdsHasBeenSet)
  {
   payload.WithBool("MissingOnRds", m_missingOnRds);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
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
#include <aws/machinelearning/model/RDSDatabase.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

RDSDatabase::RDSDatabase() : 
    m_instanceIdentifierHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
}

RDSDatabase::RDSDatabase(const JsonValue& jsonValue) : 
    m_instanceIdentifierHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
  *this = jsonValue;
}

RDSDatabase& RDSDatabase::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InstanceIdentifier"))
  {
    m_instanceIdentifier = jsonValue.GetString("InstanceIdentifier");

    m_instanceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RDSDatabase::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdentifierHasBeenSet)
  {
   payload.WithString("InstanceIdentifier", m_instanceIdentifier);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/LakeFormationTagPolicyDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

LakeFormationTagPolicyDetails::LakeFormationTagPolicyDetails() : 
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false)
{
}

LakeFormationTagPolicyDetails::LakeFormationTagPolicyDetails(JsonView jsonValue) : 
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false)
{
  *this = jsonValue;
}

LakeFormationTagPolicyDetails& LakeFormationTagPolicyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetString("Table");

    m_tableHasBeenSet = true;
  }

  return *this;
}

JsonValue LakeFormationTagPolicyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_tableHasBeenSet)
  {
   payload.WithString("Table", m_table);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws

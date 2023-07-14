/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

DataLakePrincipal::DataLakePrincipal() : 
    m_dataLakePrincipalIdentifierHasBeenSet(false)
{
}

DataLakePrincipal::DataLakePrincipal(JsonView jsonValue) : 
    m_dataLakePrincipalIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

DataLakePrincipal& DataLakePrincipal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataLakePrincipalIdentifier"))
  {
    m_dataLakePrincipalIdentifier = jsonValue.GetString("DataLakePrincipalIdentifier");

    m_dataLakePrincipalIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLakePrincipal::Jsonize() const
{
  JsonValue payload;

  if(m_dataLakePrincipalIdentifierHasBeenSet)
  {
   payload.WithString("DataLakePrincipalIdentifier", m_dataLakePrincipalIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

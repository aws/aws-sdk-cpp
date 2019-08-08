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

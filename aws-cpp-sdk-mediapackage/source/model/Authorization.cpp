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

#include <aws/mediapackage/model/Authorization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

Authorization::Authorization() : 
    m_cdnIdentifierSecretHasBeenSet(false),
    m_secretsRoleArnHasBeenSet(false)
{
}

Authorization::Authorization(JsonView jsonValue) : 
    m_cdnIdentifierSecretHasBeenSet(false),
    m_secretsRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

Authorization& Authorization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cdnIdentifierSecret"))
  {
    m_cdnIdentifierSecret = jsonValue.GetString("cdnIdentifierSecret");

    m_cdnIdentifierSecretHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretsRoleArn"))
  {
    m_secretsRoleArn = jsonValue.GetString("secretsRoleArn");

    m_secretsRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Authorization::Jsonize() const
{
  JsonValue payload;

  if(m_cdnIdentifierSecretHasBeenSet)
  {
   payload.WithString("cdnIdentifierSecret", m_cdnIdentifierSecret);

  }

  if(m_secretsRoleArnHasBeenSet)
  {
   payload.WithString("secretsRoleArn", m_secretsRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws

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
#include <aws/ecr/model/Repository.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

Repository::Repository() : 
    m_repositoryArnHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryUriHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

Repository::Repository(const JsonValue& jsonValue) : 
    m_repositoryArnHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryUriHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

Repository& Repository::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("repositoryArn"))
  {
    m_repositoryArn = jsonValue.GetString("repositoryArn");

    m_repositoryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

    m_registryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryUri"))
  {
    m_repositoryUri = jsonValue.GetString("repositoryUri");

    m_repositoryUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Repository::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryArnHasBeenSet)
  {
   payload.WithString("repositoryArn", m_repositoryArn);

  }

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_repositoryUriHasBeenSet)
  {
   payload.WithString("repositoryUri", m_repositoryUri);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
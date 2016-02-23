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

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Repository::Repository() : 
    m_repositoryArnHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false)
{
}

Repository::Repository(const JsonValue& jsonValue) : 
    m_repositoryArnHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false)
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

  return payload;
}
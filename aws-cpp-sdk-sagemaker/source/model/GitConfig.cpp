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

#include <aws/sagemaker/model/GitConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

GitConfig::GitConfig() : 
    m_repositoryUrlHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
}

GitConfig::GitConfig(JsonView jsonValue) : 
    m_repositoryUrlHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
  *this = jsonValue;
}

GitConfig& GitConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RepositoryUrl"))
  {
    m_repositoryUrl = jsonValue.GetString("RepositoryUrl");

    m_repositoryUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Branch"))
  {
    m_branch = jsonValue.GetString("Branch");

    m_branchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  return *this;
}

JsonValue GitConfig::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryUrlHasBeenSet)
  {
   payload.WithString("RepositoryUrl", m_repositoryUrl);

  }

  if(m_branchHasBeenSet)
  {
   payload.WithString("Branch", m_branch);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws

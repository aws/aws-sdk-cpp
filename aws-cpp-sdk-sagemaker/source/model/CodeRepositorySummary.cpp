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

#include <aws/sagemaker/model/CodeRepositorySummary.h>
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

CodeRepositorySummary::CodeRepositorySummary() : 
    m_codeRepositoryNameHasBeenSet(false),
    m_codeRepositoryArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_gitConfigHasBeenSet(false)
{
}

CodeRepositorySummary::CodeRepositorySummary(JsonView jsonValue) : 
    m_codeRepositoryNameHasBeenSet(false),
    m_codeRepositoryArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_gitConfigHasBeenSet(false)
{
  *this = jsonValue;
}

CodeRepositorySummary& CodeRepositorySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CodeRepositoryName"))
  {
    m_codeRepositoryName = jsonValue.GetString("CodeRepositoryName");

    m_codeRepositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeRepositoryArn"))
  {
    m_codeRepositoryArn = jsonValue.GetString("CodeRepositoryArn");

    m_codeRepositoryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GitConfig"))
  {
    m_gitConfig = jsonValue.GetObject("GitConfig");

    m_gitConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeRepositorySummary::Jsonize() const
{
  JsonValue payload;

  if(m_codeRepositoryNameHasBeenSet)
  {
   payload.WithString("CodeRepositoryName", m_codeRepositoryName);

  }

  if(m_codeRepositoryArnHasBeenSet)
  {
   payload.WithString("CodeRepositoryArn", m_codeRepositoryArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_gitConfigHasBeenSet)
  {
   payload.WithObject("GitConfig", m_gitConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
